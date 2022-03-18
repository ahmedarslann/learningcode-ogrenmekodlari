#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int plaka;
	cout<<"Plakayý giriniz:";
	cin>>plaka;
    switch(plaka)
    {
    	case 34:
    	cout<<"Ýstanbul";
    	break;
    	
    	case 01:
    	cout<<"Adana";
    	break;
    	
    	case 21:
    	cout<<"Diyarbakýr";
    	break;
    	
    	case 23:
    	cout<<"Elazýð";
    	break;
    	
    	case 55:
    	cout<<"Samsun";
    	break;
    	
    	case 06:
    	cout<<"Ankara";
    	break;
    	
    	default:
    		cout<<"Böyle bir plaka kodu programýmýza girilmemiþtir..";
    	
	}


}
