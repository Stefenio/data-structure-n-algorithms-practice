#include <iostream>

using namespace std;

typedef struct DoublyNode
{
    int info;                // Lưu thông tin bản thân phần tử
    struct DoublyNode *prev; // Lưu địa chỉ của Node đứng trước
    struct DoublyNode *next; // Lưu địa chỉ của Node đứng sau
} Node;

typedef struct DoublyList
{
    DoublyNode *head; // Lưu địa chỉ Node đầu tiên trong List
    DoublyNode *tail; // Lưu địa chỉ Node cuối cùng trong List
} List;

int main()
{
    List l0;
    Node *n;
    int x;
}
