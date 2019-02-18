//
// Created by conglb on 2/18/19.
//

#include "Sprite.h"

Sprite::Sprite() {
    string imageUrl = "../res/figures.png";
    sf::Texture* texture = new sf::Texture();
    sf::IntRect rect(0,0,500,500);
    texture->loadFromFile(imageUrl);
    pawn.setTexture(*texture);
}