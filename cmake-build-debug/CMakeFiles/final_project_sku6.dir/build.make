# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\hp\Cinder\my-projects\final-project-sku6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\hp\Cinder\my-projects\final-project-sku6\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\final_project_sku6.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\final_project_sku6.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\final_project_sku6.dir\flags.make

CMakeFiles\final_project_sku6.dir\apps\final_project_main.cc.obj: CMakeFiles\final_project_sku6.dir\flags.make
CMakeFiles\final_project_sku6.dir\apps\final_project_main.cc.obj: ..\apps\final_project_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\hp\Cinder\my-projects\final-project-sku6\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/final_project_sku6.dir/apps/final_project_main.cc.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\final_project_sku6.dir\apps\final_project_main.cc.obj /FdCMakeFiles\final_project_sku6.dir\ /FS -c C:\Users\hp\Cinder\my-projects\final-project-sku6\apps\final_project_main.cc
<<

CMakeFiles\final_project_sku6.dir\apps\final_project_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/final_project_sku6.dir/apps/final_project_main.cc.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\final_project_sku6.dir\apps\final_project_main.cc.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\hp\Cinder\my-projects\final-project-sku6\apps\final_project_main.cc
<<

CMakeFiles\final_project_sku6.dir\apps\final_project_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/final_project_sku6.dir/apps/final_project_main.cc.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\final_project_sku6.dir\apps\final_project_main.cc.s /c C:\Users\hp\Cinder\my-projects\final-project-sku6\apps\final_project_main.cc
<<

CMakeFiles\final_project_sku6.dir\src\snake.cc.obj: CMakeFiles\final_project_sku6.dir\flags.make
CMakeFiles\final_project_sku6.dir\src\snake.cc.obj: ..\src\snake.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\hp\Cinder\my-projects\final-project-sku6\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/final_project_sku6.dir/src/snake.cc.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\final_project_sku6.dir\src\snake.cc.obj /FdCMakeFiles\final_project_sku6.dir\ /FS -c C:\Users\hp\Cinder\my-projects\final-project-sku6\src\snake.cc
<<

CMakeFiles\final_project_sku6.dir\src\snake.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/final_project_sku6.dir/src/snake.cc.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\final_project_sku6.dir\src\snake.cc.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\hp\Cinder\my-projects\final-project-sku6\src\snake.cc
<<

CMakeFiles\final_project_sku6.dir\src\snake.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/final_project_sku6.dir/src/snake.cc.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\final_project_sku6.dir\src\snake.cc.s /c C:\Users\hp\Cinder\my-projects\final-project-sku6\src\snake.cc
<<

CMakeFiles\final_project_sku6.dir\src\location.cc.obj: CMakeFiles\final_project_sku6.dir\flags.make
CMakeFiles\final_project_sku6.dir\src\location.cc.obj: ..\src\location.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\hp\Cinder\my-projects\final-project-sku6\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/final_project_sku6.dir/src/location.cc.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\final_project_sku6.dir\src\location.cc.obj /FdCMakeFiles\final_project_sku6.dir\ /FS -c C:\Users\hp\Cinder\my-projects\final-project-sku6\src\location.cc
<<

CMakeFiles\final_project_sku6.dir\src\location.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/final_project_sku6.dir/src/location.cc.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\final_project_sku6.dir\src\location.cc.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\hp\Cinder\my-projects\final-project-sku6\src\location.cc
<<

CMakeFiles\final_project_sku6.dir\src\location.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/final_project_sku6.dir/src/location.cc.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\final_project_sku6.dir\src\location.cc.s /c C:\Users\hp\Cinder\my-projects\final-project-sku6\src\location.cc
<<

CMakeFiles\final_project_sku6.dir\src\direction.cc.obj: CMakeFiles\final_project_sku6.dir\flags.make
CMakeFiles\final_project_sku6.dir\src\direction.cc.obj: ..\src\direction.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\hp\Cinder\my-projects\final-project-sku6\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/final_project_sku6.dir/src/direction.cc.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\final_project_sku6.dir\src\direction.cc.obj /FdCMakeFiles\final_project_sku6.dir\ /FS -c C:\Users\hp\Cinder\my-projects\final-project-sku6\src\direction.cc
<<

