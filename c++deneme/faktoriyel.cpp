#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int a;
	cout<<"hangi sayýnýn faktoriyelini arýyorsun bakalým?";
	cin>>a;
	int faktoriyel=1;
	for(int i=1;i<=a;i++)
	{
		faktoriyel=faktoriyel*i;
		
	}
	cout<<faktoriyel;
}
