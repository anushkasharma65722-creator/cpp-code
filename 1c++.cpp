#include <iostream>
using namespace std;
int main (){
    int n,first,last,sum;
    cout<<"Enter 3 digit number";
    cin>>n;
    last=n%10;
    first=n/100;
    sum=first+last;
        cout<<"sum of first and last digit"<<sum;}