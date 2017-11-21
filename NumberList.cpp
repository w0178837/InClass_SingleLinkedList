//
// Created by inet2005 on 11/21/17.
//

#include <iostream>
#include "NumberList.h"

using namespace std;

void NumberList::displayList() {
    ListNode *nodePtr; // where we are in the list
    nodePtr = head;
    while(nodePtr)
    {
        cout << nodePtr->value << endl;
        nodePtr = nodePtr->next;
    }
} // end displayList()

void NumberList::appendNode(double num) {
    // create a new node and store data in it
    // if there are no nodes, make this the first node
    // else, traverse to lists end and append

    // new node
    ListNode *newNode;
    newNode = new ListNode;
    newNode->value = num; // fill with data
    newNode->next = nullptr; //

    ListNode *nodePtr; // where I am in the list
    nodePtr = head;

    if(nodePtr == nullptr)
    {
        head = newNode;
    } else {
        while(nodePtr->next) // if we aren't at the end of the list, get there
        {
            nodePtr = nodePtr->next;
        }
        nodePtr->next = newNode; // we've appended the newNode to the end of the list
    }
} // end appendNode()

void NumberList::insertNode(double num) {
    // create a new node and store data in it
    // if there are no nodes, make this the first node
    // else, traverse to ordered spot in list and insert

    // new node
    ListNode *newNode;
    newNode = new ListNode;
    newNode->value = num; // fill with data
    newNode->next = nullptr; //

    ListNode *nodePtr; // where I am in the list
    ListNode *prevNode;

    if(head == nullptr)
    {
        head = newNode;
    } else {
        nodePtr = head;
        prevNode = nullptr;

        while(nodePtr != nullptr && (nodePtr->value < num))
            // if we aren't at the end of the list and the current node is less than the number to insert
        {
            prevNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        if(prevNode == nullptr) // at beginning of list. New node is to be first node
        {
            head = newNode;
            newNode->next = nodePtr;
        } else { // insert before the current node
            prevNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
} // end insertNode

void NumberList::deleteNode(double num) {
    // check list isn't empty and you have a target match
    // remove target without breaking chain
    // delete the node
    ListNode *nodePtr;
    ListNode *prevNode = nullptr;

    if(!head){ return;}

    if(head->value == num) // target is first item in list
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    }
    else // target is either in the middle or end
    {
        nodePtr = head;
        while((nodePtr != nullptr) && (nodePtr->value != num))
        {
            prevNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        if(nodePtr)
        {
            if(prevNode)
                prevNode->next = nodePtr->next;
            delete nodePtr;
        }
    }
}
