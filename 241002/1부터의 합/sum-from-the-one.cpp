#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum;
    std::cin >> n;
    sum = 0;

    for (int i = 1; i <= 100; i++) {
        sum += i;
        if (sum >= n) {
            std::cout << i;
            break;
        }
    }

    return 0;
}