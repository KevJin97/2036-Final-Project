#pragma once
#include "pch.h"
#include "GameObject.h"

bool GameObject::load(const std::string &filename)	//loads sprite from file
{
	if (m_texture.loadFromFile(filename))
	{
		m_filename = filename;
		m_sprite.setTexture(m_texture);
		m_valid = true;
		return true;
	}
	else
	{
		return false;
	}
}

void GameObject::setwindow(sf::RenderWindow &windowin)
{
	m_window = &windowin;
}

void GameObject::draw()	//draws inside of window
{
	if (m_valid)
	{
		m_window->draw(m_sprite);
	}
}

void GameObject::move(sf::Vector2f loc)
{
	if (m_valid)
	{
		m_sprite.move(loc);
	}
}

void GameObject::processEvents()
{
	sf::Event event;
	
	while (m_window->pollEvent(event))
	{
		switch (event.type)
		{
			case sf::Event::KeyPressed:			//Press on Key
				handlePlayerInput(event.key.code, true);
				break;
				
			case sf::Event::KeyReleased:		//Release Key
				handlePlayerInput(event.key.code, false);
				break;
				
			case sf::Event::Closed:
				m_window->close();
				break;
		}
	}
}

void GameObject::handlePlayerInput(sf::Keyboard::Key key, bool isDown)
{
	if (key == sf::Keyboard::Left)
	{
		m_left = isDown;
	}
	else if (key == sf::Keyboard::Right)
	{
		m_right = isDown;
	}
	else if (key == sf::Keyboard::Up)
	{
		m_up = isDown;
	}
	else if (key == sf::Keyboard::Down)
	{
		m_down = isDown;
	}
}

void GameObject::update(sf::Time &deltaT)
{
	sf::Vector2f movement(0.0f, 0.0f);
	if (m_up)
	{
		movement.y -= m_speed;
	}
	else if (m_down)
	{
		movement.y += m_speed;
	}
	else if (m_left)
	{
		movement.x -= m_speed;
	}
	else if (m_right)
	{
		movement.x += m_speed;
	}
	
	this->move(movement * deltaT.asSeconds());
}

void GameObject::setPosition(float x, float y)
{
	if (m_valid)
	{
		m_sprite.setPosition(x, y);
	}
}

sf::Vector2f GameObject::getPosition() const
{
	if (m_valid)
	{
		return m_sprite.getPosition();
	}
	else
	{
		return sf::Vector2f(0, 0);
	}
}

float GameObject::getHeight() const
{
	return m_sprite.getLocalBounds().height;
}

float GameObject::getWidth() const
{
	return m_sprite.getLocalBounds().width;
}

void GameObject::setScale(float scale)
{
	if (m_valid)
	{
		m_sprite.setScale(scale, scale);
	}
}