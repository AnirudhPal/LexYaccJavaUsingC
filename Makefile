parser: y.tab.c lex.yy.c
	g++ y.tab.c lex.yy.c interpretor.cpp -o parser
y.tab.c: parser.y
	bison -y -d -g --verbose parser.y
lex.yy.c: parser.l
	flex parser.l
clean:
	rm -r lex.yy.c y.tab.c parser y.dot y.output y.tab.h\
