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
    	cout<<"parolan�z� Giriniz :";
    	cin>>input;
    	if(input != parola)
    	{
    		cout<<"Parolay� yanl�� girdiniz..."<<endl;
    		
		}
    }
	while(input != parola);

	cout<<"Parola Do�ru..."<<endl;	
	return 0;
}
