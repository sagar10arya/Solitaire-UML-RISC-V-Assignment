#pragma once  // Ensures this file is included only once

#include <string>

class Card {
public:
    enum class Suit { Hearts, Diamonds, Clubs, Spades };

    // Constructor
    Card(Suit suit, int rank);

    // Accessor Methods
    std::string getSuit() const;
    int getRank() const;
    std::string toString() const;

private:
    Suit suit_;
    int rank_;
};
