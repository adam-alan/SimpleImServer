aux_source_directory(. SOCKET_DIR_SRCS)

add_library(socket SHARED ${SOCKET_DIR_SRCS})