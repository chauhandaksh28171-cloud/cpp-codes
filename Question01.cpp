// Q1: Input and display a 1D array.
#include <iostream>
using namespace std;
int main(){ int n; cout<<"Enter size: "; cin>>n; if(n<1||n>1000){cout<<"Invalid size\n";return 0;} int a[1000]; for(int i=0;i<n;i++)cin>>a[i]; cout<<"Array: "; for(int i=0;i<n;i++)cout<<a[i]<<" "; cout<<"\n"; }
