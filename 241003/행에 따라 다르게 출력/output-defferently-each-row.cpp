#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++){
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                cnt++;
                std::cout << cnt << " ";
            }
        }
        else {
            for (int j = 0; j < n; j++) {
                cnt += 2;
                std::cout << cnt << " ";
            }
        }
        std::cout << std::endl;

    }

    return 0;
}