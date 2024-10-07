#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];

    arr[0] = 1;
    std::cin >> arr[1];
    int cnt = 1;

    std::cout << arr[0] << " " << arr[1] << " ";

    while (true) {
        cnt++;
        arr[cnt] = arr[cnt-1] + arr[cnt-2];

        std::cout << arr[cnt] << " ";

        if (arr[cnt] >= 100){
            break;
        }
    }

    return 0;
}