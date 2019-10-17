

#include <stdio.h>

int main(int argc, char *arv[])
{
                int numbers[4] = { 0 };
                char name[4] = { 'a' };
                
                printf("numbers: %d %d %d %d\n",
                numbers[0], numbers[1],
                numbers[2], numbers[3]);

                printf("name: each: %c %c %c %c\n",
                name[0], name[1],
                name[2], name[3]);

                printf("name: %s\n", name);

                //set up number array
                numbers[0] = 1;
                numbers[1] = 2;
                numbers[2] = 3;
                numbers[3] = 4;

                //set up name array
                name[0] = 'Z';
                name[1] = 'E';
                name[2] = 'D';
                name[3] = '\0';
                
                printf("numbers: %d %d %d %d\n",
                numbers[0], numbers[1],
                numbers[2], numbers[3]);

                printf("name: each: %c %c %c %c\n",
                name[0], name[1],
                name[2], name[3]);

                printf("name: %s\n", name);

                return 0;
                }
