//
// Created by Kishi Kishore N on 07/12/25.
//

#include <iostream>
#include <unordered_map>
#include <vector>
#include <unordered_set>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> map;

        for(int i=0; i<nums.size(); i++){
            if(map.find(target-nums[i])!= map.end()){
                res.push_back(map[target-nums[i]]);
                res.push_back(i);
                return res;
            }else{
                map[nums[i]]=i;
            }
        }

        return res;

    }
};

int main() {

    Solution s;
    vector<int> nums={2,7,11,15};
    int target = 9;
    vector<int> res = s.twoSum(nums,target);
    for (int i:res) {
        cout<<i<<",";
    }
}
