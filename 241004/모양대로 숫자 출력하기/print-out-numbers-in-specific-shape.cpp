#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    for (int i = n; i >= 1; i--){
        for (int j = 0; j < n-i; j++){
            std::cout << "  ";
        }
        
        for (int j = i; j >= 1; j--){
            std::cout << j << " ";
        }
        std::cout << std::endl;;
    }

    return 0;
}