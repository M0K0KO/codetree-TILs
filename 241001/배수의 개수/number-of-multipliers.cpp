#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt3 = 0;
    int cnt5 = 0;

    for (int i = 0; i < 10; i++) {
        int a;
        std::cin >> a;

        if (a % 3 == 0) {
            cnt3 += 1;
        }
        if (a % 5 == 0) {
            cnt5 += 1;
        }
    }
    std::cout << cnt3 << " " << cnt5;

    return 0;
}