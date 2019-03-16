//
// Created by Macbook Pro on 2/18/19.
//

#include "Game.h"


Game::Game(sf::RenderWindow& window, Board& board, graphic::Sprite& sprite) {
    this->window = &window;
    this->board = &board;
    this->sprite = &sprite;
    init();
}


void Game::init() {
    figuresNum = -1; // index of figure
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            if (map[i][j] != 0) {
                figuresNum++;
                if (map[i][j] > 10) {
                    spriteFigure[figuresNum].setTexture(*sprite->s2[map[i][j] - 11].getTexture());
                } else
                    spriteFigure[figuresNum].setTexture(*sprite->s1[map[i][j] - 1].getTexture());
                // set position
                vectorFigure[figuresNum].y = i * board->getWidth();
                vectorFigure[figuresNum].x = j * board->getHeight();
                // implant position to spriteFigure
                spriteFigure[figuresNum].setPosition(vectorFigure[figuresNum]);

            }
        }
    }
}

void Game::deleteFigure(int id) {
    swap(spriteFigure[id], spriteFigure[figuresNum]);
    swap(vectorFigure[id], vectorFigure[figuresNum]);
    swap(typeFigure[id], typeFigure[figuresNum]);
    figuresNum--;
}

bool Game::checkMove(int fromId, int toId int x, int y, int u, int v) {
    switch (typeFigure[id] % 10) {
        case 1:

            break;
        default:
            break;
    }
    return true;
}


bool Game::move(Vector2f& from, Vector2f& to) {
    // find position on board
    int x, y, u ,v;
    x = from.x / sprite->widthSprite; // from = (x, y) on board
    y = from.y / sprite->heightSprite;
    u = to.x / sprite->widthSprite; // to = (u,v) on board
    v = to.y / sprite->heightSprite;

    // HANDLE MOVE HERE
    int fromId = -1; // id of figure FROM in spriteFigure
    int toId = -1; // id of figure TO in spriteFigure
    for (int i = 0; i <= figuresNum; i++) {
        if (from.x - x * sprite->widthSprite <= sprite->widthSprite
        &&  from.y - y * sprite->heightSprite <= sprite->heightSprite) {
            deleteFigure(i);
            fromId = i;
        }
        if (to.x - u * sprite->widthSprite <= sprite->widthSprite
        &&  to.y - v * sprite->heightSprite <= sprite->heightSprite) {
            deleteFigure(i);
            toId = i;
        }
    }
    if (fromId == -1) return false; // FROM not a figure
    if (!checkMove(fromId, x, y, u ,v)) return false;

    // reset left and right mouse'spriteFigure position
    from.x = 0;
    from.y = 0;
    to.x = 0;
    to.y = 0;
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
            window->draw(spriteFigure[i]);
        }

        // Show
        window->display();
    } // end game
}

