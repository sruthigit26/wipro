#include<stdio.h>
int main(){
    float bottle_volume, current_water,water_needed;
    printf("enter the volume of the bottle in  liters:");

    scanf("%f",&bottle_volume);

    printf("enter the current amount of water in the bottle :");
    scanf("%f",&current_water);

    if(current_water < bottle_volume){
        water_needed=bottle_volume - current_water;
        printf("you need to add %.2f liters of water to fill the bottle.\n", water_needed); 
        }else{
            water_needed =current_water-bottle_volume;
            printf("you need to remove %.2f liters of water from the bottle to empty it.\n",water_needed);
        }
     return 0;
}
