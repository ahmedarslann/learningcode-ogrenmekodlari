#include<iostream>
using namespace std;
int main()
{
	string password="cupcake";
	string pass;
	cout <<"L�tfen poralan�z� Giriniz :",
	cin >>pass;
	
	if(password==pass)
	{
		cout<<"Poralay� Do�ru Girdiniz ";
	}
	
	else
	{
	cout<<"Poralay� Yanl�� Girdiniz ";	
	}
    return 0;	
}



