#include "game.hpp"

Game::Game(sf::RenderWindow *game)
{
  window = game;
  window->setMouseCursorVisible(true);
  sf::RectangleShape rectangle;
  rectangle.setSize(sf::Vector2f(100, 50));
  rectangle.setOutlineColor(sf::Color::Red);
  rectangle.setOutlineThickness(5);
  rectangle.setPosition(10, 20);
  sf::Sprite test;
  sf::Texture text;

  if (!text.loadFromFile("Resources/spon.png" , sf::IntRect(10, 10, 32, 32)))
  {
      std::cout << "could load image";
  }

  test.setPosition(sf::Vector2f(60.f, 60.f));
  textures.push_back(new sf::Texture(text));
  objects.push_back(new sf::Sprite(test));
  objects.push_back(new sf::RectangleShape(rectangle));
}

void Game::run()
{
  while (window->isOpen())
  {
    check_events();
    update();
    draw();
  }
}

void Game::check_events()
{
  while (window->pollEvent(event))
  {
      switch(event.type)
      {
        case sf::Event::Closed:
          window->close();
          break;
        case sf::Event::MouseButtonPressed:
          if (event.mouseButton.button == sf::Mouse::Right)
          {

          }
          if (event.mouseButton.button == sf::Mouse::Left)
          {
             sf::Sprite he = create_gate(0, sf::Vector2f((float)event.mouseButton.x, (float)event.mouseButton.y));
             objects.push_back(new sf::Sprite(he));
             std::cout << objects.size() << std::endl;
          }
          break;
        default:
          break;
      }
  }
}
void Game::draw()
{


  window->clear(sf::Color(255, 255,255));

  int c = 0;
  for (unsigned i=0; i<objects.size(); i++){
    if(*objects.at(i) == sf::Texture){
      *objects.at(i)->setTexture = *textures.at(c);
      c++;
    }
    window->draw(*objects.at(i));
  }



  window->display();
}


void Game::update()
{


}
