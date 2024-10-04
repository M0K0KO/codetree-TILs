#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if ((i+j) % 4 == 0 && (i+j) >= 4)
                std::cout << '(' << i << ", " << j << ')' << std::endl;
            else 
                std::cout << '(' << i << ", " << j << ')' << " ";
        }
    }

    return 0;
}