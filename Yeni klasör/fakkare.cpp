#include<iostream>
#include<cmath>
#include <stdlib.h>
using namespace std;
int main()
{
	//2 üzeri n/nfak
	int a=0;
	for(int i=1;i<=10;i++)
	{
		int b=1;
		for(int j=1;j<=i;j++)
		{
				b=j*b;
		}
		//double sonuc=pow(2,i)/b;
		cout<<pow(2,i)<<"/"<<b<<":"<<a<<endl;
		a=a+(pow(2,i)/b);
		
	}
	
	cout<<a<<endl;
	return 0;
}
