#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>

int *ft_sort(int *nums, int numsize)
{
    int i = 0;
    int j = numsize - 1;
    while(i < j)
    {
        if(nums[i] > nums[j])
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
        i++;
    }
    j = 1;
    i = 0;
    while(j <=  numsize - 1)
    {
        if(j <= numsize - 1 && nums[i] > nums[j])
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
        i++;
        j++;
    }
    return nums;
}
