class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        // Push element onto stack s2
        s2.push(x);
    }
    
    int pop() {
        if (s1.empty()) {
            // Move all elements from s2 to s1 to reverse the order
            while (!s2.empty()) {
                s1.push(s2.top());
                s2.pop();
            }
        }
        // Pop the element from s1 which is the front of the queue
        int k = s1.top();
        s1.pop();
        return k;
    }
    
    int peek() {
        if (s1.empty()) {
            // Move all elements from s2 to s1 to reverse the order
            while (!s2.empty()) {
                s1.push(s2.top());
                s2.pop();
            }
        }
        // Return the element from s1 which is the front of the queue
        return s1.top();
    }
    
    bool empty() {
        // Queue is empty if both stacks are empty
        return s1.empty() && s2.empty();
    }
};
