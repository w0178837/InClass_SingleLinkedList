// Driver for NumberList class demo

#include <iostream>
#include "NumberList.h"

using namespace std;

int main() {

    NumberList list;

    cout << "Begin Single Linked List Demo" << endl;

    cout << "Test of APPEND method" << endl;

    list.appendNode(1.2);

    list.appendNode(3.4);

    list.appendNode(5.6);

    list.displayList();

    cout << "Test of INSERT method" << endl;

    list.insertNode(1.0);

    list.insertNode(2.0);

    list.insertNode(4.0);

    list.insertNode(6.0);

    list.displayList();

    cout << "Test of DELETE method" << endl;

    list.deleteNode(1.0);

    list.deleteNode(2.0);

    list.deleteNode(4.0);

    list.deleteNode(6.0);

    list.displayList();

    cout << "End Single Linked List Demo" << endl;

    return 0;
}