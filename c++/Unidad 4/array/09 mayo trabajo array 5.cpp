#include <iostream>
using namespace std;
int vec[4],i=0,n;
int main(){
cout<<"escribe un numero ";
cin>>n;
while (n>0)
{
	vec[i]=n%10;
	cout<<"el vector "<<i<<" "<<vec[i]<<endl;
	n=n/10;
	i++;
}
cout<<"el numero del vector es "<<vec[3]<<vec[2]<<vec[1]<<vec[0];
return 0;
}

