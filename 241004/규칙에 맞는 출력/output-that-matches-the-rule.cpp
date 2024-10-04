#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j > 0; j--){
            std::cout << n - j + 1 << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}