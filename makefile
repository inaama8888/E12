loops: advancedClassificationLoop.o basicClassifiction.o
	ar rcs libclassloops.a advancedClassificationLoop.o basicClassifiction.o
recursives: advancedClassificationRecursion.o basicClassifiction.o
	ar rcs libclassrec.a advancedClassificationRecursion.o basicClassifiction.o

recursived: advancedClassificationRecursion.o basicClassifiction.o
	gcc -shared -o libclassrec.so advancedClassificationRecursion.o basicClassifiction.o
loopd: advancedClassificationLoop.o basicClassifiction.o
	gcc -shared -o libclassloops.so advancedClassificationLoop.o basicClassifiction.o
mains: main.o recursives
	gcc -Wall -g -o mains main.o libclassrec.a -lm
maindloop: main.o loopd
	gcc -Wall -g -o maindloop main.o ./libclassloops.so -lm
maindrec: main.o recursived
	gcc -Wall -g -o maindrec main.o ./libclassrec.so -lm
all:loops recursives recursived loopd mains maindloop maindrec
clean:
	rm -f *.o *.a *.so recursived loopd mains maindloop maindrec
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc -c advancedClassificationLoop.c -fPIC -lm
basicClassifiction.o: basicClassifiction.c NumClass.h
	gcc -Wall -g -c basicClassifiction.c -fPIC -lm
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc -c advancedClassificationRecursion.c -fPIC -lm
main.o: main.c NumClass.h
	gcc -c main.c -lm

