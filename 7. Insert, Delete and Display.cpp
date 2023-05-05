#include<stdio.h>
#define MAX_SIZE 100 
int main() 
{
    int arr[MAX_SIZE];
    int size, choice, i, position, value;
    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
    printf("The initial array is:\n");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
    while (1) 
	{
        printf("Choose an operation:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Display the array\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
                printf("Enter the position to insert the element (0-based indexing): ");
                scanf("%d", &position);
                printf("Enter the value to insert: ");
                scanf("%d", &value);

                if (position < 0 || position > size) 
				{
                    printf("Invalid position\n");
                } 
				else 
				{
                    for (i = size; i > position; i--) 
					{
                        arr[i] = arr[i-1];
                    }
                    arr[position] = value;
                    size++;
                    printf("Element inserted successfully\n");
                }
                break;

            case 2:
                printf("Enter the position to delete the element (0-based indexing): ");
                scanf("%d", &position);

                if (position < 0 || position >= size)
				{
                    printf("Invalid position\n");
                } else {
                    for (i = position; i < size-1; i++) 
					{
                        arr[i] = arr[i+1];
                    }
                    size--;
                    printf("Element deleted successfully\n");
                }
                break;

            case 3:
                printf("The current array is:\n");
                for (i = 0; i < size; i++) 
				{
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice\n");
                break;
        }
    }
    return 0;
}

