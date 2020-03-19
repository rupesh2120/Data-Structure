
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>
struct Node
{
    long data;
    struct Node *next;
}*top=NULL;
void Push(int x)
{
    struct Node *t=(struct Node *)malloc(sizeof(struct Node));
    if(t==NULL)
    {
        printf("Stack overflow");
    }
    else {
        t->data=x;
        t->next=top;
        top=t;
    }
}
void Delete()
{
    struct Node *p;
    if(top==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        p=top;
        top=top->next;
        free(p);
    }
}
long Max()
{
    long x=INT_MIN;
    struct Node *p;
    p=top;
    if(p==NULL)
    {
        return 0;
    }
    x=p->data;
    while(p!=NULL)
    {
        if(p->data>x)
        {
            x=p->data;
        }
        p=p->next;
    }
    return x;
}
int main() {
    int n;
    scanf("%d",&n);
    //printf("%d\n",n);
    while(n--){
        int q;
        long x;
        scanf("%d",&q);
        //printf("%d\n",q);
        if(q==1){
            scanf("%ld",&x);
            //printf("%ld\n",x);
        }
        if(q==1){
            Push(x);
        }
        else if(q==2){
            Delete();
        }
        else{
            printf("%ld\n",Max());
        }
    }

    return 0;
}
