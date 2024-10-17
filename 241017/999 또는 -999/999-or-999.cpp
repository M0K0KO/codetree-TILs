#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100] = {};

    for (int i = 0; i < 100; i++) {
        std::cin >> arr[i];
        if (arr[i] == 999 || arr[i] == -999) {
            break;
        }
    }

    int mx = arr[0];
    int mn = arr[0];

    for (int i = 0; i < 100; i++){
        if (arr[i] == 999 || arr[i] == -999) break;

        if (arr[i] > mx) mx = arr[i];
        if (arr[i] < mn) mn = arr[i];
    }

    std::cout << mx << " " << mn;

    return 0;
}