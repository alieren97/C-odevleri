#include <stdio.h>

void print(int max, int mid, int min)
{
  printf("%d %c %d %c %d\n", max, max > mid ? '>' : '=', mid, mid > min ? '>' : '=', min);
}

void numberComparison (int x,int y,int z){
    if (x >= y && y >= z) {
        print(x, y, z);
    }
    else if (x >= z && z >= y){
        print(x, z, y);
    }
    else if (y >= x && x >= z){
        print(y, x, z);
    }
    else if (y >= z && z >= x){
        print(y, z, x);
    }
    else if (z >= y && y >= x){
        print(z, y, x);
    }
    else
        print(z, x, y);
}


int main(void) {
    
    int x,y,z;

    for (;;) {
        printf("uc tamsayi giriniz: ");
        scanf("%d%d%d", &x, &y, &z);
        numberComparison(x,y,z);
    }
}

