DIR=.
CC=gcc
CFLAGS= -g -c -I$(DIR) -I. -DLEFTTORIGHT -DSPARC -DMAKE

csem: sym.o scan.o semdum.o cgram.tab.o semutil.o
	gcc -g -o csem sym.o scan.o semdum.o cgram.tab.o semutil.o

sym.o: $(DIR)/sym.c $(DIR)/cc.h cgram.tab.h
	gcc $(CFLAGS) $(DIR)/sym.c

scan.o:	$(DIR)/scan.c $(DIR)/cc.h cgram.tab.h
	gcc $(CFLAGS) $(DIR)/scan.c

semdum.o: semdum.c $(DIR)/cc.h cgram.tab.h
	gcc $(CFLAGS) semdum.c

semutil.o: $(DIR)/semutil.c $(DIR)/cc.h $(DIR)/sem.h $(DIR)/sym.h
	gcc $(CFLAGS) $(DIR)/semutil.c

#y.tab.h cgram.c: $(DIR)/cgram.y
#	yacc -vd $(DIR)/cgram.y
#	mv y.tab.c cgram.c
cgram.tab.h cgram.tab.c: $(DIR)/cgram.y
	yacc -vd -b cgram $(DIR)/cgram.y

clean:
	rm -f csem *.o *~ cgram.tab.* y.tab.* *.output \#*\#


