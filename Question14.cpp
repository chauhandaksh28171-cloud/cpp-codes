// Q14: Linear Search in a 1D array.
#include <iostream>
using namespace std;
int main(){int n,a[1000],x;cout<<"Enter size: ";cin>>n;if(n<1||n>1000){cout<<"Invalid size\n";return 0;}for(int i=0;i<n;i++)cin>>a[i];cout<<"Search value: ";cin>>x;for(int i=0;i<n;i++)if(a[i]==x){cout<<"Found at position "<<i+1<<"\n";return 0;}cout<<"Not found\n";}
