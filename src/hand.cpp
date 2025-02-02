#include "hand.h"
#include <iostream>

// Add a card to the player's hand
void Hand::addCard(const Card& card) {
    handCards.push_back(card);
}

// Display all cards in hand
void Hand::showHand() const {
    std::cout << "Player's hand: ";
    for (const auto& card : handCards) {
        std::cout << card.toString() << " | ";
    }
    std::cout << std::endl;
}

// Get total number of cards in hand
int Hand::getHandSize() const {
    return handCards.size();
}
