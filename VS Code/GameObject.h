#pragma once
#include "pch.h"
#include "Game.h"
#include <SFML/Graphics.hpp>

class GameObject
{
	public:
		GameObject() {}
		//GameObject(const std::string &filename);
		virtual bool load(const std::string &filename);
		
		virtual void draw();
		
		virtual void update(sf::Time &deltaT);
		
		virtual void setPosition(float x, float y);
		
		virtual void move(sf::Vector2f);
		
		virtual sf::Vector2f getPosition() const;
		virtual float getHeight() const;
		virtual float getWidth() const;
		virtual void setScale(float);
		virtual void setwindow(sf::RenderWindow&);
		virtual void processEvents();
		virtual void handlePlayerInput(sf::Keyboard::Key key, bool isDown);

	private:

		sf::Sprite m_sprite;
		sf::Texture m_texture;
		std::string m_filename;
		bool m_valid = false;

		sf::RenderWindow *m_window;
		const std::string filepath;

		float m_speed = 120.0f;
		bool m_left = false;
		bool m_right = false;
		bool m_up = false;
		bool m_down = false;
};