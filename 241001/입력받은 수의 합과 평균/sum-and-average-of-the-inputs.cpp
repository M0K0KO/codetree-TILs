#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int sum = 0;
    int cnt = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        sum += a;
        cnt += 1;
    }

    std::cout << fixed;
    std::cout.precision(1);

    std::cout << sum << " " << float(sum) / cnt;
    return 0;
}