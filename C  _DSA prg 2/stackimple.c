#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
// int isempty(struct stack *ptr){
    // if(ptr->top==-1){
        // printf("the stack is empty.\n");
        // return;
    // }
    // printf("the stack is not empty\n");
// }
// int isfull(struct stack *ptr){
    // if(ptr->top==ptr->size-1){
        // printf("the stack is full \n");
    // }
    // printf("the stack is not full\n");
// }
int isempty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
       return 1;}
       else{
           return 0;
       }
}
int main(){
    struct stack *s;
    s->size=10;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
     s->arr[0]=8;
    s->top++;
    // isempty(s);
    // isfull(s);
   if(isempty(s)){
       printf("the stack is empty\n");
   }
   else{
       printf("the stack is not empty \n");
   }
    return 0;
}