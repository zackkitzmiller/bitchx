# Makefile  - amp  audio mpeg player v0.7
# tomislav uzelac  1996,1997

SHELL = /bin/bash

srcdir = .

top_srcdir = ../..
topdir = /home/vagrant/BitchX
prefix = /usr/local
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
infodir = ${prefix}/info
mandir = ${prefix}/man
includedir = ${prefix}/include
oldincludedir = /usr/include

local_dir = $(HOME)

# Where the BitchX binary will be installed.
# "make install" will compile and install the program.
INSTALL_IRC = ${bindir}/$(_VERSION_)$(EXEEXT)

# Where the BitchX library will be. Generally this is the place that
# you put the scripts, help pages and translation tables. It is
# very important that you set this correctly.
IRCLIB = ${libdir}/bx

CC = gcc
DEFS = -I. -I$(topdir)/include -I$(top_srcdir)/include -I$(srcdir) -I$(srcdir)/include
LIBS =  -ltinfo -lm -lcrypt

# Tcl library.
TCL_LIBS = 

# These are for Tcl support.
TCL_OBJS = 
# You don't have the following, so you'll want to leave this blank.
TCL_SRCS = 

# Set this to -g if you want to be able to debug the client, otherwise
# use -O to have the compiler do some optimization instead.
CFLAGS =  -g -O2 -Wall

# Set this to -s if you want the binary to be stripped.
LDFLAGS = 

# These are for the cd device player.
CD_SRCS = 
CD_OBJS = 

# This is the executable suffix for the target operating system.
EXEEXT = 

# Extra files.
DEFAULT_CTOOLZ_DIR = ~/.BitchX
DEFAULT_MSGLOGFILE = BitchX.away
DEFAULT_BITCHX_HELP_FILE = BitchX.help
DEFAULT_SCRIPT_HELP_FILE = BitchX.help
DEFAULT_BITCHX_KICK_FILE = BitchX.kick
DEFAULT_BITCHX_QUIT_FILE = BitchX.quit
DEFAULT_BITCHX_IRCNAME_FILE = BitchX.ircnames

# Full path of the directory for BitchX help files.
HELPDIR = $(IRCLIB)/help

# Full path of the directory for the BitchX scripts.
INSTALL_SCRIPT = $(IRCLIB)/script

# Default setting for IRCPATH where BitchX will look for
# its script files if the environment variable is undefined.
# Usually, this should contain the same path as used for INSTALL_SCRIPT in
# the Makefile, but it can contain multiple path elements
# separated by colons. The path MUST lead to an existing directory,
# because the 'global' script is expected to be found there.
IRCPATH = $(DEFAULT_CTOOLZ_DIR):$(DEFAULT_CTOOLZ_DIR)/plugins:.:$(PLUGINDIR):$(INSTALL_SCRIPT):$(IRCLIB)

# Path for TRANSLATION variable.
TRANSLATION_PATH = $(IRCLIB)/translation

