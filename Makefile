#
#								MAKE GRIDDY
#

CC         := g++                                                        # c compiler
SRC_ALL    := src/*.cpp                                                  # all griddy src files + main src file
SRC_MAIN   := src/main.cpp                                               #                        main src file
SRC_GRIDDY := $(filter-out $(SRC_MAIN), $(SRC_ALL))                      # all griddy src files
DLL        := bin/griddy.dll                                             # dynimic link library file
SDL        := bin/SDL2.dll                                               # SDL2       dll
IMG        := bin/SDL2_image.dll                                         # SDL2 IMAGE dll
EXE_MAIN   := bin/main                                                   # executable file
DONE       := DONE

griddy:
	$(CC) --shared -o $(DLL) $(SRC_GRIDDY) $(SDL) $(IMG)

exe:
	$(CC) -o $(EXE_MAIN) $(SRC_MAIN) $(DLL) $(SDL) $(IMG)

echo:
	echo $(DONE)

all: griddy exe echo