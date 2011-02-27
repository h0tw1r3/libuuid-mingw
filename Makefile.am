ACLOCAL_AMFLAGS = -I m4

lib_LTLIBRARIES = libuuid.la
libuuid_la_LDFLAGS = -no-undefined -version-info 1:0:0

libuuid_la_SOURCES=\
	src/clear.c \
	src/compare.c \
	src/copy.c \
	src/gen_uuid.c \
	src/isnull.c \
	src/parse.c \
	src/unparse.c \
	src/uuid_inner.h \
	include/uuid/uuid.h

includedir=$(prefix)/include/uuid
include_HEADERS=include/uuid/uuid.h
