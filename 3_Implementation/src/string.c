#include <string1.h>
void readstring()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
}
void length()
{
    char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};
    printf("Length of string a = %zu \n",strlen(a));
    printf("Length of string b = %zu \n",strlen(b));
}
void copy() {
   char str1[20] = "C programming";
   char str2[20];

   // copying str1 to str2
   strcpy(str2, str1);

   puts(str2); // C programming

}

void compare()
{
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    int result;

    result = strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);

    result = strcmp(str1, str3);
    printf("strcmp(str1, str3) = %d\n", result);

}
void concat() {
   char str1[100] = "This is ", str2[] = "programiz.com";

   strcat(str1, str2);

   puts(str1);
   puts(str2);

}
void select(int choice){
    switch(choice)
    {
        case 1 : readstring();
        break;
        case 2 : length();
        break;
        case 3 : copy();
        break;
        case 4 : compare();
        break;
        case 5 : concat();
        break;
    }
}

