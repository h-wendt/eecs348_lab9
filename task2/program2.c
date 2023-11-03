#include <stdio.h>

int main(){

int userScore;
while (1){
    printf("Enter 0 or 1 to STOP\nEnter the NFL Score: ");
    scanf("%d", &userScore);
    if (userScore <= 1){
        break;
    }
    for (int a = 0; a < (userScore / 8) + 1; a++){
        for (int b = 0; b < (userScore / 7) + 1; b++){
            for (int c = 0; c < (userScore / 6) + 1; c++){
                for (int d = 0; d < (userScore / 3) + 1; d++){
                    for (int e = 0; e < (userScore / 2) + 1; e++){
                        if (8*a + 7*b + 6*c + 3*d + 2*e == userScore){
                            printf("%d TD + 2pt %d TD + 1pt %d TD %d FG %d Safety\n",a,b,c,d,e);
                        }
                    }
                }
            }
        }
    }
}

return 0;

}