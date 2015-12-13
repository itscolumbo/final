CMP = gcc
MAIN = final
FUNC = finalfn
FLAGS = -lm -lX11

all:$(MAIN) $(FUNC).o

$(MAIN): $(MAIN).c $(FUNC).o $(FUNC).h gfx5.o
	$(CMP) $(MAIN).c $(FUNC).o gfx5.o -o $(MAIN) $(FLAGS) 

$(FUNC).o: $(FUNC).c gfx5.h
	$(CMP) -c $(FUNC).c

clean:
	rm [!gfx5]*.o
