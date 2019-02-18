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
    // Constructor
    Sprite();
    // Single Sprite
    sf::Sprite pawn, queen, king, bishop, knight, rook;
};


#endif //CHESS_SPRITE_H
