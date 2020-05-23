if(NOT "/home/kk-1988/work/cpp_test/cmake-3.17.2/Tests/CMakeTests" MATCHES "^/")
  set(slash /)
endif()
set(url "file://${slash}/home/kk-1988/work/cpp_test/cmake-3.17.2/Tests/CMakeTests/FileDownloadInput.png")
set(dir "/home/kk-1988/work/cpp_test/cmake-3.17.2/Tests/CMakeTests/downloads")

file(DOWNLOAD
  ${url}
  ${dir}/file3.png
  TIMEOUT 2
  STATUS status
  EXPECTED_HASH SHA1=5555555555555555555555555555555555555555
  )
