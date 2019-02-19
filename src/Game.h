//
// Created by Macbook Pro on 2/18/19.
//

#ifndef CHESS_GAME_H
#define CHESS_GAME_H


#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include "graphics/Sprite.h"
#include "graphics/Board.h"

class Game {
public:
    // Constructor
    Game(sf::RenderWindow& window,  Board& board,  Sprite& sprite);

    // Init before start game
    void init();

    // Start method
    void start();

private:
    Sprite* sprite;
    Board* board;
    sf::RenderWindow* window;

    // image and postion
    int figuresNum;
    sf::Vector2f v[32];
    sf::Sprite s[32];


    // State of game
    int map[8][8] = {
        {1,2,3,4,5,3,2,1},
        {6,6,6,6,6,6,6,6},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {16,16,16,16,16,16,16,16},
        {11,12,13,15,14,13,12,11}
    };
};


#endif //CHESS_GAME_H
