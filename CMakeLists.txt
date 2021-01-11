cmake_minimum_required(VERSION 3.8)

project("MovieKit")

add_subdirectory(Core)
add_subdirectory(Cosmos)

add_executable(MovieKit main.cpp)

if (LINUX)
	set(REQUIRED_LIBRARIES /home/jonas/MovieKit/bin/x11/libMKCore.so /home/jonas/MovieKit/bin/x11/libMKCosmos.so)

	target_link_libraries(MovieKit ${REQUIRED_LIBRARIES})
endif()

set_target_properties(
    MovieKit
    PROPERTIES
    FRAMEWORK ON
    OUTPUT_NAME MovieKit
)

if (LINUX)
	install(TARGETS MovieKit DESTINATION /home/jonas/MovieKit/bin/x11/)
endif()