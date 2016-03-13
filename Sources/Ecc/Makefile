#Ecc makefile

CPP_SRCS = Main.cpp
BISON_SRCS = Parser.y
FLEX_SRCS = Scanner.l
NAME = ecc

TARGET = $(NAME)
OBJS = $(addprefix $(OUTDIR)/,$(addsuffix .o,$(CPP_SRCS) $(BISON_SRCS) $(FLEX_SRCS)))

ifdef DEBUG
OUTDIR = Debug
DEPLOYBINDIR = $(DEPLOYDIR)/$(OUTDIR)
else
OUTDIR = Release
DEPLOYBINDIR = $(DEPLOYDIR)
endif

all: $(DEPLOYDIR)/$(OUTDIR)/$(TARGET)

$(DEPLOYBINDIR)/$(TARGET): $(OUTDIR)/$(TARGET)
	echo Copying $(NAME) binaries to $(DEPLOYBINDIR)
	cp --force $(OUTDIR)/$(TARGET) $(DEPLOYBINDIR)/$(TARGET)
	cp --force $(OUTDIR)/$(TARGET).map $(DEPLOYBINDIR)/$(TARGET).map

$(OUTDIR)/$(TARGET): $(OBJS)
	$(LINK.o) -Xlinker -Map=$(OUTDIR)/$(TARGET).map $^ $(LOADLIBES) $(LDLIBS) -o $@  

$(OUTDIR): 
	$(MD) $(OUTDIR)

$(OUTDIR)/%.cpp.o: %.cpp $(OUTDIR)
	$(COMPILE.cpp) $(OUTPUT_OPTION) $<

$(OUTDIR)/%.y.o: $(OUTDIR)/%.y.cpp
	$(COMPILE.cpp) -I$(SOURCEDIR) $(OUTPUT_OPTION) $<

$(OUTDIR)/%.y.cpp: %.y $(OUTDIR)
	$(YACC.y) --defines=$($(notdir @):.y.cpp=.y.h) -o $@ $<
	ln -fs $(@:.y.cpp=.y.h) $(notdir $(@:.y.cpp=.h))

$(OUTDIR)/%.l.o: $(OUTDIR)/%.l.cpp
	$(COMPILE.cpp) -I$(SOURCEDIR) $(OUTPUT_OPTION) $<

$(OUTDIR)/%.l.cpp: %.l $(OUTDIR)
	$(FLEX) $(FFLAGS) -o $@ --header-file=$(@:.cpp=.h) $<
	ln -fs $(@:.l.cpp=.l.h) $(notdir $(@:.l.cpp=.h))

$(OUTDIR)/%.d: %.cpp $(OUTDIR)
	$(CXX) -MM $(CXXFLAGS) $(CPPFLAGS) $(TARGET_ARCH) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	$(RM) $@.$$$$

include $(addprefix $(OUTDIR)/,$(CPP_SRCS:.cpp=.d))

