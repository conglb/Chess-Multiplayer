//
// Created by Macbook Pro on 2/18/19.
//

#include "Game.h"

/*
 * Init game with parameters: window, boad, sprite
 */
Game::Game(sf::RenderWindow& window, Board& board, graphic::Sprite& sprite) {
    this->window = &window;
    this->board = &board;
    this->sprite = &sprite;
    init();
}

/*
 * Init a game: Render figures
 */
void Game::init() {
    figuresNum = -1; // index of figure
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            if (map[i][j] != 0) {
                figuresNum++;
                if (map[i][j] > 10) {
                    s[figuresNum].setTexture(*sprite->s2[map[i][j] - 11].getTexture());
                } else
                    s[figuresNum].setTexture(*sprite->s1[map[i][j] - 1].getTexture());
                // set position
                v[figuresNum].y = i * board->getWidth();
                v[figuresNum].x = j * board->getHeight();
                // implant position to sprite
                s[figuresNum].setPosition(v[count]);

            }
        }
    }
}

void Game::deleteFigure(int id) {
    swap(s[id], s[figuresNum]);
    swap(v[id], v[figuresNum]);
    swap(t[id], t[figuresNum]);
    figuresNum--;
}

bool Game::checkMove(int id) {
    /*
    switch (t[id]% 10) {
        case 1:

    }
     */
    return false;
}


bool Game::move(Vector2f& from, Vector2f& to) {
    // find position on board
    int x, y, u ,v;
    x = from.x / sprite->widthSprite;
    y = from.y / sprite->heightSprite;
    u = to.x / sprite->widthSprite;
    v = to.y / sprite->heightSprite;
    // reset left and right mouse's position
    from.x = 0;
    from.y = 0;
    to.x = 0;
    to.y = 0;
    // hand move here
    int fromId = -1; // id of figure FROM in s
    int toId = -1;
    for (int i = 0; i <= figuresNum; i++) {
        if (s[i] == from) {
            deleteFigure(i);
            fromId = i;
        }
        if (s[i] == to) {
            deleteFigure(i);
            toId = i;
        }
    }
    if (fromId == -1) return false; // FROM not a figure
    if (!checkMove(fromId)) return false;

    return true;

}

void Game::start() {
    Vector2f positionLastLeftClick, positionLastRightClick;
    cout << positionLastLeftClick.x;
    cout << positionLastLeftClick.y;
    while (window->isOpen()) {
        // Firstly, clear window
        window->clear();

        // Event listener
        sf::Event event;
        while (window->pollEvent(event)) {
            // Close application
            if (event.type == sf::Event::Closed) {
                window->close();
            }
            // Left click
            if (Mouse::isButtonPressed(Mouse::Left)) {
                positionLastLeftClick.x = Mouse::getPosition(*window).x;
                positionLastLeftClick.y = Mouse::getPosition(*window).y;
            }
            // Right click
            if (Mouse::isButtonPressed(Mouse::Right)) {
                positionLastRightClick.x = Mouse::getPosition(*window).x;
                positionLastRightClick.y = Mouse::getPosition(*window).y;
                // Handle move
                move(positionLastLeftClick, positionLastRightClick);
            }
        }

        board->render(); // render game board

        // Render the figures depend on the map here
        for (int i=0; i<32; i++) {
            window->draw(s[i]);
        }

        // Show
        window->display();
    } // end game
}

