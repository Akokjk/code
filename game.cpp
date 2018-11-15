#include "game.hpp"

Game::Game(sf::RenderWindow *game)
{
  window = game;
  window->setMouseCursorVisible(true);
  /* Testing the vectors that hold shit
  sf::RectangleShape rectangle;
  rectangle.setSize(sf::Vector2f(100, 50));
  rectangle.setOutlineColor(sf::Color::Red);
  rectangle.setOutlineThickness(5);
  rectangle.setPosition(10, 20);
  sf::Sprite test;

  textures.push_back(new sf::Texture());
  textures.back()->loadFromFile("Resources/spon.png");


  test.setTexture(*textures.back());

  //sprites.push_back(new sf::Sprite(test));
  objects.push_back(new sf::Sprite(test));
  objects.push_back(new sf::RectangleShape(rectangle));
  */
  create_menu(); 
  //TODO:: Create a menu to select parts or tools
  //right click to add a gate left click drag to create a wire
  //wires snap to the nearest input or output node of a gate or element
  //Add a clock or create logic to simulate one
  //Todo:: create wires to connect gates
  //Todo:: turn the connections of gates into logic and find the awsner
  //Todo:: add functionality for the switch and light
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
            create_gate(1, sf::Vector2f((float)event.mouseButton.x, (float)event.mouseButton.y));
          }
          if (event.mouseButton.button == sf::Mouse::Left)
          {
            create_gate(0, sf::Vector2f((float)event.mouseButton.x, (float)event.mouseButton.y));
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
  for (unsigned i=0; i<objects.size(); i++){

    window->draw(*objects.at(i));
  }
  window->display();
}


void Game::update()
{


}
