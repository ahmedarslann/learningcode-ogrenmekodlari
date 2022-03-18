#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int toplam=0;
	int a,b;
	cin>>a;
	cin>>b;
   for(int i=a; i<b;i++)
   {
   	toplam +=i;
   }
   cout<<toplam;
	return 0;
}
