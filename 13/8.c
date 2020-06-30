#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node* next;
} Node;

Node* circle_create(int n);
void count_off(Node* head, int n, int k, int m);

int main()
{
    //    freopen("data.in", "r", stdin);
    //    freopen("test.out", "w", stdout);
    int n, k, m;
    scanf("%d%d%d", &n, &k, &m);
    Node* head = circle_create(n);
    count_off(head, n, k, m);
    return 0;
}

Node* circle_create(int n)
{
    Node *temp, *new_node, *head;
    int i;

    // ´´½¨µÚÒ»¸öÁ´±í½Úµã²¢¼ÓÊý¾Ý
    temp = (Node*)malloc(sizeof(Node));
    head = temp;
    head->data = 1;

    // ´´½¨µÚ 2 µ½µÚ n ¸öÁ´±í½Úµã²¢¼ÓÊý¾Ý
    for (i = 2; i <= n; i++) {
        new_node = (Node*)malloc(sizeof(Node));
        new_node->data = i;
        temp->next = new_node;
        temp = new_node;
    }

    // ×îºóÒ»¸ö½ÚµãÖ¸ÏòÍ·²¿¹¹³ÉÑ­»·Á´±í
    temp->next = head;

    return head;
}

void count_off(Node* head, int n, int k, int m)
{
    int i;
    int count;
    Node* pre;
    Node* temp;
    Node* out;
    pre = head;
    count = 0;
    if (k == 1) {
        for (i = 1; i < n; i++) {
            pre = pre->next;
        }
    } else {
        for (i = 1; i < k - 1; i++) {
            pre = pre->next;
        }
    }
    temp = pre->next;
    while (count < n) {
        if (m != 1) {
            for (i = 1; i < m - 1; i++) {
                temp = temp->next;
            }
            pre = temp;
            temp = temp->next;
        }
        printf("%d", temp->data);
        out = temp;
        temp = temp->next;
        pre->next = temp;
        free(out);
        if (count != n) {
            printf(" ");
        }
        count++;
    }
    return;
}