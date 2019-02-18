//
// Created by Macbook Pro on 2/18/19.
//

#ifndef CHESS_GAME_H
#define CHESS_GAME_H


#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include "graphics/Sprite.h"
#include "graphics/Board.h"


using namespace std;

class Game {
public:
    // State of game
    static int map[8][8];

    // Constructor
    Game( sf::RenderWindow& window,  Board& board,  Sprite& sprite);

    // Start method
    void start();
private:
    Sprite* sprite;
    Board* board;
    sf::RenderWindow* window;
};


#endif //CHESS_GAME_H
