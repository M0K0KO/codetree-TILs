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

    int mn = arr[0];
    int cnt = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] < mn) {
            mn = arr[i];
            cnt = 1;
        }
        else if (arr[i] == mn) {
            cnt++;
        }
    }

    std::cout << mn << " " <<  cnt;

    return 0;
}