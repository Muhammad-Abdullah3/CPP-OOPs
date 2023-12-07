//Take the first 10 positive numbers and place them in the array
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int pos[10];
    for(int z=0;z<10;z++)
    {
        pos[z] =z+1;
        cout<<pos[z]<<endl;
    }
    return 0;
}