// Loop creation using goto statement

#include<iostream>
using namespace std;

int main()
{
    int n=0;
    cout<<"Loop Starts\n";
    loop:
        n++;
        cout<<"n = "<<n<<endl;
        if(n<5)
            goto loop;
        cout<<"Loop Ends\n";
}
