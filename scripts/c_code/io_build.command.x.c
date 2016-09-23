#if 0
	shc Version 3.9.3a3, Generic Shell Script Compiler
	GNU GPL Version 3 Fedor Mankov <envieidoc@gmail.com>

	./shc -v -r -f io_build.command 
#endif

static  char data [] = 
#define      rlax_z	1
#define      rlax	((&data[0]))
	"\177"
#define      opts_z	1
#define      opts	((&data[1]))
	"\331"
#define      chk1_z	22
#define      chk1	((&data[7]))
	"\007\240\320\344\234\101\327\325\122\351\373\064\065\346\114\035"
	"\363\224\117\041\264\174\134\301\120\110\004\263\100\015\160"
#define      msg1_z	62
#define      msg1	((&data[44]))
	"\104\077\113\352\123\331\310\314\211\177\002\365\231\035\135\227"
	"\150\073\070\200\144\361\345\212\203\315\065\335\340\271\137\242"
	"\110\242\237\100\107\131\004\116\110\063\064\120\306\143\300\015"
	"\043\137\222\374\056\343\046\115\135\162\043\177\356\103\323\147"
	"\326\342\013\251\205\260\006\202\221\045\071\123"
#define      inlo_z	3
#define      inlo	((&data[109]))
	"\140\216\016"
#define      msg2_z	19
#define      msg2	((&data[116]))
	"\231\043\167\001\165\330\164\176\366\144\054\271\246\141\276\134"
	"\015\144\231\227\073\255\336\312\363\172"
#define      pswd_z	256
#define      pswd	((&data[195]))
	"\054\130\330\302\247\030\075\320\362\123\303\235\127\201\047\333"
	"\322\042\376\257\060\175\345\131\007\264\234\306\162\162\133\041"
	"\364\222\140\156\015\256\236\166\225\336\176\075\274\213\260\135"
	"\225\013\155\103\223\347\136\376\311\365\007\060\063\110\323\165"
	"\010\121\004\055\142\256\212\356\331\205\275\052\361\142\301\277"
	"\374\352\114\341\105\033\020\174\106\100\275\314\305\264\255\354"
	"\023\132\115\047\156\040\277\333\366\275\246\067\247\103\022\274"
	"\232\132\061\336\331\353\203\016\075\130\164\347\043\221\175\015"
	"\030\040\264\254\063\332\122\372\236\002\020\270\022\201\225\042"
	"\171\342\176\103\140\357\305\033\032\130\135\022\227\043\234\076"
	"\350\070\256\160\322\222\102\012\127\352\024\344\061\030\046\355"
	"\144\055\044\041\046\174\240\375\060\254\252\123\214\270\011\113"
	"\317\221\350\072\353\257\024\035\047\054\042\057\074\054\161\366"
	"\202\127\213\267\321\036\174\205\265\145\170\326\273\311\177\270"
	"\054\232\140\164\242\341\216\216\041\215\354\174\273\351\146\374"
	"\124\330\261\333\024\151\161\327\014\246\331\205\207\174\364\033"
	"\051\170\376\165\151\373\245\367\000\126\311\214\373\035\312\045"
	"\217\251\262\217\103\215\241\256\213\221\155\021\231\132\051\005"
	"\047\134\155\350\231\116\315\333\026\065\370\110\305\150\106\027"
	"\273\256\305\157\051\057\255\101\353\260\142\150\065\116"
