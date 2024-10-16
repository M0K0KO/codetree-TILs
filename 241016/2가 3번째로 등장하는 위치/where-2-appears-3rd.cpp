#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    int idx = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 2) {
            cnt++;
        }

        if (cnt == 3) {
            idx = i;
            break;
        }
    }

    std::cout << idx+1;

    return 0;
}