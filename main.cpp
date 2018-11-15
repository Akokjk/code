#include "game.hpp"
int main()
{
  //I could not figure out how to make the window inside of the game itself which is a shame! :XX:X:
  sf::RenderWindow window(
    sf::VideoMode(X_RES, Y_RES),
    "Logically",
    sf::Style::Close
  );

  Game game(&window);
  game.run();
  return 0;
}
