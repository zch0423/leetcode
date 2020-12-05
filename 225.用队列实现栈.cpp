/*
 * @lc app=leetcode.cn id=225 lang=cpp
 *
 * [225] 用队列实现栈
 */

// @lc code=start
class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {

    }

    void push(int x)
    {
        in.push(x);
        while (!out.empty())
        {
            in.push(out.front());
            out.pop();
        }
        swap(in, out);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop()
    {
        int a = out.front();
        out.pop();
        return a;
    }

    /** Get the top element. */
    int top()
    {
        return out.front();
    }

    /** Returns whether the stack is empty. */
    bool empty()
    {
        return in.empty() && out.empty();
    }
private : 
queue<int> in;
queue<int> out;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end