#define      text_z	533
#define      text	((&data[587]))
	"\222\067\043\142\255\057\023\144\156\144\343\237\060\072\111\252"
	"\104\240\343\214\203\001\341\342\035\326\122\132\016\306\272\120"
	"\254\111\073\123\172\153\333\304\116\321\175\313\111\202\347\170"
	"\215\051\272\107\326\175\036\237\375\163\322\074\221\104\370\377"
	"\015\123\210\222\200\312\245\246\353\002\164\032\064\324\076\333"
	"\307\331\123\017\354\022\350\267\137\305\077\017\000\067\031\151"
	"\132\147\252\102\131\174\176\213\165\367\006\202\023\212\104\247"
	"\250\036\112\121\025\103\312\204\133\333\110\351\233\027\257\212"
	"\153\112\247\165\230\113\055\023\265\303\225\233\365\154\362\001"
	"\277\063\222\023\076\376\375\134\226\023\207\034\050\162\256\372"
	"\014\041\117\257\265\162\123\214\064\256\243\222\224\347\131\254"
	"\067\043\321\243\332\154\164\356\163\007\204\234\051\124\341\141"
	"\052\063\233\157\375\247\012\010\313\304\223\203\352\342\127\143"
	"\216\230\075\355\247\106\104\275\244\025\032\272\250\023\130\267"
	"\063\103\243\374\214\365\333\020\176\033\224\037\072\140\102\247"
	"\172\110\320\153\223\030\246\004\241\157\265\057\114\047\046\203"
	"\277\251\300\300\313\102\111\363\256\313\376\371\217\357\122\361"
	"\225\207\156\050\210\036\110\223\250\170\271\304\244\027\367\356"
	"\375\351\160\124\114\067\073\171\333\272\051\060\014\317\220\055"
	"\152\252\070\252\224\032\260\001\115\204\064\352\025\074\315\251"
	"\363\060\016\164\066\154\174\141\152\350\062\126\155\020\274\201"
	"\043\036\332\303\034\347\316\103\121\222\117\216\160\153\312\275"
	"\351\351\364\343\223\107\373\220\252\172\063\304\250\024\127\216"
	"\166\324\134\105\346\051\022\366\306\245\010\223\320\365\007\035"
	"\216\305\322\023\220\047\022\061\325\357\046\354\136\135\046\015"
	"\027\201\307\140\322\330\061\263\004\107\272\170\133\135\103\025"
	"\047\101\142\130\057\105\034\367\115\376\101\205\175\215\161\252"
	"\201\036\364\037\225\025\266\225\052\167\003\154\305\024\070\376"
	"\262\114\003\240\172\304\271\050\367\163\165\224\234\345\341\152"
	"\123\111\361\022\212\213\066\162\040\270\007\152\070\202\276\154"
	"\346\275\105\102\012\202\304\301\347\005\307\303\023\043\051\225"
	"\265\225\137\142\130\036\231\324\172\024\215\037\240\253\275\266"
	"\300\324\245\136\225\364\121\220\153\101\340\260\133\323\251\060"
	"\060\027\375\254\223\017\250\373\310\142\362\267\007\142\141\132"
	"\032\103\212\336\061\034\051\351\166\056\053\220\326\255\311\322"
	"\077\110\207\266\322\033\277\250\215\027\122\237\375\256\327\002"
	"\143\311\370\043\266\214\300\073\205\244\211\345\111\224\165\223"
	"\175\176\163\017\177\267\041\320\244\372\162\334\040\150\142\375"
	"\346\001\104\314\015\133\100\006\337\361\267\372\004\054\242\131"
	"\077\067\365\255\127\127\215\327\020\367\037\311\076\104\316\265"
	"\327\314\034\371\323\042\311\372\177\173\053\163\207\351\337\267"
	"\215\226\102\167\162\163\042\102\073\120\241\233\114\203\372\331"
	"\035\135\377\262\020\327\242\207\353\170\003\061\325\054\066\273"
	"\154\113\320\124\220\104\110\162\300\273\016\230\055\330\006\267"
	"\114\124\031\134\207\113\004\345\177\052\151\364\156\061\366\367"
	"\007\254\113\215\115\166\035\017"
#define      tst2_z	19
#define      tst2	((&data[1187]))
	"\055\030\254\335\233\150\110\215\102\024\242\145\073\222\003\060"
	"\246\004\342\112\067\177"
#define      tst1_z	22
#define      tst1	((&data[1207]))
	"\320\346\075\375\216\256\351\123\053\162\036\315\260\142\346\045"
	"\355\154\342\176\312\100\022\043"
#define      xecc_z	15
#define      xecc	((&data[1231]))
	"\033\303\145\300\250\320\270\111\162\301\324\261\035\067\343\154"
	"\247"
#define      chk2_z	19
#define      chk2	((&data[1249]))
	"\353\246\140\215\266\036\062\222\237\366\264\362\312\136\166\166"
	"\256\370\171\070\077\002"
#define      lsto_z	1
#define      lsto	((&data[1269]))
	"\167"
#define      date_z	1
#define      date	((&data[1270]))
	"\326"
#define      shll_z	10
#define      shll	((&data[1272]))
	"\020\350\065\355\256\203\340\125\021\307\141\033"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */

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
	char * me = getenv("_");
	if (me == NULL) { me = argv[0]; }

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
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
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
