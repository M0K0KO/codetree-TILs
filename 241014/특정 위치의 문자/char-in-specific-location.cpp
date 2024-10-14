#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};

    char a;
    std::cin >> a;

    int idx = -1;

    for (int i = 0; i < 6; i++){
        if (arr[i] == a) {
            idx = i;
        }
    }

    if (idx == -1) {
        std::cout << "None";
    }
    else {
        std::cout << idx;
    }

    return 0;
}