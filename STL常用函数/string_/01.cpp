#include<iostream>
#include<string>
using namespace std;   

// string和数字互转
int s_num(){
    //string 转 数字 （只有数字部分被转成数字）
    string s = "123jj4";
    int i = stoi(s);
    cout << i << endl;   // 输出123

    //数字 转 string 
    int j = 90;
    string t = to_string(j);
    cout << t << endl;  // 输出90

    return 0;
}


//find 函数  
// 返回的是下标 ， 如果没有找到，返回str.npos
int find_test(){
    string s = "hello";
    auto a = s.find("he");  //如果找到返回的是位置  ， b = 0,表示从0开始是he

    auto pos = s.find("wo");  // pos 是一个很大的值，其实是一个记号  str.npos  (none position 的意思吧）
    if(pos == str.npos){
        cout << "没有找到"
    }

    return 0;
}


int main(){
    find_test();
    return 0;
};