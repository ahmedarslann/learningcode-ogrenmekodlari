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
	cout<<"�ifreni gir :";
	cin>>sifre;
	if(sifre!=parola)
	{
		cout<<"yanl�� �ifre..\n";
		sayac++;
	}
	else
	{
		cout<<"do�ru �ifre..";
		break;
	}

	}
	
}
