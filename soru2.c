#include <stdio.h>

int main() {
    int length;
    
    scanf("%d", &length);
    
    int elements[length]; 

    for (int i = 0; i < length; i++) {
    	
        scanf("%d", &elements[i]);
    }

    for (int i = 0; i < length; ) {
        int start = i;

        while (i < length - 1 && elements[i] > elements[i + 1]) {
            i++;
        }

        for (int j = start; j <= i; j++) {
            printf("%d", elements[j]);
            if (j < i) {
                printf(" "); 
            }
        }
        
        printf(" *\n"); 

        i++;
    }

    return 0;
}

