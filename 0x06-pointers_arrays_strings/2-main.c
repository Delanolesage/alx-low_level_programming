

elano@DESKTOP-KPSSKLH MINGW64 ~
$ cd ALX-COURSES/alx-low_level_programming/
g
elano@DESKTOP-KPSSKLH MINGW64 ~/ALX-COURSES/alx-low_level_programming (main)
$ git pull
remote: Enumerating objects: 15, done.
remote: Counting objects: 100% (15/15), done.
remote: Compressing objects: 100% (10/10), done.
remote: Total 12 (delta 6), reused 6 (delta 2), pack-reused 0
Unpacking objects: 100% (12/12), 5.22 KiB | 75.00 KiB/s, done.
From https://github.com/Delanolesage/alx-low_level_programming
   e02703d..794d76c  main       -> origin/main
Updating e02703d..794d76c
Fast-forward
 0x05-pointers_arrays_strings/100-atoi     | Bin 0 -> 17432 bytes
 0x05-pointers_arrays_strings/100-atoi.c   |  51 ++++++++++--------------------
 0x05-pointers_arrays_strings/101-keygen.c |  20 ++++++++++++
 3 files changed, 36 insertions(+), 35 deletions(-)
 create mode 100755 0x05-pointers_arrays_strings/100-atoi
 create mode 100644 0x05-pointers_arrays_strings/101-keygen.c

elano@DESKTOP-KPSSKLH MINGW64 ~/ALX-COURSES/alx-low_level_programming (main)
$ git pull
remote: Enumerating objects: 5, done.
remote: Counting objects: 100% (5/5), done.
remote: Compressing objects: 100% (2/2), done.
remote: Total 4 (delta 1), reused 4 (delta 1), pack-reused 0
Unpacking objects: 100% (4/4), 399 bytes | 33.00 KiB/s, done.
From https://github.com/Delanolesage/alx-low_level_programming
   794d76c..ebf8af8  main       -> origin/main
Updating 794d76c..ebf8af8
Fast-forward
 0x06-pointers_arrays_strings/README.md | 1 +
 1 file changed, 1 insertion(+)
 create mode 100644 0x06-pointers_arrays_strings/README.md

elano@DESKTOP-KPSSKLH MINGW64 ~/ALX-COURSES/alx-low_level_programming (main)
$ cat > 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}


elano@DESKTOP-KPSSKLH MINGW64 ~/ALX-COURSES/alx-low_level_programming (main)
$ vi 0-main.c

elano@DESKTOP-KPSSKLH MINGW64 ~/ALX-COURSES/alx-low_level_programming (main)
$ cat > 1-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}


elano@DESKTOP-KPSSKLH MINGW64 ~/ALX-COURSES/alx-low_level_programming (main)
$ vi 1-main.c

elano@DESKTOP-KPSSKLH MINGW64 ~/ALX-COURSES/alx-low_level_programming (main)
$ cat > 2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");
    return (0);
}
