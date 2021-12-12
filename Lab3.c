#include <stdio.h>
#include <string.h>




void main()
{
    char str[100];
    int alpabet, nums, chars, i;
    alpabet = nums = chars = i = 0;


    printf("Hi, Bob \n");
    printf("Enter your line:\n");
    scanf("%s",&str);



    while(str[i]!='\0')
    {
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
        {
            alpabet++;
        }
        else if(str[i]>=48 && str[i]<=57)
        {
            nums++;
        }
        else
        {
            chars++;
        }

        i++;
    }

    printf("Number of Alphabets is : %d\n",alpabet);
    printf("Number of Numbers is : %d\n", nums);
    printf("Number of Characters is : %d\n\n", chars);
    printf("Answer to the task is: %d\n",alpabet + nums);
}
