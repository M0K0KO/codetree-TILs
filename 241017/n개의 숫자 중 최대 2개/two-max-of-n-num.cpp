#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int mx1, mx2;

    if (arr[0] > arr[1]) {
        mx1 = arr[0];
        mx2 = arr[1];
    }
    else {
        mx1 = arr[1];
        mx2 = arr[0];
    }

    for (int i = 2; i < n; i++){
        if (arr[i] >= mx1) {
            mx2 = mx1;
            mx1 = arr[i];
        }
        else if (arr[i] > mx2) {
            mx2 = arr[i];
        }
    }

    std::cout << mx1 << " " << mx2;

    return 0;
}