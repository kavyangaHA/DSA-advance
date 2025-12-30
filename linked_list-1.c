#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
    /* data */
};

int main(){
    struct Node node1,node2,node3;
    node1.data=10;
    node1.next=&node2;

    node2.data=20;
    node2.next=&node3;
    
    node3.data=30;
    node3.next=NULL;

    struct Node*temp=&node1;/*Declare a pointer variable named temp that can store the address of a struct Node.*/
    while (temp!=NULL){
        
        printf("%d ->",temp->data);
        temp =temp->next;
    }
}
