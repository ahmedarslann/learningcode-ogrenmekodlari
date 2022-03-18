#include<iostream>
using namespace std;
int main()
{	//Kullanýcýdan 5 tane sayý alarak bunlarýn toplamýný veren c++ örneði
    setlocale(LC_ALL,"Turkish");
	int toplam=0;
	int sayi;
     for(int i=1; i<=5; i++)
     {
     	cout<<i<<".Sayýyý Giriniz :";
     	cin>>sayi;
     	toplam=toplam+sayi;
	 }
	 cout<<"Girilen 5 Sayýnýn Toplamý :"<<toplam;
	return 0;
}
