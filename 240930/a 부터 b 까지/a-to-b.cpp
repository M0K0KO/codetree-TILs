#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b ;
    std::cin >> a >> b;
    std::cout << a << " ";

    while (a <= b) {
        if (a % 2 == 0) {
            a += 3;
            if (a > b) {
                break;
            }
            std::cout << a << " ";
        }
        else {
            a *= 2;
            if (a > b) {
                break;
            }
            std::cout << a << " ";
        }
    }

    return 0;
}