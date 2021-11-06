#include <stdio.h>
#include <stdlib.h>

// queue program to implement a queue

// structure of a node
struct node
{
    int data;
    struct node *next;
};

// function to create a node
struct node *create_node(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// function to create a queue
struct node *create_queue()
{
    return NULL;
}

// function to add a node to the queue
struct node *enqueue(struct node *queue, int data)
{
    struct node *new_node = create_node(data);
    if (queue == NULL)
    {
        queue = new_node;
    }
    else
    {
        struct node *temp = queue;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    return queue;
}

// function to remove a node from the queue
struct node *dequeue(struct node *queue)
{
    if (queue == NULL)
    {
        printf("Queue is empty\n");
        return NULL;
    }
    else
    {
        struct node *temp = queue;
        queue = queue->next;
        free(temp);
        return queue;
    }
}

// function to print the queue
void print_queue(struct node *queue)
{
    if (queue == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        struct node *temp = queue;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

// function to check if the queue is empty
int is_empty(struct node *queue)
{
    if (queue == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// function to check if the queue is full
int is_full(struct node *queue)
{
    return 0;
}

// function to get the size of the queue
int get_size(struct node *queue)
{
    int size = 0;
    struct node *temp = queue;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}

// function to get the front of the queue
int get_front(struct node *queue)
{
    if (queue == NULL)
    {
        printf("Queue is empty\n");
        return -1;
    }
    else
    {
        return queue->data;
    }
}

// function to get the rear of the queue
int get_rear(struct node *queue)
{
    if (queue == NULL)
    {
        printf("Queue is empty\n");
        return -1;
    }
    else
    {
        struct node *temp = queue;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        return temp->data;
    }
}

// function to get the kth element from the queue
int get_kth(struct node *queue, int k)
{
    if (queue == NULL)
    {
        printf("Queue is empty\n");
        return -1;
    }
    else
    {
        struct node *temp = queue;
        int i = 0;
        while (i < k)
        {
            temp = temp->next;
            i++;
        }
        return temp->data;
    }
}

// main function
int main()
{
    struct node *queue = create_queue();
    queue = enqueue(queue, 1);
    queue = enqueue(queue, 2);
    queue = enqueue(queue, 3);
    queue = enqueue(queue, 4);
    queue = enqueue(queue, 5);
    queue = enqueue(queue, 6);
    queue = enqueue(queue, 7);
    queue = enqueue(queue, 8);
    queue = enqueue(queue, 9);
    queue = enqueue(queue, 10);

    print_queue(queue);
    queue = dequeue(queue);

    print_queue(queue);
    queue = dequeue(queue);

    print_queue(queue);
    queue = dequeue(queue);

    print_queue(queue);
    queue = dequeue(queue);

    print_queue(queue);
    queue = dequeue(queue);

    print_queue(queue);
    queue = dequeue(queue);

    print_queue(queue);
    queue = dequeue(queue);

    print_queue(queue);
    queue = dequeue(queue);

    print_queue(queue);
    queue = dequeue(queue);

    print_queue(queue);
    queue = dequeue(queue);


    return 0;
}