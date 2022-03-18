#include <iostream>
#include <math.h>
#include <windows.h>   //Kütüphaneler Tanýmlandý
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish"); //Türkçe karekter tanýmý
	SetConsoleTitle("Hesap Makinesi / Coder:Kagan Akpinar"); //Consol baþlýðý
	
	int x,y,z,i;
	char a;
	double number;
        int sayi;
	
	
 label:
	
	
	//hesap makinesi
	

	cout<<"      		Hesap Makinesine Hoþgeldiniz.\n";
	cout<<"       		  Lütfen Bir iþlem Seçiniz.\n";
	cout<<"  1)  Matematiksel Ýþlemler\n"; 
        cout<<"  2)  Geometrik Ýþlemler\n"; 
	cin>> z;
	
	//Switch-case Baþlangýcý
	switch(z) {
		
		case 1:{
			system("cls"); //Ekraný temizledik
			cout<<"     Matamatiksel Ýþlemler\n";
			cout<<"  1)  Toplama Ýþlemi\n"; 
			cout<<"  2)  Çýkarma Ýþlemi\n"; 
			cout<<"  3)  Çarpma Ýþlemi\n"; 
			cout<<"  4)  Bölme Ýþlemi\n";
			cout<<"  5)  Karekök Alma\n";
			cout<<"  6)  Üslü Ýþlemler\n";
			cout<<"  7)  Logaritma Hesaplama\n";
			cout<<"  8)  Trigonometri Hesaplama\n";
			cout<<"  9)  Faktoriyel Hesaplama\n";
			cout<<"  10) Ýkinci Dereceden Denklemin Köklerini Bul\n";
			cin>>x;
			//case 1 içindeki switch-case
			/////////////////////////////////////////////////////////////////////////////////
				switch(x){
					//Toplama Ýþlemi
					case 1 : {	
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
			//Logaritma Hesaplama
		case 7 : {
			system("cls"); //Ekraný temizledik
			cout<<"   Logaritma Hesaplama   \n"; 
	 	        cout << " Sayýyý Giriniz: " ; cin  >> number ;
	 		cout << " Logaritma " << number << "="; 
	 	 	number = log10 (number);
	 		cout << number <<endl;
	
		}
		break;
			//Trigonimetri Hesaplama
		case 8 : {
			
			 double answersin,answercos,answertan;
		 system("cls"); //Ekraný temizledik
	 	 cout << "   Trigonometri Hesaplama " << endl; 
		 cout << " Sayýyý Giriniz: " ; cin >> number ;
		 cout << " Trigonometri " << number << " =\n ";
		 answersin = sin (number*3.14159265/180);
		 answercos = cos (number*3.14159265/180);
		 answertan = tan (number*3.14159265/180);

		 cout << " Sin " << number << " "  << floor(answersin) << endl;
		 cout << "  Cos " << number << " "  << floor(answercos) << endl;
		 cout << "  Tan " << number << " "  << floor(answertan) << endl;
		 cout << "  Cot " << number << " "  << floor(1/answertan) << endl;
					
					
					
				}
			break;
			//Faktöriyel Heseplama
		case 9:{		
		system("cls");	//Ekraný temizledik
		 cout<<"    Faktöriyel Hesaplama   \n";
		 cout<<" Bir Sayý giriniz:";
		 cin>>sayi;
		 int fakt=1,sayac;
		 	for(sayac=1;sayac<=sayi;sayac++)
		 	{
		 		fakt=fakt*sayac;
			 }
		 cout<<sayi<<"!=" <<fakt<<endl;
		}
		break;
			//Ýkinci dereceden denklemin köklerini bulma
		case 10:{
			system("cls"); //Ekraný temizledik
			float x, y, z;
			float a;
			float x1, x2;
			
			cout<<"   Ýkinci Dereceden Denklemin Köklerini Bulma  \n";
			cout<<" Denklemin x,y ve z katsayýlarýný giriniz:\n";
			cout<<"x=";cin>>x;
			cout<<"y=";cin>>y;
			cout<<"z=";cin>>z;
			a=y*y-4*x*z ;
				
				if(a<0)
				cout<<"Gerçel kök yok\n";
				else {
					if(a==0)
					 {
						x1 = -y / (2 * x);
						cout << x1 << " "<<"noktasýnda çakýþan iki kök vardýr." << endl;
						} 
						else {
						x1 = (-y + sqrt(a)) / (2 * x);
						x2 = (-y - sqrt(a)) / (2 * x);
						cout << x1 <<" "<< "ve"<<" "<< x2 <<" "<< "noktalarýnda iki gerçel kök vardýr." << endl;
								}
				}
		}
		break;
			default:{
				cout<<"Hata Yanlýþ Seçim Yaptýnýz. \n";
				break;
			}
		}
		///////////////////////////////////////////////////////////////////////////////
	}
	break;
		
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	case 2 : {
		
		
				system("cls"); //Ekraný temizledik
				cout<<"            Geometrik Ýþlemler\n";
				cout<<"  1) Karenin Alanýný ve Çevresini Bul\n";
				cout<<"  2) Dikdörtgenin Alanýný ve Çevresini Bul\n";
				cout<<"  3) Çokgenler\n";
				cout<<"  4) Eþkenar Dörtgen Alan Bulma\n";
				cout<<"  5) Paralelkenar Alan Bulma\n";
				cout<<"  6) Yamuk'un Alanýný Bulma\n";
				cout<<"  7) Daire Alan ve Çevre Hesaplama  \n";
				cin>>x;
		    		//case 2 içindeki switch- case
		    		switch(x) {
		    				//Kare alan ve çevre hesabý
		    				case 1:{
		    				system("cls"); //Ekraný temizledik
		    				cout<<"    Karenin Alaný ve Çevresi  \n";
						    cout<<"Karenin bir kenarýný giriniz:";
		    				cin>>x;
		    				cout<<"Karenin Alaný:"<< x*x << " Karenin Çevresi:" << 4*x << endl;
								}
		    				break;
		    				//Dikdörtgen alan ve çevre hesabý
		    				case 2:{
							system("cls"); //Ekraný temizledik
							cout<<"     Dikdörtgenin Alaný ve Çevresi   \n";	
							cout<<"Dikdörtgenin kýsa ve uzun kenarýný giriniz:\n";
							cin>>x;
							cin>>y;
							cout<<"Dikdörtgenin Alaný:" << x*y << " Dikdörtgenin Çevresi:"<< 2*(x+y) << endl;
								
							}
							break; 
							//Çokgenler
							case 3:{
							system("cls"); //Ekraný temizledik
							cout<<"    Çokgenler   \n";
							cout<<"Kenar sayýsýný giriniz:";
		      				cin>>x;
		      				cout<<"Bir iç açýsý:"<<" "<< 180*(x-2) /x << endl;
		      				cout<<"Bir dýþ açýsý:"<<" "<< 360/x << endl;
		      				cout<<"Ýç açýlar toplamý:"<<" "<< 180*(x-2) <<endl;
		      				cout<<"Toplam köþegen sayýsý:"<<" "<<  x*(x-3) /2 << endl;
		     				cout<<"Bir köþesinden en fazla"<<" "<<  x-3 <<" köþegen çizilebilir"<<endl;
		     				cout<<"Bir köþesinden çýkan köþegenler ile"<<" "<< x-2 <<" tane üçgen oluþur.\n";	 
							}
								break;
									//Eþkenar dörtgen alan bulma
							case 4:{
								system("cls"); //Ekraný temizledik
								cout<<"  Eþkenar Dörtgen Alan Bulma\n";
								cout<<"Eþkenar dörtgenin köþegen uzunluklarýný giriniz:\n";
								cin>>x>>y;
								cout<<"Alan"<<" "<< (x*y) /2 << endl;
							}
								break;
								//Paralelkenar alan bulma
							case 5:{
								system("cls"); //Ekraný temizledik
								cout<<"   Paralelkenar Alan Bulma    \n";
								cout<<"Paralelkenarýn Yüksekliði:";
								cin>>x;
								cout<<"Yüksekliðin indiði tabanýn uzunluðu:";
								cin>>y;
								cout<<"Alan:"<<" "<< x*y << endl;
								
								
							}
							break;
							//Yamuk alan hesabý
							case 6:{
								system("cls"); //Ekraný temizledik
									float x,y,z;
								cout<<"    Yamuk Alan Hesabý   \n";
								cout<<"Alt taban giriniz:";
								cin>>x;
								cout<<"Üst taban giriniz:";
								cin>>y;
								cout<<"Yüksekliði Giriniz:";
								cin>>z;
								cout<<"Alan:"<<" "<< z*(x+y) /2 << endl; 
								
							}
							break;
							//Daire alan ve çevre hesabý
							case 7:{
								system("cls"); //Ekraný temizledik
								cout<<"  Daire Alan ve Çevre Hesabý  \n";
								cout<<"Yarýçap Giriniz:";
								cin>>x;
								cout<<"Alan:"<<" "<< pow(x,2);
								cout<<"p"<<" ";
								cout<<"Çevre:"<<" "<< 2*x <<"p" << endl;
								
							}
							break;
							default : {
								cout<<"Hata. Yanlýþ seçim yaptýnýz.";
									break; }
					}
		    
			
	
	
	
	
		
		
	}
	/////////////////////////////////////////////////////////////////////////////////
	break;
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
