#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    int arr[n][n];

    int a = 1;

    if (n % 2 == 0) {
        for (int i = n-1; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                if (i % 2 == 1) {
                    arr[n-j-1][i] = a;
                    a++;
                }
                else {
                    arr[j][i] = a;
                    a++;
                }
            }
        }
    }
    else {
        for (int i = n-1; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                if (i % 2 == 0) {
                    arr[n-j-1][i] = a;
                    a++;
                }
                else {
                    arr[j][i] = a;
                    a++;
                }
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}