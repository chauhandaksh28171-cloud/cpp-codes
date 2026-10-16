// Q3: Find maximum and minimum elements in an array.
#include <iostream>
using namespace std;
int main(){int n;cout<<"Enter size: ";cin>>n;if(n<1||n>1000){cout<<"Invalid size\n";return 0;}int a[1000];for(int i=0;i<n;i++)cin>>a[i];int mn=a[0],mx=a[0];for(int i=1;i<n;i++){if(a[i]<mn)mn=a[i];if(a[i]>mx)mx=a[i];}cout<<"Minimum = "<<mn<<"\nMaximum = "<<mx<<"\n";}
