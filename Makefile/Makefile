VPATH	=	/home/gladson/Desktop/Practice/Projects
CPATH	=	$(VPATH)/stub_code/shuffle_guess_what.c
OUT_DIR	=	release
SRC	=	$(VPATH)/Main_code/main.c
EXE	=	shuffle_guess_what
PERF	=	$(VPATH)/Performance
BIN	=	obj

$(EXE):	main.o shuffle_guess_what.o mov 
	gcc -pg -o $(VPATH)/$(OUT_DIR)/$(EXE) $(VPATH)/$(BIN)/$(EXE).o $(VPATH)/$(BIN)/main.o

main.o:	$(SRC)  
	gcc -c $(SRC)

shuffle_guess_what.o:	$(CPATH)
			gcc -c $(CPATH)

mov:	
	mv *.o $(VPATH)/$(BIN)

clean:
	rm -rf $(VPATH)/$(BIN)/*.o
