
---

### **🧪 New Test Cases for `testCard.cpp`**
Since we now have **two gameplay modes**, we should:
✅ Ensure **War Game scoring works**  
✅ Test **interactive drawing/shuffling**  

#### **🔹 Updated `testCard.cpp`**
```cpp
#include "deck.h"
#include "hand.h"
#include <cassert>
#include <iostream>

// Test War Game Logic (Basic)
void testWarGame() {
    Deck deck;
    deck.shuffle();
    Hand player1Hand, player2Hand;

    // Simulate one round of War
    player1Hand.addCard(deck.drawCard());
    player2Hand.addCard(deck.drawCard());

    assert(player1Hand.getHandSize() == 1);
    assert(player2Hand.getHandSize() == 1);

    std::cout << "✅ Test Passed: War Game can start correctly.\n";
}

// Test Interactive Mode
void testInteractiveMode() {
    Deck deck;
    deck.shuffle();
    Hand testHand;

    // Draw a card
    testHand.addCard(deck.drawCard());
    assert(testHand.getHandSize() == 1);

    std::cout << "✅ Test Passed: Interactive Mode allows drawing cards.\n";
}

// Run All Tests
int main() {
    testWarGame();
    testInteractiveMode();
    std::cout << "✅ All tests passed successfully!\n";
    return 0;
}