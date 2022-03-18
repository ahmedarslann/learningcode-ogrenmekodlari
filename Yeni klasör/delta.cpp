#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");//Türkçe karakter çözümü için
	int a,b ,c;
	 cout<<"2.Dereceden bir denklem olan ax²+bx+c=0 yi girilen deðerlere göre köklerini bulunuz..."<<endl;
     cout<<"a :";
     cin>>a;
     cout<<"b :";
     cin>>b;
     cout<<"c :";
     cin>>c;
     cout<<"Yeni Oluþan Denklem :"<<a<<"x²+"<<b<<"x+"<<c<<"=0 "<<endl;
     
	 float delta = b*b-4*a*c;
	if(delta>0)
	 {
	 	float x1=(-b+ sqrt(delta)/2*a);//sqrt(a):a nýn karakökünü alýr...
     	float x2=(-b- sqrt(delta)/2*a);
     	cout<<"Eþitliðin Ýki Gerçek Kökü Vardýr..."<<endl;
     	cout<<"1.Kök :"<<x1<<endl;
     	cout<<"2.Kök :"<<x2<<endl;
     	
     	
	 }
	 
     else if(delta==0)
     {
     	float esitse=-b/(2*a);//bu satýr çalýþmýyor
     	cout<<"Eþitliðin Tek Gerçek Kökü Vardýr :"<<esitse<<endl; 
	 }

	 
	 else if(delta<0)
	 {
     	cout<<"Eþitliðin Gerçek Kökü Yoktur..."<<endl;
	 }
	 
  return 0;	
}
