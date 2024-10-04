#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;

    std::cin >> a >> b;

    for (int i = 1; i < 10; i++){
        for (int j = b; j >= a; j--){
            if (j % 2 == 0) {
                std::cout << j << " * " << i << " = " << j * i;
            }

            if (j <= b ) {
                std::cout << " / ";
            }
        }
        std::cout << std::endl;
    }
    

    return 0;
}