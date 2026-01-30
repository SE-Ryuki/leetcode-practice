#include<iostream>
#include<stack>
using namespace std; //名前衝突しないためのstd::を毎回省略できる

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack1;
        for(char c : s){
            if(c == '('|| c == '['|| c == '{'){
                stack1.push(c);
            }
            else{
                if(stack1.empty()) return false;
                char top = stack1.top();
                stack1.pop();
                //対応チェック
                if((c == ')'&& top != '(')||
                   (c == ']' && top != '[') ||
                   (c == '}' && top != '{')) { 
                   return false;

            }
        }
        return stack1.empty();
    }
}
};