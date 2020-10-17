#include "cll.h"

int main()
{
    struct node * tail=NULL;

    //struct node *ptr=NULL;
    //int element,pre_Element,key,del,ch;
    init(&tail);
    printf("Let the list contain\n");
    for(int i=0;i<=5;i++){
        insertAfter(&tail,i,i+1);
    }
    traverse(tail);
       int  x=(reverselist(&tail));
        printf("list reversed %d",x);
        traverse(tail);
    //ch=1;
        /*while(ch){
printf("Enter  1.Insertion 2.Searching 3.Traversing 4.deletion 5.destroylist 6.check 7.reverse 8.exit\n");
scanf("%d",&ch);
switch(ch){

case 1:printf("Enter the previous element and the element to be inserted after\n");
        scanf("%d%d",&pre_Element,&element);
        insertAfter(&tail,pre_Element,element);
        break;
case 2:printf("Enter the element to search\n");
    scanf("%d",&key);

    if(searchElement(tail,key,&ptr))
        printf("FOUND in th list\n");
    else
        printf("NOTfound in the list\n");
    break;
case 3:
    traverse(tail);
    break;
case 4:
    printf("Enter the element to be deleted\n");
    scanf("%d",&del);
    deleteElement(&tail,del);
    break;
case 5:

    if(destroyList(&tail))
        printf("DEstryed\n");
    else
        printf("NOT DESTROYED\n");
    break;
case 6:
    if(check(tail))
        printf("circular\n");
    else
        printf("not circular\n");
    break;
case 7:
    if(reverselist(&tail))
        printf("list reversed");

    break;
case 8:
    ch=0;
    break;
default:printf("Enter valid option\n");
}
}*/
return 0;
}
