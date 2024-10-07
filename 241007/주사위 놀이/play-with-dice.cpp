#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[6] = {};

    for (int i = 0; i < 10; i++){
        int a;
        std::cin >> a;

        arr[a-1]++;
    }

    for (int i = 0; i < 6; i++){
        std::cout << i + 1 << " - " << arr[i] << std::endl;
    }


    return 0;
}