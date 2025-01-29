#include "card.h"
#include <stdexcept>

// Constructor Implementation
Card::Card(Suit suit, int rank) : suit_(suit), rank_(rank) {
    if (rank < 1 || rank > 13) {
        throw std::invalid_argument("Rank must be between 1 and 13.");
    }
}

// Get suit as a string
std::string Card::getSuit() const {
    switch (suit_) {
        case Suit::Hearts: return "Hearts";
        case Suit::Diamonds: return "Diamonds";
        case Suit::Clubs: return "Clubs";
        case Suit::Spades: return "Spades";
    }
    return "Unknown";
}

// Get rank
int Card::getRank() const {
    return rank_;
}

// Convert card to string representation
std::string Card::toString() const {
    return getSuit() + " " + std::to_string(rank_);
}