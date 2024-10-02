#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt, i;
    cnt = 0;
    i = 1;
    std::cin >> n;

    while(n > 1) {
        n /= i;
        cnt++;
        i++;
    }

    std::cout << cnt;

    return 0;
}