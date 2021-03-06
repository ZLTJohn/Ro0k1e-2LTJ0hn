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
    //freopen("data.in", "r", stdin);
    //freopen("test.out", "w", stdout);
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
    Node *temp, *pre;
    pre = head;
    temp = head;

    if (k == 1) {
        for (int i = 1; i < n; i++) {
            pre = pre->next;
        }
    } else {
        for (int i = 1; i < k - 1; i++) {
            pre = pre->next;
        }
    }
    if (m == 1)
        pre = pre->next;
    int num = 0;

    while (num < n) {
        if (m == 1) {
            if (num == n - 1) {
                printf("%d", pre->data);
            } else {
                printf("%d ", pre->data);
            }
            temp = pre;
            pre = pre->next;
            free(temp);
            num++;
        } else {
            for (int i = 1; i < m; i++) {
                pre = pre->next;
            }
            temp = pre->next;
            if (num == n - 1) {
                printf("%d", temp->data);
            } else {
                printf("%d ", temp->data);
            }
            pre->next = temp->next;
            free(temp);
            num++;
        }
    }

    return;
}