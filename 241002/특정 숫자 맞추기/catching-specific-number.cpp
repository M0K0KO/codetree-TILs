#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    while(true) {
        int a;
        std::cin >> a;
        if (a > 25) {
            std::cout << "Lower" << std::endl;
        }
        else if (a < 25) {
            std::cout << "Higher" << std::endl;
        }
        else if (a == 25) {
            std::cout << "Good" << std::endl;
            break;
        }
    }

    return 0;
}