CMakeFiles\final_project_sku6.dir\src\direction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/final_project_sku6.dir/src/direction.cc.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\final_project_sku6.dir\src\direction.cc.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\hp\Cinder\my-projects\final-project-sku6\src\direction.cc
<<

CMakeFiles\final_project_sku6.dir\src\direction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/final_project_sku6.dir/src/direction.cc.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\final_project_sku6.dir\src\direction.cc.s /c C:\Users\hp\Cinder\my-projects\final-project-sku6\src\direction.cc
<<

# Object files for target final_project_sku6
final_project_sku6_OBJECTS = \
"CMakeFiles\final_project_sku6.dir\apps\final_project_main.cc.obj" \
"CMakeFiles\final_project_sku6.dir\src\snake.cc.obj" \
"CMakeFiles\final_project_sku6.dir\src\location.cc.obj" \
"CMakeFiles\final_project_sku6.dir\src\direction.cc.obj"

# External object files for target final_project_sku6
final_project_sku6_EXTERNAL_OBJECTS =

Debug\final_project_sku6\final_project_sku6.exe: CMakeFiles\final_project_sku6.dir\apps\final_project_main.cc.obj
Debug\final_project_sku6\final_project_sku6.exe: CMakeFiles\final_project_sku6.dir\src\snake.cc.obj
Debug\final_project_sku6\final_project_sku6.exe: CMakeFiles\final_project_sku6.dir\src\location.cc.obj
Debug\final_project_sku6\final_project_sku6.exe: CMakeFiles\final_project_sku6.dir\src\direction.cc.obj
Debug\final_project_sku6\final_project_sku6.exe: CMakeFiles\final_project_sku6.dir\build.make
Debug\final_project_sku6\final_project_sku6.exe: C:\Users\hp\Cinder\lib\msw\x86\Debug\v140\cinder.lib
Debug\final_project_sku6\final_project_sku6.exe: CMakeFiles\final_project_sku6.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\hp\Cinder\my-projects\final-project-sku6\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Debug\final_project_sku6\final_project_sku6.exe"
	"C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\final_project_sku6.dir --rc=C:\PROGRA~2\WI3CF2~1\8.1\bin\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\8.1\bin\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1.0\VC\bin\link.exe /nologo @CMakeFiles\final_project_sku6.dir\objects1.rsp @<<
 /out:Debug\final_project_sku6\final_project_sku6.exe /implib:final_project_sku6.lib /pdb:C:\Users\hp\Cinder\my-projects\final-project-sku6\cmake-build-debug\Debug\final_project_sku6\final_project_sku6.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:windows /NODEFAULTLIB:LIBCMT /NODEFAULTLIB:LIBCPMT   -LIBPATH:C:\Users\hp\Cinder\lib\msw\x86  C:\Users\hp\Cinder\lib\msw\x86\Debug\v140\cinder.lib kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\final_project_sku6.dir\build: Debug\final_project_sku6\final_project_sku6.exe

.PHONY : CMakeFiles\final_project_sku6.dir\build

CMakeFiles\final_project_sku6.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\final_project_sku6.dir\cmake_clean.cmake
.PHONY : CMakeFiles\final_project_sku6.dir\clean

CMakeFiles\final_project_sku6.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\hp\Cinder\my-projects\final-project-sku6 C:\Users\hp\Cinder\my-projects\final-project-sku6 C:\Users\hp\Cinder\my-projects\final-project-sku6\cmake-build-debug C:\Users\hp\Cinder\my-projects\final-project-sku6\cmake-build-debug C:\Users\hp\Cinder\my-projects\final-project-sku6\cmake-build-debug\CMakeFiles\final_project_sku6.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\final_project_sku6.dir\depend

