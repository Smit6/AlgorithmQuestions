#include <iostream>
#include <vector>
#include<map>

using std::cout;
using std::endl;
using std::map;
using std::vector;

vector<int> twoSum(vector<int>& nums, int target) {
  map<int, int> nums_;
  vector<int> ret;
  int diff = 0;
  map<int, int>::iterator it;
  for (unsigned int i = 0; i < nums.size(); i++) {
    nums_[nums[i]] = i;
  }
  for (unsigned int i = 0; i < nums.size(); i++) {
    diff = target - nums[i];
    it = nums_.find(diff);
    if (it != nums_.end() && nums_[diff] != i) {
      ret.push_back(i);
      ret.push_back(nums_[diff]);
      return ret;
    }
  }
  return ret;
}

int main() {
  // vector<int> nums = {2, 7, 11, 15};
  // int target = 9;
  vector<int> nums = {3, 2, 4};
  int target = 6;
  vector<int> result = twoSum(nums, target);
  for (unsigned int i = 0; i < result.size(); i++) {
    cout << result[i] << endl;
  }
  return 0;
}
