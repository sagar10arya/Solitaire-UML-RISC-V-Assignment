#ifndef DECK_H
#define DECK_H

#include <vector>
#include "card.h"

class Deck {
private:
    std::vector<Card> cards;

public:
    Deck();                     // Constructor to initialize deck
    void shuffle();             // Shuffle the deck
    Card drawCard();            // Draw a card from the deck
    bool isEmpty() const;       // Check if the deck is empty
    void printDeck() const;     // Debug: Print all cards in the deck
};

#endif // DECK_H