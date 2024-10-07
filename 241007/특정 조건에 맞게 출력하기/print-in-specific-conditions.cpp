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

    for (int i = 0; i < cnt; i++){
        if (arr[i] % 2 == 1){
            std::cout << arr[i] + 3 << " ";
        }
        else {
            std::cout << arr[i] / 2 << " ";
        }
    }

    return 0;
}