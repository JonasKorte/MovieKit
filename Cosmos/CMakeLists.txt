cmake_minimum_required(VERSION 3.8)

project("MovieKit")

set ( SOURCE_FILES
    cosmos.cpp    
)

set( HEADER_FILES
    cosmos.h
)

add_library(MKCosmos SHARED ${SOURCE_FILES})

set_target_properties(
    MKCosmos
    PROPERTIES 
    FRAMEWORK ON
    PUBLIC_HEADER "${HEADER_FILES}"
    OUTPUT_NAME MKCosmos
)

if (LINUX)
	install(TARGETS MKCosmos LIBRARY DESTINATION /home/jonas/MovieKit/bin/x11/ PUBLIC_HEADER DESTINATION /home/jonas/MovieKit/include/ ARCHIVE_DESTINATION /home/jonas/MovieKit/lib/)
endif()