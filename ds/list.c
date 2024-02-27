#include <stdio.h>
#include <stdlib.h>

struct node
{
    int v;
    struct node *next;
};
typedef struct node Node; // alias "Node"
Node *createNode(int v);  // struct node* creatNode(int v)
void showList(Node *head);
void push(Node **head, Node **tail, int v);
int pop(Node **head);
void enQ(Node **head, Node **tail, int v);
int deQ(Node **head, Node **tail);

void print(Node *head, Node *tail);

int main(int argc, char argv[])
{

    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < 5; i++)
    {
        push(&head, &tail, i);
    }
    print(head, tail);

    printf("\npop -> %d\n", pop(&head));
    print(head, tail);

    enQ(&head, &tail, 777);
    print(head, tail);

   
     printf("\ndeQ -> %d\n",  deQ(&head,&tail));
     print(head, tail);


    return 0;
}

void print(Node *head, Node *tail)
{
    printf("head => %p v=%d\n", &head, head->v);
    printf("tail => %p v=%d\n", &tail, tail->v);
    showList(head);
}

void showList(Node *head)
{
    while (head != NULL)
    {
        printf("address %p", head);
        printf(" = value %d", head->v);
        printf(" => next %p", head->next);
        if (head->next != NULL)
        {
            printf("next %d\n", head->next->v);
        }
        head = head->next;
    }
}

Node *createNode(int v)
{
    Node *n = malloc(sizeof(Node));
    if (n == NULL)
    {
        printf("Memory Allocation Error\n");
        exit(1);
    }
    n->next = NULL;
    n->v = v;
    return n;
}

void push(Node **head, Node **tail, int v)
{
    Node *x = createNode(v);

    if (*head != NULL)
    {
        x->next = *head;

        if ((*head)->next == NULL)
        {
            *tail = *head;
        }
    }

    *head = x;
}

int pop(Node **head)
{

    Node *x = *head;
    int v = x->v;
    *head = (*head)->next;

    free(x);

    return v;
}

void enQ(Node **head, Node **tail, int v)
{
    Node *x = createNode(v);

    if (*tail != NULL)
    {
        (*tail)->next = x;
    }
    *tail = x;
    if (*head == NULL)
    {
        *head = *tail;
    }
}

int deQ(Node **head, Node **tail)
{

    int v = pop(head);
    if (*head == NULL)
    {
        *tail = *head;
    }

    return v;
}