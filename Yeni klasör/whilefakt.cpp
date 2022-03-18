#include<iostream>
using namespace std;
int main()
{
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
   
   cout<<"Sonuç :"<<fakt<<endl;
   return 0;
   
}
