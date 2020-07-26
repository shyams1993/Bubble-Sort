#include <stdio.h>
void printer(int n, int array[]);
int main(void)
{
    int x = 0, n = 8, temp = 0;
    int nums[8] = {6, 3, 8, 5, 2, 7, 4, 1};
    while (x != n)
    {
        for (int y = 0; y < n-1; y++)
        {
            if (nums[y] > nums[y+1])
            {
                temp = nums[y];
                nums[y] = nums[y+1];
                nums[y+1] = temp;
            }
        }
        x++;
    }
    printer(n, nums);
}

void printer(int n, int array[])
{
    for (int i = 0; i != n; i++)
    {
        printf("%i ",array[i]);
    }
    printf("\n");
}
