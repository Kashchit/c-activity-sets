//10. Write a C program to compare two strings, character by character.//
#include <stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
    int result;
    char string1[100];
    char string2[100];
    input_two_strings(string1,string2);
    result=stringcompare(string1,string2);
    output(string1,string2,result);
    return 0;
}

void input_two_strings(char *string1, char *string2 )
{
    printf("Enter the string : \n");
    scanf("%s",string1);
    printf("Enter the string : \n");
    scanf("%s",string2);
}
int stringcompare(char *string1, char *string2)
{
    int i=0;
    for(int i=0;string1[i]!='\0' || string2[i]!='\0';i++)
    {
        if(string1[i]<string2[i])
        {
            return 0;
            i++;
        }
        else if(string1[i]>string2[i])
        {
            return 1;
            i++;
        }
    }
    if(i==0)
    {
        return 2;
    }
}
void output(char *string1, char *string2, int result)
{
    if(result==0)
    {
        printf("%s is greater",string1);
    }
    else if(result==1)
    {
        printf("%s is greater",string2);
    }
    else
    {
        printf("Both string are same");
    }
}