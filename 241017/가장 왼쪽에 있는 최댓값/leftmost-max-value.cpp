#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) std::cin >> arr[i];

    int mx = arr[0];
    int mx_idx = 0;
    int a = n;

    while (true) {
        mx_idx = 0;
        mx = arr[0];
        for (int i = 0; i < a; i++) {
            if (arr[i] > mx) {
                mx = arr[i];
                mx_idx = i;
                a = mx_idx;
            } 
        }        

        std::cout << mx_idx + 1 << " ";
        if (mx_idx == 0) break;
    }



    return 0;
}