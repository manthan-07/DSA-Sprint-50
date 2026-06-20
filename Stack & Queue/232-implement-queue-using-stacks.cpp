// LeetCode 232: Implement Queue using Stacks

class MyQueue {
    stack<int> in, out;

    void queue(){
        if(out.empty()){
            while(!in.empty()){
                out.push(in.top());
                in.pop();
            }
        }
    }

public:
    MyQueue() {}
    
    void push(int x) {
        in.push(x);
    }
    
    int pop() {
        queue();
        int front = out.top();
        out.pop();
        return front;
    }
    
    int peek() {
        queue();
        return out.top();
    }
    
    bool empty() {
        return in.empty() && out.empty();
    }
};
