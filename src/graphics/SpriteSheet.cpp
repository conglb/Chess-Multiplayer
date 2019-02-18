//
// Created by conglb on 2/18/19.
//

#include "SpriteSheet.h"

SpriteSheet::SpriteSheet() {
    load();
}

void SpriteSheet::load() {
    sheet.loadFromFile("./res/figures.png");
}

sf::Texture SpriteSheet::getSheet() {
    return sheet;
}