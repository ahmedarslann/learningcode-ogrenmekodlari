#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
    int a,b;
    cout<<"saymaya nerden baþliim biraderim?";
    cin>>a;
    cout<<"kaça kadar sayayým lo?";
    cin>>b;
    for(int i=a;i<=b;i++)
    {
    	if(i%2==0)
    	{
    		cout<<i<<endl;	
		}
	}


}
