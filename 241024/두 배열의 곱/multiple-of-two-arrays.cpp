#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr1[3][3];
    int arr2[3][3];

    for (int j = 0; j < 3; j++){
        for (int k = 0; k < 3; k++){
            std::cin >> arr1[j][k];
        }
    }

    for (int j = 0; j < 3; j++){
        for (int k = 0; k < 3; k++){
            std::cin >> arr2[j][k];
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            arr1[i][j] *= arr2[i][j];
            std::cout << arr1[i][j] << " ";
        }
        std::cout << std::endl;
    }


    return 0;
}