
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int size1 = 4,size2=4;
    int first[size1]={23,45,23,12};
    int sec[size2] = {21,63,17,18};
    int merge_arr[size1+size2];
    int count = 0;
    for(int z=0;z<(size1+size2);z++)
    {
        if(count<(size1-1))
        {
        merge_arr[z]=first[count];
        count++;
        }
        else
        {
            count = 0;
            merge_arr[z]=sec[count];
            count++;
        }
    }
    //loop to print out the merged array
    cout<<"Mergeed array: \n";
    for (int i=0;i<(size1+size2);i++)
    {
        cout<<merge_arr[i]<<endl;
    }
    getch();
    return 0;
}