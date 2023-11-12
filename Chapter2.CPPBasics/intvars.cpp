//intvars.cpp
//Program to demonstrate the integer variables
#include<iostream>
using namespace std;
int main()
{
    int var1; //Define or Declaring var1 of data type int (4 bytes)
    int var2; //Define or Declaring var2 of data type int (4 bytes)
    var1 = 20; //Assign 20 to var1
    var2 = var1+10; //Add 10 in var1 and assign to var2
    cout<<"var1 + 10 is "; //Output text inside double quotes
    cout<<var2<<endl; //Output var2 value, endl takes the cursor to new line
    short var3 = 3; //Initializing var3 of data type short int (2 bytes)
    long var4 = 793286; /*Initializing var4 data type long int (4 byte in 32-bit system,
    8 bytes in 64-bit system)*/
    cout<<"Short integer is: "<<var3<<endl; //Printing out the value of short int
    cout<<"Long integer is: "<<var4<<endl; //Printing out the value of long int
    return 0;
}