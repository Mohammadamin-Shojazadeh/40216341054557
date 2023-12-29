#include<iostream>
using namespace std;

int main()
{
    int a,b,p,f,t;
    cin>>a>>b;
    f=a;
    p=b;
    do{
    t=a%b;
    a=b;
    b=t;
    } while(t!=0);
    // "b,m,m"
    cout<<a<<endl;
    // "k,m,m"
    cout<<(p*f)/a;
}