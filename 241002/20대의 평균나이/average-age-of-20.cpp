#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    std::cout << fixed;
    std::cout.precision(2);

    int sum = 0;
    int cnt = 0;

    while(true) {
        int a;
        std::cin >> a;

        if (a < 30 && a >= 20) {
            sum += a;
            cnt ++;
        }
        else{
            std::cout << float(sum) / cnt;
            break;
        }
    }

    return 0;
}