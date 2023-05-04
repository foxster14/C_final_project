#include <stdio.h>
#include <stdbool.h>
#include "example.c"
#include "oceanGrid.c"

void placeShips(Grid* grid); 
bool placeAttack(Grid* enemygrid); //handles both choosing next attack location and checking if it's a hit or not.  returns whether it hit or not.
