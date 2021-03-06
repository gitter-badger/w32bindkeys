#                                               -*- Autoconf -*-
################################################################################
# This file is part of w32bindkeys.
#
# Copyright 2020 Richard Paul Baeck <richard.baeck@mailbox.org>
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.
################################################################################
#
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([w32bindkeys], [0.3], [])
AC_CONFIG_SRCDIR([src/])
AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE

# Checks for programs.
AC_PROG_CC
AC_PROG_LIBTOOL

LT_INIT([static])

# Checks for libraries.
AC_CHECK_LIB([m], [cos])
PKG_CHECK_MODULES([collectionc], [collectionc >= 3.14.0])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

# Define header constants

# Additional configuration options
AC_ARG_ENABLE(debug,
	      AS_HELP_STRING([--enable-debug],
			     [enable debugging, default: no]),
			     [case "${enableval}" in
			      yes) debug=true ;;
			      no)  debug=false ;;
			      *)   AC_MSG_ERROR([bad value ${enableval} for --enable-debug]) ;;
		      	      esac],
			      [debug=false])
AM_CONDITIONAL(DEBUG, test x"$debug" = x"true")

AC_ARG_ENABLE(install-base,
	      AS_HELP_STRING([--enable-install-base],
			     [enable the installing of the libwbkbase library, default: no]),
			     [case "${enableval}" in
			      yes) installbase=true ;;
			      no)  installbase=false ;;
			      *)   AC_MSG_ERROR([bad value ${enableval} for --enable-install-base]) ;;
		      	      esac],
			      [installbase=false])
AM_CONDITIONAL(INSTALLBASE, test x"$installbase" = x"true")


AC_CONFIG_FILES([Makefile
                 src/Makefile
                 tests/Makefile
                 data/Makefile])
AC_CONFIG_MACRO_DIRS([m4])
AC_OUTPUT
