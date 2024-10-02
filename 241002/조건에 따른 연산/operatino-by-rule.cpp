#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0;

    int n;
    std::cin >> n;

    while(true) {
        if(n >= 1000) {
            std::cout << cnt;
            break;
        }

        if (n % 2 == 0) {
            n = (n*3) + 1;
            cnt++;
            continue;
        }
        else {
            n = (n*2) + 2;
            cnt++;
            continue;
        }
    }

    return 0;
}