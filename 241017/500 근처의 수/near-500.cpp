#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];

    for (int i = 0; i < 10; i++) {
        std::cin >> arr[i];
    }

    int min500 = INT_MIN;
    int max500 = INT_MAX;

    for (int i = 0; i < 10; i++) {
        if (arr[i] < 500) {
            if (500-min500 > 500-arr[i]) {
                min500 = arr[i];
            }
        }
        else if (arr[i] > 500) {
            if (max500-500 > arr[i]-500) {
                max500 = arr[i];
            }
        }
    }

    std::cout << min500 << " " << max500;

    return 0;
}