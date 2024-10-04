#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];

    for (int i = 0; i < 10; i++){
        std::cin >> arr[i];
    }

    int sum = 0;
    int cnt = 0;

    std::cout << fixed;
    std::cout.precision(1);

    for (int i = 0; i < 10; i++){
        if (arr[i] >= 250){
            break;
        }
        else {
            sum += arr[i];
            cnt++;
        }
    }

    std::cout << sum << " " << float(sum) / cnt;

    return 0;
}