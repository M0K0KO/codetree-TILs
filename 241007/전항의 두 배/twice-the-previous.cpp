#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];

    std::cin >> arr[0] >> arr[1];

    for (int i = 2; i <= 10; i++){
        arr[i] = arr[i-1] + (arr[i-2] * 2);
    }

    for (int i = 0; i < 10; i++){
        std::cout << arr[i] << " ";
    }

    return 0;
}