#include <stdio.h>

void generatePascalTriangle(int n) {
   int i,x,y;
    for(i=n;i>=1;i--)
    {for(x=1;x<i;x++)
        {printf(" ");
        }
        for(y=x;y<=n;y++)
        {printf("1 ");
        }
        printf("\n");
    }
}

int main() {
    int n = 5;
    generatePascalTriangle(n);
    return 0;
}
