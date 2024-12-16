#include <stdio.h>


void determineTemperatureState(float temp);

int main() {
    float temperature;


    printf("Enter temperature in Centigrade: ");
    scanf("%f", &temperature);


    determineTemperatureState(temperature);

    return 0;
}



void determineTemperatureState(float temp)
 {
    if (temp < 0) {
        printf("Freezing weather.\n");
    } else if (temp >= 0 && temp < 10) {
        printf("Very cold weather.\n");
    } else if (temp >= 10 && temp < 20) {
        printf("Cold weather.\n");
    } else if (temp >= 20 && temp < 30) {
        printf("Normal temperature.\n");
    } else if (temp >= 30 && temp < 40) {
        printf("It's hot.\n");
    } else {
        printf("It's very hot.\n");
    }
}



