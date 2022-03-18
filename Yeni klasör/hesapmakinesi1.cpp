#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	SetConsoleTitle("Hesap Makinesi /Coder:Arzuuu");//html title ý ile ayný
	//system("color 5A"); consol arka plan rengi
	system("color 4");//consol yazý rengi
	int x,y,z,i;
	char a;
	double number;
    int sayi;
    int islem;
    label:
    	
    //Hesap Makinesi
    cout<<"Hesap Makinesine Hoþgeldiniz..."<<endl;
    
   // system("cls"); //Ekraný temizledik
			cout<<"     Matamatiksel Ýþlemler\n";
			cout<<"  1)  Toplama Ýþlemi\n"; 
			cout<<"  2)  Çýkarma Ýþlemi\n"; 
			cout<<"  3)  Çarpma Ýþlemi\n"; 
			cout<<"  4)  Bölme Ýþlemi\n";
			cout<<"  5)  Karekök Alma\n";
			cout<<"  6)  Üslü Ýþlemler\n";
			
    cout<<"Lütfen Bir Ýþlem Seçiniz :";
    cin>>islem;
    
    switch(islem)
    {
    	case 1:
		{
		system("cls"); //Ekraný temizledik
		cout<<"  Toplama Ýþlemi   \n";
		cout<<"Birinci Sayýyý giriniz:";
	        cin>> x;
	 	cout<<"Ýkinci sayýyý giriniz:";
			cin>> y;
		cout<<"Sayýlarýn Toplamý:"<<" "<< x+y << endl;	
		}
		break;
		
				
			//Çýkarma Ýþlemi
		case 2 : {
				system("cls"); //Ekraný temizledik
				cout<<"    Çýkarma Ýþlemi   \n";
				cout<<"Birinci Sayýyý giriniz:";
				cin>> x;
				cout<<"Ýkinci sayýyý giriniz:";
				cin>> y;
				cout<<"Sayýlarýn Farký:"<<" "<< x-y;
		}
		break;
			//Çarpma Ýþlemi
		case 3 : {
				system("cls"); //Ekraný temizledik
				cout<<"    Çarpma Ýþlemi  \n";
				cout<<"Birinci Sayýyý giriniz:";
				cin>> x;
				cout<<"Ýkinci sayýyý giriniz:";
				cin>> y;
				cout<<"Sayýlarýn Çarpýmý:"<<" "<<x*y; 
		}
		break;
			//Bölme iþlemi	
		case 4 : {
				system("cls"); //Ekraný temizledik
				cout<<"   Bölme Ýþlemi   \n";
				cout<<"Birinci Sayýyý giriniz:";
				cin>> x;
				cout<<"Ýkinci sayýyý giriniz:";
				cin>> y;
				cout<<"Sonuç:"<<" "<<x/y;
		 }
		break;
		
			//Karekök Alma
		case 5 : {
			system("cls"); //Ekraný temizledik
			cout<<"   Karekök Alma   \n";
			cout<<"Bir Sayý giriniz:";
			cin>> x;
		cout<<"Sayýnýn Karekökü:"<<" "<<sqrt(x);
			
		}
		break;
		
			//Üslü iþlemler
		case 6 : {
			system("cls"); //Ekraný temizledik
			cout<<"   Üslü Ýþlemler\n";
			cout<<"Taban giriniz:";
			cin>>x;
			cout<<"Üs giriniz:";
			cin>>y;
			cout<<"Sonuç:"<<" "<< pow (x, y);
		}
		break;
			default:{
				cout<<"Hata Yanlýþ Seçim Yaptýnýz. \n";
				break;
			}
	}
	
	cout<<"\nYeniden denemek ister misiniz?[E/H]\n";
	cin>>a;
	
	if(a=='e'||a=='E'){
		cout<<"Yeniden baþlatýlýyor...\n";
	    	Sleep (1000); //Consolu 1 saniye beklettik
	    	system("cls"); //Ekraný temizledik
		goto label;	//Baþa dönmesini istedik. Yani label yazan yere
               	}
  	else if (a=='h'||a=='H'){ //Aksi takdirde çýkmasýný söyledik
		exit(0);
	
		 }
}
