//This program will include only 1d Arrays
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    //integer type array
    int arr0[5]={0};//All index of array are assigned 0
    //using loop to cout the above array values
    cout<<"All the values stored in the first array: \n";
    for(int i=0;i<5;i++)
    {
        cout<<arr0[i]<<endl;
    }
    int arr1[5]= {1,3,2,6,823};//Second way of assigning different values to an array
    //using loop to cout the above array values
    cout<<"All the values stored in the second array: \n";
    for(int i=0;i<5;i++)
    {
        cout<<arr1[i]<<endl;
    }
    int arr2[5];
    //Third way of assigning different value using index on individual bases
    arr2[0] = 23;arr2[1] = 123;arr2[2] = 32;arr2[3] =98;arr2[4] =3;
    //using loop to cout the above array values
    cout<<"All the values stored in the third array: \n";
    for(int i=0;i<5;i++)
    {
        cout<<arr2[i]<<endl;
    }
    //fourth way of assigning different values using loop and index
    int arr3[5];
    //using loop to cin the array values
    cout<<"Input the values for fourth array: \n";
    for(int i=0;i<5;i++)
    {
        cin>>arr3[i];
    }
    //using loop to cout the above array values
    cout<<"All the values stored in the fourth array: \n";
    for(int i=0;i<5;i++)
    {
        cout<<arr3[i]<<endl;
    }
    getch();
    return 0;
}