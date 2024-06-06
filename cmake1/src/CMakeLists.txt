aux_source_directory (. SRC_LIST)

include_directories (../include)

find_library(WIRINGPI_LIB /home/pi/projectpi/cmake1/lib/libwiringPi.so.2.50)

add_executable (main ${SRC_LIST})

target_link_libraries(main ${WIRINGPI_LIB})

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)


