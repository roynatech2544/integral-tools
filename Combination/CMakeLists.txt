set(combin_source_files
ComC.cpp
ComP.cpp
main.cpp
include/combinc.h
include/combinp.h
include/in.h
include/includes.h
)
add_library(Combination ${combin_source_files})
target_link_libraries(Combination Calc)
