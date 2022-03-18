#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int sayi;
	int fakt=1;
	cout<<"Sayi Giriniz :";
	cin>>sayi;
	
	for(int i=1; i<=sayi;i++) 
	fakt*=i;//fakt=fakt*i;
	
	cout<<"Girilen Sayýnýn Faktöriyeli :"<<fakt;

	
	return 0;

}
