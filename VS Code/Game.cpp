#include "pch.h"
#include "Game.h"

Game::Game() : m_window(sf::VideoMode(640, 480), "GAME NAME")
{
	m_player1.load("C:/Users/Jin/Downloads/2036FinalSkeletonVS");	//loads player ADD LATER
	m_player2.load("C:/Users/Jin/Downloads/2036FinalSkeletonVS");

	m_player1.setwindow(m_window);
	m_player2.setwindow(m_window);

	m_player1.setScale(.1f);		//scales sprite
	m_player2.setScale(.1f);
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
	m_player1.draw();
	m_player2.draw();

	m_window.display();
}

void Game::processEvents()
{
	m_player1.processEvents();
	m_player2.processEvents();
}

void Game::update()
{
	m_player1.update(deltaT);
	m_player2.update(deltaT);
}