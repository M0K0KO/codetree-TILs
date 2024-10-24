#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[2][4];

    std::cout.precision(1);
    std::cout << std::fixed;

    int s = 0;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++) {
            std::cin >> arr[i][j];
            s += arr[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        int sum1 = 0;
        for (int j = 0; j < 4; j++){
            sum1 += arr[i][j];
        }
        std::cout << sum1 / 4. << " ";
    }
    std::cout << std::endl;

    for (int j = 0; j < 4; j++){
        int sum2 = 0;
        for (int i = 0; i < 2; i++){
            sum2 += arr[i][j];
        }
        std::cout << sum2 / 2. << " ";
    }
    std::cout << endl;

    std::cout << s / 8.;

    return 0;
}