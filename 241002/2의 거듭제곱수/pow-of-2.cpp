#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    int cnt = 0;

    while(true){
        if (n == 1) {
            std::cout << cnt;
            break;
        }

        n /= 2;
        cnt++;
    }

    return 0;
}