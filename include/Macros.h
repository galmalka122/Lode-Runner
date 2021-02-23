#include <SFML/Graphics.hpp>
#pragma once

#define GRAY sf::Color(255, 255, 255, 100)

const float WIDTH = 1920.f;
const float HEIGHT = 1080.f;

const unsigned int NUM_OF_BUTTONS = 9;

const sf::Vector2f GRIDSIZE(30, 30);
const sf::Vector2f LADDERSIZE(30, 30);
const float PIXEL = 30;
const int NUMOFSTATS = 3;
const int NUM_OF_MENU_BUTTONS = 2;
const int TEXTSIZE = 30;
const float SCORE_TEXT = 100;
const int MESSAGETEXTSIZE = 55;
const sf::Vector2i RESOLUTION(1920, 1080);
const sf::Vector2f RESOLUTION_SIZE(1920, 1080);

const sf::Vector2f STATSIZE(RESOLUTION.x / NUMOFSTATS, RESOLUTION.y - (RESOLUTION.y / 10));
const sf::Vector2f QUIT_BUTTON_SIZE(150,150);
const sf::Vector2f START_BUTTON_SIZE(300, 100);

const sf::Vector2f STARTLOCATION(RESOLUTION.x / 2.f- START_BUTTON_SIZE.x/2.f, RESOLUTION.y - 400);
const sf::Vector2f QUITLOCATION(RESOLUTION.x - QUIT_BUTTON_SIZE.x, RESOLUTION.y- QUIT_BUTTON_SIZE.y);

//char signed:
const char GIFT = '+';
const char PLAYER = '@';
const char ENEMY = '%';
const char WALL = '#';
const char COIN = '*';
const char LADDER = 'H';
const char ROPE = '-';
const char SPACE = ' ';
