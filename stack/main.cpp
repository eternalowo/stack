#include <iostream>
#include <chrono>

#include "static_stack.h"
#include "dynamic_stack.h"

int main() {

	// static stack 10 size, push
	stack::Static_Stack<int> st_ex_10(10);
	auto t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 10; ++i) { st_ex_10.push(100); };
	auto t2 = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double> time = (t2 - t1);
	std::cout << "static stack 10 size, push time: " << time.count() << std::endl;

	// static stack 100 size, push
	stack::Static_Stack<int> st_ex_100(100);
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 100; ++i) { st_ex_100.push(100); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "static stack 100 size, push time: " << time.count() << std::endl;

	// static stack 1000 size, push
	stack::Static_Stack<int> st_ex_1000(1'000);
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 1'000; ++i) { st_ex_1000.push(100); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "static stack 1'000 size, push time: " << time.count() << std::endl;

	// static stack 10000 size, push
	stack::Static_Stack<int> st_ex_10000(10'000);
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 10'000; ++i) { st_ex_10000.push(100); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "static stack 10'000 size, push time: " << time.count() << std::endl;

	// static stack 100000 size, push
	stack::Static_Stack<int> st_ex_100000(100'000);
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 100'000; ++i) { st_ex_100000.push(100); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "static stack 100'000 size, push time: " << time.count() << std::endl;

	// static stack 1000000 size, push
	stack::Static_Stack<int> st_ex_1000000(1'000'000);
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 1'000'000; ++i) { st_ex_1000000.push(100); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "static stack 1'000'000 size, push time: " << time.count() << std::endl;

	// static stack 10000000 size, push
	stack::Static_Stack<int> st_ex_10000000(10'000'000);
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 10'000'000; ++i) { st_ex_10000000.push(100); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "static stack 10'000'000 size, push time: " << time.count() << std::endl;

	// static stack 100000000 size, push
	stack::Static_Stack<int> st_ex_100000000(100'000'000);
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 100'000'000; ++i) { st_ex_100000000.push(100); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "static stack 100'000'000 size, push time: " << time.count() << std::endl;

	std::cout << std::endl;



	// static stack 10 size, pop
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 9; ++i) { st_ex_10.pop();};
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "static stack 10 size, pop time: " << time.count() << std::endl;

	// static stack 100 size, pop
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 100; ++i) { st_ex_100.pop(); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "static stack 100 size, pop time: " << time.count() << std::endl;

	// static stack 1000 size, pop
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 1'000; ++i) { st_ex_1000.pop(); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "static stack 1'000 size, pop time: " << time.count() << std::endl;

	// static stack 10000 size, pop
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 10'000; ++i) { st_ex_10000.pop(); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "static stack 10'000 size, pop time: " << time.count() << std::endl;

	// static stack 100000 size, pop
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 100'000; ++i) { st_ex_100000.pop(); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "static stack 100'000 size, pop time: " << time.count() << std::endl;

	// static stack 1000000 size, pop
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 1'000'000; ++i) { st_ex_1000000.pop(); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "static stack 1'000'000 size, pop time: " << time.count() << std::endl;

	// static stack 10000000 size, pop
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 10'000'000; ++i) { st_ex_10000000.pop(); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "static stack 10'000'000 size, pop time: " << time.count() << std::endl;

	// static stack 100000000 size, pop
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 100'000'000; ++i) { st_ex_100000000.pop(); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "static stack 100'000'000 size, pop time: " << time.count() << std::endl;




	std::cout << std::endl;

	// dynamic stack 10 size, push
	stack::Dynamic_Stack<int> dyn_ex_10;
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 10; ++i) { dyn_ex_10.push(100); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "dynamic stack 10 size, push time: " << time.count() << std::endl;

	// dynamic stack 100 size, push
	stack::Dynamic_Stack<int> dyn_ex_100;
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 100; ++i) { dyn_ex_100.push(100); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "dynamic stack 100 size, push time: " << time.count() << std::endl;

	// dynamic stack 1000 size, push
	stack::Dynamic_Stack<int> dyn_ex_1000;
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 1'000; ++i) { dyn_ex_1000.push(100); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "dynamic stack 1'000 size, push time: " << time.count() << std::endl;

	// dynamic stack 10000 size, push
	stack::Dynamic_Stack<int> dyn_ex_10000;
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 10'000; ++i) { dyn_ex_10000.push(100); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "dynamic stack 10'000 size, push time: " << time.count() << std::endl;

	// dynamic stack 100000 size, push
	stack::Dynamic_Stack<int> dyn_ex_100000;
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 100'000; ++i) { dyn_ex_100000.push(100); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "dynamic stack 100'000 size, push time: " << time.count() << std::endl;

	// dynamic stack 1000000 size, push
	stack::Dynamic_Stack<int> dyn_ex_1000000;
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 1'000'000; ++i) { dyn_ex_1000000.push(100); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "dynamic stack 1'000'000 size, push time: " << time.count() << std::endl;

	// dynamic stack 10000000 size, push
	stack::Dynamic_Stack<int> dyn_ex_10000000;
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 10'000'000; ++i) { dyn_ex_10000000.push(100); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "dynamic stack 10'000'000 size, push time: " << time.count() << std::endl;

	// dynamic stack 100000000 size, push
	stack::Dynamic_Stack<int> dyn_ex_100000000;
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 100'000'000; ++i) { dyn_ex_100000000.push(100); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "dynamic stack 100'000'000 size, push time: " << time.count() << std::endl;



	std::cout << std::endl;

	// dynamic stack 10 size, pop
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 9; ++i) { dyn_ex_10.pop(); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "dynamic stack 10 size, pop time: " << time.count() << std::endl;

	// dynamic stack 100 size, pop
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 100; ++i) { dyn_ex_100.pop(); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "dynamic stack 100 size, pop time: " << time.count() << std::endl;

	// dynamic stack 1000 size, pop
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 1'000; ++i) { dyn_ex_1000.pop(); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "dynamic stack 1'000 size, pop time : " << time.count() << std::endl;

	// dynamic stack 10000 size, pop
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 10'000; ++i) { dyn_ex_10000.pop(); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "dynamic stack 10'000 size, pop time: " << time.count() << std::endl;

	// dynamic stack 100000 size, pop
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 100'000; ++i) { dyn_ex_100000.pop(); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "dynamic stack 100'000 size, pop time: " << time.count() << std::endl;

	// dynamic stack 1000000 size, pop
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 1'000'000; ++i) { dyn_ex_1000000.pop(); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "dynamic stack 1'000'000 size, pop time: " << time.count() << std::endl;

	// dynamic stack 10000000 size, pop
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 10'000'000; ++i) { dyn_ex_10000000.pop(); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "dynamic stack 10'000'000 size, pop time: " << time.count() << std::endl;

	// dynamic stack 100000000 size, pop
	t1 = std::chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 100'000'000; ++i) { dyn_ex_100000000.pop(); };
	t2 = std::chrono::high_resolution_clock::now();

	time = (t2 - t1);
	std::cout << "dynamic stack 100'000'000 size, pop time: " << time.count() << std::endl;
	std::cout << std::endl;

	return 0;
}