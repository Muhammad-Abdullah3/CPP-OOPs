//Appending the string using built in function
#include<iostream>
#include<string>
using namespace std;
int main()
{
    //Declaring strings
    string st1="Na",st2="me",st3="Abd",st4="ullah";
    //Using append method
    st1.append(st2);
    cout<<"st1 after appending:"<<st1<<endl;
    cout<<"st2 after appending:"<<st2<<endl;
    return 0;
}