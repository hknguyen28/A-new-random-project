#include <stdio.h>
#include <string.h>
#include "../include/pet.h"

int main() {
    Pet my_pet;
    
    printf("Welcome to Pixel Pet!\nWhat's your pet's name? ");
    scanf("%19s", my_pet.name);

    my_pet.hunger = 5;
    my_pet.happiness = 5;
    my_pet.energy = 5;

    int choice;
    while (1) {
        printf("\nWhat would you like to do with %s?\n", my_pet.name);
        printf("1. Feed\n2. Play\n3. Rest\n4. Check Status\n5. Quit\n> ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: feed_pet(&my_pet); break;
            case 2: play_with_pet(&my_pet); break;
            case 3: rest_pet(&my_pet); break;
            case 4: print_pet_status(&my_pet); break;
            case 5: printf("Goodbye!\n"); return 0;
            default: printf("Invalid choice.\n");
        }
    }
}
