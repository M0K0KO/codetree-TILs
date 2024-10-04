#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 1; i <= 19; i++){
        for (int j = 1; j <= 19; j++){
            if (j % 2 == 0){
                std::cout << i << " * " << j << " = " << i * j << std::endl;
            }
            else {
                if (j != 19)
                    std::cout << i << " * " << j << " = " << i * j << " / ";
                else {
                    std::cout << i << " * " << j << " = " << i * j;
                }
            }
        }
        std::cout << std::endl;
    }

    return 0;
}