# CMakeList.txt : CMake project for OpenGlExperiments, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (OpenGlExperiments "src/OpenGlExperiments.cpp" "src/OpenGlExperiments.h" "src/Shaders.cpp")

# TODO: Add tests and install targets if needed.
target_link_libraries (OpenGlExperiments glfw glad)
