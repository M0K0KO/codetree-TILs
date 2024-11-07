#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    std::cin >> n >> m;

    int arr[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arr[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++){
        int a,b;
        
        std::cin >> a >> b;

        arr[a-1][b-1] = a * b;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}