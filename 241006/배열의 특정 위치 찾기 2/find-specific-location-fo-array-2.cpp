#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int s1, s2;

    s1 = s2 = 0;

    for (int i = 0; i < 10; i++){
        std::cin >> arr[i];

        if (i % 2 == 1) {
            s1 += arr[i];
        }
        else {
            s2 += arr[i];
        }
    }

    if (s1 > s2) {
        std::cout << s1 - s2;
    }
    else {
        std::cout << s2 - s1;
    }

    return 0;
}