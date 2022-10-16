#include "ListNode.hpp"
#include <iostream>
using namespace std;

StudentList::StudentList()
{
    head = nullptr;
}

void StudentList::appendNode(int num, double num2)
{
    ListNode *newNode;
    ListNode *nodePtr;
    newNode = new ListNode;
    
    newNode -> id = num;
    newNode -> gpa = num2;
    newNode -> next = nullptr;
    
    if(!head)
    head = newNode;
    else
    {
        nodePtr = head;
        
        while(nodePtr -> next)
        nodePtr = nodePtr -> next;
        nodePtr -> next = newNode;
    }
}

void StudentList::displayList() const
{
    ListNode *nodePtr;
    
    nodePtr = head;
    while(nodePtr)
    {
        cout <<"Student ID " << nodePtr -> id <<" GPA " << nodePtr -> gpa << endl;
        nodePtr = nodePtr -> next;
    }
}

void StudentList::deleteNode(int num, double num2)
{
    ListNode *nodePtr;
    ListNode *previousNode = nullptr;
    
    if(!head)
    return;
    if(head -> id == num)
    {
        nodePtr = head -> next;
        delete head;
        head = nodePtr;
    }
    else
    {
        nodePtr = head;
        while(nodePtr != nullptr && nodePtr -> id != num)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr -> next;
        }
        if(nodePtr)
        {
            previousNode -> next = nodePtr -> next;
            delete nodePtr;
        }
    }
}

void StudentList::insertNode(int num, double num2)
{
    ListNode *newNode;
    ListNode *nodePtr;
    ListNode *previousNode;
    
    newNode = new ListNode;    
    newNode->id = num;
    newNode->gpa = num2;
    newNode->next = nullptr;
    
    if(!head)                   
    {
        head = newNode;
        
    }
    else
    {                       
        nodePtr = head;
        previousNode = nullptr;
        
        while(nodePtr->id < num && nodePtr != nullptr)
        {  
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }                                   

        if(!previousNode)        
        {
            head = newNode;
            newNode->next = nodePtr;        
        }
        else
        {                    
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
}
