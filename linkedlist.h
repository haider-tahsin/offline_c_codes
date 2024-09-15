#include <stdio.h>
#include <stdlib.h>


// typedef struct Node
// {
//     int data;
//     char name;
//     // add *next and *prev here
// } Node;

typedef struct Node
{
    int data;
    char name;
    // add *next and *prev here
} Node;



typedef struct
{
    // add Node* head, tail, current_position and other necessary fields here
    
} LinkedList;


void init_linkedlist(LinkedList *list)
{
    printf("implement init_linkedlist\n");
    // initialize head, tail with null
}


void clear(LinkedList *list)
{
    printf("Implement clear\n");
    // traverse the list and free each node
    // set head and tail to null
}


int get_size(LinkedList *list)
{
    printf("Implement get_size\n");
    return -1;
}


void append(LinkedList *list, int value)
{
    printf("Implement append\n");
    // create a new node and set its value
    // consider the case when the list is empty and when it isnt
}


void insert(LinkedList *list, int value)
{
    printf("Implement insert\n");
    // create a new node and set its value
    // place it at the current position (check order of operations)
    // consider the case when the list is empty and when it isnt
}


int remove_at_current(LinkedList *list)
{
    printf("Implement remove_at_current\n");
    // consider the case when current code is at the begining or at the end
    return -1;
}


int find(LinkedList *list, int value)
{
    printf("Implement find\n");
    // traverse the list and return the position of the value
    return -1;
}


void move_to_start(LinkedList *list)
{
    printf("Implement move_to_start\n");
}


void move_to_end(LinkedList *list)
{
    printf("Implement move_to_end\n");
}


void prev(LinkedList *list)
{
    printf("Implement prev\n");
}


void next(LinkedList *list)
{
    printf("Implement next\n");
}


void move_to_position(LinkedList *list, int position)
{
    printf("Implement move_to_position\n");
    // traverse the list and stop at the given position
}


int get_current_position(LinkedList *list)
{
    printf("Implement get_current_position\n");
    // traverse the list and stop when you are at the current position
    // return the position (integer)
    return -1;
}


int get_current_element(LinkedList *list)
{
    printf("Implement get_current_element\n");
    // return the value at the current position
    return -1;
}


void print_list(LinkedList *list)
{
    printf("< list elements here >");
}


void free_list(LinkedList *list)
{
    printf("Implement free_list\n");
    // free each node in the list
}
