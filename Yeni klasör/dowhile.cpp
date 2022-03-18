#include<iostream>
using namespace std;
int main()
{   
    setlocale(LC_ALL ,"Turkish");
	string parola="cupcake";
	string input;
	int sayac=0;
	
	do
    {
    	cout<<"parolanýzý Giriniz :";
    	cin>>input;
    	if(input != parola)
    	{
    		cout<<"Parolayý yanlýþ girdiniz..."<<endl;
    		
		}
    }
	while(input != parola);

	cout<<"Parola Doðru..."<<endl;	
	return 0;
}
