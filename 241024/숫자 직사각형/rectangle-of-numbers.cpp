#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    std::cin >> n >> m;

    int arr[n][m];

    int num = 1;

    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j] = num;
            std::cout << arr[i][j] << " ";
            num += 1;
        }
        std::cout << std::endl;
    }


    return 0;
}