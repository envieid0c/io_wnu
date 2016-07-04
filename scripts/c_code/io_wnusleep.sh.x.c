#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f io_wnusleep.sh 
#endif

static  char data [] = 
#define      inlo_z	3
#define      inlo	((&data[0]))
	"\237\355\236"
#define      rlax_z	1
#define      rlax	((&data[3]))
	"\031"
#define      pswd_z	256
#define      pswd	((&data[21]))
	"\155\346\124\343\140\063\310\174\332\022\371\274\221\342\225\260"
	"\102\160\276\345\221\357\006\334\224\277\334\310\101\226\222\321"
	"\122\214\262\320\166\171\276\201\242\344\103\264\076\340\020\173"
	"\217\213\051\161\170\165\253\343\274\106\322\361\352\012\324\134"
	"\103\250\171\267\252\271\266\121\304\130\212\017\334\376\126\130"
	"\167\173\165\135\366\077\162\172\003\045\213\131\053\173\262\151"
	"\036\374\142\144\101\006\361\072\322\103\340\230\124\226\020\026"
	"\024\270\171\104\362\056\012\144\077\120\044\265\236\122\246\363"
	"\236\212\133\070\202\145\221\344\364\255\306\035\163\022\234\055"
	"\326\023\330\260\025\353\244\115\172\204\012\043\137\074\051\356"
	"\162\273\044\115\160\305\117\333\035\121\171\062\252\326\065\053"
	"\324\217\355\316\270\064\070\276\122\037\254\020\116\244\171\230"
	"\114\052\077\304\046\175\055\000\320\274\026\243\010\210\135\201"
	"\324\261\046\340\157\204\062\370\076\110\072\010\031\133\245\314"
	"\031\240\207\246\312\275\022\017\270\120\240\015\340\012\020\004"
	"\165\062\240\032\317\215\306\072\216\161\210\112\264\054\361\127"
	"\115\165\232\257\115\060\232\153\137\103\010\150\033\241\230\341"
	"\353\012\023\202\117\255\042\232\232\261\236\073\004\210\320\372"
	"\023\225\377\354\023\257\322\071\171\273\042\071\044\367\257\123"
	"\164\053\202\305\055\161\244\332\364\273\061\037\263\340\140\163"
	"\171\115\367\315\327\012\214\020\053\163\234"
#define      text_z	340
#define      text	((&data[418]))
	"\274\016\262\041\070\045\132\037\121\331\262\326\372\047\261\020"
	"\230\165\271\244\226\103\226\044\146\376\205\120\327\101\252\047"
	"\031\314\160\056\000\277\271\030\376\152\257\365\024\271\001\316"
	"\142\356\070\001\162\060\235\320\335\152\030\014\177\303\265\100"
	"\275\045\257\247\361\344\065\302\177\224\110\371\246\121\307\013"
	"\330\316\222\133\207\231\227\343\042\022\213\233\060\336\261\334"
	"\062\104\056\042\012\311\042\363\146\055\344\252\321\231\231\171"
	"\272\341\334\104\117\157\222\225\026\313\254\201\052\312\366\300"
	"\112\016\201\271\010\023\332\205\156\376\104\346\027\043\373\140"
	"\172\267\227\116\066\153\060\234\207\341\107\232\377\043\051\017"
	"\223\007\360\330\242\061\252\073\073\172\354\326\303\132\013\046"
	"\216\347\214\253\345\321\012\210\340\003\130\166\054\377\126\326"
	"\344\362\321\325\243\374\023\042\112\171\220\071\044\131\356\312"
	"\322\001\155\251\177\275\215\354\244\203\166\115\206\072\277\375"
	"\346\045\050\365\325\312\172\026\365\314\170\004\302\316\023\162"
	"\162\376\117\267\210\356\063\343\120\220\110\033\001\140\362\152"
	"\046\345\155\030\043\227\172\116\234\173\027\122\065\050\301\224"
	"\324\032\005\201\253\220\255\331\221\131\014\056\032\045\272\113"
	"\167\132\100\042\155\276\372\056\202\203\340\345\176\260\006\033"
	"\220\006\210\051\140\160\237\013\300\232\261\360\267\045\253\163"
	"\100\142\312\317\275\040\266\065\031\036\125\052\102\325\030\321"
	"\124\242\331\274\355\141\233\374\047\243\356\246\247\004\140\161"
	"\065\145\243\245\004\204\070\277\004\121\127\015\231\356\037\312"
	"\116\155\162\307\377\060\337\133\064\325\102\253\344\266\304\211"
	"\271\265\270\252\011\373\036\357\113\107\146\140\347\070\307\025"
	"\165\260\016\365\255\026\132\364\052\053\012\074\007\252\324\031"
	"\127\051\270\034\325\205\374\347\217\052\047\170\004\274\172\055"
	"\215\175\014\026\032\325\213\276\315\150\122\075\264\271\070\024"
	"\152\260\070\063\007\145\322\303\336\067\100\103\266\156\106\141"
	"\231\140\242\256\275\337\305\115\320\203\141"
#define      msg2_z	19
#define      msg2	((&data[812]))
	"\023\326\324\012\117\316\101\046\347\045\013\316\140\127\131\165"
	"\207\317\220\146\066\215\062"
#define      opts_z	1
#define      opts	((&data[833]))
	"\113"
#define      msg1_z	42
#define      msg1	((&data[834]))
	"\361\313\345\267\155\145\024\176\236\166\355\000\245\062\030\061"
	"\062\020\246\303\165\001\106\245\021\067\245\240\324\000\167\226"
	"\301\367\145\105\147\011\012\030\205\161\266\164\142\260\214\211"
	"\241\022\237\033"
#define      date_z	1
#define      date	((&data[886]))
	"\206"
#define      tst2_z	19
#define      tst2	((&data[890]))
	"\010\077\061\364\042\220\040\304\134\341\315\175\364\037\106\241"
	"\033\200\036\152\341\335"
#define      shll_z	10
#define      shll	((&data[911]))
	"\121\313\326\235\227\233\173\312\356\100\051\274"
#define      chk2_z	19
#define      chk2	((&data[921]))
	"\203\030\147\216\277\370\055\130\214\210\234\260\370\271\063\244"
	"\172\007\167\023\161\310\066"
#define      xecc_z	15
#define      xecc	((&data[946]))
	"\126\067\345\244\066\247\050\052\045\175\026\243\246\041\244\353"
	"\165\373\052\377"
#define      lsto_z	1
#define      lsto	((&data[964]))
	"\063"
#define      tst1_z	22
#define      tst1	((&data[966]))
	"\164\061\214\222\001\331\227\004\325\364\014\005\316\231\324\337"
	"\271\270\173\226\157\117\070\353"
#define      chk1_z	22
#define      chk1	((&data[993]))
	"\230\071\176\031\221\326\135\370\136\275\352\234\315\003\117\336"
	"\310\367\275\214\061\224\326\274\270\232\061\246\033"/* End of data[] */;
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
