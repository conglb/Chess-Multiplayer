//
// Created by Macbook Pro on 2/18/19.
//

#include "Game.h"

Game::Game(sf::RenderWindow& window, Board& board, Sprite& sprite) {
    this->window = &window;
    this->board = &board;
    this->sprite = &sprite;
    init();
}

void Game::init() {
    figuresNum = 32;
    int count = -1;
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            if (map[i][j] != 0) {
                count++;
                if (map[i][j] > 10) {
                    s[count].setTexture(*sprite->s2[map[i][j] - 11].getTexture());
                } else {
                    s[count].setTexture(*sprite->s1[map[i][j] - 1].getTexture());
                }
                v[count].y = i * board->getWidth();
                v[count].x = j * board->getHeight();
                s[count].setPosition(v[count]);
                s[count].setPosition(v[count]);

            }
        }
    }
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

        // render the figures depend on the map here
        for (int i=0; i<32; i++) {
            window->draw(s[i]);
        }

        window->display();
    } // end game
}

