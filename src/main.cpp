#include "card.h"
#include "deck.h"
#include <iostream>

int main() {
    // Create a deck of 52 cards
    Deck deck;

    // Shuffle the deck
    std::cout << "Shuffling the deck...\n";
    deck.shuffle();

    // Draw 5 cards
    std::cout << "Drawing 5 cards:\n";
    for (int i = 0; i < 5; i++) {
        Card drawnCard = deck.drawCard();
        std::cout << "Card " << (i + 1) << ": " << drawnCard.toString() << std::endl;
    }

    // Check if the deck is empty
    if (deck.isEmpty()) {
        std::cout << "The deck is empty!" << std::endl;
    } else {
        std::cout << "Cards remaining in deck!" << std::endl;
    }

    return 0;
}
