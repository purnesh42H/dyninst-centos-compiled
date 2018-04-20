message(STATUS "downloading...
     src='https://sourceware.org/elfutils/ftp/0.168/elfutils-0.168.tar.bz2'
     dst='/home/dyninst/elfutils/src/elfutils-0.168.tar.bz2'
     timeout='none'")




file(DOWNLOAD
  "https://sourceware.org/elfutils/ftp/0.168/elfutils-0.168.tar.bz2"
  "/home/dyninst/elfutils/src/elfutils-0.168.tar.bz2"
  SHOW_PROGRESS
  # no EXPECTED_HASH
  # no TIMEOUT
  STATUS status
  LOG log)

list(GET status 0 status_code)
list(GET status 1 status_string)

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'https://sourceware.org/elfutils/ftp/0.168/elfutils-0.168.tar.bz2' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

message(STATUS "downloading... done")
