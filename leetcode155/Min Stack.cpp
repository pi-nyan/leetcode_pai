class MinStack {
public:
	/** initialize your data structure here. */
	MinStack() {

	}

	void push(int x) {
		mins.push(x);
		if (mins.top() <= mine.top())
			mine.push(x);
	}

	void pop() {
		if (mins.top() == mine.top())
		{
			mine.pop();
		}
		mins.pop();

	}

	int top() {
		return mins.top();
	}

	int getMin() {
		return mine.top();
	}
private:
	stack<int> mins;
	stack<int> mine;
};

/**
* Your MinStack object will be instantiated and called as such:
* MinStack obj = new MinStack();
* obj.push(x);
* obj.pop();
* int param_3 = obj.top();
* int param_4 = obj.getMin();
*/