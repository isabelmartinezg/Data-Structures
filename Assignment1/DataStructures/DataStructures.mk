##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=DataStructures
ConfigurationName      :=Debug
WorkspacePath          :="C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Assignment1"
ProjectPath            :="C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Assignment1/DataStructures"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=karat
Date                   :=10/01/2019
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
ObjectsFileList        :="DataStructures.txt"
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
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files/TDM-GCC MinGW/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Letters.cpp$(ObjectSuffix) $(IntermediateDirectory)/StackElement.cpp$(ObjectSuffix) $(IntermediateDirectory)/Res.cpp$(ObjectSuffix) $(IntermediateDirectory)/resEatProcess.cpp$(ObjectSuffix) $(IntermediateDirectory)/Stack.cpp$(ObjectSuffix) $(IntermediateDirectory)/Restaurant.cpp$(ObjectSuffix) $(IntermediateDirectory)/Entrance.cpp$(ObjectSuffix) $(IntermediateDirectory)/Waiter.cpp$(ObjectSuffix) $(IntermediateDirectory)/Queue.cpp$(ObjectSuffix) $(IntermediateDirectory)/Kitchen.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/Client.cpp$(ObjectSuffix) $(IntermediateDirectory)/resExit.cpp$(ObjectSuffix) $(IntermediateDirectory)/QueueElement.cpp$(ObjectSuffix) $(IntermediateDirectory)/randomTable.cpp$(ObjectSuffix) $(IntermediateDirectory)/clientGenerator.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/Letters.cpp$(ObjectSuffix): Letters.cpp $(IntermediateDirectory)/Letters.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Assignment1/DataStructures/Letters.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Letters.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Letters.cpp$(DependSuffix): Letters.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Letters.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Letters.cpp$(DependSuffix) -MM Letters.cpp

$(IntermediateDirectory)/Letters.cpp$(PreprocessSuffix): Letters.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Letters.cpp$(PreprocessSuffix) Letters.cpp

$(IntermediateDirectory)/StackElement.cpp$(ObjectSuffix): StackElement.cpp $(IntermediateDirectory)/StackElement.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Assignment1/DataStructures/StackElement.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/StackElement.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/StackElement.cpp$(DependSuffix): StackElement.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/StackElement.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/StackElement.cpp$(DependSuffix) -MM StackElement.cpp

$(IntermediateDirectory)/StackElement.cpp$(PreprocessSuffix): StackElement.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/StackElement.cpp$(PreprocessSuffix) StackElement.cpp

$(IntermediateDirectory)/Res.cpp$(ObjectSuffix): Res.cpp $(IntermediateDirectory)/Res.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Assignment1/DataStructures/Res.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Res.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Res.cpp$(DependSuffix): Res.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Res.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Res.cpp$(DependSuffix) -MM Res.cpp

$(IntermediateDirectory)/Res.cpp$(PreprocessSuffix): Res.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Res.cpp$(PreprocessSuffix) Res.cpp

$(IntermediateDirectory)/resEatProcess.cpp$(ObjectSuffix): resEatProcess.cpp $(IntermediateDirectory)/resEatProcess.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Assignment1/DataStructures/resEatProcess.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/resEatProcess.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/resEatProcess.cpp$(DependSuffix): resEatProcess.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/resEatProcess.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/resEatProcess.cpp$(DependSuffix) -MM resEatProcess.cpp

$(IntermediateDirectory)/resEatProcess.cpp$(PreprocessSuffix): resEatProcess.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/resEatProcess.cpp$(PreprocessSuffix) resEatProcess.cpp

$(IntermediateDirectory)/Stack.cpp$(ObjectSuffix): Stack.cpp $(IntermediateDirectory)/Stack.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Assignment1/DataStructures/Stack.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Stack.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Stack.cpp$(DependSuffix): Stack.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Stack.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Stack.cpp$(DependSuffix) -MM Stack.cpp

$(IntermediateDirectory)/Stack.cpp$(PreprocessSuffix): Stack.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Stack.cpp$(PreprocessSuffix) Stack.cpp

$(IntermediateDirectory)/Restaurant.cpp$(ObjectSuffix): Restaurant.cpp $(IntermediateDirectory)/Restaurant.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Assignment1/DataStructures/Restaurant.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Restaurant.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Restaurant.cpp$(DependSuffix): Restaurant.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Restaurant.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Restaurant.cpp$(DependSuffix) -MM Restaurant.cpp

$(IntermediateDirectory)/Restaurant.cpp$(PreprocessSuffix): Restaurant.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Restaurant.cpp$(PreprocessSuffix) Restaurant.cpp

