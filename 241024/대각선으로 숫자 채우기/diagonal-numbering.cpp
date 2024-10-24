#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;

    std::cin >> n >> m;
    int arr[n][m];
    int num = 1;

    for (int i = 0 ; i < n + m - 1; i++) {
        if (i < m) {
            for (int j = 0; j <= i; j++){
                arr[j][i-j] = num;
                num++;
            }
        }
        else {
            for (int j = i - (n-1); j < m; j++){
                arr[j][i-j] = num;
                num++;
            }
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