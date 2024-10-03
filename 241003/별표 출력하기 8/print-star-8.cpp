#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    for(int i = 1; i <= n; i++){
        if (i % 2 == 1){
            std::cout << "*" << std::endl;
        }
        else  {
            for (int j = 0; j < i; j++){
                std::cout << "* ";
            }

            std:cout << std::endl;
        }
    }

    return 0;
}