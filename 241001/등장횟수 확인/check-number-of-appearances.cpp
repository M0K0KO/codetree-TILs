#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0;

    for (int i = 0; i < 5; i++) {
        int a;
        std::cin >> a;

        if (a % 2 == 0) {
            cnt += 1;
        }
    }
    std::cout << cnt;

    return 0;
}