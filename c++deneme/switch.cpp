#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int plaka;
	cout<<"Plakay� giriniz:";
	cin>>plaka;
    switch(plaka)
    {
    	case 34:
    	cout<<"�stanbul";
    	break;
    	
    	case 01:
    	cout<<"Adana";
    	break;
    	
    	case 21:
    	cout<<"Diyarbak�r";
    	break;
    	
    	case 23:
    	cout<<"Elaz��";
    	break;
    	
    	case 55:
    	cout<<"Samsun";
    	break;
    	
    	case 06:
    	cout<<"Ankara";
    	break;
    	
    	default:
    		cout<<"B�yle bir plaka kodu program�m�za girilmemi�tir..";
    	
	}


}
