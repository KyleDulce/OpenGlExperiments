// OpenGlExperiments.cpp : Defines the entry point for the application.
//

#include "OpenGlExperiments.h"
#include "GLFW/glfw3.h"

using namespace std;

int main()
{
	glfwInit();

	GLFWwindow* window = glfwCreateWindow(300, 300, "Hello", nullptr, nullptr);

	glfwShowWindow(window);

	while(true) {}

	return 0;
}
