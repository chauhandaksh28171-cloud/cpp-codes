// Q19: Binary Search for floating-point numbers sorted ascending.
#include <iostream>
#include <cmath>
using namespace std;
int main(){int n;double a[1000],x;cout<<"Enter size: ";cin>>n;if(n<1||n>1000){cout<<"Invalid size\n";return 0;}cout<<"Enter sorted decimal values:\n";for(int i=0;i<n;i++)cin>>a[i];cout<<"Value to find: ";cin>>x;int l=0,r=n-1,pos=-1;while(l<=r){int m=l+(r-l)/2;if(fabs(a[m]-x)<1e-9){pos=m;break;}if(a[m]<x)l=m+1;else r=m-1;}if(pos==-1)cout<<"Not found\n";else cout<<"Found at position "<<pos+1<<"\n";}
