CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(github-actions)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(runTests
	src/rectangle.cpp
	tests/test.cpp
)


TARGET_LINK_LIBRARIES(runTests gtest)
TARGET_COMPILE_DEFINITIONS(runTests PRIVATE gtest_disable_pthreads=ON)