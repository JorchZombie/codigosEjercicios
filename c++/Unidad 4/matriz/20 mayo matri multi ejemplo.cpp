#include <iostream>
using namespace std;
int a[4][4][3],i,j,k,suma=0;
int main(int argc, char *argv[]) {
 for(i=0;i<3;i++)
 {
 cout<<"Matriz:"<<i<<"\n";
 for(j=0;j<2;j++)
 {
 for(k=0;k<2;k++)
 {
 cout<<"Introduce el valor \n";
 cin>>a[i][j][k];
 }
 }
 }
 
  cout<<"\n";
 for(i=0;i<3;i++)
 {
 for(j=0;j<2;j++)
 {
 for(k=0;k<2;k++)
 {
 cout<<a[i][j][k]<<"  ";
 }
 cout<<"\n";
 }
 cout<<"\n";
 }
 
 return 0;
}
