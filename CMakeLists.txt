include_directories(headers)

add_subdirectory(benchmark)

file(GLOB MAIN src/*.cpp headers/*.h main.cpp)
add_executable(exp2 ${MAIN})
target_link_libraries(exp2)

file(GLOB TEST tests/*.cpp src/*.cpp )
add_executable(exp2_tests ${TEST})
target_link_libraries(exp2_tests CONAN_PKG::gtest)

file(GLOB BENCHMARKS_TEST benchmarks/*.cpp src/*.cpp )
add_executable(exp2_benchmark_tests ${BENCHMARKS_TEST})
target_link_libraries(exp2_benchmark_tests CONAN_PKG::gtest benchmark)