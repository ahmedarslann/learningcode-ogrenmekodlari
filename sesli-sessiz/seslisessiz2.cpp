#include<iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int a,b;
	char l,m;
	char harf[50];
	label:
	cout<<"Birinci Sayý :";
	cin>>a;
	cout<<"Ýþlem türü :";
    cin>>gets(harf);
    cout<<"Ýkinci Sayý :";
	cin>>b;

     if(harf[0]=='+'||harf[0]=='-'||harf[0]=='*'||harf[0]=='/') 
     {
	for(int i=0; harf[i];i++)
	{
    if(harf[i]=='+')
    {
    	int topla=a+b;
    	cout<<topla;
    	
	}
	
	else if(harf[i]=='-')
	{
		int cikar=a-b;
    	cout<<cikar;
    	
	}
	
	else if(harf[i]=='*')
	{
		int carp=a*b;
		cout<<carp;
		
	}
	
	else if(harf[i]=='/')
	{
		int bol=a/b;
		cout<<bol;
		
	}
	}
	}
	else
    {    
	cout<<"Ýþlem Türünüz Geçersiz...";
	cout<<"\nYeniden denemek ister misiniz?[E/H]\n";
	cin>>l;
	if(l=='e'||l=='E')
	{
		cout<<"Yeniden baþlatýlýyor...\n";
	    system("cls"); //Ekraný temizledik
		goto label;	
    }
  	else if (l=='h'||l=='H')
	  { 
		exit(0);
	  }
    }

	cout<<"\nYeniden denemek ister misiniz?[E/H]\n";
	cin>>m;
	
	if(m=='e'||m=='E')
	{
		cout<<"Yeniden baþlatýlýyor...\n";
	    system("cls"); //Ekraný temizledik
		goto label;	
    }
  	else if (m=='h'||m=='H')
	  { 
		exit(0);
	  }


}
