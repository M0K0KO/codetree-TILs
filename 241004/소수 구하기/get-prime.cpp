#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;


    std::cout << 2 << " ";

    for (int i = 3; i <= n; i++){
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                break;
            }

            if (j == n-1) {
                std::cout << i << " ";
            }
        }
    }

    return 0;
}