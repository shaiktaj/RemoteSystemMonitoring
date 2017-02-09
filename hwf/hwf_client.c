/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "hwf.h"


void
hwf_prog_1(char *host)
{
	CLIENT *clnt;
	char * *result_1;
	long  hwf_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, HWF_PROG, HWF_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

        printf("\n\n");

	result_1 = hwf_1(&hwf_1_arg, clnt);
	if (result_1 == (char **) NULL) {
		clnt_perror (clnt, "call failed");
	}

        puts(*result_1);

#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	hwf_prog_1 (host);
exit (0);
}