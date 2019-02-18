//
// Created by conglb on 2/18/19.
//

#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H


#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <iostream>

class Board {
public:
    Board(sf::RenderWindow& window);
    void render();
private:
    sf::RenderWindow* window;
};


#endif //CHESS_BOARD_H
