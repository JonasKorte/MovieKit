cmake_minimum_required(VERSION 3.8)

project("MovieKit")

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

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

install(TARGETS MKCosmos LIBRARY DESTINATION /home/jonas/Projects/moviekit/bin/ PUBLIC_HEADER DESTINATION /home/jonas/Projects/moviekit/include/)