all:
	g++ -Wall -c ../src/utils/utils.cpp 
	g++ -Wall ../src/branchAndBound.cpp utils.o -o branchAndBound
	g++ -Wall ../src/backtracking.cpp utils.o -o backtracking




# BUILD_DIR=./build
# SRC_DIR=./src
# UTILS_DIR=./utils

# EXECBAB=./branchAndBound
# TARGETBAB=branchAndBound

# $(EXECBAB): ${BUILD_DIR}/${TARGETBAB}

# ${BUILD_DIR}/${TARGETBAB}: ${BUILD_DIR}/utils.o ${BUILD_DIR}/branchAndBound.o
# 	${CC} ${CFLAGS} -o ${BUILD_DIR}/${TARGETBAB} ${BUILD_DIR}/*.o

# ${BUILD_DIR}/utils.o: ${SRC_DIR}/utils/utils.hpp ${SRC_DIR}/utils/utils.cpp
# 	${CC} ${CFLAGS} -I ${SRC_DIR}/utils/ -c ${SRC_DIR}/utils/utils.cpp -o ${BUILD_DIR}/utils.o

# ${BUILD_DIR}/branchAndBound.o: ${SRC_DIR}/utils/utils.hpp ${SRC_DIR}/branchAndBound.cpp
# 	${CC} ${CFLAGS} -I ${SRC_DIR}/utils/ -c ${SRC_DIR}/branchAndBound.cpp -o ${BUILD_DIR}/branchAndBound.o


# EXECBACK=./backtracking
# TARGETBACK=backtracking

# $(EXECBACK): ${BUILD_DIR}/${TARGETBACK}

# ${BUILD_DIR}/${TARGETBACK}: ${BUILD_DIR}/utils.o ${BUILD_DIR}/backtracking.o
# 	${CC} ${CFLAGS} -o ${BUILD_DIR}/${TARGETBACK} ${BUILD_DIR}/*.o

# ${BUILD_DIR}/utils.o: ${SRC_DIR}/utils/utils.hpp ${SRC_DIR}/utils/utils.cpp
# 	${CC} ${CFLAGS} -I ${SRC_DIR}/utils/ -c ${SRC_DIR}/utils/utils.cpp -o ${BUILD_DIR}/utils.o

# ${BUILD_DIR}/backtracking.o: ${SRC_DIR}/utils/utils.hpp ${SRC_DIR}/backtracking.cpp
# 	${CC} ${CFLAGS} -I ${SRC_DIR}/utils/ -c ${SRC_DIR}/backtracking.cpp -o ${BUILD_DIR}/backtracking.o



# clean:
# 	rm -f ${BUILD_DIR}/*