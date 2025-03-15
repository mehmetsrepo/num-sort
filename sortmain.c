#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>

int main()
{
    int nums[] = {1};
    int numsize = sizeof(nums) / sizeof(nums[0]);
    int *res = ft_sort(nums, numsize);
    for(int i = 0;i < numsize;i++)
    {
        printf("%d, ", res[i]);
    }
    return 0;
}
