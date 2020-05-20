# CMake generated Testfile for 
# Source directory: /home/kk-1988/work/cpp_test/cmake-3.17.2/Utilities/cmcurl
# Build directory: /home/kk-1988/work/cpp_test/cmake-3.17.2/Utilities/cmcurl
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(curl "curltest" "http://open.cdash.org/user.php")
set_tests_properties(curl PROPERTIES  _BACKTRACE_TRIPLES "/home/kk-1988/work/cpp_test/cmake-3.17.2/Utilities/cmcurl/CMakeLists.txt;1300;add_test;/home/kk-1988/work/cpp_test/cmake-3.17.2/Utilities/cmcurl/CMakeLists.txt;0;")
subdirs("lib")
