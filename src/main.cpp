#include "deck.h"
#include "hand.h"
#include "war_game.h"
#include <iostream>

void showMenu() {
    std::cout << "\n🎮 Card Game Menu 🎮\n";
    std::cout << "1. Play War Game\n";
    std::cout << "2. Interactive Mode (Draw, Shuffle, Show Hand)\n";
    std::cout << "3. Quit\n";
    std::cout << "Enter your choice: ";
}

void interactiveMode() {
    Deck deck;
    deck.shuffle();
    Hand playerHand;
    int choice;

    do {
        std::cout << "\n🎮 Interactive Mode 🎮\n";
        std::cout << "1. Draw a card\n";
        std::cout << "2. Shuffle deck\n";
        std::cout << "3. Show hand\n";
        std::cout << "4. Quit to main menu\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                if (!deck.isEmpty()) {
                    playerHand.addCard(deck.drawCard());
                    std::cout << "You drew a card!\n";
                } else {
                    std::cout << "The deck is empty!\n";
                }
                break;
            case 2:
                deck.shuffle();
                std::cout << "Deck shuffled!\n";
                break;
            case 3:
                playerHand.showHand();
                break;
            case 4:
                std::cout << "Returning to main menu...\n";
                break;
            default:
                std::cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);
}

int main() {
    int gameChoice;
    do {
        showMenu();
        std::cin >> gameChoice;

        switch (gameChoice) {
            case 1:
                playWarGame();
                break;
            case 2:
                interactiveMode();
                break;
            case 3:
                std::cout << "Thanks for playing! 🎉\n";
                break;
            default:
                std::cout << "Invalid choice! Try again.\n";
        }
    } while (gameChoice != 3);

    return 0;
}