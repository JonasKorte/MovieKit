cmake_minimum_required(VERSION 3.8)

project("MovieKit")

add_subdirectory(Core)
add_subdirectory(Cosmos)

add_executable(MovieKit main.cpp)

set(REQUIRED_LIBRARIES /home/jonas/Projects/moviekit/bin/libMKCore.so /home/jonas/Projects/moviekit/bin/libMKCosmos.so)

target_link_libraries(MovieKit ${REQUIRED_LIBRARIES})

set_target_properties(
    MovieKit
    PROPERTIES
    FRAMEWORK ON
    OUTPUT_NAME MovieKit
)

install(TARGETS MovieKit DESTINATION /home/jonas/Projects/moviekit/bin/)