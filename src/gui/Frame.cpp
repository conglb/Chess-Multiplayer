//
// Created by Macbook Pro on 2/18/19.
//

#include "Frame.h"
#include "../Game.h"
#include "../graphics/Board.h"
#include "../graphics/Sprite.h"
#include <SFML/Graphics.hpp>

Frame::Frame() {
    sf::RenderWindow window(sf::VideoMode(454,454), "Chess");
    Board board(window);
    Sprite sprite;
    Game* game = new Game(window, board, sprite);
    game->start();
}