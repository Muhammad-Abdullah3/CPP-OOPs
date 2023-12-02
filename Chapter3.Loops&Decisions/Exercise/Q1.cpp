//q1.cpp
//Generating table of a number entered by user
//Number of rows = 20, Number of Columns = 10
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
    int user_num,prod_num;
    cout<<"Enter a number: \a";
    cin>>user_num;
    prod_num = user_num; //We will use Prod_num to Get the table 
    //outer loop for Rows
    for (int i = 1;i<=20;i++)
    {
        //inner loop for columns
        for (int j =1;j<=10;j++)
        {
            cout<<setw(5)<<user_num;//Displaying the User Number
            user_num += prod_num;// Adding prod_num each time the loop is executed
        }//End of inner loop
        //Printing endline
        cout<<endl;
    }//End of outer loop
    getch();//Freezing the screen untill a key is pressed
    return 0;
}