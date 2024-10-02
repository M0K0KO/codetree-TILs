#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    while(true) {
        int a;
        std::cin >> a;

        while(true){
            if (a == 1) {
                std::cout << "John" << std::endl;
                continue;
            }
            else if (a == 2) {
                std::cout << "Tom" << std::endl;
                continue;
            }
            else if (a == 3) {
                std::cout << "Paul" << std::endl;
                continue;
            }
            else if (a == 4) {
                std::cout << "Sam" << std::endl;
                continue;
            }
            else {
                std::cout << "Vacancy" << std::endl;
                break;
            }
        }
    }
    return 0;
}