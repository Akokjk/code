#include "game.hpp"
void Game::create_gate(int kind, sf::Vector2f position){
  sf::Sprite drawn;
  textures.push_back(new sf::Texture());
  switch(kind){
    case 0:
      textures.back()->loadFromFile("Resources/andgate.png");
      break;
    case 1:
      textures.back()->loadFromFile("Resources/notgate.png");
      break;
    case 2:
      textures.back()->loadFromFile("Resources/orgate.png");
      break;
    default:
      break;
  }
  textures.back()->setSmooth(true);
  drawn.setTexture(*textures.back());
  drawn.setPosition(position);
  drawn.setScale(.1, .1);
  objects.push_back(new sf::Sprite(drawn));
}
