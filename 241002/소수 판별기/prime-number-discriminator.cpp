#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    bool flag = false;
    std::cin >> n;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            flag = true;
        }
    }

    if (flag) {
        std::cout << 'C';
    }
    else {
        std::cout << 'P';
    }

    return 0;
}