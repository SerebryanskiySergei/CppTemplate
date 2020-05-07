set(HEADER_LIST ${PROJECT_SOURCE_DIR}/include/modern/lib.hpp)

add_library(modern_library lib.cpp ${HEADER_LIST})

target_include_directories(modern_library PUBLIC ../include)

target_link_libraries(modern_library PRIVATE fmt::fmt)

target_compile_definitions(modern_library PUBLIC cxx_std_11)

# IDEs should put the headers in a nice place
source_group(TREE "${PROJECT_SOURCE_DIR}/include" PREFIX "Header Files" FILES ${HEADER_LIST})