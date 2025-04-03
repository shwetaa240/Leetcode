#include <stack>
using namespace std;

class MyQueue {
public:
    MyQueue() { }
    stack<int> s1;
    stack<int> s2;
    
    void push(int x) {
       s1.push(x);
    }

    int pop() {
        int val;
        if (s2.empty()) {
            int s = s1.size();
            while (s > 0) {  // ✅ Fixed condition (was `s != 0`, now `s > 0`)
                s2.push(s1.top());
                s1.pop();
                s--;
            }
        }
        if (!s2.empty()) {   // ✅ Prevents popping from empty stack
            val = s2.top();
            s2.pop();
        }
        return val;
    }

    int peek() {
        if (s2.empty()) {
            int s = s1.size();
            while (s > 0) {  // ✅ Fixed condition (was `s != 0`, now `s > 0`)
                s2.push(s1.top());
                s1.pop();
                s--;
            }
        }
        if (!s2.empty()) {  // ✅ Prevents accessing an empty stack
            return s2.top();
        }
        return -1;  // ✅ Return a default value if queue is empty
    }

    bool empty() {
       return s1.empty() && s2.empty(); // ✅ Optimized condition
    }
};
