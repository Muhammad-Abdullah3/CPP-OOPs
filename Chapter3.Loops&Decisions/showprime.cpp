//showprime.cpp
//Displaying prime numbers in graphical form
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char white = 219;
    char gray = 176;
    char in_ch;
    for(int count=0; count<100*25-1;count++)
    {
        in_ch = white; //For Prime Assuming
        //inner loop to check if count is prime
        for(int j=2; j<count;j++)
        {
            if(count%j==0)//Checking if number is prime
            {
                in_ch = gray;
                break;//break out of inner loop
            }
        }
        cout<<in_ch; //Display the character or color in this case
    }
    getch();//Freezing the screen
    return 0;//Return function
}