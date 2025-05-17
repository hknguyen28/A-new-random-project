#include <stdio.h>
#include "../include/pet.h"

void print_pet_status(const Pet *pet) {
    printf("\n%s's Status:\n", pet->name);
    printf("Hunger: %d/10\n", pet->hunger);
    printf("Happiness: %d/10\n", pet->happiness);
    printf("Energy: %d/10\n", pet->energy);
}

void feed_pet(Pet *pet) {
    if (pet->hunger > 0) pet->hunger--;
    printf("%s eats happily!\n", pet->name);
}

void play_with_pet(Pet *pet) {
    if (pet->energy > 0) {
        pet->happiness++;
        pet->energy--;
        printf("%s had fun playing!\n", pet->name);
    } else {
        printf("%s is too tired to play.\n", pet->name);
    }
}

void rest_pet(Pet *pet) {
    if (pet->energy < 10) pet->energy++;
    printf("%s is resting...\n", pet->name);
}
