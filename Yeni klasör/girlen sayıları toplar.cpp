#include<iostream>
using namespace std;
int main()
{	//Kullan�c�dan 5 tane say� alarak bunlar�n toplam�n� veren c++ �rne�i
    setlocale(LC_ALL,"Turkish");
	int toplam=0;
	int sayi;
     for(int i=1; i<=5; i++)
     {
     	cout<<i<<".Say�y� Giriniz :";
     	cin>>sayi;
     	toplam=toplam+sayi;
	 }
	 cout<<"Girilen 5 Say�n�n Toplam� :"<<toplam;
	return 0;
}
