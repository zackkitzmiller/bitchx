/* include/defs.h.  Generated by configure.  */
/* include/defs.h.in.  Generated automatically from configure.in by autoheader.  */
/* Define short BitchX version here */
#define _VERSION_ "BitchX"

/* Define long BitchX version here */
#define VERSION "BitchX-1.1-final"

/* Define BitchX version number here */
#define VERSION_NUMBER "1.1-final"

/* Define this if you have a crypt implementation in -lcrypt */
#define HAVE_CRYPT 1

/* Define this if you have the resolv library */
/* #undef HAVE_RESOLV */

/* Define this if tparm is declared in an included header */
/* #undef TPARM_DECLARED */

/* Define this if you have the tparm function in an included lib */
/* #undef HAVE_TPARM */

/* Define this if tputs is declared in an included header */
/* #undef TPUTS_DECLARED */

/* Define this if you have the tputs function in an included lib */
/* #undef HAVE_TPUTS */

/* Define this if you have terminfo support */
#define HAVE_TERMINFO 1

/* define this if an unsigned long is 32 bits */
/* #undef UNSIGNED_LONG32 */

/* define this if an unsigned int is 32 bits */
#define UNSIGNED_INT32 1

/* define this if you are unsure what is is 32 bits */
/* #undef UNKNOWN_32INT */

/* Define this if stpcpy is declared in unistd.h */
#define STPCPY_DECLARED 1

/* Define this if getpgid is declared in unistd.h */
/* #undef GETPGID_DECLARED */

/* Define this if killpg is declared in signal.h */
#define KILLPG_DECLARED 1

/* Define this if getpass is declared */
#define GETPASS_DECLARED 1

/* Define this if errno is declared */
/* #undef ERRNO_DECLARED */

/* Define this if struct linger is declared in sys/socket.h */
#define STRUCT_LINGER_DECLARED 1

/* Define this if sun_len is declared in sys/un.h */
/* #undef HAVE_SUN_LEN */

/* Define this if you want QMAIL support */
/* #undef HAVE_QMAIL */

/* Define this if bcopy is declared in string.h */
#define BCOPY_DECLARED 1

/* Define this if you system has inet_aton */
#define HAVE_INET_ATON 1

/* Define your maildir here */
#define UNIX_MAIL "/var/spool/mail"

/* Define a list of default servers here */
/* #undef DEFAULT_SERVER */

/* Define this if you want Tcl support */
/* #undef WANT_TCL */

/* Define this if you have tcl.h */
/* #undef HAVE_TCL_H */

/* Define this is the system has SSL support */
/* #undef HAVE_SSL */

/* Define this if you want IPV6 support */
/* #undef IPV6 */

/* Define this if you want SOCKS support */
/* #undef SOCKS */

/* Non-blocking type should be one of these */
#define NBLOCK_POSIX 1
/* #undef NBLOCK_BSD */
/* #undef NBLOCK_SYSV */

/*
 * Are we doing non-blocking connects? Note: SOCKS support precludes us from
 * using this feature.
 */
#if (defined(NBLOCK_POSIX) || defined(NBLOCK_BSD) || defined(NBLOCK_SYSV)) && !defined(SOCKS)
#define NON_BLOCKING_CONNECTS
#endif

/* Define this if you want CD-ROM support */
/* #undef WANT_CD */

/* Define this if you want GUI support (PM or GTK) */
/* #undef GUI */

/* Defined if Win32 GUI */
#if defined(GUI) && defined(WINNT)
#define WIN32 1
#endif

/* Define this is you want OS/2 PM support */
/* #undef __EMXPM__ */

/* Define this if you want GTK support */
/* #undef GTK */

/* Define this if you want imlib support */
/* #undef USE_IMLIB */

/* Define this if you want GNOME support */
/* #undef USE_GNOME */

/* Define this if your ZVT is newer than 1.0.10 */
/* #undef HAVE_NEW_ZVT */

/* Define this if you want ZVT support */
/* #undef USE_ZVT */

/* Define this is you want sound support */
/* #undef SOUND */

/* Define this if you want loadable module support */
/* #undef HAVE_DLLIB */

/*
 * Define this if you have shlib support and want plugin support in BitchX
 * Note: Not all systems support this.
 */
#ifdef HAVE_DLLIB
#define WANT_DLL
#endif

