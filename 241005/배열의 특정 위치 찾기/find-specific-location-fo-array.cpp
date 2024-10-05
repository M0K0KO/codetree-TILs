#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    std::cout << fixed;
    std::cout.precision(1);

    int arr[10];

    for (int i = 0 ; i < 10; i++){
        std::cin >> arr[i];
    }

    int s1, s2, cnt;
    s1 = s2 = cnt = 0;

    for (int i = 1; i < 10; i += 2){
        s1 += arr[i];
    }

    for (int i = 0; i < 10; i++) {
        if ((i+1) % 3 == 0) {
            s2 += arr[i];
            cnt++;
        }
    }

    std::cout << s1 << " " << float(s2) / cnt;

    return 0;
}