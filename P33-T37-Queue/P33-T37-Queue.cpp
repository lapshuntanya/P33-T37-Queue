#include "MyQueue.h"

int main()
{
    myQueue::Queue<int> a;
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
    }
}

