#include<iostream>
using namespace std;
int main()
{   
    setlocale(LC_ALL,"Turkish");
     int a,b;
	cout<<"Birinci Say�y� Giriniz :";
	cin>>a;
	
	cout<<"�kinci Say�y� Giriniz :";
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
