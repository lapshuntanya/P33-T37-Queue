#pragma once
#include "MyQueue.h"

namespace myQueue {

	template<typename U>
	class PriorityQueue : public Queue<U>
	{
	public:
		void push_back(U value) {
			Node<U>* el = new Node<U>(value);

			if (Queue<U>::isEmpty()) {
				Queue<U>::head = Queue<U>::current = el;
			}
			else {
				Node<U>* p = Queue<U>::head;
				while (p != nullptr && value < p->info)
					p = p->next;

				if (p == Queue<U>::head) { //Перед головою
					Queue<U>::head->prev = el;
					el->next = Queue<U>::head;

					Queue<U>::head = Queue<U>::head->prev;
				}
				else if (p == nullptr) { //В кінець черги
					Queue<U>::current->next = el;
					el->prev = Queue<U>::current;

					Queue<U>::current = el;
				}
				else { //В середину черги
					Node<U>* pPrev = p->prev;

					pPrev->next = el;
					el->prev = pPrev;

					p->prev = el;
					el->next = p;
				}
			}
		}
	};

}
