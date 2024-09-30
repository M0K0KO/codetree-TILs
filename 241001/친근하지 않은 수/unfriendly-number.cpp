#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt = 0;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0 && i / 5 > 0) {
            cnt += 1;
            continue;
        }
        else if (i % 3 == 0 && i / 3 > 0) {
            cnt += 1;
            continue;
        }
        else if (i % 2 == 0 && i / 2 > 0) {
            cnt += 1;
            continue;
        }
    }

    std::cout << n - cnt;

    return 0;
}