/**/
#include<iostream>
class Travel
{
    private:
    int km,hr;
    public:
    Travel()
    {
        km = hr = 0;
    }
    void get()
    {
        cout<<"Enter kilometers traveled: ";
        cin>>km;
        cout<<"Enter hours traveled: ";
        cin>>hr;
    }
    void show()
    {
        cout<<"You travled "<<km<<" kilometers in "<<hr<<" hours."<<endl;
    }
    void add(Travel p)
    {
        t.km = km +p.km;
        t.hr = hr+p.hr;
        cout<<"Total traveling is "<<t.km<<" kilometers in "<<t.hr<<" hours.";
    }
};
int main()
{
    Travel my,your;
    my.get();
    my.show();
    your.get();
    your.show();
    my.add(your);
    return 0;
}