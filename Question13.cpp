// Q13: Sort student names alphabetically using Bubble Sort (one-word names).
#include <iostream>
#include <string>
using namespace std;
int main(){int n;string names[100];cout<<"Number of students (max 100): ";cin>>n;if(n<1||n>100){cout<<"Invalid count\n";return 0;}for(int i=0;i<n;i++)cin>>names[i];for(int p=0;p<n-1;p++){bool changed=false;for(int i=0;i<n-p-1;i++)if(names[i]>names[i+1]){string t=names[i];names[i]=names[i+1];names[i+1]=t;changed=true;}if(!changed)break;}for(int i=0;i<n;i++)cout<<names[i]<<"\n";}
