#pragma once

#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))
#define ARRAY_SIZE2(array) (sizeof((array))/sizeof((array[0][0])))
#define PRINT_CARD(card, number) std::cout << "Card " << card << ": " << number << endl;
#define PRINT (TEXT) std::cout << TEXT << std::endl;

