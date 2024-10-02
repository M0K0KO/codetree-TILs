#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    for (int i = 1; i < 2 * n; i += 2){
        for (int j = 0; j < i; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}