add_executable(counter modern_counter.cpp)

target_compile_features(counter PRIVATE cxx_std_11)

target_link_libraries(counter PRIVATE modern_library fmt::fmt)