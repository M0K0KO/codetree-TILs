#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    while(true) {
        int a;
        std::cin >> a;
        if (a == 0) {
            break;
        }
        std::cout << a << std::endl;
    }

    return 0;
}