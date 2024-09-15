#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int * array;
    int capacity;
    int size;
    int current_position;
    // Add more fields here
    
} ArrayList;


void init_arraylist(ArrayList *list, int capacity)
{
    // printf("init_arraylist\n");
    // dynamically allocate space for the array
    list->array=(int*) malloc(capacity* sizeof(int));
    list->capacity=capacity;
    list->size=0;
    list->current_position=0;
    // initialize the size, capacity, and current position
}


void clear(ArrayList *list)
{
   
    list->size=0;
    list->current_position=0;
    list->capacity=1;
    // clear the list but do not free the array
    // modify the size, capacity, and current position
     printf("cleared list\n");
}

int get_size(ArrayList *list)
{
    printf("Size is %d\n",list->size);
    return list->size;
}


void resize(ArrayList *list, int new_capacity)
{
    list->capacity=new_capacity;
    // printf("Implement resize\n");
    printf("size=%d capacity=%d\n",list->size,list->capacity);
    list->array= realloc(list->array,new_capacity*sizeof(int));
    // allocate space for new array with new_capacity
    // print log message
}


void append(ArrayList *list, int value)
{
    list->size++;
    if(list->size >list->capacity) resize(list,(list->capacity)*2);
    else if(list->size < (list->capacity)*.25) resize(list,(list->capacity)/2);
    list->array[(list->size)-1]=value;
    printf("append %d \n",value);   
    // call resize if necessary
    // add value to the end of the list
}


void insert(ArrayList *list, int value)
{
    // printf("Implement insert\n");
    list->size++;

    if(list->size >list->capacity) resize(list,(list->capacity)*2);

    int temp1=  list->array[list->current_position];
    list->array[list->current_position]=value;
    for (int i = list->current_position; i < list->size; i++)
    {
        
        int temp2=list->array[i+1];
        list->array[i+1]=temp1;
        temp1=temp2;
    }
    printf("inserted %d on position %d \n",value,list->current_position);
    // call resize if necessary
    // shift the elements to the right to make space
    // add value at the current position
}


int remove_at_current(ArrayList *list)
{
    // printf("Implement remove_at_current\n");
    int value=list->array[list->current_position];
    for (int i = list->current_position; i < list->size-1; i++)
    {
        list->array[i]=list->array[i+1];
    }
    printf("Removed %d from position %d\n",value,list->current_position);
    list->size--;

    if(list->size < (list->capacity)*.25) resize(list,(list->capacity)/2);
    return value;
    // save the value of the current element in a variable
    // shift the elements to the left to fill the gap
    // change the size, and current position as necessary
    // call resize if necessary
    // return the saved value
}

int find(ArrayList *list, int value)
{   
    // printf("Implement find\n");
    for (int i = 0; i < list->size; i++)
    {
        if(list->array[i]==value)
        {
            printf("%d is found on position  %d\n",value,i);
             return i;
        }
    }
    printf("%d is not found\n",value);
    return -1;
    // traverse the list and return the position of the value
    // return -1 if the value is not found
}


void move_to_start(ArrayList *list)
{
    // printf("Implement move_to_start\n");
    if(list->size==0)
    {
    printf("Can't move ,the list is empty\n");
     return;
    }
    list->current_position=0;
    printf("Moved the current position to %d (start)\n",list->current_position);
    // consider the cases when the list is empty
}


void move_to_end(ArrayList *list)
{
    printf("Implement move_to_end\n");
  if(list->size==0)
    {
    printf("Can't move ,the list is empty\n");
     return;
    }
    list->current_position= list->size-1;
    printf("Moved the current position to %d (end)\n",list->current_position);
    // consider the cases when the list is empty
}


void prev(ArrayList *list)
{
    // printf("Implement prev\n");
    if(list->current_position!=0) 
    {
     list->current_position--;
     printf("Moved the current position to previous position %d\n",list->current_position);
    }
    // no change if the current position is at the start
}


void next(ArrayList *list)
{
    printf("Implement next\n");
    if(list->current_position!=(list->size-1)) list->current_position++;
    // no change if the current position is at the end
}


void move_to_position(ArrayList *list, int position)
{
    printf("Implement move_to_position\n");
    list->current_position=position;
}


int get_current_position(ArrayList *list)
{
    printf("Implement get_current_position\n");
    return list->current_position;
}


int get_current_element(ArrayList *list)
{
    printf("Implement get_current_element\n");
    return list->array[list->current_position];
}


void print_list(ArrayList *list)
{
    
    printf("< list elements here >");
    printf("<");
    for (int i = 0; i < list->size; i++)
    {
       if(i==list->current_position) 
       {
       printf(" |");
       printf("%d ",list->array[i]);
       }
       else printf(" %d ",list->array[i]);
    }
    printf(">");
    printf("\n");
    
}


void free_list(ArrayList *list)
{
    printf("Implement free_list\n");
    free(list->array);
    // free the array before terminating the program
}


