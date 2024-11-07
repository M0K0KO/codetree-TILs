#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    int arr[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arr[i][j] = 1;
        }
    }

    for (int i = 1; i < n; i ++) {
        for (int j = 1; j < n; j++){
            arr[i][j] = arr[i-1][j] + arr[i][j-1] + arr[i-1][j-1];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}