#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        if(i < 10) {
            if (i%3==0) {
                std::cout << 0 << " ";
            }
            else {
                std::cout << i << " ";
            }
        }
        else if (i >= 10 && i < 100) {
            int t10, t1;
            t10 = i / 10;
            t1 = i % 10;

            if (i%3 == 0) {
                std::cout << 0 << " ";
            }
            else if (t10 % 3 == 0 || t1 % 3 == 0){
                std::cout << 0 << " ";
            }
            else {
                std::cout << i << " ";
            }
            
        }
    }

    return 0;
}