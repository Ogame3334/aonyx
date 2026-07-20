find_package(Boost CONFIG REQUIRED COMPONENTS system url unit_test_framework)

add_executable(aonyx_tests
    main.cpp
    test_version.cpp
    test_dom.cpp
    test_css.cpp
    test_util.cpp
    test_util_literal.cpp
    test_util_handler.cpp
)

target_link_libraries(aonyx_tests PRIVATE aonyx::aonyx Boost::unit_test_framework)
target_compile_features(aonyx_tests PRIVATE cxx_std_23)

# Sometimes Boost Test needs BOOST_TEST_DYN_LINK when linked dynamically
if(TARGET Boost::unit_test_framework)
    get_target_property(boost_utf_type Boost::unit_test_framework TYPE)
    if(boost_utf_type STREQUAL "SHARED_LIBRARY")
        target_compile_definitions(aonyx_tests PRIVATE BOOST_TEST_DYN_LINK)
    endif()
endif()

# We also make sure BOOST_TEST_DYN_LINK is defined just in case the check fails, 
# but Boost modern cmake config usually handles this correctly.

add_test(NAME AonyxTests COMMAND aonyx_tests)
