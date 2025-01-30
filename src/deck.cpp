#include "deck.h"
#include <algorithm>
#include <random>
#include <iostream>
#include "card.h" 

// Constructor: Initializes the deck with 52 cards
Deck::Deck() {
    for (int suit = 0; suit < 4; suit++) {
        for (int rank = 1; rank <= 13; rank++) {
            cards.emplace_back(static_cast<Card::Suit>(suit), rank);
        }
    }
}

// Shuffle the deck randomly
void Deck::shuffle() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
}

// Draw a card from the top of the deck
Card Deck::drawCard() {
    if (!cards.empty()) {
        Card drawn = cards.back();
        cards.pop_back();
        return drawn;
    } else {
        throw std::out_of_range("No cards left in the deck!");
    }
}

// Check if the deck is empty
bool Deck::isEmpty() const {
    return cards.empty();
}

// Print all cards (for debugging)
void Deck::printDeck() const {
    for (const auto& card : cards) {
        std::cout << card.toString() << "\n";
    }
}
