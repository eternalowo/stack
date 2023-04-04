#ifndef STACK_STACK_INTERFACE_H_
#define STACK_STACK_INTERFACE_H_

namespace stack {

template<typename type>
class Stack {

public:
	virtual void push(type elem) = 0;
	virtual type pop() = 0;
	virtual type peek() const = 0;
	virtual bool is_empty() const = 0;
};

}; // namespace stack

#endif
