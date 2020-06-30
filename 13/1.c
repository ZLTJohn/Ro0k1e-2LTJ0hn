Node *temp, *new_node, *head;
int i;

// ������һ�������ڵ㲢������
temp = (Node*)malloc(sizeof(Node));
head = temp;
head->data = 1;

// ������ 2 ���� n �������ڵ㲢������
for (i = 2; i <= n; i++) {
    new_node = (Node*)malloc(sizeof(Node));
    new_node->data = i;
    temp->next = new_node;
    temp = new_node;
}

// ���һ���ڵ�ָ��ͷ������ѭ������
temp->next = head;

return head;
}

void count_off(Node* head, int n, int k, int m)
{
    Node* temp = head;
    if (k == 1) {
        for (int i = 1; i < n; i++) {
            temp = temp->next;
        }
    } else {
        for (int i = 1; i < k - 1; i++) {
            temp = temp->next;
        }
    }
    int num = 0;
    int count = 0;
    while (count < n) {
        num++;
        if (num == m) {
            count++;
            if (count == n) {
                printf("%d", temp->next->data);
            } else {
                printf("%d ", temp->next->data);
            }

            temp->next = temp->next->next;

            num = 0;
        } else {

            temp = temp->next;
        }
    }
    return;
}
