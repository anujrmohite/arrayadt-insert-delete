#include <stdio.h>
#include <stdlib.h>
// here i declare arrray stucture
/*
typedef struct array
{
    // array has Name, size and length;
    int *A;
    int size;
    int length;
} arr;
*/
struct array
{
    // array has Name, size and length;
    int A[10];
    int size;
    int length;
} arr;
void display(struct array arr)
{
    int i;
    printf("array elements are->\n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d", arr.A[i]);
        printf("\n");
    }
}

void insert(struct array *arr, int value)
{
    int i, index;
    if (arr->length == arr->size - 1)
    {
        printf("array is full");
        return;
    }
    else
    {
        for (i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = value;
        arr->length++;
    }
}

int delete (struct array *arr, int index)
{
    int i;
    int x=0;
    if (index >= 0 && index < arr->length)
    {
        x=arr->A[index];
        for (i = index; i < arr->length - 1; i++)
            arr->A[i] = arr->A[i++];
        arr->length--;
        return x;
    }
}

int main()
{
    /*
    int i;
    struct array arr;
    printf("enter the size of an array->");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    int n;
    printf("enter the no of array elements->");
    scanf("%d", &n);
    printf("enter all elements->");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    arr.length = n;
    */
    struct array arr={{2,3,4,5,6},10,5};
    display(arr);
    delete(&arr,4);
    display(arr);
    delete(&arr,3);
    display(arr);
    

    return 0;
}
