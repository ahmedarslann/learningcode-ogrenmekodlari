#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main()
{
	int b=0;
    for(int i=1; i<=10;i++)
    { 
        int a=1;
    	for(int j=1; j<=i; j++)
    	 {
    	 a=a*j;	
		 }
			cout<<i<<"/"<<a<<"="<<a/i<<endl; 
	}

	cout<<b<<endl;
	return 0;
}

