#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int cnt = 0;

    for (int i = 0; i < 10; i++){
        std::cin >> arr[i];

        if (arr[i] == 0){
            break;
        }

        cnt++;
    }

    int cnt1 = 0;
    int sum = 0;

    for (int i = 0; i < cnt; i++){
        if (arr[i] % 2 == 0){
            sum += arr[i];
            cnt1++;
        }
    }

    std::cout << cnt1 << " " << sum;

    return 0;
}