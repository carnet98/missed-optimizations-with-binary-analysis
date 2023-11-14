add_executable(loop-convert LoopConvert.cpp)
if(CLANG_LINK_CLANG_DYLIB)
    target_link_libraries(loop-convert PUBLIC LLVM)
    clang_target_link_libraries(loop-convert PUBLIC)
else()
    llvm_map_components_to_libnames(llvm_libs support core)
    target_link_libraries(loop-convert PUBLIC ${llvm_libs}
                                         clangAST
                                         clangASTMatchers
                                         clangBasic
                                         clangFrontend
                                         clangSerialization
                                         clangTooling)
endif(CLANG_LINK_CLANG_DYLIB)
install(TARGETS loop-convert DESTINATION bin)

add_executable(global-detector GlobalDetector.cpp)
if(CLANG_LINK_CLANG_DYLIB)
    target_link_libraries(global-detector PUBLIC LLVM)
    clang_target_link_libraries(global-detector PUBLIC)
else()
    llvm_map_components_to_libnames(llvm_libs support core)
    target_link_libraries(global-detector PUBLIC ${llvm_libs}
                                         clangAST
                                         clangASTMatchers
                                         clangBasic
                                         clangFrontend
                                         clangSerialization
                                         clangTooling)
endif(CLANG_LINK_CLANG_DYLIB)
install(TARGETS global-detector DESTINATION bin)