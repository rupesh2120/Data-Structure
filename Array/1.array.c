#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int *A;
    int size;
    int length;
};
void Create(struct Array *arr)
{
    printf("Enter the size of array");
    scanf("%d",&(arr->size));
    arr->A=(int *)malloc((arr->size)*sizeof(int));
    arr->length=0;
}
void Insert(struct Array *arr)
{
    int n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    if(n>arr->size)
    {
        printf("No. of elements should be less than array size ");
        return 0;
    }
    for(int i=0;i<n;i++)
        scanf("%d",&(arr->A[i]));
    arr->length=n;
}
void Display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
        printf("%d\t",arr.A[i]);
}
int main()
{
    struct Array arr;
    Create(&arr);
    Insert(&arr);
    Display(arr);
    return 0;
}
