# General makefile.

CC = gcc
MD = mkdir -p
DEPLOYDIR = $(PWD)/../Bin
YACC = bison
FLEX = flex

SOURCEDIR = $(PWD)

ifdef DEBUG
CPPFLAGS += -D_DEBUG
else
CPPFLAGS += -DNDEBUG
endif

ifeq ($(OS),Windows_NT)
	CPPFLAGS += -D PLATFORM_WIN32
else
	UNAME_S := $(shell uname -s)
	ifeq ($(UNAME_S),Linux)
		CPPFLAGS += -D PLATFORM_UNIX
	endif
endif

export CC MD DEPLOYDIR CPPFLAGS DEBUG YACC SOURCEDIR FLEX

.PHONY: all DecodeReport DedicatedServer Depend Ecc Engine EngineGUI EntitiesMP GameGUIMP GameMP LWSkaExporter MakeFONT Modeler RCon SeriousSam SeriousSkaStudio Shaders WorldEditor
all: SeriousSam Depend DedicatedServer MakeFONT Modeler SeriousSkaStudio RCon LWSkaExporter DecodeReport $(DEPLOYDIR)

DecodeReport: Engine
	$(MAKE) -C DecodeReport

DedicatedServer: Engine EntitiesMP GameMP
	$(MAKE) -C DedicatedServer

Depend: Engine
	$(MAKE) -C Depend

Ecc: 
	$(MAKE) -C Ecc

Engine: Ecc
	$(MAKE) -C Engine

EngineGUI: Engine
	$(MAKE) -C EngineGUI

EntitiesMP: Ecc Engine
	$(MAKE) -C EntitiesMP

GameGUIMP: EngineGUI GameMP
	$(MAKE) -C GameGUIMP

GameMP: EntitiesMP
	$(MAKE) -C GameMP

LWSkaExporter:
	$(MAKE) -C LWSkaExporter

MakeFONT: Engine
	$(MAKE) -C MakeFONT

Modeler: EngineGUI
	$(MAKE) -C Modeler

RCon: Engine
	$(MAKE) -C RCon

SeriousSam: Engine EntitiesMP GameMP
	$(MAKE) -C SeriousSam

SeriousSkaStudio: Engine EngineGUI Shaders
	$(MAKE) -C SeriousSkaStudio

Shaders: Engine
	$(MAKE) -C Shaders

WorldEditor: GameGUIMP Shaders
	$(MAKE) -C WorldEditor

$(DEPLOYDIR):
	$(MD) $(DEPLOYDIR)
