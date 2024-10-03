#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1){
            for (int j = 1; j <= n; j++) {
                std::cout << j;
            }
        }
        else {
            for (int j = n; j >= 1; j--) {
                std::cout << j;
            }
        }
        std::cout << std::endl;
    }

    return 0;
}