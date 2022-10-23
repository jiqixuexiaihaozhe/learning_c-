#include<iostream>
#include<vector>
#include<queue>
using namespace std;

//这个方法是自己写的，也太复杂了吧！
class Solution1 {
public:
    int subarraySum(vector<int>& nums, int k) {
        queue<int> q;
        q.push(nums[0]);
        int res = 0;
        if(nums.size()==1){
            if(nums[0] == k){
                res = 1;
            }
            return res;
        }

        int i = 1;    
        while(q.size() && i < nums.size()){
            int n = q.size();
            for(int j = 0; j < n; j++){
                if(q.front() == k){
                    res++;
                }
                q.push(q.front() + nums[i]);
                q.pop();
            }
            q.push(nums[i]);
            i++;
        }

        for(int i = 0; i < q.size(); i++){
            if(q.front() == k){
                res++;
            }
            q.pop();
        }

        
    return res;
    }
};


class Solution2 {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        for (int start = 0; start < nums.size(); ++start) {
            int sum = 0;
            for (int end = start; end >= 0; --end) {
                sum += nums[end];
                if (sum == k) {
                    count++;
                }
            }
        }
        return count;
    }
};

int main(){
    vector<int> v = {4,2,3,4};
    // vector<int> v = {1,1,1};
    int k = 4;

    Solution obj;
    obj.subarraySum(v,k);

};

