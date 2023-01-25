#include <iostream>
using namespace std;

int i,j,mat[3][3],k[3][3],l=1;

void default_val() //default values for the mat array + the k array used for assistance
{
for (i = 0; i<3; i++) 
for (j = 0; j<3; j++)
{
    mat[i][j] = 0;  // 0 goes to every value in mat
    k[i][j] = l;    // integers from 1 to 9 go to every value in k in correspondence to mat
    l++;            //l is used for the increment of values to the k array
    }
        }

void booking() 
{
    int flag = 0;   //to decide at the end that whether the room has been reserved or not
    int it;         //to take input for room reservation
    cout << "*** Following rooms are available, Please Select One ***" << endl<<endl;
    for (i = 0; i<3; i++)
    {
        for (j = 0; j<3; j++)
        {
            if (mat[i][j] == 0)
                cout <<k[i][j]<< " ";   //displaying room No's for those indeces where res-bit is 0
            else
            cout<<" "<<" ";             //hiding the reserved rooms
        }
        cout << endl;
    }
    cout<<"\nEnter Choice : ";
    cin>>it;

    for (i=0; i<3; i++)
    for (j=0; j<3; j++)
    {
        if (k[i][j] == it)      //matching the entered room No with the array indeces
        {mat[i][j] = 1;         //changing res-bit from 0 to 1 for a reserved room
        flag = 1;}              //flag is for confirmation message or denial message
    }

    if (flag = 1)
    cout<<"\nRoom Reserved Successfully"<<endl;		 //Need check Here, incomplete part 
    else if (flag = 0)
    cout<<"\nCheck your input and try again"<<endl;

}

int main()
{
    
    default_val();

    while (1)
    {
        char ch;
        cout << "------------------------" << endl;
        cout << "\033[1;31mHotel Reservation System\033[0m\n";
        cout << "------------------------" << endl<< endl;

        cout << "1.Book a room" << endl;
        cout << "2.Exit" << endl;

        cout << "\nEnter Your Choice : ";
        cin>>ch;

        if (ch == '1')
            booking();
        else if (ch == '2')
            break;
        else
            cout << "\nInvalid Choice,Please Try Again" << endl;
    }
    return 0;
}