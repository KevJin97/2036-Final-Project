#include "pch.h"
#include "Game.h"

Game::Game() : m_window(sf::VideoMode(640, 480), "Game Name")		//Change name
{
	player1.setfilepath("C:/Users/Jin/Downloads/2036FinalSkeletonVS/Mario.png");
	player1.settime(deltaT);
	player1.load();
	player1.setwindow(m_window);
	player1.setScale(.1f);
	
	//player2.setfilepath("C:/Users/Jin/Downloads/2036FinalSkeletonVS/Mario.png");
	//player2.settime(deltaT);
	//player2.load();
	//player2.setwindow(m_window);
	//player2.setScale(.1f);
}

void Game::run()
{
	sf::Clock clock;
	
	while (m_window.isOpen())
	{
		deltaT = clock.restart();
		processEvents();
		update();
		render();
	}
}

void Game::render()
{
	m_window.clear();
	player1.draw();
	player2.draw();
	
	m_window.display();
}

void Game::processEvents()
{
	player1.processEvents();
	player2.processEvents();
}

void Game::update()
{
	player1.update();
	player2.update();
}