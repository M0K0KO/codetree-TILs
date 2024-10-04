#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cout << char(65+j);
        }
        std::cout << std::endl;
    }

    return 0;
}