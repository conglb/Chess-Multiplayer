//
// Created by conglb on 2/18/19.
//

#ifndef CHESS_SPRITE_H
#define CHESS_SPRITE_H


#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>

using namespace std;

class Sprite {
public:
    int heightSprite = 60;
    float widthSprite = 340 / 6;
    // Constructor
    Sprite();
    // Single Sprite
    sf::Sprite s1[6], s2[6];
};


#endif //CHESS_SPRITE_H
