/*Write a class Over with num and ch data members. A constructor with no parameter intializes num to 
0 and ch to 'x'. A constructor with two parameter intializes data members with the give values
and member function show() displays the values of data members.
*/
#include<iostream>
using namespace std;
class Over
{
    private:
    int num;
    char ch;
    public:
    Over()
    {
        num = 0;
        ch = 'x';
    }
    Over(int ,char);
    void show()
    {
        cout<<"\nNumber = "<<num<<"\nCharacter  = "<<ch;
    }
};
Over::Over(int n,char c)
{
    num = n;
    ch = c;
}
int main()
{
    //Object 1: without parameter
    Over o1;
    //Object 2: with parameters
    Over o2(78,'Z');
    cout<<"Object without parameter: ";o1.show();
    cout<<"Object with parameter: ";o2.show();
    return 0;
}