#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
        std::cout << arr[i] * arr[i] << " ";
    }

    return 0;
}