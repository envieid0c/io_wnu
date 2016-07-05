#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f tor.sh 
#endif

static  char data [] = 
#define      xecc_z	15
#define      xecc	((&data[3]))
	"\100\026\001\011\167\114\261\045\302\124\107\034\344\067\301\307"
	"\221\244\266"
#define      lsto_z	1
#define      lsto	((&data[19]))
	"\367"
#define      shll_z	10
#define      shll	((&data[20]))
	"\053\021\347\024\047\365\055\275\354\060\046\341"
#define      msg2_z	19
#define      msg2	((&data[35]))
	"\324\250\067\216\377\222\213\256\276\071\104\072\223\131\302\352"
	"\335\230\176\327\166\225\330\024"
#define      inlo_z	3
#define      inlo	((&data[56]))
	"\132\233\315"
#define      tst1_z	22
#define      tst1	((&data[60]))
	"\315\146\006\230\060\261\257\315\217\060\112\207\142\060\340\214"
	"\145\233\037\221\235\210\122\264"
#define      msg1_z	42
#define      msg1	((&data[89]))
	"\174\244\353\136\214\176\101\353\006\324\356\265\145\062\077\041"
	"\175\171\042\010\075\237\211\170\351\023\070\073\054\040\373\344"
	"\327\302\353\067\371\300\331\163\271\173\271\136\047\025\221\254"
	"\335\146\335\305\020"
#define      chk1_z	22
#define      chk1	((&data[140]))
	"\261\037\057\220\354\247\306\227\270\326\255\245\235\345\301\227"
	"\046\076\223\044\337\252\156\064\012\301\376\043\354\110"
#define      chk2_z	19
#define      chk2	((&data[169]))
	"\161\045\075\174\334\337\310\142\356\321\051\167\331\031\137\363"
	"\102\315\046\126\345\050"
#define      rlax_z	1
#define      rlax	((&data[188]))
	"\122"
#define      text_z	726
#define      text	((&data[281]))
	"\324\235\117\151\355\053\121\126\345\242\370\312\304\016\260\052"
	"\326\113\131\374\156\156\017\257\347\142\331\153\067\077\200\266"
	"\131\005\105\315\037\210\077\143\006\361\115\220\070\020\231\265"
	"\023\234\136\314\373\365\101\167\336\111\231\066\300\330\111\351"
	"\133\024\053\110\273\123\254\307\372\255\335\137\160\266\057\174"
	"\035\246\114\167\271\146\310\262\332\127\226\204\047\052\154\316"
	"\236\023\026\177\347\331\360\346\147\034\337\206\370\154\247\160"
	"\104\113\151\200\063\015\154\243\343\072\262\276\135\302\132\175"
	"\017\344\225\322\136\132\311\243\107\044\055\322\071\257\313\276"
	"\320\341\111\055\064\060\215\152\003\350\142\200\032\262\363\041"
	"\154\335\023\045\211\372\122\104\232\256\102\205\133\320\241\235"
	"\370\355\245\252\300\100\126\017\211\243\254\004\070\155\072\363"
	"\177\110\024\361\141\111\125\222\266\036\070\120\272\233\352\046"
	"\305\127\253\324\120\331\051\362\343\123\203\352\246\075\213\325"
	"\156\067\075\372\124\375\254\161\362\222\027\143\070\352\223\236"
	"\354\354\326\230\211\226\322\163\167\262\025\135\373\221\362\360"
	"\172\273\315\000\017\153\237\174\270\037\375\051\202\301\143\133"
	"\015\263\373\153\270\040\147\002\035\234\152\200\252\117\033\012"
	"\060\254\000\256\137\230\227\241\077\077\336\013\262\124\110\162"
	"\244\110\071\363\115\376\361\142\210\137\323\057\160\055\136\064"
	"\345\102\026\306\254\237\073\273\022\371\116\010\357\061\242\034"
	"\045\234\126\173\232\062\324\223\107\064\030\273\101\262\035\146"
	"\162\046\037\321\121\033\123\242\051\350\222\237\372\106\302\101"
	"\361\003\362\015\236\264\062\102\051\231\253\332\056\107\163\033"
	"\043\103\164\034\040\031\324\212\103\143\375\104\364\150\263\342"
	"\153\351\304\117\051\064\117\146\230\354\036\236\114\346\243\212"
	"\056\316\270\070\334\272\034\345\325\362\013\216\362\055\061\344"
	"\114\022\025\103\261\152\312\200\016\360\374\311\353\011\140\343"
	"\001\022\010\117\067\160\130\176\020\100\232\134\154\072\115\206"
	"\305\125\346\357\117\112\334\230\004\225\036\330\303\172\044\042"
	"\052\114\306\063\250\121\254\111\356\056\304\255\356\363\042\214"
	"\227\243\034\104\057\373\002\177\177\227\146\171\310\263\141\307"
	"\001\206\156\243\170\120\251\015\361\036\023\000\361\177\263\225"
	"\266\211\226\323\353\014\325\217\260\254\232\171\066\112\052\142"
	"\110\141\265\104\143\277\022\301\334\013\245\335\350\316\057\347"
	"\022\275\113\250\347\330\246\021\035\226\114\110\155\336\210\063"
	"\171\214\134\251\173\321\137\207\174\370\157\023\206\027\220\314"
	"\353\340\072\246\007\114\002\071\117\143\300\210\144\111\124\317"
	"\155\266\367\123\044\134\156\166\066\050\031\021\174\355\060\226"
	"\344\120\044\206\161\373\000\372\210\057\123\160\066\032\120\177"
	"\173\343\135\047\061\333\027\345\012\061\340\366\331\111\136\273"
	"\004\153\165\040\100\251\276\372\236\302\132\066\342\326\224\072"
	"\026\216\221\116\001\036\364\145\242\352\152\137\120\321\161\173"
	"\124\036\144\141\230\053\057\347\226\334\222\102\312\214\143\316"
	"\365\316\130\325\046\360\351\332\246\244\012\216\214\360\274\304"
	"\267\345\161\244\133\261\117\166\374\275\074\334\301\121\135\247"
	"\340\354\114\330\157\067\117\252\053\010\262\361\216\226\214\366"
	"\325\001\005\074\131\013\261\047\371\057\165\104\170\011\307\231"
	"\103\250\104\062\155\065\124\010\135\022\371\156\173\311\121\327"
	"\023\046\332\274\345\314\034\343\336\022\342\315\026\123\163\253"
	"\217\036\171\056\256\244\316\010\175\116\152\053\372\335\251\245"
	"\271\351\065\015\220\317\125\364\221\375\033\121\263\337\041\337"
	"\214\215\175\131\256\055\152\135\132\131\322\155\137\141\347\373"
	"\120\163\053\025\170\215\151\001\350\242\250\011\204\173\142\370"
	"\307\054\104\123\326\223\312\077\055\015\074\314\347\202\241\341"
	"\065\064\356\156\023\304\113\102\357\265\050\314\121\304"
