# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("OpenGlExperiments")

# Include sub-projects.
add_subdirectory (external/glfw)
add_subdirectory ("OpenGlExperiments")

target_include_directories (OpenGlExperiments PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/external/glfw/include)


