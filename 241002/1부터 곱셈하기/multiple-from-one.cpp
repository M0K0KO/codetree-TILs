#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, prod;
    std::cin >> n;

    prod = 1;

    for (int i = 1; i <= 10; i++) {
        prod *= i;
        if (prod >= n) {
            std::cout << i;
            break;
        }
    }

    return 0;
}