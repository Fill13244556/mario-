#include "SFML/Graphics.hpp"
#include "settings.h"

class Player {
private:
	sf::Sprite sprite;
	sf::Texture texture;
public:
	Player() {
		texture.loadFromFile("mario.png");
		sprite.setTexture(texture);
		sprite.setPosition(WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2);

	}

	void update() {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
			sprite.move(-0.1, 0);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
			sprite.move(0.1, 0);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
			sprite.move(0, 0.1);
		}
	}
	void draw(sf::RenderWindow& window) {
		window.draw(sprite);

	}
}; 

	