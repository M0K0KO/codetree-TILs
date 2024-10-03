#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    int cnt = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cnt += 2;
            if (cnt > 8) {
                cnt = 2;
            }
            std::cout << cnt << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}