/* The Extra Files */
#define DEFAULT_CTOOLZ_DIR "~/.BitchX"
#define DEFAULT_MSGLOGFILE "BitchX.away"
#define DEFAULT_BITCHX_HELP_FILE "BitchX.help"
#define DEFAULT_SCRIPT_HELP_FILE "BitchX.help"
#define DEFAULT_BITCHX_KICK_FILE "BitchX.kick"
#define DEFAULT_BITCHX_QUIT_FILE "BitchX.quit"
#define DEFAULT_BITCHX_IRCNAME_FILE "BitchX.ircnames"

/* Needed defines */
/* #undef DEFAULT_HELP_PATH */
/* #undef IRCLIB */
/* #undef IRCPATH */
/* #undef SHLIB_SUFFIX */
/* #undef PLUGINDIR */
/* #undef SCRIPT_PATH */
/* #undef WSERV_PATH */
/* #undef TRANSLATION_PATH */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Define if the `getpgrp' function takes no argument. */
#define GETPGRP_VOID 1

/* Define if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define if you have <alloca.h> and it should be used (not on Ultrix). */
#define HAVE_ALLOCA_H 1

/* Define if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define if you have the <arpa/nameser.h> header file. */
#define HAVE_ARPA_NAMESER_H 1

/* Define if you have the <curses.h> header file. */
/* #undef HAVE_CURSES_H */

/* Define if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define if you have the `fchdir' function. */
#define HAVE_FCHDIR 1

/* Define if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define if you have the `fpathconf' function. */
#define HAVE_FPATHCONF 1

/* Define if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* Define if you have the `getlogin' function. */
#define HAVE_GETLOGIN 1

/* Define if you have the `getpass' function. */
#define HAVE_GETPASS 1

/* Define if you have the `getpgid' function. */
#define HAVE_GETPGID 1

/* Define if you have the `getpwent' function. */
#define HAVE_GETPWENT 1

/* Define if you have the `getrusage' function. */
#define HAVE_GETRUSAGE 1

/* Define if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define if you have the `killpg' function. */
#define HAVE_KILLPG 1

/* Define if you have the `crypt' library (-lcrypt). */
/* #undef HAVE_LIBCRYPT */

/* Define if you have the `curses' library (-lcurses). */
/* #undef HAVE_LIBCURSES */

/* Define if you have the `c_r' library (-lc_r). */
/* #undef HAVE_LIBC_R */

/* Define if you have the `dgc' library (-ldgc). */
/* #undef HAVE_LIBDGC */

/* Define if you have the `dir' library (-ldir). */
/* #undef HAVE_LIBDIR */

/* Define if you have the `dl' library (-ldl). */
/* #undef HAVE_LIBDL */

/* Define if you have the `dld' library (-ldld). */
/* #undef HAVE_LIBDLD */

/* Define if you have the `dmalloc' library (-ldmalloc). */
/* #undef HAVE_LIBDMALLOC */

/* Define if you have the `intl' library (-lintl). */
/* #undef HAVE_LIBINTL */

/* Define if you have the `m' library (-lm). */
/* #undef HAVE_LIBM */

/* Define if you have the `mysqlclient' library (-lmysqlclient). */
/* #undef HAVE_LIBMYSQLCLIENT */

/* Define if you have the `mytinfo' library (-lmytinfo). */
/* #undef HAVE_LIBMYTINFO */

/* Define if you have the `ncurses' library (-lncurses). */
/* #undef HAVE_LIBNCURSES */

/* Define if you have the `nsl' library (-lnsl). */
/* #undef HAVE_LIBNSL */

/* Define if you have the `pthread' library (-lpthread). */
/* #undef HAVE_LIBPTHREAD */

/* Define if you have the `pthreads' library (-lpthreads). */
/* #undef HAVE_LIBPTHREADS */

/* Define if you have the `resolv' library (-lresolv). */
/* #undef HAVE_LIBRESOLV */

/* Define if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define if you have the `socks' library (-lsocks). */
/* #undef HAVE_LIBSOCKS */

/* Define if you have the `socks5' library (-lsocks5). */
/* #undef HAVE_LIBSOCKS5 */

/* Define if you have the `ssl' library (-lssl). */
/* #undef HAVE_LIBSSL */

/* Define if you have the `sun' library (-lsun). */
/* #undef HAVE_LIBSUN */

/* Define if you have the `tcl' library (-ltcl). */
/* #undef HAVE_LIBTCL */

/* Define if you have the `tcl76' library (-ltcl76). */
/* #undef HAVE_LIBTCL76 */

/* Define if you have the `tcl80' library (-ltcl80). */
/* #undef HAVE_LIBTCL80 */

