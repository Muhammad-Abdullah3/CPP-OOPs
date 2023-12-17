#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    string str1,str2;
    //Getting an input using cin
    cout<<"Following sentence is printed before any space is encountered:"<<endl;
    cin>>str1;
    cout<<str1<<endl;
    //Getting input using getline
    cout<<"Following sentence will be printed as it is: "<<endl;
    getline(cin>>ws,str2);
    cout<<str2<<endl;
    getch();
    return 0;
}