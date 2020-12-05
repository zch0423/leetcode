/*
 * @lc app=leetcode.cn id=232 lang=cpp
 *
 * [232] 用栈实现队列
 */

// @lc code=start
class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        in.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        while(!in.empty()){
            out.push(in.top());
            in.pop();
        }
        int temp = out.top();
        out.pop();
        while(!out.empty()){
            in.push(out.top());
            out.pop();
        }
        return temp;
    }
    
    /** Get the front element. */
    int peek() {
        while (!in.empty())
        {
            out.push(in.top());
            in.pop();
        }
        int temp = out.top();
        while (!out.empty())
        {
            in.push(out.top());
            out.pop();
        }
        return temp;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return in.empty()&&out.empty();
    }
private:
    stack<int> in;
    stack<int> out;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end

