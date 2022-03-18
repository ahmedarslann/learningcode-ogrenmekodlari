#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
    int i,j;
    for(i=0; i<=10; i++)
    { 
    cout<<endl; 
    	for(j=0; j<=10; j++)
    	{
    		cout<<i<<"*"<<j<<"="<<i*j<<"\t";
		}
	}
}
