#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    bool flag = true;

    for (int i = 0; i < 5; i++) {
        int a;
        std::cin >> a;

        if (a % 3 == 0 && a >= 3) {
            continue;
        }
        else {
            flag = false;
            break;
        }
    }

    if (flag) {
        std::cout << 1;
    }
    else {
        std::cout << 0;
    }

    return 0;
}