#define      date_z	1
#define      date	((&data[1083]))
	"\374"
#define      pswd_z	256
#define      pswd	((&data[1124]))
	"\125\124\060\031\265\366\214\131\163\333\332\150\155\072\273\214"
	"\166\155\276\051\213\037\054\112\206\201\342\156\020\352\232\061"
	"\057\220\250\325\242\076\214\311\335\351\076\356\245\300\136\041"
	"\334\321\055\110\172\077\044\337\003\253\172\341\176\162\231\372"
	"\104\163\037\376\131\242\011\262\223\026\306\325\164\213\316\240"
	"\043\063\275\342\363\267\253\166\123\255\315\242\224\057\337\351"
	"\057\121\035\310\031\362\305\120\205\312\064\053\005\321\251\343"
	"\156\160\175\105\231\124\033\125\371\100\033\054\267\251\205\137"
	"\232\167\010\354\314\064\023\272\017\170\202\135\204\353\117\222"
	"\132\343\036\370\076\214\060\047\227\377\253\305\002\223\320\005"
	"\274\077\000\160\065\214\113\174\307\351\165\111\362\313\220\162"
	"\343\040\170\047\124\046\114\032\172\135\250\247\200\233\141\357"
	"\111\260\174\170\315\354\173\254\212\122\354\243\036\022\272\116"
	"\146\117\254\313\013\200\075\100\121\145\166\050\126\356\146\161"
	"\330\176\235\377\043\251\037\070\214\266\222\003\006\152\140\162"
	"\331\265\256\064\136\157\114\205\102\124\225\132\015\251\302\122"
	"\001\346\264\162\057\362\273\345\310\354\003\342\354\072\236\142"
	"\366\066\253\321\061\150\211\242\277\360\144\031\065\115\251\144"
	"\357\311\263\023\244\033\015\064\242\317\220\336\037\002\247\132"
	"\330\321\242\161\064"
#define      opts_z	1
#define      opts	((&data[1393]))
	"\063"
#define      tst2_z	19
#define      tst2	((&data[1394]))
	"\045\053\225\333\165\260\244\244\166\007\176\115\003\143\376\074"
	"\157\222\041"/* End of data[] */;
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
