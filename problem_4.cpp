#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    long long n; cin >> n;
 
    int sumEven=0, sumOdd=0;
    int i=0;
    while (n>0)
    {
        i++;
        int digit = n%10;
        if(i%2==0){
            digit *= 2;
            sumEven += digit%10 + digit/10;
        }
        else{
            sumOdd += digit;
        }
        n /= 10;
    }
    int sum = sumEven + sumOdd;
    if(sum%10==0)
    cout << "VALID" << endl;
    else
    cout << "INVALID" << endl;
}