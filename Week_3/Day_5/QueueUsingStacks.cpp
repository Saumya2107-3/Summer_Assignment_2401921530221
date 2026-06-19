#include <stack>
using namespace std;

class MyQueue {
private:
    stack<int> input;
    stack<int> output;

   
    void moveInputToOutput() {
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
    }

public:
    MyQueue() {}
    
    
    void push(int x) {
        input.push(x);
    }
    
    // Sabse aage waale element ko nikalna
    int pop() {
        moveInputToOutput(); 
        int val = output.top();
        output.pop();
        return val;
    }
    
    
    int peek() {
        moveInputToOutput(); 
        return output.top();
    }
    
    
    bool empty() {
        return input.empty() && output.empty();
    }
};