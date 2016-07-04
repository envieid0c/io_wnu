#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f dark_light.sh 
#endif

static  char data [] = 
#define      msg2_z	19
#define      msg2	((&data[4]))
	"\223\372\040\026\111\255\372\216\124\215\361\372\202\112\361\122"
	"\260\111\315\160\042\333\175\324\317\374"
#define      tst2_z	19
#define      tst2	((&data[27]))
	"\013\004\315\131\302\060\151\332\041\050\035\312\044\003\070\017"
	"\361\166\313\265\065\374"
#define      msg1_z	42
#define      msg1	((&data[54]))
	"\013\033\245\044\273\213\261\264\246\227\125\301\167\104\326\307"
	"\335\343\223\024\217\263\364\227\032\023\134\266\272\273\224\215"
	"\244\237\364\153\103\116\016\157\243\266\311\304\044\020\121\334"
#define      opts_z	1
#define      opts	((&data[96]))
	"\107"
#define      shll_z	10
#define      shll	((&data[99]))
	"\151\134\214\277\040\005\073\277\215\252\266\075\054\347"
#define      chk2_z	19
#define      chk2	((&data[114]))
	"\271\213\303\156\316\140\332\365\222\301\301\071\245\156\114\266"
	"\324\036\124\213\122\245\153"
#define      xecc_z	15
#define      xecc	((&data[136]))
	"\163\221\322\046\307\233\130\365\140\076\075\371\254\304\333\300"
	"\137\067\332"
#define      lsto_z	1
#define      lsto	((&data[153]))
	"\115"
#define      text_z	439
#define      text	((&data[177]))
	"\226\017\302\123\373\303\143\017\202\262\221\261\354\160\200\323"
	"\255\261\140\156\153\113\023\225\311\332\024\113\372\336\070\156"
	"\051\030\052\141\003\121\001\127\251\255\030\205\243\351\072\311"
	"\134\113\043\145\043\064\031\007\306\237\356\351\355\211\373\350"
	"\007\324\025\375\113\353\240\057\053\376\176\215\274\172\046\264"
	"\355\245\367\357\251\222\050\121\173\222\367\056\360\030\030\155"
	"\011\307\077\157\354\327\330\023\340\267\220\017\066\002\331\354"
	"\003\351\340\157\000\336\130\043\165\176\326\005\261\131\064\144"
	"\263\371\136\105\020\303\041\220\302\011\177\152\320\013\011\214"
	"\203\206\323\325\246\254\372\127\320\344\221\375\067\126\217\007"
	"\217\147\030\371\231\204\012\346\055\325\273\224\313\266\176\061"
	"\075\041\107\262\312\303\304\114\056\323\025\246\206\356\051\127"
	"\235\251\172\011\311\166\255\212\056\301\111\065\065\147\056\301"
	"\022\052\154\120\313\017\015\051\271\172\250\104\332\165\260\360"
	"\353\336\133\165\344\317\301\044\026\133\175\152\133\225\211\251"
	"\214\377\141\357\233\172\036\056\102\377\031\255\165\315\237\363"
	"\075\340\211\047\137\252\051\112\147\003\107\365\202\064\162\352"
	"\133\163\015\254\211\111\213\265\270\337\364\260\165\016\336\244"
	"\150\204\252\334\161\246\253\131\324\271\331\335\330\267\362\152"
	"\042\057\340\007\237\124\045\352\332\050\271\317\013\007\154\121"
	"\245\316\315\237\030\172\062\207\315\010\347\205\243\251\023\367"
	"\166\147\057\300\236\020\257\362\100\100\100\114\351\061\012\170"
	"\177\070\262\122\264\034\102\044\056\040\240\247\303\231\063\347"
	"\152\201\203\233\113\170\261\322\317\357\016\055\007\135\310\374"
	"\017\234\135\127\121\043\324\110\124\276\002\301\062\265\147\000"
	"\141\053\171\341\233\340\015\317\002\323\103\144\137\072\264\004"
	"\355\261\225\011\141\217\270\051\001\342\125\234\373\213\231\231"
	"\220\040\063\226\213\040\020\232\100\361\337\033\325\262\220\035"
	"\347\216\260\077\222\245\065\362\160\124\164\214\353\371\016\102"
	"\125\342\353\362\243\220\006\042\311\004\310\273\244\003\147\212"
	"\371\102\147\251\002\100\117\243\241\030\037\225\123\012\362\250"
	"\241\022\052\263\360\274\147\150\021\031\270\156\032\201\132\125"
	"\071\202\043\271\340\021\353\006\231\364\161\253\141\304\161\315"
	"\066\304\135\264\043\357\373\036\124\250\103\225\003\237\175\054"
	"\234\215\223\054\061\266\330\001\016\102\344\214\363\343\334\033"
	"\122\007\145\173\207"
#define      pswd_z	256
#define      pswd	((&data[733]))
	"\242\201\066\107\351\055\134\313\370\155\217\040\170\047\160\067"
	"\051\116\217\324\342\021\067\232\255\160\257\036\222\023\134\140"
	"\266\247\360\345\304\215\132\041\330\307\147\234\077\214\205\053"
	"\206\257\343\346\103\144\345\216\227\106\255\307\325\033\064\045"
	"\205\231\275\053\072\305\351\327\337\121\000\045\251\020\013\265"
	"\057\046\161\131\163\340\202\052\032\251\365\227\155\305\070\036"
	"\272\127\217\200\116\132\111\216\315\167\330\201\102\214\151\041"
	"\364\177\235\143\124\302\333\042\001\072\337\266\323\061\077\362"
	"\372\044\257\241\337\171\333\076\374\014\361\314\311\302\172\202"
	"\157\262\233\006\031\061\207\327\172\334\163\011\222\071\157\371"
	"\130\266\056\313\135\277\006\026\311\074\204\332\017\031\046\352"
	"\164\057\003\131\324\133\124\160\216\033\305\251\234\363\211\223"
	"\337\007\317\056\006\256\136\013\030\333\007\065\266\223\172\320"
	"\041\005\217\237\204\233\130\274\223\003\232\177\072\176\110\043"
	"\155\371\101\154\214\251\257\364\346\023\323\003\217\270\073\027"
	"\017\052\054\106\334\054\230\257\137\046\037\065\024\257\157\042"
	"\014\153\332\270\165\353\310\045\142\022\046\014\171\140\066\324"
	"\172\361\063\014\021\211\376\304\077\114\116\245\172\324\350\304"
	"\235\140\041\255\014\202\345\134\127\062\227\055\160\127\115\062"
	"\001"
#define      date_z	1
#define      date	((&data[1024]))
	"\155"
#define      inlo_z	3
#define      inlo	((&data[1025]))
	"\370\025\063"
#define      tst1_z	22
#define      tst1	((&data[1033]))
	"\161\066\065\217\137\260\114\164\202\010\332\161\074\041\013\333"
	"\002\052\116\307\136\237\130\000\202\067\024\125"
#define      chk1_z	22
#define      chk1	((&data[1060]))
	"\122\076\144\324\301\212\025\113\010\265\347\157\002\365\335\305"
	"\305\017\375\370\331\233\111\075\127\256\032\330\074\150\001"
#define      rlax_z	1
#define      rlax	((&data[1087]))
	"\100"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
