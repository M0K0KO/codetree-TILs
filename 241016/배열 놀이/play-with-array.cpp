#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, q;

    std::cin >> n >> q;

    int arr[n];
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    for (int i = 0; i < q; i++){
        int command;

        std::cin >> command;

        if (command == 1) {
            int a;
            std::cin >> a;
            std::cout << arr[a-1] << std::endl;
        }
        else if (command == 2) {
            int a;
            std::cin >> a;
            int idx = 0;
            for (int j = 0; j < n; j++){
                if (arr[j] == a) {
                    idx = j+1;
                    break;
                }
            }
            std::cout << idx << std::endl;
        }
        else if (command == 3) {
            int a, b;
            std::cin >> a >> b;

            for (int j = a-1; j < b; j++) {
                std::cout << arr[j] << " ";
            }

            std::cout << std::endl;
        }
    }

    return 0;
}