/* Define if you have the `termcap' library (-ltermcap). */
/* #undef HAVE_LIBTERMCAP */

/* Define if you have the `termlib' library (-ltermlib). */
/* #undef HAVE_LIBTERMLIB */

/* Define if you have the `tinfo' library (-ltinfo). */
/* #undef HAVE_LIBTINFO */

/* Define if you have the `x' library (-lx). */
/* #undef HAVE_LIBX */

/* Define if you have the <linux/soundcard.h> header file. */
/* #undef HAVE_LINUX_SOUNDCARD_H */

/* Define if you have the <machine/soundcard.h> header file. */
/* #undef HAVE_MACHINE_SOUNDCARD_H */

/* Define if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define if you have the <ncurses.h> header file. */
/* #undef HAVE_NCURSES_H */

/* Define if you have the <ncurses/termcap.h> header file. */
/* #undef HAVE_NCURSES_TERMCAP_H */

/* Define if you have the <ndir.h> header file. */
/* #undef HAVE_NDIR_H */

/* Define if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define if you have the <netinet/in_systm.h> header file. */
#define HAVE_NETINET_IN_SYSTM_H 1

/* Define if you have the <net/if.h> header file. */
#define HAVE_NET_IF_H 1

/* Define if you have the `realpath' function. */
#define HAVE_REALPATH 1

/* Define if you have the <regex.h> header file. */
#define HAVE_REGEX_H 1

/* Define if you have the <resolv.h> header file. */
#define HAVE_RESOLV_H 1

/* Define if you have the `scandir' function. */
#define HAVE_SCANDIR 1

/* Define if you have the `select' function. */
#define HAVE_SELECT 1

/* Define if you have the `setsid' function. */
#define HAVE_SETSID 1

/* Define if you have the `setvbuf' function. */
#define HAVE_SETVBUF 1

/* Define if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define if you have the `socket' function. */
#define HAVE_SOCKET 1

/* Define if you have the `stpcpy' function. */
#define HAVE_STPCPY 1

/* Define if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define if you have the `strlcat' function. */
/* #undef HAVE_STRLCAT */

/* Define if you have the `strlcpy' function. */
/* #undef HAVE_STRLCPY */

/* Define if you have the `strtoul' function. */
#define HAVE_STRTOUL 1

/* Define if you have the `sysconf' function. */
#define HAVE_SYSCONF 1

/* Define if you have the <sys/dir.h> header file. */
#define HAVE_SYS_DIR_H 1

/* Define if you have the <sys/fcntl.h> header file. */
#define HAVE_SYS_FCNTL_H 1

/* Define if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define if you have the <sys/filio.h> header file. */
/* #undef HAVE_SYS_FILIO_H */

/* Define if you have the <sys/in_systm.h> header file. */
/* #undef HAVE_SYS_IN_SYSTM_H */

/* Define if you have the <sys/ndir.h> header file. */
/* #undef HAVE_SYS_NDIR_H */

/* Define if you have the <sys/soundcard.h> header file. */
/* #undef HAVE_SYS_SOUNDCARD_H */

/* Define if you have the <sys/syslimits.h> header file. */
/* #undef HAVE_SYS_SYSLIMITS_H */

/* Define if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define if you have the <termcap.h> header file. */
/* #undef HAVE_TERMCAP_H */

/* Define if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define if the `setpgrp' function takes no argument. */
#define SETPGRP_VOID 1

/* Define if the `setvbuf' function takes the buffering type as its second
   argument and the buffer pointer as the third, as on System V before release
   3. */
/* #undef SETVBUF_REVERSED */

/* The size of a `unsigned int', as computed by sizeof. */
#define SIZEOF_UNSIGNED_INT 4

/* The size of a `unsigned long', as computed by sizeof. */
/* #undef SIZEOF_UNSIGNED_LONG */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at run-time.
        STACK_DIRECTION > 0 => grows toward higher addresses
        STACK_DIRECTION < 0 => grows toward lower addresses
        STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define if `sys_siglist' is declared by <signal.h> or <unistd.h>. */
#define SYS_SIGLIST_DECLARED 1

/* Define if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define if on AIX 3.
   System headers sometimes define this.
   We just want to avoid a redefinition error message.  */
#ifndef _ALL_SOURCE
/* # undef _ALL_SOURCE */
#endif

/* Define if you need to in order for stat and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define as `__inline' if that's what the C compiler calls it, or to nothing
   if it is not supported. */
/* #undef inline */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to `long' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */