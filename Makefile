all:
	g++ ventana.cpp \
	-lncurses -o ventana
clean:
	rm ventana