#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int sum = 0;
    int cnt = 0;

    std::cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            sum += i;
            cnt += 1;
        }
    }

    std::cout << sum << " " << float(sum) / cnt;

    return 0;
}