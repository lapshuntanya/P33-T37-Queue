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
			return head == nullptr;
		}//реалізація

		U first()const { 
			if (isEmpty()) throw "MyQueue is empty!";

			return head->info;
		}//реалізація

		void push_back(U value) { 
			Node<U>* el = new Node<U>(value); //info=value, next = prev = nullptr

			if (isEmpty()) head = current = el;
			else {
				current->next = el;
				el->prev = current;
				current = el;
			}
		}//реалізація

		void pop_front() { 
			if (!isEmpty()) {
				if (head != current) {
					head = head->next;
					delete head->prev;
					head->prev = nullptr;
				}
				else {
					delete head;
					head = current = nullptr;
				}
			}
		}//реалізація

		void show()const { 
			if (isEmpty()) {
				cout << "MyQueue is empty!\n"; return;
			}
			Node<U>* p = head;
			while (p != nullptr) {
				cout << p->info << " ";
				p = p->next;
			}
			cout << endl;
		}//реалізація
	};
}
