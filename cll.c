#include "cll.h"
int init(struct node **tail){

    *tail=NULL;
    return 1;
}
int insertAfter(struct node ** tail,int predElement,int element){

    struct node *pre=NULL;
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    if(newNode==NULL){
        //errror
        return 0;
    }
    newNode->data=element;
    if(*tail==NULL){

        newNode->next=newNode;
        *tail=newNode;
        return 1;
    }
    else{

       pre=(*tail)->next;
       do{
            if(pre->data==predElement){
                newNode->next=pre->next;
                pre->next=newNode;
                return 1;
            }
            pre=pre->next;

       }
    while(pre!=(*tail)->next);
    free(newNode);
    return 0;

   }
}
   int traverse(struct node *tail){

   struct node *iter=NULL;
   if(tail==NULL){

    return 0;
   }
   iter=tail->next;
   do{
        printf("%d->",iter->data);
        iter=iter->next;


   }
   while(iter!=tail->next);
   printf("\n");
   return 1;
}
int searchElement(struct node *tail,int element,struct node **keyptr){


    struct node *iter=NULL;
    if(tail==NULL){
        return 0;
    }
    iter=tail->next;
    do{
        if(iter->data==element){
            *keyptr=iter;
            return 1;
        }
        iter=iter->next;
    }
    while(iter!=tail->next);
    return 0;
}

int deleteElement(struct node ** tail,int element)
{
    if(*tail==NULL){
            printf("list is empty\n");
            return 0;}
    struct node* iter = (*tail)->next;
    struct node* pred = *tail;
    do{
        if(iter->data == element)
        {
            if(iter == pred)
            {
                *tail = NULL;
            }
            else
            {
                pred->next = iter->next;
                iter->next = NULL;
                if(iter == *tail)
                {
                *tail = pred;
                }
            }
            free(iter);
            return 1;
        }
        pred = iter;
        iter = iter->next;
    }while(iter != (*tail)->next);
    printf("%d not found in the list\n",element);
    return 0;
}
int destroyList(struct node** tail)
{
    if(*tail==NULL)
    {

        return 0;
    }
    struct node *iter=(*tail)->next;
    struct node *temp=NULL;
        while(tail!=NULL){
            temp=iter->next;
            deleteElement(tail,iter->data);
            iter=temp;
        }
        return 1;
    }

int check(struct node *tail){
    struct node *iter=tail->next;
    if(tail==NULL){
        return 0;
    }
    if(iter!=NULL || iter!=tail){

        iter=iter->next;

    }
    return 1;
}
/*struct node *slower=NULL;
struct node *faster =NULL;
faster=tail->next;
slower=tail;
while(1){
    if(!faster || !faster->next)
        return 0;
    else if(faster==slower || faster->next==slower)
        return 1;
    else{
        slower=slower->next;
        faster=faster->next->next;
    }
    }*/

int reverselist(struct node **tail){
  struct node *prev=NULL;
  struct node *current=(*tail)->next;
  struct node *nextnode=current->next;


  if(tail==NULL){
    return 0;
  }
 while(current!=(*tail)){
    prev=current;
    current=nextnode;
    nextnode=current->next;
    current->next=prev;
 }
 nextnode->next=*tail;
 *tail=nextnode;
 return 1;
}

/*int reverselist(struct node** tail)
{
    // if list is empty
    if (*head_ref == NULL)
        return 0;

    // reverse procedure same as reversing a
    // singly linked list
    struct node* prev = NULL;
   struct node* current = *head_ref;
    struct node* next;
    do {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    } while (current != (*head_ref));

    // adjutsing the links so as to make the
    // last node point to the first node
    (*head_ref)->next = prev;
    *head_ref = prev;

return 1;
}*/




