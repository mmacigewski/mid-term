add_executable(04_loops_simple_data_test "loops_simple_data_test.cpp")
target_link_libraries(04_loops_simple_data_test 04_loops_simple_data_library)
add_test(NAME 04_loops_simple_data_test COMMAND 04_loops_simple_data_test -s)