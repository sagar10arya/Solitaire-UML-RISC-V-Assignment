#ifndef HAND_H
#define HAND_H

#include <vector>
#include "card.h"

class Hand {
private:
    std::vector<Card> handCards;

public:
    void addCard(const Card& card);  // Add a card to hand
    void showHand() const;  // Print hand
    int getHandSize() const;  // Get number of cards in hand
};

#endif