#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;
    int m;
    std::cin >> m;

    int cnt = 0;

    for (int i = 0; i < n; i++){
        int a;
        std::cin >> a;

        if (a == m) {
            cnt++;
        }
    }

    std::cout << cnt;

    return 0;
}