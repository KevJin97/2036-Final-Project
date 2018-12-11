#pragma once
#include "pch.h"
#include <SFML/Graphics.hpp>

class GameObject
{
	public:
		GameObject();	//constructor
		virtual bool load() = 0;
		virtual void draw() = 0;
		virtual void update() = 0;
		virtual void setPosition(float x, float y) = 0;
		virtual void move(sf::Vector2f) = 0;
		
		virtual sf::Vector2f getPosition() const = 0;
		virtual float getHeight() const = 0;
		virtual float getWidth() const = 0;
		virtual void processEvents() = 0;
		virtual void handlePlayerInput(sf::Keyboard::Key key, bool isDown) = 0;
		
		virtual void setfilepath(std::string) = 0;			//use in Game constructor
		virtual void setwindow(sf::RenderWindow&) = 0;		//use in Game constructor
		virtual void settime(sf::Time&) = 0;				//use in Game constructor
		virtual void setScale(float) = 0;					//use in Game constructor
		
	private:
		sf::Sprite m_sprite;
		sf::Texture m_texture;
		bool m_valid;
		
		std::string filepath;		//set in Game constructor
		sf::RenderWindow *m_window;	//set in Game constructor
		sf::Time *deltaT;			//set in Game constructor
		
		float m_speed = 120.0f;
		bool m_left, m_right, m_up, m_down;
};