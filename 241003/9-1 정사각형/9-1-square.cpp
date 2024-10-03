#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt = 10;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            cnt--;
            if (cnt < 1) {
                cnt = 9;
            }

            std::cout << cnt;
        }
        std::cout << std::endl;
    }

    return 0;
}