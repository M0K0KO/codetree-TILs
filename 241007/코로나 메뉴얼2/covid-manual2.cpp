#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt_arr[4] = {};

    for (int i = 0; i < 3; i++){
        char a;
        int b;

        std::cin >> a >> b;

        char res;

        if (a == 'Y' && b >= 37) res = 'A';
        else if (a == 'N' && b >= 37) res = 'B';
        else if (a == 'Y' && b <= 37) res = 'C';
        else res = 'D';

        cnt_arr[int(res)-65]++;
    }

    for (int i = 0; i < 4; i++){
        std::cout << cnt_arr[i] << " ";
    }

    if (cnt_arr[0] >= 2) {
        std::cout << 'E';
    }


    return 0;
}