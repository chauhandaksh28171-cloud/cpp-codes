// Q17: Check whether a number is present using Linear Search.
#include <iostream>
using namespace std;
int main(){int n,a[1000],x;cout<<"Enter size: ";cin>>n;if(n<1||n>1000){cout<<"Invalid size\n";return 0;}for(int i=0;i<n;i++)cin>>a[i];cout<<"Number to check: ";cin>>x;bool found=false;for(int i=0;i<n;i++)if(a[i]==x){found=true;break;}if(found)cout<<"Number is present\n";else cout<<"Number is not present\n";}
