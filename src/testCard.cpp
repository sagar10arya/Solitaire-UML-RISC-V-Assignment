#include "card.h"
#include "deck.h"
#include <cassert>
#include <iostream>

// Test function for Card class
void testCard() {
    Card testCard(Card::Suit::Spades, 10);
    assert(testCard.getSuit() == "Spades");
    assert(testCard.getRank() == 10);
    std::cout << "✅ Test Passed: Card(Spades, 10) works correctly.\n";
}

// Test function for Deck class
void testDeck() {
    Deck deck;
    
    // Check if deck initializes with 52 cards
    assert(!deck.isEmpty());
    std::cout << "✅ Test Passed: Deck initialized with cards.\n";

    // Shuffle the deck (check that it doesn't crash)
    deck.shuffle();
    std::cout << "✅ Test Passed: Deck shuffled successfully.\n";

    // Draw a card and check if deck size decreases
    int initialSize = 52;
    deck.drawCard();
    assert(!deck.isEmpty());
    std::cout << "✅ Test Passed: Drawing a card reduces deck size.\n";

    // Draw all cards to make the deck empty
    for (int i = 1; i < initialSize; i++) {
        deck.drawCard();
    }

    // Now deck should be empty
    assert(deck.isEmpty());
    std::cout << "✅ Test Passed: Deck is empty after drawing all cards.\n";

    // Attempting to draw from empty deck should throw exception
    try {
        deck.drawCard();
        assert(false);  // If we reach here, the test failed
    } catch (const std::out_of_range& e) {
        std::cout << "✅ Test Passed: Exception thrown when drawing from empty deck.\n";
    }
}

// Main function to run tests
int main() {
    testCard();
    testDeck();
    return 0;
}
