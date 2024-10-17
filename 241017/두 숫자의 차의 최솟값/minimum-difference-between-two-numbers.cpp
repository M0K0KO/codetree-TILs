#include <iostream>
#include <climits>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) std::cin >> arr[i];

    int min_sub = INT_MAX;

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++) {
            if (min_sub > arr[j] - arr[i]) {
                min_sub = arr[j] -arr[i];
            }
        }
    }

    std::cout << min_sub;

    return 0;
}