// Q18: Binary Search for integers; array must be sorted ascending.
#include <iostream>
using namespace std;
int main(){int n,a[1000],x;cout<<"Enter size: ";cin>>n;if(n<1||n>1000){cout<<"Invalid size\n";return 0;}for(int i=0;i<n;i++)cin>>a[i];cout<<"Integer to find: ";cin>>x;int l=0,r=n-1,pos=-1;while(l<=r){int m=l+(r-l)/2;if(a[m]==x){pos=m;break;}if(a[m]<x)l=m+1;else r=m-1;}if(pos==-1)cout<<"Not found\n";else cout<<"Found at position "<<pos+1<<"\n";}
