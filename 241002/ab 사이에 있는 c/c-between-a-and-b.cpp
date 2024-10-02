#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    bool flag = false;

    std::cin >> a >> b >> c;

    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            flag = true;
        }
    }
    
    if (flag){
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}