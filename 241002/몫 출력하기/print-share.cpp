#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0;
    while (true) {
        int a;
        std::cin >> a;
        
        if (a % 2 == 1){
            continue;
        }
        else {
            if (cnt == 3) {
                break;
            }

            std::cout << a / 2 << std::endl;
            cnt++;
        }
    }

    return 0;
}