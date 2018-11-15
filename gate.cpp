#include "game.hpp"
sf::Sprite Game::create_gate(int kind, sf::Vector2f position){
  sf::Sprite drawn;
  sf::Texture text;
  switch(kind){
    case 0:
      text.loadFromFile("Resources/andgate.png");
      break;
    case 1:
      text.loadFromFile("Resources/notgate.png");
      break;
    case 2:
    text.loadFromFile("Resources/orgate.png");
      break;
    default:
      break;
  }
  drawn.setTexture(text);
  drawn.setPosition(position);
  return drawn;
}
