cmake_minimum_required(VERSION 3.8)

project("MovieKit")

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set ( SOURCE_FILES
    core.cpp    
)

set( HEADER_FILES
    core.h
)

add_library(MKCore SHARED ${SOURCE_FILES})

set_target_properties(MKCore
    PROPERTIES 
    FRAMEWORK ON
    PUBLIC_HEADER "${HEADER_FILES}"
    OUTPUT_NAME MKCore
)

install(TARGETS MKCore LIBRARY DESTINATION /home/jonas/Projects/moviekit/bin/ PUBLIC_HEADER DESTINATION /home/jonas/Projects/moviekit/include/)