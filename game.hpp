#include "main.hpp"
#pragma once


class Game{
private:
  sf::RenderWindow *window;
  sf::Event event;
  void check_events();
  void draw();
  void update();
  std::vector<sf::Drawable*> objects; //holds all drawable objects
  std::vector<sf::Texture*> textures; //holds all drawable objects
  sf::Sprite create_gate(int kind, sf::Vector2f);
public:
  Game(sf::RenderWindow *game);
  void run();
};
