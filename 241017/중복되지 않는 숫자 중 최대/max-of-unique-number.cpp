#include <iostream>
#include <climits>
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

    int mx = INT_MIN;

    for (int i = 0; i < n; i++){
        if (arr[i] > mx) 
        {
            int cnt = 0;
            bool isMult = false;
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) cnt++;
                if (cnt >= 2) {
                    isMult = true;
                    break;
                } 
            }

            if (isMult == false) {
                mx = arr[i];
                flag = false;
            }
        }

        else if (arr[i] == mx) flag = true;
    }

    if (flag == true) std::cout << -1;
    else std::cout << mx;

    
    return 0;
}