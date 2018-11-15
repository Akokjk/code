#include "game.hpp"
void Game::create_menu(){
  sf::RectangleShape menu;
  menu.setSize(sf::Vector2f(X_RES/4, Y_RES));
  menu.setOutlineColor(sf::Color::Black);
  menu.setOutlineThickness(3);
  menu.setFillColor(sf::Color::Yellow);
  menu.setPosition(0, 0);
  objects.push_back(new sf::RectangleShape(menu));
}
