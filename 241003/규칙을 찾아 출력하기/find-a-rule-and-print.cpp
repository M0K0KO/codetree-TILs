#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++){
        if (i == 1){
            for (int j = 0; j < n; j++){
                std::cout << "* ";
            }
        }
        else {
            for (int j = 0; j < i-1; j++){
                std::cout << "* ";
            }

            for (int j = 0; j < n-i; j++){
                std::cout << "  ";
            }

            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}