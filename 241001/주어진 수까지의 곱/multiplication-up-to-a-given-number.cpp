#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.    
    int a,b;
    int prod = 1;

    std::cin >> a >> b;

    for (int i = a; i <= b; i++) {
        prod *= i;
    }

    std::cout << prod;

    return 0;
}