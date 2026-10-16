// Q9: Subtract second matrix from first matrix.
#include <iostream>
using namespace std;
int main(){int r,c,a[50][50],b[50][50];cout<<"Enter rows and columns (max 50): ";cin>>r>>c;if(r<1||r>50||c<1||c>50){cout<<"Invalid dimensions\n";return 0;}cout<<"Enter first matrix:\n";for(int i=0;i<r;i++)for(int j=0;j<c;j++)cin>>a[i][j];cout<<"Enter second matrix:\n";for(int i=0;i<r;i++)for(int j=0;j<c;j++)cin>>b[i][j];cout<<"Difference (first - second):\n";for(int i=0;i<r;i++){for(int j=0;j<c;j++)cout<<a[i][j]-b[i][j]<<" ";cout<<"\n";}}
