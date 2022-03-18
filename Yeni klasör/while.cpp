#include<iostream>
using namespace std;
int main()
{
	int i=0;
	while(i<10)
	{
		cout<<"i :"<<i<<endl;
		i++;
	}
	
  	int i=1;
	int j=1;
	while(i<10 && j<5)//ve de iki durumun ortak olan kýsma kadar basar
	{
		cout<<"i :"<<i<<" "<<"j :"<<j<<endl;
		i++;
		j++;
	}
	
	int i=1;
	int j=1;
	while(i<10 || j<5)//???????????????
	{
		cout<<"i :"<<i<<" "<<"j :"<<j<<endl;
		i++;
		j++;
	}
	
	
	return 0;
}
