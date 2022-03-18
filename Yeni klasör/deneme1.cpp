#include<iostream>
using namespace std;
int main()
{
	string password="cupcake";
	string pass;
	cout <<"Lütfen poralanýzý Giriniz :",
	cin >>pass;
	
	if(password==pass)
	{
		cout<<"Poralayý Doðru Girdiniz ";
	}
	
	else
	{
	cout<<"Poralayý Yanlýþ Girdiniz ";	
	}
    return 0;	
}



