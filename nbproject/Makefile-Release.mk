#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/TeseNative/Core/Tese.o \
	${OBJECTDIR}/TeseNative/Core/TeseBuilder.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f1

# Test Object Files
TESTOBJECTFILES= \
	${TESTDIR}/TeseNative.Tests/Core/TeseTest.o \
	${TESTDIR}/TeseNative.Tests/Core/TeseTestRunner.o

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libTeseNative.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libTeseNative.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libTeseNative.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/TeseNative/Core/Tese.o: TeseNative/Core/Tese.cpp
	${MKDIR} -p ${OBJECTDIR}/TeseNative/Core
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TeseNative/Core/Tese.o TeseNative/Core/Tese.cpp

${OBJECTDIR}/TeseNative/Core/TeseBuilder.o: TeseNative/Core/TeseBuilder.cpp
	${MKDIR} -p ${OBJECTDIR}/TeseNative/Core
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TeseNative/Core/TeseBuilder.o TeseNative/Core/TeseBuilder.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-tests-subprojects .build-conf ${TESTFILES}
.build-tests-subprojects:

${TESTDIR}/TestFiles/f1: ${TESTDIR}/TeseNative.Tests/Core/TeseTest.o ${TESTDIR}/TeseNative.Tests/Core/TeseTestRunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc} -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS}   `cppunit-config --libs`   


${TESTDIR}/TeseNative.Tests/Core/TeseTest.o: TeseNative.Tests/Core/TeseTest.cpp 
	${MKDIR} -p ${TESTDIR}/TeseNative.Tests/Core
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/TeseNative.Tests/Core/TeseTest.o TeseNative.Tests/Core/TeseTest.cpp


${TESTDIR}/TeseNative.Tests/Core/TeseTestRunner.o: TeseNative.Tests/Core/TeseTestRunner.cpp 
	${MKDIR} -p ${TESTDIR}/TeseNative.Tests/Core
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/TeseNative.Tests/Core/TeseTestRunner.o TeseNative.Tests/Core/TeseTestRunner.cpp


${OBJECTDIR}/TeseNative/Core/Tese_nomain.o: ${OBJECTDIR}/TeseNative/Core/Tese.o TeseNative/Core/Tese.cpp 
	${MKDIR} -p ${OBJECTDIR}/TeseNative/Core
	@NMOUTPUT=`${NM} ${OBJECTDIR}/TeseNative/Core/Tese.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TeseNative/Core/Tese_nomain.o TeseNative/Core/Tese.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/TeseNative/Core/Tese.o ${OBJECTDIR}/TeseNative/Core/Tese_nomain.o;\
	fi

${OBJECTDIR}/TeseNative/Core/TeseBuilder_nomain.o: ${OBJECTDIR}/TeseNative/Core/TeseBuilder.o TeseNative/Core/TeseBuilder.cpp 
	${MKDIR} -p ${OBJECTDIR}/TeseNative/Core
	@NMOUTPUT=`${NM} ${OBJECTDIR}/TeseNative/Core/TeseBuilder.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TeseNative/Core/TeseBuilder_nomain.o TeseNative/Core/TeseBuilder.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/TeseNative/Core/TeseBuilder.o ${OBJECTDIR}/TeseNative/Core/TeseBuilder_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f1 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
