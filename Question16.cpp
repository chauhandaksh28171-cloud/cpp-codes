// Q16: Count occurrences using Linear Search.
#include <iostream>
using namespace std;
int main(){int n,a[1000],x,count=0;cout<<"Enter size: ";cin>>n;if(n<1||n>1000){cout<<"Invalid size\n";return 0;}for(int i=0;i<n;i++)cin>>a[i];cout<<"Value to count: ";cin>>x;for(int i=0;i<n;i++)if(a[i]==x)count++;cout<<"Occurrences = "<<count<<"\n";}
