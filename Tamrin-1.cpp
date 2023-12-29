#include<iostream>
using namespace std;

int main()
{
    int x,y,i,j;
    cin>>i;
    for(x=1;x<=i;x++)
    { y=x;
    while(y>0)
    { j=y%10;
    if((j!=2)&&(j!=5))
    break;
    y=y/10;
    }
    if(y==0)
    cout<<x<<" ";
    }
}