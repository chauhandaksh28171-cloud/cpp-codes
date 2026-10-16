// Q6: Search an element in a 1D array without using functions.
#include <iostream>
using namespace std;
int main(){int n,target;cout<<"Enter size: ";cin>>n;if(n<1||n>1000){cout<<"Invalid size\n";return 0;}int a[1000];for(int i=0;i<n;i++)cin>>a[i];cout<<"Target: ";cin>>target;int pos=-1;for(int i=0;i<n;i++)if(a[i]==target){pos=i;break;}if(pos==-1)cout<<"Not found\n";else cout<<"Found at position "<<pos+1<<"\n";}
