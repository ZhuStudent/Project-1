#include <iostream>
#include "ListNode.hpp"
using namespace std;

int main()
{
    StudentList list;
    
    list.appendNode(21466, 3.1);
    list.appendNode(25641, 2.5);
    list.deleteNode(21466, 3.1);
    list.appendNode(29675, 4.2);
    list.insertNode(26952, 2.8);
    list.displayList();

    return 0;
}
