#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    bool flag = false;

    for (int i = 2; i <= n-1; i++){
        if (n % i == 0) {
            flag = true;
        }
        else {
            flag = false;
        }
    }

    if (flag) {
        std::cout << 'C';
    }
    else{
        std::cout << 'N';
    }

    return 0;
}