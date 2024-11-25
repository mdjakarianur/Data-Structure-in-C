#include <stdio.h> 
#include <stdlib.h> 
struct node { 
    int data; 
    struct node* next; 
    struct node* prev; 
}; 
struct node* head = NULL; 
struct node* tail = NULL; 
struct node* create_node(int data) 
{ 
    struct node* new_node 
        = (struct node*)malloc(sizeof(struct node)); 
    new_node->data = data; 
    new_node->next = NULL; 
    new_node->prev = NULL; 
    return new_node; 
} 
void insert_at_head(int data) 
{ 
    struct node* new_node = create_node(data); 
    if (head == NULL) { 
        head = new_node; 
        tail = new_node; 
    } 
    else { 
        new_node->next = head; 
        head->prev = new_node; 
        head = new_node; 
    } 
} 
void insert_at_tail(int data) 
{ 
    struct node* new_node = create_node(data); 
    if (tail == NULL) { 
        head = new_node; 
        tail = new_node; 
    } 
    else { 
        new_node->prev = tail; 
        tail->next = new_node; 
        tail = new_node; 
    } 
} 
void delete_at_head() 
{ 
    if (head == NULL) { 
        return; 
    } 
    struct node* temp = head; 
    if (head == tail) { 
        head = NULL; 
        tail = NULL; 
    } 
    else { 
        head = head->next; 
        head->prev = NULL; 
    } 
    free(temp); 
} 
void delete_at_tail() 
{ 
    if (tail == NULL) { 
        return; 
    } 
    struct node* temp = tail; 
    if (head == tail) { 
        head = NULL; 
        tail = NULL; 
    } 
    else { 
        tail = tail->prev; 
        tail->next = NULL; 
    } 
    free(temp); 
} 
void display_forward() 
{ 
    struct node* current = head; 
    while (current != NULL) { 
        printf("%d ", current->data); 
        current = current->next; 
    } 
    printf("\n"); 
} 
void display_backward() 
{ 
    struct node* current = tail; 
    while (current != NULL) { 
        printf("%d ", current->data); 
        current = current->prev; 
    } 
    printf("\n"); 
} 
int main() 
{ 
    insert_at_head(10); 
    insert_at_head(20); 
    insert_at_tail(30); 
    display_forward(); 
    display_backward();
    delete_at_head(); 
    delete_at_tail(); 
    display_forward();
    display_backward();
    return 0; 
}

