#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int cnt = 0;

    while (true) {
        int a;
        std::cin >> a;

        if (a == 0) break;

        arr[cnt] = a;
        cnt++;
    }

    int arr_cnt[9] = {};

    for (int i = 0; i < cnt; i++){
        int b = arr[i] / 10;
        arr_cnt[b-1]++;
    }

    for (int i = 0; i < 9; i++){
        std::cout << i + 1 << " - " << arr_cnt[i] << std::endl;
    }

    return 0;
}