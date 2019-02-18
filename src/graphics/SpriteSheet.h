//
// Created by conglb on 2/18/19.
//

#ifndef CHESS_SPRITESHEET_H
#define CHESS_SPRITESHEET_H


#include <SFML/Graphics/Texture.hpp>

class SpriteSheet {
public:
    // Constructor
    SpriteSheet();
    // Read spritesheet from file
    void load();
    // Return sheet of sprites
    sf::Texture getSheet();
private:
    sf::Texture sheet;
};


#endif //CHESS_SPRITESHEET_H
