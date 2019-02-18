//
// Created by Macbook Pro on 2/18/19.
//

#include "Game.h"

static int map[8][8] = {
        {1,2,3,4,5,3,2,1},
        {6,6,6,6,6,6,6,6},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {6,6,6,6,6,6,6,6},
        {1,2,3,5,4,3,2,1}
};

Game::Game(sf::RenderWindow& window, Board& board, Sprite& sprite) {
    this->window = &window;
    this->board = &board;
    this->sprite = &sprite;
}

void Game::start() {

    while (window->isOpen()) {

        // Event listener
        sf::Event event;
        while (window->pollEvent(event)) {
            // Close application
            if (event.type == sf::Event::Closed) {
                window->close();
            }
            // Left click
            if (event.type == sf::Event::MouseLeft) {
                sf::Vector2i position = sf::Mouse::getPosition();
                cout << position.x << " " << position.y << endl;
            }

            // Right click
        }
        window->clear();
        board->render();
        window->draw(sprite->pawn);
        window->display();
    } // end game
}

