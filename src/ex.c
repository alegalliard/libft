//clear && gcc ft_split.c && ./a.out

#include <stdio.h>
#include <stdlib.h>

char **create_matrix(size_t nrows, size_t ncols)
{
    int **m = (int **) calloc(nrows ,sizeof(int *));

    for(int i = 0; i < nrows; i++) {
        m[i] = (int *) calloc(ncols, sizeof(int));
    }
}

int main()
{
    return 0;
}