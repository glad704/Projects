VPATH	=	/home/gladson/Desktop/Practice/Projects
CPATH	=	$(VPATH)/stub_code/shuffle_guess_what.c
OUT_DIR	=	release
SRC	=	$(VPATH)/Main_code/main.c
EXE	=	shuffle_guess_what
PERF	=	$(VPATH)/Performance
BIN	=	obj
src	=	main.c shuffle_guess_what.c
ofl	=	main.o shuffle_guess_what.o

$(EXE):	main.o shuffle_guess_what.o 
	gcc -pg -o $(VPATH)/$(OUT_DIR)/$(EXE) $(VPATH)/$(BIN)/*.o

main.o:	$(SRC)  
	gcc -c $(SRC) -o $(VPATH)/$(BIN)/main.o

shuffle_guess_what.o:	$(CPATH)
			gcc -c $(CPATH) -o $(VPATH)/$(BIN)/shuffle_guess_what.o

clean:
	rm -rf $(VPATH)/$(BIN)/*.o
	rm -rf $(VPATH)/$(OUT_DIR)/$(EXE)
