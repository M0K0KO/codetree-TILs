#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    int cnt = 64;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            std::cout << "  ";
        }

        for (int j = 0; j < n-i; j++){
            cnt++;
            if (cnt == 91)
                cnt = 65;
            std::cout << char(cnt) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}