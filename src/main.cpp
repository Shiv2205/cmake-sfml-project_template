#include "main.h"


int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({900u, 900u}), "CMake SFML Project");
    window.setVerticalSyncEnabled(true);
    //window.setFramerateLimit(144);

    //Text
    sf::Font font;
    loadFont(font);
    sf::Text my_text(font, "Hello World", 26);

    //Image
    sf::Texture img_texture;
    loadTexture(img_texture, img_path);
    sf::Sprite my_sprite(img_texture);

    sf::Vector2i position(0, 128);
    sf::Vector2i size(32, 32);
    sf::IntRect sprite_rect(position, size);
    my_sprite.setTextureRect(sprite_rect);


    while (window.isOpen())
    {
      event_handler(window);

      window.clear(sf::Color::Black);

      //window.draw(my_text);
      window.draw(my_sprite);
      window.display();
    }

}

void event_handler(sf::RenderWindow& window)
{
  while (const std::optional event = window.pollEvent())
  {
    if (event->is<sf::Event::Closed>())
    {
        window.close();
    }
  }
}

void loadFont(sf::Font& font)
{
  if ( ! font.openFromFile(font_path) )
  {
    LOG("Error loading font");
  }
}

void loadTexture(sf::Texture& texture, std::string texture_path)
{
  if ( ! texture.loadFromFile(texture_path))
  {
    LOG("Error loading texture");
  }
}