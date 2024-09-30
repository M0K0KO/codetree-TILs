#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    int cnt2, cnt3, cnt12;
    cnt2 = 0;
    cnt3 = 0;
    cnt12 = 0;

    for(int i = 1; i <= n; i++) {
        if (i % 12 == 0 && i >= 12) {
            cnt12 += 1;
        }
        else if (i % 3 == 0 && i >= 3) {
            cnt3 += 1;
        }
        else if (i % 2 == 0 && i >= 2) {
            cnt2 += 1;
        }
    }

    std::cout << cnt2 << " " << cnt3 << " " << cnt12;

    return 0;
}