# This command will be used to install the BitchX help files. If you don't
# want to install them, replace with the following:
# INSTALL_HELP_CMD = @echo The help files have not been installed.
INSTALL_HELP_CMD = cp -pfr bitchx-docs/* $(HELPDIR)

# This is where the optional plugins will be copied to.
PLUGINDIR = $(IRCLIB)/plugins

# Plugin flags.
SHLIB_LD = gcc -shared
SHLIB_CFLAGS = 
SHLIB_SUFFIX = .so

# This command will be used to install the BitchX files on Win32/OS2EMX
# systems.
WINNT_INSTALL = 

# This program allows you to use screen/xterm's to put new BitchX windows
# on new screen/xterm windows.
INSTALL_WSERV = $(IRCLIB)/wserv$(EXEEXT)

# This program allows you to screen BitchX and reattach to it later.
INSTALL_SCRBX = ${bindir}/scr-bx$(EXEEXT)

# Set gzip and bzip2 options.
GZIP_ENV = --best
BZIP2 = -9 --repetitive-best

# Standard programs.
RM = rm -f
LN = ln -s
CP = cp -f
MV = mv -f

INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644

VERSION = BitchX-1.1-final
_VERSION_ = BitchX

MAKE_BIN = make
MAKE = $(MAKE_BIN) $(MFLAGS)
MFLAGS = \
	'local_dir=$(HOME)'			\
	'INSTALL_IRC=$(INSTALL_IRC)'		\
	'IRCLIB=$(IRCLIB)'			\
	'CC=$(CC)'				\
	'CFLAGS=$(CFLAGS)'			\
	'HELPDIR=$(HELPDIR)'			\
        'INSTALL_WSERV=$(INSTALL_WSERV)'	\
	'IRCPATH=$(IRCPATH)'			\
	'TRANSLATION_PATH=$(TRANSLATION_PATH)'	\
	'LDFLAGS=$(LDFLAGS)'			\
	'LIBS=$(LIBS)'				\
	'LN=$(LN)'				\
	'RM=$(RM)'				\
	'TCL_SRCS=$(TCL_SRCS)'			\
	'TCL_OBJS=$(TCL_OBJS)'			\
	'CD_PLAY=$(CD_PLAY)'			\
	'CD_SRCS=$(CD_SRCS)'			\
	'CD_OBJS=$(CD_OBJS)'			\
	'TCL_LIBS=$(TCL_LIBS)'			\
	'PLUGINDIR=$(PLUGINDIR)'		\
	'_VERSION_=$(_VERSION_)'		\
	'VERSION=$(VERSION)'			\
	'INSTALL_DATA=$(INSTALL_DATA)'		\
	'INSTALL_SCRIPT=$(INSTALL_SCRIPT)'	\
	'EXEEXT=$(EXEEXT)'			\
	'SHLIB_CFLAGS=$(SHLIB_CFLAGS)'		\
	'SHLIB_SUFFIX=$(SHLIB_SUFFIX)'

## Makefile starts here.

OBJ = getbits.o huffman.o layer3.o getdata.o misc2.o\
	transform.o audio.o buffer.o audioIO.o position.o layer2.o util.o

PLUGIN_NAME = amp

all: Makefile amp$(SHLIB_SUFFIX)

Makefile: Makefile.in
	cd $(topdir) && \
	  ./config.status

clean:
	$(RM) *.o core *.a *.dll *~ amp$(SHLIB_SUFFIX) *.def .#*

distclean: clean
	$(RM) *~ config.status config.cache config.log config.h Makefile

../dllinit.o:
	$(CC) -DOS_$(OS) $(DEFS) $(CFLAGS) -o ../dllinit.o -c ../dllinit.c

amp$(SHLIB_SUFFIX): $(OBJ) ../dllinit.o
	$(SHLIB_LD) -o amp$(SHLIB_SUFFIX) $(OBJ) ../dllinit.o

SOURCES = $(OBJECTS:%.o=$(srcdir)/%.c)

OS := $(shell uname -s) 

.c.o:
	$(CC) -DOS_$(OS) $(DEFS) $(CFLAGS) -c $<

depend:
	gcc -MM $(CPPFLAGS) $(DEFS) $(CFLAGS) *.c > .depend

install:
	$(INSTALL) $(PLUGIN_NAME)$(SHLIB_SUFFIX) $(PLUGINDIR)

audio.o: audio.c ../../include/irc.h ../../include/defs.h \
 ../../include/config.h ../../include/../.config.h \
 ../../include/color.h ../../include/bsdglob.h ../../include/irc_std.h \
 ../../include/debug.h ../../include/newio.h ../../include/struct.h \
 ../../include/alist.h ../../include/ircaux.h ../../include/hash.h \
 ../../include/input.h ../../include/module.h ../../include/hook.h \
 ../../include/modval.h amp.h proto.h audio.h getbits.h huffman.h \
 layer2.h layer3.h position.h transform.h misc2.h
audioIO.o: audioIO.c
audioIO_Linux.o: audioIO_Linux.c amp.h ../../include/defs.h proto.h \
 audioIO.h
buffer.o: buffer.c amp.h ../../include/defs.h proto.h transform.h \
 audioIO.h audio.h
getbits.o: getbits.c amp.h ../../include/defs.h proto.h audio.h \
 getbits.h
getdata.o: getdata.c amp.h ../../include/defs.h proto.h audio.h \
 getbits.h huffman.h getdata.h
huffman.o: huffman.c audio.h getbits.h huffman.h
layer2.o: layer2.c amp.h ../../include/defs.h proto.h audio.h \
 getbits.h transform.h layer2.h
layer3.o: layer3.c amp.h ../../include/defs.h proto.h audio.h \
 getbits.h getdata.h huffman.h misc2.h transform.h layer3.h
misc2.o: misc2.c amp.h ../../include/defs.h proto.h audio.h getdata.h \
 huffman.h misc2.h
position.o: position.c amp.h ../../include/defs.h proto.h audio.h \
 getbits.h position.h
transform.o: transform.c audio.h getdata.h misc2.h transform.h
util.o: util.c amp.h ../../include/defs.h proto.h audio.h
