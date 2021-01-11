cmake_minimum_required(VERSION 3.8)

project("MovieKit")

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

if (LINUX)
	install(TARGETS MKCore LIBRARY DESTINATION /home/jonas/MovieKit/bin/x11/ PUBLIC_HEADER DESTINATION /home/jonas/MovieKit/include/ ARCHIVE_DESTINATION /home/jonas/MovieKit/lib/)
endif()