#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f io_wnusleep-local.sh 
#endif

static  char data [] = 
#define      tst2_z	19
#define      tst2	((&data[0]))
	"\231\327\125\033\376\374\237\317\055\211\102\306\246\143\006\236"
	"\255\116\260\010\125\106\336"
#define      msg1_z	42
#define      msg1	((&data[27]))
	"\170\347\271\231\146\207\124\016\372\364\273\114\140\341\304\176"
	"\026\214\075\203\153\340\030\174\367\331\202\300\374\037\345\332"
	"\251\041\303\377\151\227\007\144\240\256\277\241\303\162\113"
#define      chk2_z	19
#define      chk2	((&data[73]))
	"\260\150\056\306\361\073\056\220\012\251\334\211\104\176\230\016"
	"\277\147\070\245\064\151\000"
#define      pswd_z	256
#define      pswd	((&data[94]))
	"\075\160\172\142\247\336\226\304\070\143\376\004\067\354\200\266"
	"\103\064\257\014\123\243\136\123\305\063\065\205\357\013\251\251"
	"\011\004\021\370\320\061\050\347\001\307\333\177\150\274\257\031"
	"\176\034\232\056\265\100\052\231\156\137\277\075\275\057\124\120"
	"\323\202\170\325\307\132\114\172\076\227\267\112\075\231\230\343"
	"\224\125\042\134\341\112\257\301\136\103\031\041\270\342\011\347"
	"\143\345\312\272\035\033\032\321\344\001\377\032\215\100\246\012"
	"\037\156\223\370\323\023\044\166\261\177\072\033\237\005\060\115"
	"\133\266\066\352\307\236\107\210\263\204\276\367\257\015\100\321"
	"\046\304\123\004\117\104\125\355\061\020\023\216\150\225\347\355"
	"\071\020\371\006\120\045\152\343\012\072\332\315\210\165\046\164"
	"\221\251\372\063\075\312\106\142\363\156\247\107\066\010\244\220"
	"\320\176\204\135\203\235\356\027\230\347\323\017\060\247\021\271"
	"\022\153\263\177\011\333\234\122\111\266\066\221\326\104\003\027"
	"\124\304\246\304\162\047\361\177\306\132\100\143\271\276\015\265"
	"\106\262\271\300\260\165\055\154\020\001\315\150\033\025\044\075"
	"\025\250\033\005\253\150\126\146\077\011\115\101\200\021\234\212"
	"\316\061\150\207"
#define      chk1_z	22
#define      chk1	((&data[371]))
	"\034\107\220\020\357\110\242\274\213\011\227\360\026\037\257\051"
	"\201\051\153\355\010\363\114\220\107\177\323"
#define      date_z	1
#define      date	((&data[396]))
	"\314"
#define      shll_z	10
#define      shll	((&data[397]))
	"\073\376\321\042\324\225\131\243\044\156\032"
#define      tst1_z	22
#define      tst1	((&data[413]))
	"\353\072\327\101\220\231\360\043\144\306\234\161\123\374\353\311"
	"\157\124\006\203\256\271\133\313\147\116\277\332\244"
#define      inlo_z	3
#define      inlo	((&data[437]))
	"\220\016\327"
#define      msg2_z	19
#define      msg2	((&data[443]))
	"\003\363\027\357\025\264\251\101\047\121\236\124\260\367\044\052"
	"\102\201\374\051\073\021\306"
#define      rlax_z	1
#define      rlax	((&data[463]))
	"\354"
#define      xecc_z	15
#define      xecc	((&data[466]))
	"\225\107\372\324\342\237\313\324\321\376\071\055\216\146\376\244"
	"\346\235\316"
#define      lsto_z	1
#define      lsto	((&data[483]))
	"\256"
#define      opts_z	1
#define      opts	((&data[484]))
	"\032"
#define      text_z	374
#define      text	((&data[530]))
	"\255\320\001\372\214\315\262\027\115\054\300\234\166\200\325\355"
	"\356\237\236\325\257\141\220\004\177\304\125\211\174\022\255\367"
	"\353\146\063\075\344\016\065\326\151\016\206\010\157\035\127\153"
	"\241\370\061\220\051\364\145\076\313\011\211\003\247\104\075\045"
	"\244\124\347\140\067\036\163\036\005\027\122\046\146\301\012\227"
	"\355\217\335\042\120\106\166\120\327\350\273\246\135\010\321\040"
	"\012\176\142\061\373\270\314\172\231\066\167\074\205\304\154\227"
	"\236\317\263\047\067\156\037\166\246\140\247\227\046\057\051\154"
	"\173\176\037\216\110\271\011\156\225\106\373\063\041\064\377\351"
	"\272\257\235\135\373\124\055\074\053\334\022\241\274\066\023\310"
	"\207\151\157\042\254\337\140\231\054\171\035\136\276\014\252\100"
	"\066\057\156\135\076\060\237\203\225\220\260\124\262\370\275\036"
	"\163\021\136\062\017\216\320\050\171\271\107\144\077\136\206\112"
	"\323\255\255\311\220\273\107\046\037\254\262\025\132\364\012\211"
	"\062\071\205\075\142\101\277\171\161\057\330\324\206\276\024\341"
	"\020\334\374\312\100\143\011\135\320\353\046\163\053\047\331\133"
	"\123\146\334\265\115\122\074\357\037\046\223\325\064\064\354\267"
	"\002\066\101\220\133\362\257\031\245\120\155\311\117\327\201\375"
	"\202\333\177\153\260\103\325\303\024\234\223\337\260\002\027\311"
	"\306\024\162\220\030\371\044\111\053\024\000\175\147\331\277\301"
	"\313\330\062\123\032\353\303\252\163\332\035\027\245\172\123\215"
	"\315\246\221\215\303\303\345\367\063\067\245\354\041\325\214\010"
	"\071\034\245\012\003\176\152\264\017\076\077\265\207\173\306\074"
	"\155\215\107\260\267\032\253\114\313\245\270\103\044\251\212\365"
	"\077\333\146\042\067\143\023\141\071\306\336\324\235\266\062\264"
	"\314\126\245\341\014\143\232\070\221\040\302\230\121\046\122\310"
	"\365\214\003\245\327\272\024\257\045\236\377\306\020\243\273\331"
	"\250\121\142\160\366\206\015\070\322\041\315\352\105\125\344\306"
	"\377\034\132\237\200\027\214\306\375\125\040\256\020\142\272\125"
	"\023\113\123\005\376\335\052\225\120\175\132\163\115\102\005\227"
	"\164\306\061\012\137\332\104\044\066\164\245\334\152\032\363\131"
	"\001\350\317\111"/* End of data[] */;
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
