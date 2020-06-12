aux_source_directory(./model MODEL_SRCS)
aux_source_directory(./messages MESSAGES_SRCS)

add_library(Infrastructure SHARED ${MODEL_SRCS} ${MESSAGES_SRCS})

