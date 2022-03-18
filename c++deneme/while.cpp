#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	string parola="umut";
	string sifre;
	int sayac=0;
	while(sayac<3)
	{ 
	cout<<"Þifreni gir :";
	cin>>sifre;
	if(sifre!=parola)
	{
		cout<<"yanlýþ þifre..\n";
		sayac++;
	}
	else
	{
		cout<<"doðru þifre..";
		break;
	}

	}
	
}
