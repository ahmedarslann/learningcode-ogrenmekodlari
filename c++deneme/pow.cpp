#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int a;
	cout<<"bir say� gir:";
	cin>>a;
	cout<<"girilen say�n�n karesi:"<<pow(a,2)<<endl;
	cout<<"girilen say�n�n k�k�:"<<sqrt(a)<<endl;
}
