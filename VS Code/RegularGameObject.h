#pragma once
#include "pch.h"
#include <SFML/Graphics.hpp>

class RegularGameObject : public GameObject
{
	public:
		GameObject();	//constructor
		bool load();
		void draw();
		//void update();
		void setPosition(float x, float y);
		//void move(sf::Vector2f);
		
		sf::Vector2f getPosition() const;
		float getHeight() const;
		float getWidth() const;
		void processEvents();
		//void handlePlayerInput(sf::Keyboard::Key key, bool isDown);
		
		void setfilepath(std::string);			//use in Game constructor
		void setwindow(sf::RenderWindow&);		//use in Game constructor
		void settime(sf::Time&);				//use in Game constructor
		void setScale(float);					//use in Game constructor
		
	private:
		sf::Sprite m_sprite;
		sf::Texture m_texture;
		bool m_valid;
		
		std::string filepath;		//set in Game constructor
		sf::RenderWindow *m_window;	//set in Game constructor
		sf::Time *deltaT;			//set in Game constructor
		
		//float m_speed = 120.0f;
		//bool m_left, m_right, m_up, m_down;
};