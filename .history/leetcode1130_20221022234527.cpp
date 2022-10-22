#include<queue>
#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> v;
        queue<vector<int>> q;
        q.push({rCenter,cCenter});
        
        
        while(q.size()!=0){
            int n = q.size();
            // for(auto qe : q){
            //     cout << "[" << qe[0] << "," << qe[1] << "]" << endl;
            // }   
            cout << "首先，此时的q长度为：" << q.size() << endl;
            set<vector<int>> v_per_round{};  //把每一轮的坐标存下来
            for(int i = 0; i < n; i++){
                vector<int> v_rc = q.front();
                int left = v_rc[1] - 1, right = v_rc[1] + 1, up = v_rc[0] - 1, down = v_rc[0] + 1;
                if(left>=0){
                    q.push({v_rc[0],left}); 
                    }
                if(right < cols){
                    q.push({v_rc[0],right});
                }
                if(up >= 0){
                    q.push({up,v_rc[1]});
                }
                if(down < rows){
                    q.push({down,v_rc[1]});
                }
                cout << "添加上下左右后q的长度为：" << q.size() << endl;
                q.pop();
                v_per_round.insert(v_rc);
                cout << "弹出一次后: " << q.size() << endl;
                // cout << v_per_round.size() << endl;
            cout << "弹出一轮后：" << q.size() << endl;
            cout << "这一轮的值为： ";
            for(auto s : v_per_round){
                v.push_back(s);
                cout <<"[" <<  s[0] << ": " << s[1] << "] ,  ";
            }
                cout << endl;
            }
        }

        return v;
        
    }
};

int main(){
    obj = Solution();
    obj.allCellsDistOrder(1,3,1,1)



}