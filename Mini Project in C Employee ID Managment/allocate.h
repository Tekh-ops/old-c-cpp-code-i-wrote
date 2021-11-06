/* This Header File is use to get username without asking for size */


#define true 0
#define false 1

typedef struct
{
    int allocated; // Here you can save how many elements you have allocated space for
    int used;      // Here is how many elements are in the array
    int *array;    // here is pointer to the array
} Array;

void initArray(Array *a)
{
    a->allocated = 10; //INIT_SIZE
    a->used = 0;
    a->array = (int *)malloc(10 * sizeof(int));
}

int insertEl(Array *a, int el)
{
    if (a->used == a->allocated) //If there is no more space, then we need to realloc
    {
        int *temp = (int *)realloc(a->array, 2 * a->allocated * sizeof(int));
        if (!temp) // Just check if realloc succeeded
        {
            printf("Reallocation failed!\n");
            return false;
        }
        a->array = temp;
        a->allocated *= 2;
    }

    a->array[a->used] = el;
    a->used++;

    return true;
}

void freeArray(Array *a)
{
    free(a->array);
    a->array = NULL;
    a->allocated = 0;
    a->used = 0;
}