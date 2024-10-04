#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요
    int n;
    int cnt = 0;
    std::cin >> n;


    for (int i = 0; i < n; i++){
        int arr[4];
        for (int j = 0; j < 4; j++){
            std::cin >> arr[j];
        }
        int sum = 0;
        for (int j = 0; j < 4; j++){
            sum += arr[j];
        }
        if ((float)sum / 4 >= 60) {
            std::cout << "pass" << std::endl;
            cnt++;
        }
        else {
            std::cout << "fail" << std::endl;
        }

        }

    std::cout << cnt;


    return 0;
}