#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];

    int a;
    int i = 0;

    do {
        std::cin >> a;
        if (a == 0)
            break;

        arr[i] = a;
        i++;
        if (i == 10)
            break;
    } while(true);

    for (int j = i-1; j >= 0; j--){
        std::cout << arr[j] << " ";
    }

    return 0;
}