$(IntermediateDirectory)/Entrance.cpp$(ObjectSuffix): Entrance.cpp $(IntermediateDirectory)/Entrance.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Assignment1/DataStructures/Entrance.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Entrance.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Entrance.cpp$(DependSuffix): Entrance.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Entrance.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Entrance.cpp$(DependSuffix) -MM Entrance.cpp

$(IntermediateDirectory)/Entrance.cpp$(PreprocessSuffix): Entrance.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Entrance.cpp$(PreprocessSuffix) Entrance.cpp

$(IntermediateDirectory)/Waiter.cpp$(ObjectSuffix): Waiter.cpp $(IntermediateDirectory)/Waiter.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Assignment1/DataStructures/Waiter.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Waiter.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Waiter.cpp$(DependSuffix): Waiter.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Waiter.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Waiter.cpp$(DependSuffix) -MM Waiter.cpp

$(IntermediateDirectory)/Waiter.cpp$(PreprocessSuffix): Waiter.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Waiter.cpp$(PreprocessSuffix) Waiter.cpp

$(IntermediateDirectory)/Queue.cpp$(ObjectSuffix): Queue.cpp $(IntermediateDirectory)/Queue.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Assignment1/DataStructures/Queue.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Queue.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Queue.cpp$(DependSuffix): Queue.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Queue.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Queue.cpp$(DependSuffix) -MM Queue.cpp

$(IntermediateDirectory)/Queue.cpp$(PreprocessSuffix): Queue.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Queue.cpp$(PreprocessSuffix) Queue.cpp

$(IntermediateDirectory)/Kitchen.cpp$(ObjectSuffix): Kitchen.cpp $(IntermediateDirectory)/Kitchen.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Assignment1/DataStructures/Kitchen.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Kitchen.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Kitchen.cpp$(DependSuffix): Kitchen.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Kitchen.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Kitchen.cpp$(DependSuffix) -MM Kitchen.cpp

$(IntermediateDirectory)/Kitchen.cpp$(PreprocessSuffix): Kitchen.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Kitchen.cpp$(PreprocessSuffix) Kitchen.cpp

$(IntermediateDirectory)/Client.cpp$(ObjectSuffix): Client.cpp $(IntermediateDirectory)/Client.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Assignment1/DataStructures/Client.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Client.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Client.cpp$(DependSuffix): Client.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Client.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Client.cpp$(DependSuffix) -MM Client.cpp

$(IntermediateDirectory)/Client.cpp$(PreprocessSuffix): Client.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Client.cpp$(PreprocessSuffix) Client.cpp

$(IntermediateDirectory)/resExit.cpp$(ObjectSuffix): resExit.cpp $(IntermediateDirectory)/resExit.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Assignment1/DataStructures/resExit.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/resExit.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/resExit.cpp$(DependSuffix): resExit.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/resExit.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/resExit.cpp$(DependSuffix) -MM resExit.cpp

$(IntermediateDirectory)/resExit.cpp$(PreprocessSuffix): resExit.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/resExit.cpp$(PreprocessSuffix) resExit.cpp

$(IntermediateDirectory)/QueueElement.cpp$(ObjectSuffix): QueueElement.cpp $(IntermediateDirectory)/QueueElement.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Assignment1/DataStructures/QueueElement.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/QueueElement.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/QueueElement.cpp$(DependSuffix): QueueElement.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/QueueElement.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/QueueElement.cpp$(DependSuffix) -MM QueueElement.cpp

$(IntermediateDirectory)/QueueElement.cpp$(PreprocessSuffix): QueueElement.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/QueueElement.cpp$(PreprocessSuffix) QueueElement.cpp

$(IntermediateDirectory)/randomTable.cpp$(ObjectSuffix): randomTable.cpp $(IntermediateDirectory)/randomTable.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Assignment1/DataStructures/randomTable.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/randomTable.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/randomTable.cpp$(DependSuffix): randomTable.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/randomTable.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/randomTable.cpp$(DependSuffix) -MM randomTable.cpp

$(IntermediateDirectory)/randomTable.cpp$(PreprocessSuffix): randomTable.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/randomTable.cpp$(PreprocessSuffix) randomTable.cpp

$(IntermediateDirectory)/clientGenerator.cpp$(ObjectSuffix): clientGenerator.cpp $(IntermediateDirectory)/clientGenerator.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/karat/Desktop/Uni/2018-19/1 cuatri/Data Structures/Lab/Assignment1/DataStructures/clientGenerator.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/clientGenerator.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/clientGenerator.cpp$(DependSuffix): clientGenerator.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/clientGenerator.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/clientGenerator.cpp$(DependSuffix) -MM clientGenerator.cpp

$(IntermediateDirectory)/clientGenerator.cpp$(PreprocessSuffix): clientGenerator.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/clientGenerator.cpp$(PreprocessSuffix) clientGenerator.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


