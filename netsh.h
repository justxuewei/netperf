/*
        Copyright (C) 1993,1995 Hewlett-Packard Company
*/

/* libraried performance include file 				*/
/* the define NOPERFEXTERN tels us not to re-define all the 	*/

/* defines and defaults */
#define		HOSTNAMESIZE 	255
#define		DEFAULT_SIZE	32768
#define		HOST_NAME	"127.0.0.1"
#define		TEST_PORT	12865

/* output controlling variables                                         */
#define 	DEBUG 0		/* debugging level			*/
#define 	VERBOSITY 0	/* verbosity level			*/

/* the end-test conditions for the tests - either transactions, bytes,  */
/* or time. different vars used for clarity - space is cheap ;-)        */
#define 	TEST_TIME 10	/* test ends by time			*/
#define 	TEST_BYTES 0	/* test ends on byte count		*/
#define 	TEST_TRANS 0	/* test ends on tran count		*/

/* the alignment conditions for the tests				*/
#define 	LOC_RECV_ALIGN	4	/* alignment for local receives	*/
#define 	LOC_SEND_ALIGN	4	/* alignment for local sends	*/
#define 	REM_RECV_ALIGN	4	/* alignment for remote receive	*/
#define 	REM_SEND_ALIGN	4	/* alignment for remote sends	*/

/* misc defines for the hell of it					*/
#ifndef MAXLONG
#define 	MAXLONG  	4294967295UL
#endif /* MAXLONG */

#ifndef NETSH
/* stuff to say where this test is going                                */
extern char	host_name[HOSTNAMESIZE];/* remote host name or ip addr  */
extern short	test_port;		/* where is the test waiting    */

extern void     set_defaults();
extern void     scan_cmd_line();
extern void     dump_globals();
extern void     break_args();
extern void     print_netserver_usage();

/* output controlling variables                                         */
extern int
  debug,		/* debugging level			*/
  print_headers,	/* do/don't print test headers		*/
  verbosity;		/* verbosity level			*/

/* the end-test conditions for the tests - either transactions, bytes,  */
/* or time. different vars used for clarity - space is cheap ;-)        */
extern int	
  test_time,		/* test ends by time			*/
  test_len_ticks,
  test_bytes,		/* test ends on byte count		*/
  test_trans;		/* test ends on tran count		*/

/* the alignment conditions for the tests				*/
extern int
  local_recv_align,	/* alignment for local receives		*/
  local_send_align,	/* alignment for local sends		*/
  remote_recv_align,	/* alignment for remote receives	*/
  remote_send_align,	/* alignment for remote sends		*/
  local_send_offset,
  local_recv_offset,
  remote_send_offset,
  remote_recv_offset;

#ifdef INTERVALS
extern	int          interval_usecs;
extern  int          interval_wate;
extern	int	     interval_burst;
extern  int          demo_mode;
extern  unsigned int units_this_tick;
#endif /* INTERVALS */

#ifdef DIRTY
extern int	rem_dirty_count;
extern int	rem_clean_count;
extern int	loc_dirty_count;
extern int	loc_clean_count;
#endif /* DIRTY */

/* stuff for confidence intervals */

extern int  confidence_level;
extern int  iteration_min;
extern int  iteration_max;
extern double interval;

/* stuff to controll the bufferspace "width" */
extern int	send_width;
extern int      recv_width;

/* different options for other things					*/
extern int
  local_cpu_usage,
  remote_cpu_usage;

extern float
  local_cpu_rate,
  remote_cpu_rate;

extern int
  shell_num_cpus;

extern	char	
  test_name[BUFSIZ];

extern char
  fill_file[BUFSIZ];

#ifdef DO_DLPI

extern int
  loc_ppa,
  rem_ppa;

extern int
  dlpi_sap;

#endif /* DO_DLPI */

#endif
