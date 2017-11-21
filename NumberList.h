//
// Header file for NumberList class
//

#ifndef INCLASS_SINGLELINKEDLIST_NUMBERLIST_H
#define INCLASS_SINGLELINKEDLIST_NUMBERLIST_H


class NumberList {

private:
    struct ListNode
    {
        double value; // this is some dummy data. It could be more robust if it needed to be.
        struct ListNode *next; // this is the pointer to the next node
    };

    ListNode *head; // points to the first structure in memory

public:
    NumberList(){head=nullptr;}

    void displayList(); // traverse and display

    void appendNode(double);

    void insertNode(double);

    void deleteNode(double);
};


#endif //INCLASS_SINGLELINKEDLIST_NUMBERLIST_H
