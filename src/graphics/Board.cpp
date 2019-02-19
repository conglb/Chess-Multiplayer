//
// Created by conglb on 2/18/19.
//

#include "Board.h"

Board::Board(sf::RenderWindow& window) {
    this->window = &window;
}

void Board::render() {
    sf::Texture texture;
    texture.loadFromFile("../res/board0.png");
    sf::Sprite sprite(texture);
    window->draw(sprite);
}

float Board::getHeight() {
    return height;
}

float Board::getWidth() {
    return width;
}

