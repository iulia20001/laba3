#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int h{};
    std::cin >> h;
    for (int i = 0; i < h; i++)
    {
        std::cout << '*';
        for (int j = 0; j < i; j++)
        {
            std::cout << "**";
        }
        std::cout << std::endl;
    }
}