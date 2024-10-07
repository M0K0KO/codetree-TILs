#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt = 0;

    std::cin >> n;
    int a = 0;
    while (true) {
        
        a += n;

        std::cout << a << " ";

        if (a % 5 == 0 && a >= 5){
            cnt++;
        }

        if (cnt == 2) {
            break;
        }
    }

    return 0;
}