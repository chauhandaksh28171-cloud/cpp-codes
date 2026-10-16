// Q4: Reverse a 1D array.
#include <iostream>
using namespace std;
int main(){int n;cout<<"Enter size: ";cin>>n;if(n<1||n>1000){cout<<"Invalid size\n";return 0;}int a[1000];for(int i=0;i<n;i++)cin>>a[i];for(int i=0;i<n/2;i++){int t=a[i];a[i]=a[n-1-i];a[n-1-i]=t;}cout<<"Reversed: ";for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<"\n";}
