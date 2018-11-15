#include "main.hpp"
class SpriteList{
private:
  class node{
    sf::Sprite item;
    node next;
    node(sf::Sprite item){
      this.item = item;
      this.next = node(NULL);
    }
  };
  node top;
  int numItems;
public:
  SpriteList(){
    top = new node(NULL);
    numItems = 0;
  }
  bool isEmpty(){
    return(numItems ==0);
  }
  void push(sf::Sprite x){
    node N = new node(x);
    N.next = top;
    top = N;
    numItems++;
  }
  sf::Sprite pop(){
    sf::Sprite sp = top.item;
    top = top.next;
    numItems--;
    return sp;
  }
  sf::Sprite pop_all(){
    top = NULL;
    numItems = 0;
  }
  sf::Sprite peek(){
    return top.item;
  }
};
