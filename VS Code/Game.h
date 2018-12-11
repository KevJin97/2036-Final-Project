#pragma once
#include "pch.h"
#include <SFML/Graphics.hpp>
#include "GameObject.h"

class Game
{
	public:
		Game();
		void run();
		
	private:
		void update();
		void processEvents();
		void render();
		
		sf::RenderWindow m_window;
		sf::Time deltaT;
		
		GameObject player1;
		GameObject player2;
};