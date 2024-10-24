#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    std::cin >> n;

    int arr[n][n];

    int num = 1;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arr[j][i] = num;
            num++;
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