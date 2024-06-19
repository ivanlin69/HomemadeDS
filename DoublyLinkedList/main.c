
#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node * prev;
    int value;
    struct Node * next;
};

struct DoublyLL{
    struct Node *head;
    size_t length;
};

void CreateDLL(struct DoublyLL *dl, int A[], size_t size){
    
    if(size <= 0){
        return;
    }
    
    dl->head = (struct Node *) malloc(sizeof(struct Node));
    dl->head->value = A[0];
    dl->head->prev = NULL;
    dl->head->next = NULL;
    dl->length = 1;
    
    struct Node * tail = dl->head;
    
    for(size_t i=1; i<size; i++){
        struct Node * newNode = malloc(sizeof(struct Node));
        newNode->value = A[i];
        tail->next = newNode;
        newNode->prev = tail;
        newNode->next = NULL;
        tail = tail->next;
        dl->length++;
    }
}

void Display(struct DoublyLL *dl){
    
    struct Node * temp = dl->head;
    if(temp == NULL){
        return;
    }
    
    while(temp){
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

void Insert(struct DoublyLL *dl, size_t index, int e){
    
    
    
    
    
}


int main(int argc, const char * argv[]) {
    
    struct DoublyLL dl1 = {NULL, 0};
    int A[] = {1, 3, 8, 16, 23};
    CreateDLL(&dl1, A, 5);
    Display(&dl1);
    
    return 0;
}