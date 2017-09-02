CC			=	g++

INCLUDES	= -Iinclude

CFLAGS		=	-c -Wall -g -D_DEBUG -fPIC

LNK_OPT		=

LIBS		=	-lpthread \
				-llog4cxx \
				-lboost_thread \
				-lboost_filesystem \
				-lboost_system \
				-lboost_regex \
				-lboost_date_time \
				-lboost_chrono \
				-lboost_atomic

FILES		=	iniconfig.cc \
				ProcessCheck.cc \
     			BNF.cc \
				ccenter.cc \
				MasterClient.cc \
				cserver_session.cc \
				cserver_session_manager.cc \
				ListenSessionTcp.cc \
				LogSystem.cc \
				MasterClientAccept.cc \
				MasterClientService.cc \
				network_util.cc \
				SocketIOServiceTcp.cc \
				Packet.cc \
				SocketIOHandler.cc \
				threaddata.cc \
				TimerSession.cc

SRCS        = $(wildcard src/*.cc) 
OBJECTS     = $(patsubst %.cc, %.o, $(SRCS))
 

#OBJS		=	$(FILES:.cc=.o) 
#OBJS		=	$(FILES:.cc=.o) 
 
.SUFFIXES : .cc .o .s 

#$(OBJECTS) : $(SRCS)
#	$(CC) $(CFLAGS) $(INCLUDES) $(LDFLAGS) $(LIBS) $^
    
TARGET		=	myha

all:	$(OBJECTS)
	$(CC) $(LNK_OPT) -o $(TARGET) $(OBJECTS) $(LIBS)
	rm -rf $(TARGET).gmon profile 

clean :
	rm -rf $(OBJECTS) *.o 

.cc.o:
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $<

# -- will delete this line --


#clean :
#	rm -rf $(TARGET) $(OBJS) *.o 

#dep:
#	$(CC) $(INCLUDES) -M $(CFLAGS) $(FILES) > .depend 
