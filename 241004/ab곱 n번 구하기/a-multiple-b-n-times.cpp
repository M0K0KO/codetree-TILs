#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std:cin >> n;

    for (int i = 0; i < n; i++){
        int a,b;
        std::cin >> a >> b;
        
        int prod = 1;
        for (int j = a; j <= b; j++){
            prod *= j;
        }
        std::cout << prod << std::endl;
    }

    return 0;
}