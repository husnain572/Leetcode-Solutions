
class MyStack {
private:
    std::deque<int> st; // Use deque to implement stack

public:
    MyStack() {
        // Constructor initializes an empty stack
    }
    
    void push(int x) {
        st.push_back(x); 
    }
    
    int pop() {
        int topElement = st.back(); // Get the last element
        st.pop_back(); // Remove it
        return topElement;
    }
    
    int top() {
        return st.back(); // Return the last element
    }
    
    bool empty() {
        return st.empty(); // Check if the deque is empty
    }
};