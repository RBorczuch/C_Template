file(GLOB TEST_SOURCES "*.c")
include_directories(../inc unity)

add_executable(test_runner ${TEST_SOURCES} unity/unity.c)
target_link_libraries(test_runner ${PROJECT_NAME})
