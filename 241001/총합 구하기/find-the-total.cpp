#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int sum = 0;

    std::cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i % 6 == 0 && i % 8 != 0) {
            sum += i;
        }
    }

    std::cout << sum;

    return 0;
}