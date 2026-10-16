// Q10: Multiply two compatible matrices.
#include <iostream>
using namespace std;
int main(){int r1,c1,r2,c2,a[50][50],b[50][50];long long p[50][50]={};cout<<"Rows/columns of first matrix: ";cin>>r1>>c1;cout<<"Rows/columns of second matrix: ";cin>>r2>>c2;if(r1<1||r1>50||c1<1||c1>50||r2<1||r2>50||c2<1||c2>50||c1!=r2){cout<<"Invalid dimensions or incompatible matrices\n";return 0;}for(int i=0;i<r1;i++)for(int j=0;j<c1;j++)cin>>a[i][j];for(int i=0;i<r2;i++)for(int j=0;j<c2;j++)cin>>b[i][j];for(int i=0;i<r1;i++)for(int j=0;j<c2;j++)for(int k=0;k<c1;k++)p[i][j]+=(long long)a[i][k]*b[k][j];cout<<"Product:\n";for(int i=0;i<r1;i++){for(int j=0;j<c2;j++)cout<<p[i][j]<<" ";cout<<"\n";}}
