# include <stdio.h>

int findMaxElement(int array[], int size);
int main()
{
    int array[] = {8,2,4,5,6,7,0,9,1,3};

    printf("Max : %i\n", findMaxElement(array, 10));
}
int findMaxElement(int array[], int size)
{
    int current_max = -100000000;

    for (int i = 0; i < size; i++)
    {
        if (array[i] > current_max)
        {
            current_max = array[i];
        }
    }
    return current_max;
}