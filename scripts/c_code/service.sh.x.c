#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f service.sh 
#endif

static  char data [] = 
#define      msg1_z	42
#define      msg1	((&data[0]))
	"\170\107\234\261\320\044\162\365\112\302\035\325\015\120\363\050"
	"\011\265\072\220\143\311\163\165\041\167\363\171\301\135\143\163"
	"\346\340\337\020\236\061\305\356\044\262\363\217\051\264\377\320"
	"\003"
#define      msg2_z	19
#define      msg2	((&data[50]))
	"\353\321\312\106\076\362\356\115\376\116\177\165\356\276\367\170"
	"\341\204\275\250\325\327\326"
#define      lsto_z	1
#define      lsto	((&data[72]))
	"\044"
#define      rlax_z	1
#define      rlax	((&data[73]))
	"\216"
#define      tst1_z	22
#define      tst1	((&data[75]))
	"\302\161\356\052\016\263\372\027\304\256\033\141\313\216\215\224"
	"\352\164\214\150\326\370\335"
#define      xecc_z	15
#define      xecc	((&data[99]))
	"\204\023\253\153\140\167\070\361\121\025\147\237\141\066\306\123"
	"\157"
#define      chk1_z	22
#define      chk1	((&data[117]))
	"\157\133\315\134\022\104\213\347\103\051\207\246\223\164\031\207"
	"\307\305\142\220\160\122\321\036\047\027\306\337\256\064"
#define      opts_z	1
#define      opts	((&data[144]))
	"\005"
#define      date_z	1
#define      date	((&data[145]))
	"\012"
#define      text_z	523
#define      text	((&data[189]))
	"\106\050\370\137\274\271\202\047\221\306\364\301\000\125\177\120"
	"\347\376\244\000\072\210\245\325\306\215\334\143\043\157\377\214"
	"\167\266\026\061\046\046\210\052\145\011\130\360\370\033\021\373"
	"\307\034\323\171\157\226\367\216\267\233\033\252\020\132\335\230"
	"\171\350\261\026\117\342\203\315\157\337\347\111\253\112\352\045"
	"\322\245\033\242\235\363\114\104\224\110\347\232\307\272\373\340"
	"\117\232\332\120\274\340\214\253\221\300\276\203\000\023\025\152"
	"\324\041\050\131\045\075\222\102\216\032\001\000\216\117\162\012"
	"\245\272\160\365\346\043\337\006\373\040\334\252\136\264\371\174"
	"\023\253\124\057\244\103\177\103\374\064\221\045\004\242\040\047"
	"\243\341\152\122\023\202\375\001\045\171\274\251\052\167\066\135"
	"\201\353\034\335\274\065\210\241\343\255\007\151\355\240\274\054"
	"\057\073\014\037\023\315\215\230\201\116\140\136\005\065\333\250"
	"\002\303\131\167\216\154\371\107\012\304\037\242\213\255\153\303"
	"\250\047\360\257\137\105\372\054\032\347\027\353\240\117\052\365"
	"\010\257\356\040\021\374\036\202\036\234\065\111\330\107\013\164"
	"\253\004\255\307\155\376\165\230\263\332\230\133\336\224\312\217"
	"\134\067\062\010\270\151\001\322\072\276\061\030\345\013\002\155"
	"\315\042\074\144\212\062\013\240\341\134\070\210\302\257\111\076"
	"\100\007\325\377\211\267\251\057\236\365\225\062\134\065\264\112"
	"\227\305\010\142\366\364\053\307\270\100\375\063\222\041\210\153"
	"\121\035\365\071\157\233\210\161\234\020\107\251\173\006\041\372"
	"\171\052\051\107\141\112\234\110\165\245\343\022\044\103\267\266"
	"\236\164\374\024\330\225\070\127\053\117\137\146\234\360\303\111"
	"\137\146\274\114\103\022\023\026\017\243\151\022\127\105\142\270"
	"\341\235\217\021\356\231\305\022\141\211\145\144\026\100\012\076"
	"\173\000\117\226\277\204\326\314\356\324\365\267\142\265\100\061"
	"\035\104\300\016\154\040\054\105\014\124\114\063\347\061\317\275"
	"\035\315\142\140\344\060\307\110\050\353\227\212\076\266\101\006"
	"\030\056\201\017\312\000\161\256\256\173\040\173\057\174\233\202"
	"\316\315\163\114\010\007\240\264\066\342\027\311\022\211\046\121"
	"\022\137\022\124\066\112\077\126\306\375\247\025\210\334\266\301"
	"\211\341\217\204\224\003\205\224\331\206\246\303\103\333\254\347"
	"\115\105\050\001\311\226\051\203\345\153\110\010\246\032\136\354"
	"\355\157\234\162\271\023\067\314\165\015\020\247\035\154\264\024"
	"\227\214\051\267\373\010\203\330\020\016\315\053\230\071\076\042"
	"\167\334\264\174\271\252\343\127\132\207\303\333\327\062\211\237"
	"\107\107\151\255\163\303\105\340\107\267\332\036\200\165\025\060"
	"\200\215\115\132\023\324\375\243\112\367\144\235\176\252\061\306"
	"\345\040\312\202\173\040\041\017\010\072\010\066\313\317\320\176"
	"\053\030\130\307\227\245\170\133\273\063\021\235\012\351\147\347"
	"\064\354\040\142\047\242\301\021\266\322\225\075\363\322\333"
