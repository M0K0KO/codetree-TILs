#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    
    int cnt = 0;

    for (int i = 0; i < 10; i++){
        std::cin >> arr[i];
        if (arr[i] == 0)
            break;
        cnt++;
    }

    int sum = 0;

    for (int i = 0; i < cnt; i++){
        sum += arr[i];
    }

    std::cout << fixed;
    std::cout.precision(1);

    std::cout << sum << " " << float(sum) / cnt;

    return 0;
}