#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;

        if (a % 2 == 1 && a % 3 == 0) {
            sum += a;
        }
    }

    std::cout << sum;

    return 0;
}