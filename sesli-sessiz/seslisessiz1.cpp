#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleTitle("EVR�M ERS�N KANGAL");
	system("color 4");
	char harf[50];
	gets(harf);
    int ss=0;
    int sl=0;
	for(int i=0; harf[i];i++)
	{
    	if(harf[i]=='e'||harf[i]=='v'||harf[i]=='r'||harf[i]=='�'||harf[i]=='m'||harf[i]=='n'||harf[i]=='k'||harf[i]=='a'||harf[i]=='l' ) 
		{
		   sl++;
		}
		else
			{
			 ss++;	
			}
	}
    cout<<"sesli :"<<sl<<endl;
	cout<<"sessiz :"<<ss<<endl;

}
