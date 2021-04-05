#include <stdio.h>

void are_friends(int number1,int number2){
    int sum1,sum2;
    
    //ilk sayı çarpanlarına bölümü ve çarpanlarını toplamı
    for (int i = 1; i < number1; i++) {
        if (number1 % i == 0) {
            sum1 = sum1 + i;
            
        }
    }
    
    //ikinci sayı çarpanlarına bölümü ve çarpanlarını toplamı
    for (int i = 1; i < number2; i++) {
        if (number2 % i == 0) {
            sum2 = sum2 + i;
           
        }
    }
    if (sum1 == number2) {
        printf("They are amicable\n");
    }
}

int main(void) {
    
    int x,y;
    
    printf("please enter two number for amicable : ");
    scanf("%d%d",&x,&y);
    
    are_friends(x,y);
    
}

