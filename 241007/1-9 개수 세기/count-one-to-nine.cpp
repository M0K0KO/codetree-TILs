#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin >> n;

    int nums[n];
    int num_counts[10] = {};

    for (int i = 0; i < n; i++){
        std::cin >> nums[i];
        num_counts[nums[i]]++;
    }

    for (int i = 1; i < 10; i++){
        std::cout << num_counts[i] << std::endl;
    }

    return 0;
}