#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    if (n == 1) {
        std::cout << 1;
    }
    
    for (int i = 1; i <= n; i++){
        if (i % 2 == 1){
            for (int j = 0 ; j < n / 2; j++) {
                std::cout << i << n-i+1;
            }
        }
        else {
            for (int j = 0; j < n / 2; j++){
                std::cout << i << n-i+1;
            }
        }

        std::cout << std::endl;
    }
    

    return 0;
}