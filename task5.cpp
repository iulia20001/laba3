#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int n,m,max;
 
    cout << " ";
    cin >> n >> m;
 
    max = (n > m) ? n : m;
    do
    {
       if (max % n == 0; max % m == 0)
       {
           cout << "LCM = " << max;
           break;
       }
       else
       ++max;
    } while (true);
    return 0;
}
