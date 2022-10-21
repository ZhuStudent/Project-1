#ifndef ListNode_hpp
#define ListNode_hpp

class StudentList
{
    private:
    struct ListNode
    {
        int id;
        double gpa;
        struct ListNode *next;
    };
    ListNode *head;
    
    public:
    StudentList();
    ~StudentList();
    void appendNode(int, double);
    void insertNode(int, double);
    void deleteNode(int, double);
    void displayList() const;
};
#endif
