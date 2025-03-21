#include <conio.h>
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

using namespace std;

typedef struct SinglyNode
{
    int info;                // Lưu thông tin bản thân phần tử
    struct SinglyNode *next; // Lưu địa chỉ của Node đứng sau
} Node;

typedef struct SinglyList
{
    SinglyNode *head; // Lưu địa chỉ Node đầu tiên trong List
    SinglyNode *tail; // Lưu địa chỉ Node cuối cùng trong List
} List;

// Tạo danh sách liên kết đơn rỗng
void initList(List &list)
{
    list.head = nullptr;
    list.tail = nullptr;
}

Node *initNode(int info)
{
    Node *p = new Node(); // Cấp phát động vùng nhớ cho phần tử

    if (p == nullptr)
        exit(0);

    p->info = info;
    p->next = nullptr;

    return p;
}

// Thêm phần tử vào đầu danh sách liên kết đơn
void addHead(List &list, Node *node)
{
    if (list.head == nullptr)
    {
        list.head = node;
        list.tail = node;
    }
    else
    {
        node->next = list.head;
        list.head = node;
    }
}

// Thêm phần tử vào cuối danh sách liên kết đơn
void addTail(List &list, Node *node)
{
    if (list.tail == nullptr)
    {
        list.head = node;
        list.tail = node;
    }
    else
    {
        list.tail->next = node;
        list.tail = node;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    List l0;
    Node *n;
    int i;

    initList(l0);

    cout << "Nhập dữ liệu danh sách đơn:" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << "[" << i << "]";
        n = initNode(i + 1);
        // addHead(l0, n); // Thêm Node vào đầu danh sách liên kết
        // cout << ";Head=" << l0.head->info;
        addTail(l0, n); // Thêm Node vào cuối danh sách liên kết
        cout << ";Tail=" << l0.tail->info;
        cout << endl;
    }

    cout << endl;
    i = 0;

    cout << "Xuất dữ liệu danh sách đơn:" << endl;
    n = l0.head;
    while (n != nullptr)
    {
        cout << "[" << i << "]=" << n->info << endl;
        n = n->next;
        i++;
    }
}
