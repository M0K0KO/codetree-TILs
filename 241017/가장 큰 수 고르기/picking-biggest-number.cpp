#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];

    for (int i = 0; i < 10; i++){
        std::cin >> arr[i];
    }

    int mx = arr[0];

    for (int i = 0 ; i < 10; i++){
        if (arr[i] > mx) mx = arr[i];
    }

    std::cout << mx;

    return 0;
}