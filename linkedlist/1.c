#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
    
};
int main()
{
    struct node *head =malloc(sizeof(struct node));
    head->data=41;
    head->link=NULL;
    printf("%d",head->data);
    struct node *head1=malloc(sizeof(struct node));
    head1->data=65;
     head1->link=NULL;
     head->link=head1;
    return 0;
}