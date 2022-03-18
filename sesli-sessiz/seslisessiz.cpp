#include <iostream>
using namespace std;

int main()
{
    string str = "C++ Programming is awesome";
    char checkCharacter = 'a' 'e' 'v' 'r' 'i' 'm' 's' 'n' 'k' 'l' 'g';
    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  checkCharacter)
        {
            ++ count;
        }
    }

    cout << "evrim ersin kangal " << checkCharacter << " = " << count;

    return 0;

