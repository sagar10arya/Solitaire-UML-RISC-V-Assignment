#include "deck.h"
#include "hand.h"
#include <cassert>
#include <iostream>

// Test hand functionality
void testHand() {
    Hand testHand;
    Card card1(Card::Suit::Hearts, 5);
    Card card2(Card::Suit::Spades, 10);

    testHand.addCard(card1);
    testHand.addCard(card2);

    assert(testHand.getHandSize() == 2);
    std::cout << "✅ Test Passed: Hand holds 2 cards.\n";

    testHand.showHand();
}

// Run all tests
int main() {
    testHand();
    std::cout << "✅ All tests passed successfully!\n";
    return 0;
}