##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Assignment2
ConfigurationName      :=Debug
WorkspacePath          :="C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Martinez_Isabel/Assignment2"
ProjectPath            :="C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Martinez_Isabel/Assignment2/Assignment2"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=karat
Date                   :=11/01/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :="C:/Program Files/TDM-GCC MinGW/bin/g++.exe"
SharedObjectLinkerName :="C:/Program Files/TDM-GCC MinGW/bin/g++.exe" -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Assignment2.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files/TDM-GCC MinGW/bin/windres.exe"
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "C:/Program Files/TDM-GCC MinGW/bin/ar.exe" rcu
CXX      := "C:/Program Files/TDM-GCC MinGW/bin/g++.exe"
CC       := "C:/Program Files/TDM-GCC MinGW/bin/gcc.exe"
CXXFLAGS :=  -g -O0 -std=c++11 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files/TDM-GCC MinGW/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Serie.cpp$(ObjectSuffix) $(IntermediateDirectory)/hashTable.cpp$(ObjectSuffix) $(IntermediateDirectory)/userOptions.cpp$(ObjectSuffix) $(IntermediateDirectory)/userMenu.cpp$(ObjectSuffix) $(IntermediateDirectory)/StackElement.cpp$(ObjectSuffix) $(IntermediateDirectory)/elemManager.cpp$(ObjectSuffix) $(IntermediateDirectory)/Stack.cpp$(ObjectSuffix) $(IntermediateDirectory)/ListElement.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/List.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/hashTableElement.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Serie.cpp$(ObjectSuffix): Serie.cpp $(IntermediateDirectory)/Serie.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Martinez_Isabel/Assignment2/Assignment2/Serie.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Serie.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Serie.cpp$(DependSuffix): Serie.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Serie.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Serie.cpp$(DependSuffix) -MM Serie.cpp

$(IntermediateDirectory)/Serie.cpp$(PreprocessSuffix): Serie.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Serie.cpp$(PreprocessSuffix) Serie.cpp

$(IntermediateDirectory)/hashTable.cpp$(ObjectSuffix): hashTable.cpp $(IntermediateDirectory)/hashTable.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Martinez_Isabel/Assignment2/Assignment2/hashTable.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/hashTable.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/hashTable.cpp$(DependSuffix): hashTable.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/hashTable.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/hashTable.cpp$(DependSuffix) -MM hashTable.cpp

$(IntermediateDirectory)/hashTable.cpp$(PreprocessSuffix): hashTable.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/hashTable.cpp$(PreprocessSuffix) hashTable.cpp

$(IntermediateDirectory)/userOptions.cpp$(ObjectSuffix): userOptions.cpp $(IntermediateDirectory)/userOptions.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Martinez_Isabel/Assignment2/Assignment2/userOptions.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/userOptions.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/userOptions.cpp$(DependSuffix): userOptions.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/userOptions.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/userOptions.cpp$(DependSuffix) -MM userOptions.cpp

$(IntermediateDirectory)/userOptions.cpp$(PreprocessSuffix): userOptions.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/userOptions.cpp$(PreprocessSuffix) userOptions.cpp

$(IntermediateDirectory)/userMenu.cpp$(ObjectSuffix): userMenu.cpp $(IntermediateDirectory)/userMenu.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Martinez_Isabel/Assignment2/Assignment2/userMenu.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/userMenu.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/userMenu.cpp$(DependSuffix): userMenu.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/userMenu.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/userMenu.cpp$(DependSuffix) -MM userMenu.cpp

$(IntermediateDirectory)/userMenu.cpp$(PreprocessSuffix): userMenu.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/userMenu.cpp$(PreprocessSuffix) userMenu.cpp

$(IntermediateDirectory)/StackElement.cpp$(ObjectSuffix): StackElement.cpp $(IntermediateDirectory)/StackElement.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Martinez_Isabel/Assignment2/Assignment2/StackElement.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/StackElement.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/StackElement.cpp$(DependSuffix): StackElement.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/StackElement.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/StackElement.cpp$(DependSuffix) -MM StackElement.cpp

$(IntermediateDirectory)/StackElement.cpp$(PreprocessSuffix): StackElement.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/StackElement.cpp$(PreprocessSuffix) StackElement.cpp

$(IntermediateDirectory)/elemManager.cpp$(ObjectSuffix): elemManager.cpp $(IntermediateDirectory)/elemManager.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Martinez_Isabel/Assignment2/Assignment2/elemManager.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/elemManager.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/elemManager.cpp$(DependSuffix): elemManager.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/elemManager.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/elemManager.cpp$(DependSuffix) -MM elemManager.cpp

$(IntermediateDirectory)/elemManager.cpp$(PreprocessSuffix): elemManager.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/elemManager.cpp$(PreprocessSuffix) elemManager.cpp

$(IntermediateDirectory)/Stack.cpp$(ObjectSuffix): Stack.cpp $(IntermediateDirectory)/Stack.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Martinez_Isabel/Assignment2/Assignment2/Stack.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Stack.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Stack.cpp$(DependSuffix): Stack.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Stack.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Stack.cpp$(DependSuffix) -MM Stack.cpp

$(IntermediateDirectory)/Stack.cpp$(PreprocessSuffix): Stack.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Stack.cpp$(PreprocessSuffix) Stack.cpp

$(IntermediateDirectory)/ListElement.cpp$(ObjectSuffix): ListElement.cpp $(IntermediateDirectory)/ListElement.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Martinez_Isabel/Assignment2/Assignment2/ListElement.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ListElement.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ListElement.cpp$(DependSuffix): ListElement.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ListElement.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ListElement.cpp$(DependSuffix) -MM ListElement.cpp

$(IntermediateDirectory)/ListElement.cpp$(PreprocessSuffix): ListElement.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ListElement.cpp$(PreprocessSuffix) ListElement.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Martinez_Isabel/Assignment2/Assignment2/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/List.cpp$(ObjectSuffix): List.cpp $(IntermediateDirectory)/List.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Martinez_Isabel/Assignment2/Assignment2/List.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/List.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/List.cpp$(DependSuffix): List.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/List.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/List.cpp$(DependSuffix) -MM List.cpp

$(IntermediateDirectory)/List.cpp$(PreprocessSuffix): List.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/List.cpp$(PreprocessSuffix) List.cpp

$(IntermediateDirectory)/hashTableElement.cpp$(ObjectSuffix): hashTableElement.cpp $(IntermediateDirectory)/hashTableElement.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Martinez_Isabel/Assignment2/Assignment2/hashTableElement.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/hashTableElement.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/hashTableElement.cpp$(DependSuffix): hashTableElement.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/hashTableElement.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/hashTableElement.cpp$(DependSuffix) -MM hashTableElement.cpp

$(IntermediateDirectory)/hashTableElement.cpp$(PreprocessSuffix): hashTableElement.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/hashTableElement.cpp$(PreprocessSuffix) hashTableElement.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


