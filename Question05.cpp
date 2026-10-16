// Q5: Input 10 numbers and count even and odd numbers.
#include <iostream>
using namespace std;
int main(){int x,even=0,odd=0;cout<<"Enter 10 integers:\n";for(int i=0;i<10;i++){cin>>x;if(x%2==0)even++;else odd++;}cout<<"Even = "<<even<<"\nOdd = "<<odd<<"\n";}
