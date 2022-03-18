#include<iostream>
#include<vector>
using namespace std;
int main()
{

   vector <int> sayilar; // dinamik boyutlu bir vektor tanimladik.

   int i=0; // for dongusu icin kullanacagimiz sayac.

   for(i = 0; i < 5; i++)//i 5 olana kadar don, her dondugunde i'yi 1 arttir.
      {
          sayilar.push_back(i+1);//vektorun sonuna i'nin 1 fazlasini ekle.
      }

  for(i = 0; i < 5; i++)//i 5 olana kadar don, her dondugunde i'yi 1 arttir.
      {
         cout << sayilar[i] << endl;// vektorun elemanlarini ekrana alt alta yaz.
      }
}
