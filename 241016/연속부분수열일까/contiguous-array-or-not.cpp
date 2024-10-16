#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    std::cin >> n1 >> n2;

    int a[n1], b[n2];

    for (int i = 0; i < n1; i++){
        std::cin >> a[i];
    }

    for (int i = 0; i < n2; i++) {
        std::cin >> b[i];
    }

    int attempt = n1-n2+1;
    if (attempt > 0) {
        int cnt = 0;
        for (int i = 0; i < attempt; i++) {
            bool flag = true;
            for (int j = 0; j < n2; j++) {
                if (b[j] == a[j+i]) continue;
                else {
                    flag = false;
                    break;
                }
            }
            if (flag == true) {
                std::cout << "Yes";
                break;
            }
            else {
                cnt++;
            }
        }
        if (cnt == attempt) {
            std::cout << "No";
        }
    }
    else {
        std::cout << "No";
    }

    return 0;
}