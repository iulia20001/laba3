#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    double n, s = 0;
    for (int i = 0; i < 10; ++i)
    {
        cin >> n;
        s += n;
    }
    cout << s / 10 << endl;
}