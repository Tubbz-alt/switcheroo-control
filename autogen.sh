#!/bin/sh

srcdir=`dirname $0`
test -z "$srcdir" && srcdir=.

olddir=`pwd`
cd "$srcdir"

aclocal || exit 1
gtkdocize --copy || exit 1
autoconf || exit 1
automake -a -c || exit 1

cd "$olddir"

if test -z "$NOCONFIGURE"; then
	$srcdir/configure --enable-maintainer-mode $*
fi
