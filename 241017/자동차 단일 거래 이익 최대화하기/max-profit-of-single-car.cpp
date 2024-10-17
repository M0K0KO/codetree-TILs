#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) std::cin >> arr[i];


    int mx_profit = 0;


    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++) {
            if (arr[j] - arr[i] > mx_profit) {
                mx_profit = arr[j] - arr[i];
            }
        }
    }

    if (mx_profit > 0) {
        std::cout << mx_profit;
    }
    else {
        std::cout << 0;
    }


    return 0;
}