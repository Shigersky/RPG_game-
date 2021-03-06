#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Skeleton.h"

class Player
{

	private:

		//Initializing Player Sprite
		sf::Texture texture;
		int XIndex = 0;
		int YIndex = 0;
		float width = 64.f;
		float height = 64.f;
		float playerSpeed = 2;


		//Bullet Vector
		std::vector <sf::RectangleShape> bullets;
		float bulletSpeed = 1;

		//Initializing Player Hitbox
		sf::RectangleShape hitBox;

	public:
		sf::Sprite sprite;

	public:

		void Initialize(); // called once
		void Load(); // called once
		void Draw(sf::RenderWindow &window); // once per frame
		void Update(float deltaTime, Skeleton& skeleton); // once per frame

	

};

