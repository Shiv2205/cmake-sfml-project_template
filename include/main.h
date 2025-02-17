#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <SFML/Graphics.hpp>

#define LOG(x)  (std::cout << x << std::endl)


//Prototypes
inline void event_handler (sf::RenderWindow& window);
inline void loadFont      (sf::Font& font);
inline void loadTexture   (sf::Texture& texture, std::string texture_path);

//Constants
const std::string font_path = "res/poppins.ttf";
const std::string img_path  = "res/Maps/32x32/[A]_type1/Tile_1.png";
const std::nullptr_t num = nullptr;

#endif // MAIN_H