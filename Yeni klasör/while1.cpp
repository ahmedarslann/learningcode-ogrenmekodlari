#include<iostream>
using namespace std;
int main()
{
	//while d�ng�s� ile fakt�riyel hesaplama
	setlocale(LC_ALL,"Turkish");

   int sayi ,i=1;
   int fakt=1;
   
   cout<<"Sayi Giriniz :";
   cin>>sayi;
   
   while(i<=sayi)
   {
   	fakt*=i;
   	i++;
   }
   
   cout<<"Sonu� :"<<fakt<<endl;
   return 0;
   
}
