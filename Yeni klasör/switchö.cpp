#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int kod;
	cout<<"Ýl Trafik Kodu :";
	cin>>kod;
	
	cout<<"Ýl Adý :";
	switch(kod)
	{
		case 6:
			cout<<"Ankara";
			break;
			
		case 34:
			cout<<"Ýstabul";
			break;
			
		case 33:
			cout<<"Mersin";
			break;
			
		case 57:
			cout<<"Sinop";
			break;
			
		case 45:
			cout<<"Manisa";
			break;
	}
	return 0;
}
