/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
class MinStack {
public:
    MinStack(){

    }

    void push(int x){
        val_stack.push(x);
        if(min_stack.empty()||x<=min_stack.top()){  //一定是<=
            min_stack.push(x);
        }
    }

    void pop(){
        if(min_stack.top()==val_stack.top()){
            min_stack.pop();
        }
        val_stack.pop();
    }

    int top(){
        return val_stack.top();
    }

    int getMin(){
        return min_stack.top();
    }

private:
    stack<int> val_stack;
    stack<int> min_stack;
};
// public:
//     /** initialize your data structure here. */
//     MinStack() {
//         vector<int> val;
//     }
    
//     void push(int x) {
//         val.push_back(x);
//     }
    
//     void pop() {
//         val.pop_back();
//     }
    
//     int top() {
//         return val.back();
//     }
    
//     int getMin() {
//         return *min_element(val.begin(), val.end());
//     }
// };
    /**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
    // @lc code=end
