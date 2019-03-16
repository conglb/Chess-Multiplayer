//
// Created by Macbook Pro on 2/18/19.
//

#include "Frame.h"
#include "../Game.h"
#include "../graphics/Board.h"
#include "../graphics/Sprite.h"
#include <SFML/Graphics.hpp>

using namespace graphic;

Frame::Frame() {
    // Window
    sf::RenderWindow window(sf::VideoMode(454,454), "Chess");
    window.setFramerateLimit(60); // set framerate limit

    // Board
    Board board(window);

    // Sprite
    graphic::Sprite sprite;

    // Game
    Game game(window, board, sprite);
    game.start();
}