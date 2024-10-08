#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;

    std::cin >> a >> b;

    int arr[10] = {};

    while (true) {
        int rem = a % b;
        a = a / b;

        arr[rem]++;

        if (a <= 1) break;
    }

    int s = 0;

    for (int i = 0; i < 10; i++){
        s += arr[i] * arr[i];
    }

    std::cout << s;

    return 0;
}