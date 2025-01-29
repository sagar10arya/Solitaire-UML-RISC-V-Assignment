#include "card.h"
#include <cassert>
#include <iostream>

// Test function
void testCard() {
    Card testCard(Card::Suit::Spades, 10);
    assert(testCard.getSuit() == "Spades");
    assert(testCard.getRank() == 10);
    std::cout << "✅ Test Passed: Card(Spades, 10) works correctly.\n";
}

// Main function to run test
int main() {
    testCard();
    return 0;
}
