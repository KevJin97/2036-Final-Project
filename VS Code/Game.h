#pragma once
#include "pch.h"
#include <SFML/Graphics.hpp>
#include "GameObject.h"

class Game
{
	public:
		Game();
		void run();
	
	protected:
		void update();
		virtual void processEvents();
		void render();
		
		sf::RenderWindow m_window;

		sf::Time deltaT;
		
		GameObject m_player1;
		GameObject m_player2;
};