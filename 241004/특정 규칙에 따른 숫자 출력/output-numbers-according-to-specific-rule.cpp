#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    int cnt = 0;

    for (int i = n; i > 0; i--){
        for (int j = 0; j < n-i; j++){
            std::cout << "  ";
        }

        for (int j = 0; j < i; j++){
            cnt++;
            if (cnt > 9) {
                cnt = 1;
            }
            std::cout << cnt << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}