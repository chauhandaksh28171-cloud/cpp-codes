// Q2: Sum all elements in a 1D array.
#include <iostream>
using namespace std;
int main(){ int n; cout<<"Enter size: ";cin>>n;if(n<1||n>1000){cout<<"Invalid size\n";return 0;} long long sum=0; for(int i=0,x;i<n;i++){cin>>x;sum+=x;} cout<<"Sum = "<<sum<<"\n"; }
