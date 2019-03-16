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
    /*
    * Init game with parameters: window, boad, spriteFigure
    */
    Game(sf::RenderWindow& window,  Board& board,  graphic::Sprite& sprite);

    // Init before start game
    /*
    * Init a game: Render figures
    */
    void init();

    // Start method
    void start();

    // Figure move implement
    bool move(Vector2f& from, Vector2f& to);

    /*
     * Check whether figure id can move from (x,y) to (u,v) or not
     */
    bool checkMove(int id, int x, int y, int u, int v);

    /*
    * Figure is deleted by oponent
    */
    void deleteFigure(int id);

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
     * vectorFigure[i]: position of figure index i
     * What happen if figure i die?
     */
    sf::Vector2f vectorFigure[32];
    /*
     * spriteFigure[i]: spriteFigure of figure index i
     */
    sf::Sprite spriteFigure[32];
    /*
     * type[i]: type of figure index i
     */
    int typeFigure[32];


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
