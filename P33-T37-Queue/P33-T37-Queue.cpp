#include "MyQueue.h"
#include "MyPriorityQueue.h"

int main()
{
   /* myQueue::Queue<int> a;
    a.show();

    a.push_back(9);
    a.push_back(7);
    a.push_back(3);

    //Обробка черги
    while (!a.isEmpty()) {
        cout << "First: " << a.first() << endl;
        a.show();
        cout << endl;

        a.pop_front();
    }*/

    myQueue::PriorityQueue<int> a;

    a.push_back(6);
    a.push_back(4);
    a.push_back(7);
    a.push_back(5);
    a.push_back(3);
    a.show(); // 7 6 5 4 3 

    //Обробка черги
    while (!a.isEmpty()) {
        cout << "First: " << a.first() << endl;
        a.show();
        cout << endl;

        a.pop_front();
    }
}

