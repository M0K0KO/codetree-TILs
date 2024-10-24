#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    std::cin >> n >> m;

    int arr[n][m];

    int num = 0;

    for (int i = 0; i < m; i++){
        for (int j = 0 ; j < n; j++) {
            if (i % 2 == 1) {
                arr[n-j-1][i] = num;
            }
            else {
                arr[j][i] = num;
            }
            num++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}