#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;

    int result = 1;

    std::cin >> a >> b;

    for (int i = 0; i < b; i++) {
        result *= a;
    }

    std::cout << result;
    return 0;
}