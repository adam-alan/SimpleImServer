aux_source_directory(./model MODEL_SRCS)


add_library(Infrastructure OBJECT ${MODEL_SRCS})

