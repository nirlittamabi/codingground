#include <stdio.h>
#include <malloc.h>

struct node {
    int data;
    struct node *link;
};

void append(struct node **, int);
void display(struct node *);

int main()
{
    printf("Linked list demo\n");
    struct node *p;
    p= NULL;
    append(&p,13);
    printf("address are %d\n",&p);
    append(&p,14);
    printf("address are %d\n",&p);
    append(&p,15);
    printf("address are %d\n",&p);
    append(&p,16);
    printf("address are %d\n",&p);
    display(p);
    append(&p,17);
    printf("address are %d\n",&p);
    append(&p,18);
    printf("address are %d\n",&p);
    display(p);

    return 0;
}

// append an element to linked list

void append(struct node **q, int num){
    struct node *temp, *r;
    if(*q == NULL){
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = num;
        temp->link = NULL;
        *q = temp;
    }else{
        temp = *q;
        while(temp->link != NULL){
            temp = temp->link;
        }
        r = (struct node *)malloc(sizeof(struct node));
        r->data = num;
        r->link = NULL;
        temp->link = r;
    }
}

void display(struct node *q){
    while(q != NULL){
        printf("%d",q->data);
        q=q->link;
    }
    printf("\n");
}

