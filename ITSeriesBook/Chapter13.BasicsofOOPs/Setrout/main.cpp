#include<iostream>
#include<string>
#include<datetimeapi.h>
#include<fstream>
class User
{
    private:
    string name;
    string date;
    public:
    void input()
    {
        cout<<"Enter your name:";
        getline(cin,name);
        cout<<"Enter Date:";
        getline(cin,date);
    }
};
int main()
{
    return 0;
}