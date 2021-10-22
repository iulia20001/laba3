#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    long long n; cin >>n;
 
    while (n>0)
    {
        cout << n%10;
        n/= 10;
    }
     
}