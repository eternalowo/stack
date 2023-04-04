#ifndef STACK_DYNAMIC_STACK_H_
#define STACK_DYNAMIC_STACK_H_

#include <vector>
#include <iostream>

#include "stack_interface.h"

namespace stack {

	template<typename type>
	class Dynamic_Stack : public Stack<type> {

	public:

		Dynamic_Stack(){ top = -1; };

		void push(type elem) override {
			stack_data.push_back(elem);
			top++;
		};

		type pop() override {
			if (is_empty()) { throw std::invalid_argument("stack is empty"); };
			type result = stack_data[top--];
			stack_data.pop_back();
			return result;
		};

		type peek() const override {
			return stack_data[top];
		};

		bool is_empty() const override {
			return top == -1 ? true : false;
		};

		friend std::ostream& operator<< (std::ostream& out, const Dynamic_Stack<type>& dyn_stack) {
			out << "stack values : ( ";
			for (size_t i = 0; i < dyn_stack.top; ++i) {
				out << dyn_stack.stack_data[i] << ", ";
			}
			out << dyn_stack.stack_data[dyn_stack.top] << " )";
			return out;
		}

	private:

		int top;
		std::vector<type> stack_data;

	};

}; // namespace stack

#endif