#define      shll_z	10
#define      shll	((&data[818]))
	"\057\267\177\216\313\367\207\344\147\315\245"
#define      tst2_z	19
#define      tst2	((&data[828]))
	"\347\365\344\371\316\251\245\265\215\053\121\161\334\003\223\316"
	"\171\365\225\145\352\221"
#define      chk2_z	19
#define      chk2	((&data[850]))
	"\023\176\234\030\336\037\351\016\231\112\037\200\206\153\272\136"
	"\063\236\137"
#define      pswd_z	256
#define      pswd	((&data[898]))
	"\160\114\216\304\130\226\140\045\162\161\227\203\003\140\304\140"
	"\055\340\123\154\144\354\343\246\330\255\052\005\136\166\056\353"
	"\144\271\260\016\174\324\346\323\252\367\307\200\301\156\255\237"
	"\233\037\062\167\022\262\045\117\054\171\316\033\215\272\201\104"
	"\350\146\343\166\111\164\105\061\317\155\346\220\027\312\262\152"
	"\173\251\326\120\177\032\247\246\346\054\051\075\324\025\213\233"
	"\065\350\151\350\314\062\262\351\310\246\054\211\355\312\001\241"
	"\114\000\163\161\221\311\074\015\017\032\273\337\141\243\227\047"
	"\345\125\035\014\061\063\347\103\260\262\001\116\267\307\235\357"
	"\021\303\120\172\136\240\007\111\146\117\336\363\227\004\044\275"
	"\361\225\117\246\007\117\021\071\221\107\246\155\050\075\010\303"
	"\311\320\203\126\031\300\320\046\154\040\337\037\064\356\064\257"
	"\224\206\107\362\124\006\306\215\262\321\166\076\330\277\154\333"
	"\335\361\262\140\240\170\243\206\330\040\064\262\216\304\001\214"
	"\015\376\151\045\213\301\275\001\341\021\010\110\357\174\301\064"
	"\156\330\242\315\330\106\357\072\347\171\247\222\034\105\377\207"
	"\145\127\232\302\333\263\326\174\267\200\133\266\277\216\332\265"
	"\154\077\375\003\361\130\226\010\201\003\225\243\067\150\146\365"
	"\142\331\326\137\017\040\215\153\222\252\203\250\220"
#define      inlo_z	3
#define      inlo	((&data[1170]))
	"\013\330\271"/* End of data[] */;
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
