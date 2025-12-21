class MyStack {
private:
    std::queue<int> q1;
    std::queue<int> q2;
    int sz;

public:
    MyStack() {
        sz = 0;
    }
    
    void push(int x) {
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        q1.push(x);

        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }

        sz++;
    }
    
    int pop() {
        int val = q1.front();
        q1.pop();
        sz--;
        return val;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return sz == 0;
    }
};
