#include <SFML/Graphics.hpp>

int main() {
  // Create a window with dimensions 800x600
  sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Basic Window");

  // Main loop
  while (window.isOpen()) {
    // Event handling
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    // Clear the window with a color
    window.clear(sf::Color::Blue);

    // Display the content
    window.display();
  }

  return 0;
}
