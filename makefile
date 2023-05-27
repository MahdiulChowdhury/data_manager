CFLAGS = -O 
CC = g++


dataManager: main.o payload_data.o base_class.o
	$(CC) $(CFLAGS) -o dataManager main.o payload_data.o base_class.o

main.o: main.cpp         
	$(CC) $(CFLAGS) -c main.cpp

base_class.o: base_class.cpp         
	$(CC) $(CFLAGS) -c base_class.cpp

payload_data.o: payload_data.cpp         
	$(CC) $(CFLAGS) -c payload_data.cpp