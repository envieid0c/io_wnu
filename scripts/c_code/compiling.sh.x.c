#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f compiling.sh 
#endif

static  char data [] = 
#define      opts_z	1
#define      opts	((&data[0]))
	"\061"
#define      chk1_z	22
#define      chk1	((&data[4]))
	"\172\126\327\205\206\216\135\131\305\013\101\173\034\273\355\264"
	"\364\000\153\305\247\137\143\340\125\234"
#define      pswd_z	256
#define      pswd	((&data[85]))
	"\134\050\310\246\220\163\205\235\064\041\166\155\215\304\262\374"
	"\206\341\363\261\264\064\202\005\030\027\230\022\071\177\041\303"
	"\042\017\215\077\153\302\263\370\045\041\312\200\051\307\212\123"
	"\243\314\022\211\101\252\035\015\275\027\242\325\175\245\223\077"
	"\204\144\151\103\006\071\131\214\143\026\143\016\337\076\365\353"
	"\344\270\247\077\363\225\224\260\354\337\277\340\273\231\171\026"
	"\244\046\016\336\311\130\062\020\074\126\220\011\176\245\067\300"
	"\060\160\222\002\301\363\323\116\257\360\274\231\265\103\257\336"
	"\131\345\371\145\120\141\371\001\151\322\204\337\002\035\040\312"
	"\107\153\220\221\171\272\366\367\166\221\243\354\235\145\346\325"
	"\244\044\114\025\263\367\244\312\073\252\116\133\372\247\356\317"
	"\345\242\101\062\264\343\015\226\151\072\277\200\035\243\210\002"
	"\126\372\003\062\165\361\115\307\006\367\355\200\350\273\247\064"
	"\266\055\121\157\273\254\307\367\160\235\322\231\256\217\326\202"
	"\354\241\073\355\340\366\273\334\127\304\021\057\310\106\145\221"
	"\177\276\127\072\164\020\061\210\223\145\302\050\316\350\237\174"
	"\317\324\121\332\024\027\213\325\030\033\171\222\306\343\242\024"
	"\076\365\063\235\320\154\026\344\346\310\305\347\213\147\241\106"
	"\241\347\301\272\312\363\224\321\122\232\351\274\250\276\015\321"
	"\252\274\100\110\057\063\173\214\153\254\363\032\115\303\374\242"
	"\076\003\063\070\070\227\164\206\350\232\361\060\275\202\032\043"
	"\225\244\031\165\010\322\220\252\017\363\351\323\157\125\004\147"
	"\102\001\037\042\366\240\277\020"
#define      msg2_z	19
#define      msg2	((&data[389]))
	"\263\242\306\212\360\373\333\017\116\121\050\114\067\344\240\250"
	"\162\170\172\165\273\206"
#define      xecc_z	15
#define      xecc	((&data[409]))
	"\223\262\340\011\334\040\336\151\223\010\076\055\303\110\053\234"
	"\301"
