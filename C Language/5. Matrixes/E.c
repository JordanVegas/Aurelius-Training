#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <string.h>
#include <stdbool.h>
#define HATE_NAME "malay"
#define MAX_NAME_SIZE 100

void sortByLength(char **strs, int length) {
    bool isBubbled = true;
    char *temp;

    while (true) {
        if (!isBubbled)
        {
            break;
        }
        isBubbled = false;
        for (size_t i = 0; i +1 < length; i++)
        {
            if (strlen(strs[i]) > strlen(strs[i+1]))
            {
                temp = strs[i+1];
                strs[i+1] = strs[i];
                strs[i] = temp;
                isBubbled = true;
            }
            
        }
        
    }
}

int fillNames(char ***namesArray) {
    char **names = *namesArray;
    char name[MAX_NAME_SIZE];
    bool isHateName = false;
    int numberOfName = 0;
    printf("Enter names:\n");
    while (true) {
        scanf("%s", name);

        if (strcasecmp(name, HATE_NAME) == 0)
        {
           break;
        }
        numberOfName++;
        names = realloc(names, (sizeof (char *) * numberOfName));
        names[numberOfName - 1] = malloc(strlen(name));
        strcpy(names[numberOfName -1], name);
        
    }

    *namesArray = names;
    return numberOfName;
}

void printStrs(char **strs, int length) {
    for (size_t i = 0; i < length; i++)
    {
        printf("%s\n", strs[i]);
    }
}

int main() {
    char **names = NULL;
    int numberOfNames = fillNames(&names);
    sortByLength(names, numberOfNames);
    printf("in order:\n");
    printStrs(names, numberOfNames);
}