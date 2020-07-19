#Makefile
all: byte_order

byte_order: byte_order.o
	g++ -o byte_order byte_order.cpp



