add_executable(08_function_ref_params_test "function_ref_params_test.cpp")
target_link_libraries(08_function_ref_params_test 08_function_ref_params_library)
add_test(NAME 08_function_ref_params_test COMMAND 08_function_ref_params_test -s)