#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");//T�rk�e karakter ��z�m� i�in
	int a,b ,c;
	 cout<<"2.Dereceden bir denklem olan ax�+bx+c=0 yi girilen de�erlere g�re k�klerini bulunuz..."<<endl;
     cout<<"a :";
     cin>>a;
     cout<<"b :";
     cin>>b;
     cout<<"c :";
     cin>>c;
     cout<<"Yeni Olu�an Denklem :"<<a<<"x�+"<<b<<"x+"<<c<<"=0 "<<endl;
     
	 float delta = b*b-4*a*c;
	if(delta>0)
	 {
	 	float x1=(-b+ sqrt(delta)/2*a);//sqrt(a):a n�n karak�k�n� al�r...
     	float x2=(-b- sqrt(delta)/2*a);
     	cout<<"E�itli�in �ki Ger�ek K�k� Vard�r..."<<endl;
     	cout<<"1.K�k :"<<x1<<endl;
     	cout<<"2.K�k :"<<x2<<endl;
     	
     	
	 }
	 
     else if(delta==0)
     {
     	float esitse=-b/(2*a);//bu sat�r �al��m�yor
     	cout<<"E�itli�in Tek Ger�ek K�k� Vard�r :"<<esitse<<endl; 
	 }

	 
	 else if(delta<0)
	 {
     	cout<<"E�itli�in Ger�ek K�k� Yoktur..."<<endl;
	 }
	 
  return 0;	
}
