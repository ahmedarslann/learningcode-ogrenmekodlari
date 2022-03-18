#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int a;
	cout<<"bir sayý gir:";
	cin>>a;
	cout<<"girilen sayýnýn karesi:"<<pow(a,2)<<endl;
	cout<<"girilen sayýnýn kökü:"<<sqrt(a)<<endl;
}
