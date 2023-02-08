//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int x=5;
    struct node a,b,*head ;
    // a.value = x;
    // a.next=&b;
    // head=&a;
    // b.value=head->value+3;

    // printf("%d\n", head ->value ); //what value for 5
    // printf("%d\n", head ->next->value ); //what value for 8
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    // struct node c;
    // b.next = &c;
    // c.value = 11;
    // c.next = NULL;
    // printf("%d\n", head ->next->next->value ); //access d from head
    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
*/
    // struct node d;
    // d.value = 2;
    // d.next = &a;
    // head = &d;

    //typedef struct node* NodePtr;
    // NodePtr tmp=head; //add temp value to faciliate
    // printf("%d\n", head ->value );//d value
    // printf("%d\n", head ->next ->value ); //a value
    // printf("%d\n", head ->next ->next ->value );//b value
    // printf("%d\n", head ->next ->next ->next ->value );//c value


        
    //Exercise III Use loop to print everything
    // int i,n=5;
    // for(i=0;i<n;i++){
    //     printf("%3d", tmp->value);
    //     if(tmp->next == NULL) break;
    //     tmp = tmp->next;
    //     // What is missing???
    // }

    
    //Exercise IV change to while loop!! (you can use NULL to help)
    // tmp = head;
    // while(tmp != NULL){
    //     printf("%3d", tmp->value);
    //     tmp = tmp->next;
    //     // What is missing???
    // }
    
    
    //Exercise V Use malloc to create all nodes, instead of create a struct!!
        //use a loop to help
    typedef struct node* NodePtr;
    //struct node *a1 = (struct node*)malloc(sizeof(struct node));
    NodePtr p = (NodePtr)malloc(sizeof(struct node));
    head = p;
    p -> value = x;
    for(int i=0;i<4;i++){
        p->next = (NodePtr)malloc(sizeof(struct node));
        p = p->next;
        p->value = x+1+i;
        p->next = NULL;
    }
    

    NodePtr tmp=head;

    while(tmp != NULL){
        printf("%3d", tmp->value);
        tmp = tmp->next;
        // What is missing???
    }
    printf("\n");
    tmp = head;
    for(int i=0;i<10;i++){
        printf("%3d", tmp->value);
        if(tmp->next == NULL) break;
        tmp = tmp->next;
        // What is missing???
    }
    printf("\n");
    //Exercise VI Free all node !!
        //use a loop to help
    while(head!=NULL){
        tmp = head;
        head = head->next;
        printf("%3d",tmp->value);
        free(tmp);
    }
    return 0;
}
