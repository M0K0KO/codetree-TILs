#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n-i; j++){
            std::cout << " ";
        }

        for(int j = 0; j < 2*i - 1; j++){
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    for (int i = n-1; i > 0; i--){
        for(int j = 0; j < n-i; j++){
            std::cout << " ";
        }

        for(int j = 0; j < 2*i - 1; j++){
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}