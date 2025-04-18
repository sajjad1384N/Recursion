#include<iostream>
using namespace std;
#include<stack>
class Solution{
public:

    void insertAtBottom(stack<int>& St, int element) {
        if(St.empty()) {
            St.push(element);
            return;
        }
        
        int cur_top_el = St.top();
        St.pop();
        insertAtBottom(St, element);
        St.push(cur_top_el);
    }

    void Reverse(stack<int> &St){
        if(St.empty()) {
            return;
        }
        int top = St.top();
        St.pop();
        
        Reverse(St);
        insertAtBottom(St, top);
    }
};