#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "ListyString.h"

int processInputFile(char *filename)
{
  //In case file does not exist
  if(filename == NULL)
    return 1;

    FILE *ifp = fopen(filename, "r");
    char buffer;
    int i = 0;
    int check = 0;
    char temp[1023];

    for(i = 0; i < 1023; i++)
        temp[i] = NULL;

    i = 0;

    //Printing out each word or character
    while(fscanf(ifp, "%c", &buffer) != EOF)
    {
        if(check == 0)
        {
            if(isalpha(buffer))
            {
                temp[i] = buffer;
                i++;
            }
            else
                check = 1;
        }
        else
        {
            switch(buffer)
            {
                case('!'):
                //function
                break;

                case('~'):
                //function
                break;

                case('@'):
                //function
                break;

                case('+'):
                //function
                break;

                case('-'):
                //function
                break;

                case('?'):
                //function
                break;

                default:
                {
                    ;
                }
            }
        }
    }
    createListyString(temp);

  return 0;
}

ListyString *createListyString(char *str)
{
  if (str == NULL || str == "")
    return;

    int i;
  //Allocation space for ListyString
  ListyString *listy = malloc(sizeof(ListyString));

  //Setting up basic structure for linked list
  listy->head = NULL;
  listy->length = 0;

    for(i = 0; i < strlen(str); i++)
    {
        listy->head->data = str[i];
        listy->head->next = NULL;
        listy->length++;
    }
}

ListyString *destroyListyString(ListyString *listy)
{
  //Creating temporary variables to free memory
  ListyString *current_head = NULL;
  ListyString *temp;

  while (current_head != NULL)
  {
    //Freeing the memory from each node from last to first
    temp = current_head->head;
    free(current_head);
    current_head = temp;
  }

  free(listy);
  return NULL;
}

ListyString *cloneListyString(ListyString *listy)
{
    return;
}

void replaceChar(ListyString *listy, char key, char *str)
{
    return;
}

void reverseListyString(ListyString *listy)
{
    return;
}

ListyString *listyCat(ListyString *listy, char *str)
{
    return;
}

int listyCmp(ListyString *listy1, ListyString *listy2)
{
    return;
}

int listyLength(ListyString *listy)
{
    return;
}

void printListyString(ListyString *listy)
{
    return;
}

int main(int argc, char **argv)
{
  //Opening the file given by user
  char fname[15];
  printf("Enter file name\n");
  scanf("%s", fname);

  //Calling function and giving it the filename
  processInputFile(fname);

  return 0;
}
