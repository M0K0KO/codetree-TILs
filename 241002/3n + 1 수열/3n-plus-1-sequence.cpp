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
        if (n % 2 == 0) {
            n /= 2;
            cnt++;
        }
        else {
            n = (n * 3) + 1;
            cnt++;
        }
    }

    return 0;
}