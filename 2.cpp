#include<iostream>
using namespace std;
int main()
{
    int bs,hra,da,pf,gross,net;
    float a;
    cout<<"enter basic salary"
    cin>>bs;
    cout<<"enter pf percentage:";
    cin>>a;
    hra=20.0/100*bs;
    da=10.0/100*bs;
    gross=bs+hra+da;
    pf=a/100*bs;
    net=gross-pf;
    cout<<"gross salary="<<gross<<endl;
    cout<<"net salary="<<net;
}