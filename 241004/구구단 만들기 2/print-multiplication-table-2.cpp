#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    std::cin >> a >> b;

    for (int i = 2; i <= 8; i +=2)  {
        for (int j = b; j >= a; j--) {
            std::cout << j << " * " << i << " = " << j * i;
            if (j > a ){
                std::cout << " / ";
            }
        }
        std:cout << std::endl;
    }

    return 0;
}