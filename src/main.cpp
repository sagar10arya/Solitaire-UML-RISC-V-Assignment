#include "card.h"
#include <iostream>

int main() {
    // Create a card (Ace of Hearts)
    Card myCard(Card::Suit::Hearts, 1);

    // Print the card
    std::cout << "Created Card: " << myCard.toString() << std::endl;

    return 0;
}
