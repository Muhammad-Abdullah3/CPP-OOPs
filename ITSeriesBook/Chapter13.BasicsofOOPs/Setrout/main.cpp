#include<iostream>
#include<string>
#include<datetimeapi.h>
#include<fstream>
class User
{
    private:
    string name;
    string date;
    string startTime;
    string endTime;
    public:
    void input()
    {
        cout<<"Enter your name:";
        getline(cin,name);
        cout<<"Enter Date:";
        getline(cin,date);
    }
    void sleepTime()
    {
        char choice;
        cout<<"\nChose Sleep Start Time:";
        cout<<"\na- 09:00 PM\tb- 09:15 PM\tc- 09:30 PM\tb- 09:45 PM\td- 10:00 PM";
        cout<<"\ne- 10:15 PM\tf- 10:30 PM\tg- 10:45 PM\th- 11:00 PM\ti- 11:15 PM";
        cout<<"\nj- 11:30 PM\tk- 11:45 PM\tl- 12:00 AM";
    }
};
int main()
{
    return 0;
}