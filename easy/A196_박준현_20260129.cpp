#include <iostream>
#include <vector>

using namespace std;

int main() {
    int count, cmp_num, result = 0;
    vector<int> nums;
    cin >> count;

    for(int i=0; i<count; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    cin >> cmp_num;

    for(int i=0; i<count; i++) {
        if(nums[i] == cmp_num) result++;
    }
    cout << result;
}