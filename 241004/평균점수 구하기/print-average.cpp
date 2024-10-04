#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    std::cout << fixed;
    std::cout.precision(1);

    float arr[8];

    float sum = 0;

    for (int i = 0; i < 8; i++){
        std::cin >> arr[i];
        sum += arr[i];
    }

    std::cout << sum / 8;

    return 0;
}