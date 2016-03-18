lab8: obrasArte.o pinturas.o esculturas.o literatura.o arquitectonicos.o main.o
	g++ obrasArte.o pinturas.o esculturas.o literatura.o arquitectonicos.o main.o -o lab8

obrasArte.o: obrasArte.h obrasArte.cpp
	g++ -c obrasArte.cpp

pinturas.o: pinturas.cpp pinturas.h obrasArte.h
	g++ -c pinturas.cpp

esculturas.o: esculturas.h esculturas.cpp obrasArte.h
	g++ -c esculturas.cpp

literatura.o: literatura.cpp literatura.h obrasArte.h
	g++ -c literatura.cpp

arquitectonicos.o: arquitectonicos.cpp arquitectonicos.h obrasArte.h
	g++ -c arquitectonicos.cpp

main.o: main.cpp obrasArte.h pinturas.h esculturas.h literatura.h arquitectonicos.h
	g++ -c main.cpp


