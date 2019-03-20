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

bool Game::checkRoad(int x, int y, int u, int v) {
    if (x == u) {
        for (int col = y+1; col < v; col++)
            if (map[x][col] != 0) return false;
    }
    if (y == v) {
        for (int row = x+1; row < u; row++) {
            if (map[row][y] != 0) return false;
        }
    }
    // Check diagnose here

}

bool Game::checkMove(int fromId, int toId, int x, int y, int u, int v) {
    // Firstly, check they are same side or oponent
    if (toId != -1) {
        if ((typeFigure[fromId] - typeFigure[toId]) < 10) {
            return false;
        }
    }
    cout << fromId << " " << toId << endl;
    switch (typeFigure[fromId] % 10) {
        case 1:
            cout << "Vehicle";
            if (x != u && y != v) {
                return false;
            }
            break;
        case 2:
            if ((abs(x - u) != 1 && abs(x - u) != 2) || (abs(y - v) != 2 && abs(y - v) != 1)) {
                return false;
            }
            if (abs(x - u) == abs(y - v)) {
                return false;
            }
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

    cout << x << " " << y << " " << u << " " << v << endl;

    // HANDLE MOVE HERE
    int fromId = -1; // id of figure FROM in spriteFigure
    int toId = -1; // id of figure TO in spriteFigure
    for (int i = 0; i <= figuresNum; i++) {
        if (spriteFigure[i].getPosition().x == x * board->getWidth() &&  spriteFigure[i].getPosition().y == y * board->getHeight()) {
            fromId = i;
        }
        if (spriteFigure[i].getPosition().x == u * board->getWidth() &&  spriteFigure[i].getPosition().y == v * board->getHeight()) {
            toId = i;
        }
    }

    // reset left and right mouse'spriteFigure position
    from.x = 0;
    from.y = 0;
    to.x = 0;
    to.y = 0;

    // Check it !
    if (fromId == -1) return false; // FROM not a figure
    if (!checkMove(fromId, toId, x, y, u ,v)) return false;

    cout << "Check is OK" << endl;

    // MOVE
    if (toId != -1) deleteFigure(toId); // delete oponent
    vectorFigure[fromId].x = u * board->getWidth();
    vectorFigure[fromId].y = v * board->getHeight();
    spriteFigure[fromId].setPosition(vectorFigure[fromId]);
    map[u][v] = map[x][y];
    map[x][y] = 0;

    return true;

}

void Game::start() {
    Vector2f positionLastLeftClick, positionLastRightClick;
    //cout << positionLastLeftClick.x;
    //cout << positionLastLeftClick.y;
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
                if (positionLastLeftClick.x != 0 || positionLastLeftClick.y != 0) {
                    move(positionLastLeftClick, positionLastRightClick);
                }
            }
        }

        board->render(); // render game board

        // cout << "Render and render" << endl;
        // Render the figures depend on the map here
        for (int i=0; i<32; i++) {
            window->draw(spriteFigure[i]);
        }

        // Show
        window->display();
    } // end game
}

