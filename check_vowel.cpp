// C++ program to check whether given character is vowel or not

#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character\n";
    cin>>ch;
    ch = tolower(ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"It's a vowel\n";
        break;
    default :
        cout<<"Not a vowel\n";
    }

}
