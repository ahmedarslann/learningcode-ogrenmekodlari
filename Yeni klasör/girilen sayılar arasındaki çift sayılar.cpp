#include<iostream>
using namespace std;
int main()
{   
    setlocale(LC_ALL,"Turkish");
     int a,b;
	cout<<"Birinci Sayýyý Giriniz :";
	cin>>a;
	
	cout<<"Ýkinci Sayýyý Giriniz :";
	cin>>b;
	
	if(a<b)
	{
	
	for(int i=a; i<=b; i++)
	{
		if(i%2==0)
		cout<<i<<endl;
	}}
	
	else if(a>b)
	{
		for(int i=b; i<=a; i++)
	{
		if(i%2==0)
		cout<<i<<endl;
	}
	}
	return 0;
	
}
