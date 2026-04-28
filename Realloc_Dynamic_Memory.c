#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, newsize;
    char *name;

    printf("Enter size of string (+1 for \\0): ");
    scanf("%d", &size);

    name = (char *)malloc(size * sizeof(char));
    if (name == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter characters:\n");
    for (int i = 0; i < size - 1; i++)
    {
        scanf(" %c", &name[i]);
    }
    name[size - 1] = '\0';

    printf("String: %s\n", name);

    printf("Enter new size: ");
    scanf("%d", &newsize);

    char *temp = (char *)realloc(name, newsize * sizeof(char));
    if (temp == NULL)
    {
        printf("Reallocation failed\n");
        free(name);
        return 1;
    }

    name = temp;

    int i = 0;
    while (name[i] != '\0')   // find current length
        i++;

    if (newsize > i + 1)
    {
        printf("Enter extra characters:\n");
        for (int j = i; j < newsize - 1; j++)
        {
            scanf(" %c", &name[j]);
        }
    }

    name[newsize - 1] = '\0';

    printf("Final string: %s\n", name);

    free(name);
    return 0;
}