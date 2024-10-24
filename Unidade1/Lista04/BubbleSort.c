#include <stdio.h>

int main()
{
    int tam, i, k, aux;
    int valid= 0;
    int count = 0;
    
    scanf("%d", &tam);
    
    int nums[tam];
    
    for(i=0; i<tam; i++) {
        scanf("%d", &nums[i]);
    }
    
    for(i=0; i<tam; i++) {
        if(i==0) {
            printf("%d", nums[i]);
        }else{
            printf(" %d", nums[i]);
        }
    }
    
    while(valid==0) {
        printf("\n");
        
        for(k=1; k<tam; k++) {
            if(nums[k - 1] > nums[k]) {
                aux = nums[k];
                nums[k] = nums[k - 1];
                nums[k - 1] = aux;
            }
        }
        
        count = 0;
        
        for(i=0; i<tam; i++) {
            if(i==0) {
                printf("%d", nums[i]);
            }else{
                printf(" %d", nums[i]);
            }
            if(nums[i]<=nums[i + 1]) {
                count++;
            }
        }
        
        if(count == (tam - 1)) {
            valid = 1;
        }
    } 

    
    return 0;
}
