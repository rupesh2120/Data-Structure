#include<stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
int Binary(struct Array arr,int x,int l,int h)
{
    while(l<=h)
    {
        int mid=((l+h)/2);
        if(x==arr.A[mid])
            return mid;
        else if(x<arr.A[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}
int RBinary(struct Array arr,int x,int l,int h)
{
    int mid=((l+h)/2);
    if(l<=h)
    {
        if(x==arr.A[mid])
            return mid;
        else if(x<arr.A[mid])
            return RBinary(arr,x,l,mid-1);
        else
            return RBinary(arr,x,mid+1,h);
    }
    return -1;

}
int main()
{
    struct Array arr={{1,2,3,4,5},10,5};
    printf("%d",RBinary(arr,2,0,arr.length));
    return 0;
}
