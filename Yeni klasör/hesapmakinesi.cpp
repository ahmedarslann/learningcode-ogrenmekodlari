#include <iostream>
#include <math.h>
#include <windows.h>   //K�t�phaneler Tan�mland�
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e karekter tan�m�
	SetConsoleTitle("Hesap Makinesi / Coder:Kagan Akpinar"); //Consol ba�l���
	
	int x,y,z,i;
	char a;
	double number;
        int sayi;
	
	
 label:
	
	
	//hesap makinesi
	

	cout<<"      		Hesap Makinesine Ho�geldiniz.\n";
	cout<<"       		  L�tfen Bir i�lem Se�iniz.\n";
	cout<<"  1)  Matematiksel ��lemler\n"; 
        cout<<"  2)  Geometrik ��lemler\n"; 
	cin>> z;
	
	//Switch-case Ba�lang�c�
	switch(z) {
		
		case 1:{
			system("cls"); //Ekran� temizledik
			cout<<"     Matamatiksel ��lemler\n";
			cout<<"  1)  Toplama ��lemi\n"; 
			cout<<"  2)  ��karma ��lemi\n"; 
			cout<<"  3)  �arpma ��lemi\n"; 
			cout<<"  4)  B�lme ��lemi\n";
			cout<<"  5)  Karek�k Alma\n";
			cout<<"  6)  �sl� ��lemler\n";
			cout<<"  7)  Logaritma Hesaplama\n";
			cout<<"  8)  Trigonometri Hesaplama\n";
			cout<<"  9)  Faktoriyel Hesaplama\n";
			cout<<"  10) �kinci Dereceden Denklemin K�klerini Bul\n";
			cin>>x;
			//case 1 i�indeki switch-case
			/////////////////////////////////////////////////////////////////////////////////
				switch(x){
					//Toplama ��lemi
					case 1 : {	
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
			//Logaritma Hesaplama
		case 7 : {
			system("cls"); //Ekran� temizledik
			cout<<"   Logaritma Hesaplama   \n"; 
	 	        cout << " Say�y� Giriniz: " ; cin  >> number ;
	 		cout << " Logaritma " << number << "="; 
	 	 	number = log10 (number);
	 		cout << number <<endl;
	
		}
		break;
			//Trigonimetri Hesaplama
		case 8 : {
			
			 double answersin,answercos,answertan;
		 system("cls"); //Ekran� temizledik
	 	 cout << "   Trigonometri Hesaplama " << endl; 
		 cout << " Say�y� Giriniz: " ; cin >> number ;
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
			//Fakt�riyel Heseplama
		case 9:{		
		system("cls");	//Ekran� temizledik
		 cout<<"    Fakt�riyel Hesaplama   \n";
		 cout<<" Bir Say� giriniz:";
		 cin>>sayi;
		 int fakt=1,sayac;
		 	for(sayac=1;sayac<=sayi;sayac++)
		 	{
		 		fakt=fakt*sayac;
			 }
		 cout<<sayi<<"!=" <<fakt<<endl;
		}
		break;
			//�kinci dereceden denklemin k�klerini bulma
		case 10:{
			system("cls"); //Ekran� temizledik
			float x, y, z;
			float a;
			float x1, x2;
			
			cout<<"   �kinci Dereceden Denklemin K�klerini Bulma  \n";
			cout<<" Denklemin x,y ve z katsay�lar�n� giriniz:\n";
			cout<<"x=";cin>>x;
			cout<<"y=";cin>>y;
			cout<<"z=";cin>>z;
			a=y*y-4*x*z ;
				
				if(a<0)
				cout<<"Ger�el k�k yok\n";
				else {
					if(a==0)
					 {
						x1 = -y / (2 * x);
						cout << x1 << " "<<"noktas�nda �ak��an iki k�k vard�r." << endl;
						} 
						else {
						x1 = (-y + sqrt(a)) / (2 * x);
						x2 = (-y - sqrt(a)) / (2 * x);
						cout << x1 <<" "<< "ve"<<" "<< x2 <<" "<< "noktalar�nda iki ger�el k�k vard�r." << endl;
								}
				}
		}
		break;
			default:{
				cout<<"Hata Yanl�� Se�im Yapt�n�z. \n";
				break;
			}
		}
		///////////////////////////////////////////////////////////////////////////////
	}
	break;
		
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	case 2 : {
		
		
				system("cls"); //Ekran� temizledik
				cout<<"            Geometrik ��lemler\n";
				cout<<"  1) Karenin Alan�n� ve �evresini Bul\n";
				cout<<"  2) Dikd�rtgenin Alan�n� ve �evresini Bul\n";
				cout<<"  3) �okgenler\n";
				cout<<"  4) E�kenar D�rtgen Alan Bulma\n";
				cout<<"  5) Paralelkenar Alan Bulma\n";
				cout<<"  6) Yamuk'un Alan�n� Bulma\n";
				cout<<"  7) Daire Alan ve �evre Hesaplama  \n";
				cin>>x;
		    		//case 2 i�indeki switch- case
		    		switch(x) {
		    				//Kare alan ve �evre hesab�
		    				case 1:{
		    				system("cls"); //Ekran� temizledik
		    				cout<<"    Karenin Alan� ve �evresi  \n";
						    cout<<"Karenin bir kenar�n� giriniz:";
		    				cin>>x;
		    				cout<<"Karenin Alan�:"<< x*x << " Karenin �evresi:" << 4*x << endl;
								}
		    				break;
		    				//Dikd�rtgen alan ve �evre hesab�
		    				case 2:{
							system("cls"); //Ekran� temizledik
							cout<<"     Dikd�rtgenin Alan� ve �evresi   \n";	
							cout<<"Dikd�rtgenin k�sa ve uzun kenar�n� giriniz:\n";
							cin>>x;
							cin>>y;
							cout<<"Dikd�rtgenin Alan�:" << x*y << " Dikd�rtgenin �evresi:"<< 2*(x+y) << endl;
								
							}
							break; 
							//�okgenler
							case 3:{
							system("cls"); //Ekran� temizledik
							cout<<"    �okgenler   \n";
							cout<<"Kenar say�s�n� giriniz:";
		      				cin>>x;
		      				cout<<"Bir i� a��s�:"<<" "<< 180*(x-2) /x << endl;
		      				cout<<"Bir d�� a��s�:"<<" "<< 360/x << endl;
		      				cout<<"�� a��lar toplam�:"<<" "<< 180*(x-2) <<endl;
		      				cout<<"Toplam k��egen say�s�:"<<" "<<  x*(x-3) /2 << endl;
		     				cout<<"Bir k��esinden en fazla"<<" "<<  x-3 <<" k��egen �izilebilir"<<endl;
		     				cout<<"Bir k��esinden ��kan k��egenler ile"<<" "<< x-2 <<" tane ��gen olu�ur.\n";	 
							}
								break;
									//E�kenar d�rtgen alan bulma
							case 4:{
								system("cls"); //Ekran� temizledik
								cout<<"  E�kenar D�rtgen Alan Bulma\n";
								cout<<"E�kenar d�rtgenin k��egen uzunluklar�n� giriniz:\n";
								cin>>x>>y;
								cout<<"Alan"<<" "<< (x*y) /2 << endl;
							}
								break;
								//Paralelkenar alan bulma
							case 5:{
								system("cls"); //Ekran� temizledik
								cout<<"   Paralelkenar Alan Bulma    \n";
								cout<<"Paralelkenar�n Y�ksekli�i:";
								cin>>x;
								cout<<"Y�ksekli�in indi�i taban�n uzunlu�u:";
								cin>>y;
								cout<<"Alan:"<<" "<< x*y << endl;
								
								
							}
							break;
							//Yamuk alan hesab�
							case 6:{
								system("cls"); //Ekran� temizledik
									float x,y,z;
								cout<<"    Yamuk Alan Hesab�   \n";
								cout<<"Alt taban giriniz:";
								cin>>x;
								cout<<"�st taban giriniz:";
								cin>>y;
								cout<<"Y�ksekli�i Giriniz:";
								cin>>z;
								cout<<"Alan:"<<" "<< z*(x+y) /2 << endl; 
								
							}
							break;
							//Daire alan ve �evre hesab�
							case 7:{
								system("cls"); //Ekran� temizledik
								cout<<"  Daire Alan ve �evre Hesab�  \n";
								cout<<"Yar��ap Giriniz:";
								cin>>x;
								cout<<"Alan:"<<" "<< pow(x,2);
								cout<<"p"<<" ";
								cout<<"�evre:"<<" "<< 2*x <<"p" << endl;
								
							}
							break;
							default : {
								cout<<"Hata. Yanl�� se�im yapt�n�z.";
									break; }
					}
		    
			
	
	
	
	
		
		
	}
	/////////////////////////////////////////////////////////////////////////////////
	break;
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
