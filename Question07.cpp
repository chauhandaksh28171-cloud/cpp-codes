// Q7: Input and display a 2D array (matrix).
#include <iostream>
using namespace std;
int main(){int r,c,a[50][50];cout<<"Enter rows and columns (max 50): ";cin>>r>>c;if(r<1||r>50||c<1||c>50){cout<<"Invalid dimensions\n";return 0;}for(int i=0;i<r;i++)for(int j=0;j<c;j++)cin>>a[i][j];cout<<"Matrix:\n";for(int i=0;i<r;i++){for(int j=0;j<c;j++)cout<<a[i][j]<<" ";cout<<"\n";}}
