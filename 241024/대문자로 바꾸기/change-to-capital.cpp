#include <iostream>
#include <cctype>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[5][3];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++){
            std::cin >> arr[i][j];
            arr[i][j] = toupper(arr[i][j]);
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}