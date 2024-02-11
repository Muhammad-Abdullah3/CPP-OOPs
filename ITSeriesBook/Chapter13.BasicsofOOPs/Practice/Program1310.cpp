/*Write a class TV that contains the attribute Brand Name, Model and Retail Price.
Write a method to display all attributes and a method to change the attributes. Also write 
a constructor to initialize all the attributes.*/
#include<iostream>
#include<string>
using namespace std;
class TV
{
    private:
    string brandName, model;
    float retPrice;
    public:
    TV(string brand,string mod,float  retail)
    {
        brandName = brand;
        model = mod;
        retPrice = retail;
    }
    void display()
    {
        cout<<"\nBrand Name: "<<brandName;
        cout<<"\nModel: "<<model;
        cout<<"\nRetail Price: "<<retPrice;
    }
    void change(string brand,string mod,float  retail)
    {
        brandName = brand;
        model = mod;
        retPrice = retail;
    }
};
int main()
{
    TV f1("Haier","T43-XC61",56981.15);
    cout<<"Details of TV before changing";f1.display();
    f1.change("TCL","S23",90678.20);
    cout<<"Details of TV after changing";f1.display();
    return 0;
}