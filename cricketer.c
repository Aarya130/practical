#include <stdio.h>


struct Cricketer
{
    char name[50];
    int age;
    int matchesPlayed;
    float average;
};

int main() {

    struct Cricketer player;


    printf("Enter cricketer's name: ");
    fgets(player.name, sizeof(player.name), stdin);

    printf("Enter age: ");
    scanf("%d", &player.age);

    printf("Enter number of matches played: ");
    scanf("%d", &player.matchesPlayed);

    printf("Enter batting average: ");
    scanf("%f", &player.average);


    printf("\nCricketer Information:\n");
    printf("Name: %s", player.name);
    printf("Age: %d\n", player.age);
    printf("Matches Played: %d\n", player.matchesPlayed);
    printf("Batting Average: %.2f\n", player.average);


}

