#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_RECORDS 10000
#define MAX_CHAR 200
#define MAX_NAME 50
#define MAX_COLUMNS 3
#define MAX_ROWS 2000

struct Entry
{
    char weekday[MAX_NAME];
    char state[MAX_NAME];
    float value;
};

int main()
{

    FILE *data;
    int index = 0;
    int len, i, j;
    float accumulated = 0;
    float mean;
    float matrix[MAX_ROWS][MAX_COLUMNS];
    char row[MAX_CHAR];
    struct Entry precipitations[MAX_RECORDS];

    data = fopen("./brazil_precipitation.csv", "r");

    if (data == NULL)
    {

        printf("File not found");
        return 0;
    }

    while (feof(data) != true)
    {

        fgets(row, MAX_CHAR, data);

        if (index > 0)
        {

            sscanf(
                row,
                "%[^,], %[^,], %f",
                precipitations[index - 1].weekday,
                precipitations[index - 1].state,
                &precipitations[index - 1].value);
        }

        index++;
    }

    fclose(data);

    len = index - 1;

    printf("Dataset process finished, total rows: %d\n", len);

    index = 0;

    for (j = 1; j <= 7; j++)
    {

        for (i = 1; i <= (len / 7); i++)
        {

            matrix[i][j] = precipitations[index].value;

            accumulated += precipitations[index].value;

            index++;
        }
    }
    printf("Matrix[%d][%d] created.\n", (i - 1), (j - 1));

    index = 0;

    mean = accumulated / len;

    for (i = 1; i <= (len / 7); i++)
    {

        printf("| ");

        for (j = 1; j <= 7; j++)
        {

            if (matrix[i][j] < (mean / 3))
                printf("%.2f ", matrix[i][j]);

            else if (matrix[i][j] < (2 * (mean / 3)))
                printf("\033[1;34m%.2f\033[0m ", matrix[i][j]);

            else
                printf("\033[0;34m%.2f\033[0m ", matrix[i][j]);

            index++;
        }

        printf("|  \033[1;33m%s\033[0m\n", precipitations[index - 1].state);
    }

    return 0;
}