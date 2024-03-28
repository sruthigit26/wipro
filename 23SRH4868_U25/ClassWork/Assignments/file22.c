#include<stdio.h>
int main(){
    int p1=0,p2=0;
    int striker,target;
    printf("Enter the score of p1:");
    scanf("%d",&p1);
    printf("Enter the score of p2:");
    scanf("%d",&p2);
    printf("enter the striker number(1 or2):");
    scanf("%d",&striker);
    printf("enter the target number(1 to 9):");
    scanf("%d",&target);

    if(striker ==1){
        if(target > 0 && target < 10){
            if(p1+3 >= p2){
                printf("player 1 wins\n");
            }else{
                printf("player 2 wins\n");
            }
        }else{
            printf("invalid target number\n");
        }
    } else if (striker == 2){
        if(target>0&& target <10){
            if(p2+3>=p1){
                printf("player 2 win\n");
            }else{
                printf("player 1 wins\n");
            }
        }else{
            printf("Invalid target number\n");
        }
    }else{
        printf("Invalid striker number\n");
    }
    return 0;
}