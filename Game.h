#pragma once
#include"SFML/Graphics.hpp"
#include "Game.h"
#include "settings.h"
#include "Player.h"

class Game {
private: 
	sf::RenderWindow window; 
	Player player; 
public: 
	Game() {
		window.create(sf::VideoMode( WINDOW_WIDTH, WINDOW_HEIGHT ), WINDOW_TITLE);
		window.setFramerateLimit(FPS);
	}

	void checkEvents() {
		sf::Event event; 
		while (window.pollEvent(event))
			if (event.type == sf::Event::Closed) window.close();
	}


	void draw() {
		window.clear(); 
		player.draw(window);
		window.display(); 

	}
	void play() {
		while (window.isOpen()) {
			checkEvents();
		    draw();
		}
	}
};