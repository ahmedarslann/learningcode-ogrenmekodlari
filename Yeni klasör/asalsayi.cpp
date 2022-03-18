#include<iostream>
using namespace std;
int main()
{
	//Bu kodu anlamadým daha sonra tekrar bak !!!!!!!!!!!!!
	int i;
	int n=1;
	while(n++ <=30)
	{
	 i=1;
	 while(i++ <n)
	 if(n%i == 0)
      break;
      if(i==n)
        cout<<n<<"\n";
    }
    return 0;
}
