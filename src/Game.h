//
// Created by Macbook Pro on 2/18/19.
//

#ifndef CHESS_GAME_H
#define CHESS_GAME_H


#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include "graphics/Sprite.h"
#include "graphics/Board.h"

using namespace sf;
using namespace std;

class Game {
public:
    // Constructor
    Game(sf::RenderWindow& window,  Board& board,  graphic::Sprite& sprite);

    // Init before start game
    void init();

    // Start method
    void start();

    // Figure move implement
    void move(Vector2f& from, Vector2f& to);

private:
    graphic::Sprite* sprite;
    Board* board;
    sf::RenderWindow* window;

    sf::Clock clock;

    /*
     * Number of figures
     */
    int figuresNum;
    /*
     * v[i]: position of figure index i
     * What happen if figure i die?
     */
    sf::Vector2f v[32];
    /*
     * s[i]: sprite of figure index i
     */
    sf::Sprite s[32];


    // Initial state of game
    // map[i][j] > 10 is black
    // map[i][n] < 10 is white
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
