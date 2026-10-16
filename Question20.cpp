// Q20: Find the largest element in an ascending sorted array using Binary Search.
#include <iostream>
using namespace std;
int main(){int n,a[1000];cout<<"Enter size: ";cin>>n;if(n<1||n>1000){cout<<"Invalid size\n";return 0;}cout<<"Enter values in ascending order:\n";for(int i=0;i<n;i++)cin>>a[i];int l=0,r=n-1;while(l<r){int m=l+(r-l)/2;if(m<n-1)l=m+1;else r=m;}cout<<"Largest element = "<<a[l]<<"\n";}
