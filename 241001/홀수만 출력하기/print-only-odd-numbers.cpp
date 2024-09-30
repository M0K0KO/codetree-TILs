#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++){
        int a;
        std::cin >> a;
        if (a % 2 == 1 && a % 3 == 0) {
            std::cout << a << std::endl;
        }
    }


    return 0;
}