# Unit-test library
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.10.0
)
FetchContent_MakeAvailable(googletest)

add_executable(tests unit-tests.cpp)

target_compile_features(tests PRIVATE cxx_std_17)

target_link_libraries(tests PRIVATE modern_library gtest gtest_main)

add_test(NAME unit-test COMMAND tests) # Command can be a target