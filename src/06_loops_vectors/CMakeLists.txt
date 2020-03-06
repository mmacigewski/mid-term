add_library(06_loops_vectors_library "dna_p_distance_vector.cpp" "dna_p_distance_vector.h")
add_executable(06_loops_vectors_exe "main.cpp" "dna_p_distance_vector.cpp")
target_link_libraries(06_loops_vectors_exe 06_loops_vectors_library 02_decisions_if_library)
