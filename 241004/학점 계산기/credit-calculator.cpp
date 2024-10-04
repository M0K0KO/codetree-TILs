#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    float arr[5] = {};

    float sum = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
        sum += arr[i];
    }

    std::cout << fixed;
    std::cout.precision(1);

    std::cout << sum / n << std::endl;

    if (sum / n >= 4.0){
        std::cout << "Perfected";
    }
    else if (sum / n >= 3.0) {
        std::cout << "Good";
    }
    else{
        std::cout << "Poor";
    }

    return 0;
}