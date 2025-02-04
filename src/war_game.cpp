#include "deck.h"
#include "hand.h"
#include <iostream>

void playWarGame() {
    Deck deck;
    deck.shuffle();
    
    Hand player1Hand, player2Hand;
    int player1Score = 0, player2Score = 0;

    std::cout << "🎮 Let’s Play War! 🎮\n";

    while (!deck.isEmpty()) {
        player1Hand.addCard(deck.drawCard());
        player2Hand.addCard(deck.drawCard());

        std::cout << "\n🃏 Player 1: ";
        player1Hand.showHand();
        std::cout << "🃏 Player 2: ";
        player2Hand.showHand();

        int p1Rank = player1Hand.getHandSize();
        int p2Rank = player2Hand.getHandSize();

        if (p1Rank > p2Rank) {
            player1Score++;
            std::cout << "🏆 Player 1 Wins this round!\n";
        } else if (p1Rank < p2Rank) {
            player2Score++;
            std::cout << "🏆 Player 2 Wins this round!\n";
        } else {
            std::cout << "🤝 It's a Tie! Drawing again...\n";
        }

        player1Hand = Hand();  // Clear hands for next round
        player2Hand = Hand();
    }

    std::cout << "\n🎯 Final Score: Player 1: " << player1Score << " | Player 2: " << player2Score << "\n";
    if (player1Score > player2Score) std::cout << "🏆 Player 1 Wins the Game!\n";
    else if (player1Score < player2Score) std::cout << "🏆 Player 2 Wins the Game!\n";
    else std::cout << "🤝 The game is a Tie!\n";
}