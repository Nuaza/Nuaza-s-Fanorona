file(GLOB_RECURSE LIB_SRC CONFIGURE_DEPENDS "*.cpp")
add_library(function ${LIB_SRC})
target_include_directories(function PUBLIC
        $<BUILD_INTERFACE:${PROJECT_INCLUDE_DIR}>
        $<INSTALL_INTERFACE:include>)