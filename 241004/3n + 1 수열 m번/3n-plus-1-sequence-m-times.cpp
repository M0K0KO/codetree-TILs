#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m;
    std::cin >> m;

    for (int i = 0; i < m; i++){
        int n;
        std::cin >> n;
        
        int cnt = 0;

        while(true) {
            if (n == 1){
                std::cout << cnt << std::endl;
                break;
            }

            if (n % 2 == 0){
                n /= 2;
                cnt++;
            }
            else if (n % 2 == 1){
                n = (n*3) + 1;
                cnt++;
            }
        }
    }

    return 0;
}