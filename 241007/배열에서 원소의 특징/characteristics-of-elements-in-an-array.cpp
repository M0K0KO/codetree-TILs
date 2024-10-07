#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];

    for (int i = 0; i < 10; i++){
        int a;
        std::cin >> a;

        if (a % 3 == 0 && a >= 3){
            std::cout << arr[i-1];
            break;
        }

        arr[i] = a;
    }


    return 0;
}