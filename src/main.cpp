#include "deck.h"
#include "hand.h"
#include <iostream>

int main() {
    Deck deck;
    deck.shuffle();

    Hand player1Hand, player2Hand;

    // Each player draws a card
    std::cout << "🎮 Let’s Play War! 🎮" << std::endl;
    if (!deck.isEmpty()) {
        player1Hand.addCard(deck.drawCard());
        player2Hand.addCard(deck.drawCard());
    }

    // Show hands
    std::cout << "🃏 Player 1: ";
    player1Hand.showHand();
    std::cout << "🃏 Player 2: ";
    player2Hand.showHand();

    // Determine winner
    int p1Rank = player1Hand.getHandSize() > 0 ? player1Hand.getHandSize() : 0;
    int p2Rank = player2Hand.getHandSize() > 0 ? player2Hand.getHandSize() : 0;

    if (p1Rank > p2Rank) {
        std::cout << "🏆 Player 1 Wins!" << std::endl;
    } else if (p1Rank < p2Rank) {
        std::cout << "🏆 Player 2 Wins!" << std::endl;
    } else {
        std::cout << "🤝 It's a Tie! Draw again!" << std::endl;
    }

    return 0;
}