#define      text_z	564
#define      text	((&data[514]))
	"\146\275\232\074\111\252\245\113\124\036\107\127\033\213\313\241"
	"\075\213\310\263\220\363\365\236\067\131\300\107\106\355\022\041"
	"\137\276\323\027\026\313\230\152\305\246\341\034\301\227\172\100"
	"\143\254\072\146\170\005\262\336\114\117\277\245\055\146\021\066"
	"\167\317\104\033\157\227\157\114\116\261\021\344\341\307\056\245"
	"\046\111\134\350\300\107\244\220\166\102\153\345\147\021\110\212"
	"\155\133\023\110\077\273\311\344\354\237\174\304\032\263\265\254"
	"\114\002\125\333\053\326\061\245\271\006\311\016\066\177\157\261"
	"\164\010\312\230\005\354\171\167\047\270\171\265\201\017\130\251"
	"\170\114\257\335\100\205\250\214\226\232\064\164\335\263\342\276"
	"\171\124\020\205\271\342\337\076\204\366\233\125\354\323\270\314"
	"\054\004\236\042\012\274\017\163\343\313\113\314\114\040\302\154"
	"\321\006\324\342\367\170\101\021\151\203\357\233\363\124\175\127"
	"\144\216\312\145\364\363\175\334\047\076\130\120\174\065\323\274"
	"\005\371\276\256\053\300\050\151\134\374\334\064\230\314\347\221"
	"\374\053\025\214\332\002\024\340\144\055\110\066\345\040\307\242"
	"\266\217\153\351\153\013\116\157\144\132\362\070\257\121\055\270"
	"\175\312\263\357\256\124\040\074\111\010\044\060\144\165\213\165"
	"\330\160\340\275\131\320\174\166\345\142\233\301\020\341\332\217"
	"\357\237\250\105\007\111\276\043\105\272\205\273\150\144\034\104"
	"\146\047\254\064\277\305\362\204\115\144\026\033\217\272\301\326"
	"\310\057\253\301\166\341\022\302\306\345\053\121\264\052\153\006"
	"\007\143\301\324\344\072\004\336\210\033\014\375\316\140\154\334"
	"\062\130\375\171\331\260\354\245\136\265\132\103\155\232\170\003"
	"\373\347\243\300\227\373\246\374\235\357\230\361\234\332\363\371"
	"\162\241\171\120\005\227\061\232\270\333\267\033\023\321\276\250"
	"\002\170\242\202\157\316\133\126\372\255\006\015\062\000\105\327"
	"\060\374\100\244\154\235\320\177\150\010\302\047\241\075\362\316"
	"\337\200\171\245\373\051\255\307\316\243\001\270\075\366\276\274"
	"\104\216\135\246\070\233\310\246\377\343\362\224\114\137\205\265"
	"\273\252\355\306\062\241\102\217\303\035\301\366\065\055\367\335"
	"\354\352\121\371\231\367\150\103\026\223\176\301\373\205\167\076"
	"\253\115\077\152\365\351\146\360\274\376\124\264\107\253\271\064"
	"\041\110\040\232\314\264\011\254\131\061\331\245\152\162\134\054"
	"\137\367\025\034\240\201\322\350\126\035\007\001\024\202\177\230"
	"\013\300\070\311\167\254\016\057\360\007\347\330\247\156\272\120"
	"\066\107\061\032\043\056\266\017\153\002\363\231\372\250\077\152"
	"\033\255\065\130\173\004\363\136\277\156\042\071\352\004\225\325"
	"\303\330\114\223\153\175\342\034\255\302\225\101\076\363\365\060"
	"\031\125\065\143\145\000\150\142\074\350\123\265\320\042\225\132"
	"\307\132\023\225\370\240\334\006\350\354\255\325\154\343\166\065"
	"\313\152\012\263\152\067\124\341\343\351\143\042\014\124\177\373"
	"\156\106\373\004\031\007\103\074\311\331\361\100\021\203\116\154"
	"\344\351\324\116\062\212\155\250\205\326\126\316\235\167\055\051"
	"\175\303\160\215\253\312\043\116\017\027\014\323\161\321\212\246"
	"\245\227\301\055\104\373\366\106\145\067\035\156\136\300\353\265"
	"\066\370\347\206\260"
#define      rlax_z	1
#define      rlax	((&data[1167]))
	"\205"
#define      tst2_z	19
#define      tst2	((&data[1169]))
	"\050\126\011\372\256\226\232\353\006\342\140\165\106\317\023\353"
	"\020\321\207\325\263"
#define      lsto_z	1
#define      lsto	((&data[1189]))
	"\113"
#define      chk2_z	19
#define      chk2	((&data[1190]))
	"\374\021\304\033\306\015\206\203\363\053\122\303\007\231\331\160"
	"\307\112\314\100\207\333\057"
#define      shll_z	10
#define      shll	((&data[1214]))
	"\142\227\216\141\014\011\043\130\160\270\030"
#define      inlo_z	3
#define      inlo	((&data[1224]))
	"\236\022\230"
#define      msg1_z	42
#define      msg1	((&data[1237]))
	"\353\101\342\345\054\264\364\226\316\143\362\255\044\345\335\143"
	"\224\304\115\231\054\202\075\223\161\074\136\374\304\322\236\242"
	"\253\244\176\063\346\250\052\225\107\030\323\360\352\311\354\213"
	"\355\355\042\007\273"
#define      tst1_z	22
#define      tst1	((&data[1285]))
	"\121\274\001\111\150\347\010\321\345\320\373\135\375\201\251\246"
	"\275\127\372\055\253\124\230\116\222\056\225\203"
#define      date_z	1
#define      date	((&data[1308]))
	"\024"/* End of data[] */;
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
