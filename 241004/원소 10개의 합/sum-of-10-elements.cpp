#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sum = 0;

    for (int i = 0; i < 10; i++){
        std::cin >> arr[i];
        sum += arr[i];
    }
    std::cout << sum;

    return 0;
}