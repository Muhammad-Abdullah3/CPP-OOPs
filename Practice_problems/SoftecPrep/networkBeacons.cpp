#include<iostream>
using namespace std;
long totNode(int,int,int,int,int,int,int);
int main()
{
    long total = totNode(0,0,1,2,0,0,1);
    cout<<"Total Nodes: "<<total; 
    return 0;
}
long totNode(int x1,int y1,int x2,int y2,int xl,int yl,int r)
{
    int xCount,yCount,xBound,yBound;
    long nodes;
    if(x1>x2)
    {
        xCount = x2;
        xBound = x1;
    }
    else
    {
        xCount = x1;
        xBound = x2;
    }
    // Block for Y coordinate counter variable
    if(y1>y2)
    {
        yCount = y2;
        yBound = y1;
    }
    else
    {
        yCount = y1;
        yBound = y2;
    }
    //Start of nested loop
    while(xCount<=xBound)
    {
        while(yCount<=yBound)
        {
            if(((xl+r)>=xCount||(xl-r)<=xCount)&&((yl+r)>=yCount||(yl-r)<=yCount))
            {
                nodes++;
            }
            yCount++;
        }
        xCount++;
    }
    return nodes;
}