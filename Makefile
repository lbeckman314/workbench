all: java c

java: Hello.java
	javac Hello.java

c: hello.c
	gcc hello.c -o hello.out

clean:
	rm *.class *.out
