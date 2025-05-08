#ifndef PET_H
#define PET_H

typedef struct {
    char name[20];
    int hunger;     // 0 (full) to 10 (starving)
    int happiness;  // 0 (sad) to 10 (ecstatic)
    int energy;     // 0 (tired) to 10 (fully rested)
} Pet;

void print_pet_status(const Pet *pet);
void feed_pet(Pet *pet);
void play_with_pet(Pet *pet);
void rest_pet(Pet *pet);

#endif
