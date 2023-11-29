/*Asumming there are 7.481 gallons in a cubic foot. 
Write a program that asks the user to enter a number of gallons, and then displays equivalent in
Cubic feet.*/
#include<iostream>
using namespace std;
int main()
{
    //Total gallons in a cubic feet 7.841
    float cub_foot = 7.481;
    //Declaring a variable to get number of gallons
    float gal;
    cout<<"Enter the total number of gallons: \a"; 
    cin>>gal;
    cout<<"Cubic feet equivalent of the galons entered: "<<gal/cub_foot;
    return 0;
}