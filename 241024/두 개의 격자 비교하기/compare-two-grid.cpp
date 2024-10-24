#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;

    std::cin >> n >> m;

    int arr1[n][m];
    int arr2[n][m];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cin >> arr2[i][j];   
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr1[i][j] == arr2[i][j]) {
                arr1[i][j] = 0;
            }
            else {
                arr1[i][j] = 1;
            }

            std::cout << arr1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    
    return 0;
}