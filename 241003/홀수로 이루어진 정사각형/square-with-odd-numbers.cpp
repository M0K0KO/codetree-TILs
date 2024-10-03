#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    std::cin >> n;

    for (int i = 11; i <= 11 + (n-1) * 2; i += 2) {
        for (int j = i; j <= i + (n-1) * 2; j += 2) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}