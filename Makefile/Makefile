VPATH	=	/home/gladson/Desktop/Practice/Projects
CPATH	=	$(VPATH)/stub_code/shuffle_guess_what.c
OUT_DIR	=	release
SRC	=	$(VPATH)/Main_code/main.c \
		$(CPATH)
EXE	=	shuffle_guess_what
PERF	=	$(VPATH)/Performance
BIN	=	obj
TOOL	=	valgrind
SPOOL	=	--tool=

All:	callgrind cachegrind massif

%grind:	$(EXE)
	$(TOOL) $(SPOOL)$@ $(VPATH)/$(OUT_DIR)/$(EXE)

massif:	$(EXE)
	$(TOOL) $(SPOOL)$@ $(VPATH)/$(OUT_DIR)/$(EXE)

$(EXE):	main.o shuffle_guess_what.o 
	gcc -pg -o $(VPATH)/$(OUT_DIR)/$(EXE) $(VPATH)/$(BIN)/*.o

%.o:	$(filter %$*.c,$(SRC))  
	gcc -c $(filter %$*.c,$(SRC)) -o $(VPATH)/$(BIN)/$*.o

clean:
	rm -rf $(VPATH)/$(BIN)/*.o
	rm -rf $(VPATH)/$(OUT_DIR)/$(EXE)

mov:	
	mv *.out.* $(PERF)
 
