// OpenGlExperiments.cpp : Defines the entry point for the application.
//

#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include "OpenGlExperiments.h"

#include <iostream>

#ifndef KD_WIN_HEIGHT
	#define KD_WIN_HEIGHT 800
#endif // !KD_WIN_HEIGHT
#ifndef KD_WIN_WIDTH
	#define KD_WIN_WIDTH 1000
#endif // !KD_WIN_WIDTH
#ifndef KD_WIN_TITLE
	#define KD_WIN_TITLE "Best Window Ever"
#endif // !KD_WIN_TITLE


using namespace std;

namespace kdulce {
	namespace glexperiments {
		void error_callback(int error, const char* description) {
			cerr << "Something went wrong! code: " << error << " for '" << description << "'";
		}

		void shutdownAndExit(int code) {
			glfwTerminate();
			exit(code);
		}
	}
}

using namespace kdulce::glexperiments;

int main()
{
	if (!glfwInit()) {
		cerr << "Something went wrong";
		exit(EXIT_FAILURE);
	}

	glfwSetErrorCallback(error_callback);

	GLFWwindow* window = glfwCreateWindow(KD_WIN_WIDTH, KD_WIN_HEIGHT, KD_WIN_TITLE, NULL, NULL);

	if (!window) {
		shutdownAndExit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window);
	gladLoadGLLoader((GLADloadproc) glfwGetProcAddress);
	gladLoadGL();
	glfwSwapInterval(1);

	while (!glfwWindowShouldClose(window)) {
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();

	return 0;
}
