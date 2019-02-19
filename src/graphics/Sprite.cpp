//
// Created by conglb on 2/18/19.
//

#include "Sprite.h"

int heightSprite = 60;
float widthSprite = 340 / 6;

Sprite::Sprite() {
    string imageUrl = "../res/figures.png";

    for (int i=0; i<6; i++) {
        sf::Texture *texture = new sf::Texture();
        sf::IntRect *rect = new sf::IntRect(i * widthSprite, 0, widthSprite, heightSprite);
        texture->loadFromFile(imageUrl, *rect);
        s1[i].setTexture(*texture);
    }

    for (int i=0; i<6; i++) {
        sf::Texture *texture = new sf::Texture();
        sf::IntRect *rect = new sf::IntRect(i * widthSprite, heightSprite, widthSprite, heightSprite);
        texture->loadFromFile(imageUrl, *rect);
        s2[i].setTexture(*texture);
    }
}