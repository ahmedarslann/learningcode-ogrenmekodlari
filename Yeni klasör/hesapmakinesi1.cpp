#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	SetConsoleTitle("Hesap Makinesi /Coder:Arzuuu");//html title � ile ayn�
	//system("color 5A"); consol arka plan rengi
	system("color 4");//consol yaz� rengi
	int x,y,z,i;
	char a;
	double number;
    int sayi;
    int islem;
    label:
    	
    //Hesap Makinesi
    cout<<"Hesap Makinesine Ho�geldiniz..."<<endl;
    
   // system("cls"); //Ekran� temizledik
			cout<<"     Matamatiksel ��lemler\n";
			cout<<"  1)  Toplama ��lemi\n"; 
			cout<<"  2)  ��karma ��lemi\n"; 
			cout<<"  3)  �arpma ��lemi\n"; 
			cout<<"  4)  B�lme ��lemi\n";
			cout<<"  5)  Karek�k Alma\n";
			cout<<"  6)  �sl� ��lemler\n";
			
    cout<<"L�tfen Bir ��lem Se�iniz :";
    cin>>islem;
    
    switch(islem)
    {
    	case 1:
		{
		system("cls"); //Ekran� temizledik
		cout<<"  Toplama ��lemi   \n";
		cout<<"Birinci Say�y� giriniz:";
	        cin>> x;
	 	cout<<"�kinci say�y� giriniz:";
			cin>> y;
		cout<<"Say�lar�n Toplam�:"<<" "<< x+y << endl;	
		}
		break;
		
				
			//��karma ��lemi
		case 2 : {
				system("cls"); //Ekran� temizledik
				cout<<"    ��karma ��lemi   \n";
				cout<<"Birinci Say�y� giriniz:";
				cin>> x;
				cout<<"�kinci say�y� giriniz:";
				cin>> y;
				cout<<"Say�lar�n Fark�:"<<" "<< x-y;
		}
		break;
			//�arpma ��lemi
		case 3 : {
				system("cls"); //Ekran� temizledik
				cout<<"    �arpma ��lemi  \n";
				cout<<"Birinci Say�y� giriniz:";
				cin>> x;
				cout<<"�kinci say�y� giriniz:";
				cin>> y;
				cout<<"Say�lar�n �arp�m�:"<<" "<<x*y; 
		}
		break;
			//B�lme i�lemi	
		case 4 : {
				system("cls"); //Ekran� temizledik
				cout<<"   B�lme ��lemi   \n";
				cout<<"Birinci Say�y� giriniz:";
				cin>> x;
				cout<<"�kinci say�y� giriniz:";
				cin>> y;
				cout<<"Sonu�:"<<" "<<x/y;
		 }
		break;
		
			//Karek�k Alma
		case 5 : {
			system("cls"); //Ekran� temizledik
			cout<<"   Karek�k Alma   \n";
			cout<<"Bir Say� giriniz:";
			cin>> x;
		cout<<"Say�n�n Karek�k�:"<<" "<<sqrt(x);
			
		}
		break;
		
			//�sl� i�lemler
		case 6 : {
			system("cls"); //Ekran� temizledik
			cout<<"   �sl� ��lemler\n";
			cout<<"Taban giriniz:";
			cin>>x;
			cout<<"�s giriniz:";
			cin>>y;
			cout<<"Sonu�:"<<" "<< pow (x, y);
		}
		break;
			default:{
				cout<<"Hata Yanl�� Se�im Yapt�n�z. \n";
				break;
			}
	}
	
	cout<<"\nYeniden denemek ister misiniz?[E/H]\n";
	cin>>a;
	
	if(a=='e'||a=='E'){
		cout<<"Yeniden ba�lat�l�yor...\n";
	    	Sleep (1000); //Consolu 1 saniye beklettik
	    	system("cls"); //Ekran� temizledik
		goto label;	//Ba�a d�nmesini istedik. Yani label yazan yere
               	}
  	else if (a=='h'||a=='H'){ //Aksi takdirde ��kmas�n� s�yledik
		exit(0);
	
		 }
}
