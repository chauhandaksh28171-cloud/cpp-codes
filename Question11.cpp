// Q11: Bubble Sort in ascending order.
#include <iostream>
using namespace std;
int main(){int n,a[1000];cout<<"Enter size: ";cin>>n;if(n<1||n>1000){cout<<"Invalid size\n";return 0;}for(int i=0;i<n;i++)cin>>a[i];for(int p=0;p<n-1;p++){bool changed=false;for(int i=0;i<n-p-1;i++)if(a[i]>a[i+1]){int t=a[i];a[i]=a[i+1];a[i+1]=t;changed=true;}if(!changed)break;}for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<"\n";}
