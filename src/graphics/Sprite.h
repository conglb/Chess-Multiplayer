//
// Created by conglb on 2/18/19.
//

#ifndef CHESS_SPRITE_H
#define CHESS_SPRITE_H


#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>

using namespace std;

namespace graphic {
    class Sprite {
    public:
        float heightSprite = 60;
        float widthSprite = 340 / 6;
        // Constructor
        Sprite();
        // Single Sprite, s1 is for white, s2 is for black
        sf::Sprite s1[6], s2[6];
    };
}

using namespace graphic;


#endif //CHESS_SPRITE_H
