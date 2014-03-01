CXXFLAGS =	-O2 -g -Wall -fmessage-length=0 $(INCLUDES)

OBJS =		\
			QueueProject.o

INCLUDES = -I../include \
		   -I.

LIBS = \

TARGET =	QueueProject.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)
	./$(TARGET)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
