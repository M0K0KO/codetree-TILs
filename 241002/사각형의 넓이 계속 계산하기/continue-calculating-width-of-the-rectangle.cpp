#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    while(True) {
        int a, b;
        char ch;
        std::cin >> a >> b >> ch;

        std::cout << a * b << std::endl;

        if(ch == 'C'){
            break;
        }
    }

    return 0;
}