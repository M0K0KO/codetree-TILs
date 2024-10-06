#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int cnt = 0;

    for (int i = 0 ; i < 100; i++){
        int a;
        std::cin >> a;

        if (a == 0){
            break;
        }
        else {
            arr[i] = a;
            cnt++;
        }
    }

    int r = arr[cnt-1] + arr[cnt-2] + arr[cnt-3];

    std::cout << r;

    return 0;
}