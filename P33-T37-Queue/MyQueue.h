#pragma once
#include <iostream>
using std::cout;
using std::endl;

namespace myQueue {
	template <typename T>
	class Node {
	public:
		T info;
		Node* next;
		Node* prev;

		Node(T value) {
			info = value;
			next = prev = nullptr;
		}
	};

	//Queue - FIFO = first in, first out
	template <typename U>
	class Queue {
	protected:
		Node<U>* head;
		Node<U>* current;
	public:
		Queue() {
			head = current = nullptr;
		}
		~Queue() {   }//реалізація

		bool isEmpty()const { 

		}//реалізація
		U first()const { ... }//реалізація

		void push_back(U value) { ... }//реалізація
		void pop_front() { ... }//реалізація

		void show()const { ... }//реалізація
	};
}
