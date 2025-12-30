#include <stdio.h>
#include <stdlib.h>

struct Node
{
    /* dataint */
    int data;
    struct Node*next;
};


int main(){
    struct Node*head=(struct Node*)malloc(sizeof(struct Node));
    struct Node*second=(struct Node*)malloc(sizeof(struct Node));
    struct Node*third=(struct Node*)malloc(sizeof(struct Node));

    head->data=10;
    head->next=second;

    second->data=30;
    second->next=third;

    third->data=60;
    third->next=NULL;

    struct Node*temp=head;
    while (temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");





}