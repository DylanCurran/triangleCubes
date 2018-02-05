#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <gl/GL.h>
#include <gl/GLU.h>
#include "MyMatrix3.h"

using namespace std;
using namespace sf;

class Game
{
public:
	Game();
	~Game();
	void run();
private:
	MyMatrix3 m_matrix;
	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void draw();
	void unload();
	sf::Vector3f m_vectorA = { 1.,1.,0. };
	sf::Vector3f m_vertexes[8];

	GLuint index;
	Clock clock;
	Time elapsed;

	float rotationAngle = 0.0f;
};