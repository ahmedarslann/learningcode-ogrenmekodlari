#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int kod;
	cout<<"�l Trafik Kodu :";
	cin>>kod;
	
	cout<<"�l Ad� :";
	switch(kod)
	{
		case 6:
			cout<<"Ankara";
			break;
			
		case 34:
			cout<<"�stabul";
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
