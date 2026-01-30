#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums;

    for(int i=0; i<3; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end(), greater<int>());

    if(nums[0] == nums[2]) cout << 10000+1000*nums[0] << endl;
    else if(nums[0] == nums[1]) cout << 1000+100*nums[0] << endl;
    else if(nums[1] == nums[2]) cout << 1000+100*nums[1] << endl;
    else cout << 100*nums[0] << endl;
}