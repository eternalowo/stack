#ifndef STACK_STATIC_STACK_H_
#define STACK_STATIC_STACK_H_

#include <vector>
#include <iostream>

#include "stack_interface.h"

namespace stack {

template<typename type>
class Static_Stack : public Stack<type> {

public:

	explicit Static_Stack(const int size = 16) {
		if (size < 0) { throw std::invalid_argument("invalid size"); };
		capacity = size;
		stack_data.resize(capacity);
		top = -1;
	};

	void push(type elem) override {
		if (is_full()) { throw std::invalid_argument("stack is full"); };
		stack_data[++top] = elem;
	};

	type pop() override {
		if (is_empty()) { throw std::invalid_argument("stack is empty"); };
		type result = stack_data[top];
		stack_data[top--] = NULL;
		return result;
	};

	type peek() const override {
		return stack_data[top];
	};

	bool is_empty() const override {
		return top == -1 ? true : false;
	};

	bool is_full() const {
		return top == capacity - 1 ? true : false;
	};

	friend std::ostream& operator<< (std::ostream& out, const Static_Stack<type>& st_stack) {
		out << "stack values : ( ";
		for (size_t i = 0; i < st_stack.top; ++i) {
			out << st_stack.stack_data[i] << ", ";
		}
		out << st_stack.stack_data[st_stack.top] << " )";
		return out;
	}

private:

	int top, capacity;
	std::vector<type> stack_data;

};

}; // namespace stack

#endif
