#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    bool flag = false;

    int mx = arr[0];

    for (int i = 0; i < n; i++){
        if (arr[i] > mx) 
        {
            mx = arr[i];
            flag = false;
        }

        else if (arr[i] == mx) flag = true;
    }

    if (flag == true) std::cout << -1;
    else std::cout << mx;

    
    return 0;
}