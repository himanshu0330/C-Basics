//To copy all elements of one array to another


#include <stdio.h>

int main()
{
    int data1[3][2];
    int data2[3][2];
    for(int i = 0; i<3; i++){
        for(int j = 0; j<2; j++){
            scanf("%d", &data1[i][j]);
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<2; j++){
            data2[i][j] = data1[i][j];
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<2; j++){
            printf("%d\n", data2[i][j]);
        }
    }
    return 0;
}
