#include "main.hpp"
class SpriteList{
private:
  class node{
    sf::Sprite item;
    node next;
    node(sf::Sprite item);
  };
  node top;
  int numItems;
public:
  SpriteList();
  bool isEmpty();
  void push(sf::Sprite x);
  sf::Sprite pop();
  sf::Sprite pop_all();
  sf::Sprite peek();
};
