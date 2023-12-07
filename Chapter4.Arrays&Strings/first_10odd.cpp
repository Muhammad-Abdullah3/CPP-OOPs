//Take the first 10 positive odd numbers and place them in the array

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int odd[10];
    int a = 1;
    for(int z=0;z<10;z++)
    {
        odd[z] = a;
        cout<<odd[z]<<endl;
        a+=2;
    }
    getch();
    return 0;
}