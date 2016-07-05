#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f dark_light.sh 
#endif

static  char data [] = 
#define      pswd_z	256
#define      pswd	((&data[21]))
	"\357\314\335\362\342\204\263\026\333\215\001\357\063\220\215\070"
	"\251\236\063\261\231\071\146\056\365\324\367\073\364\166\345\050"
	"\263\053\256\171\110\112\234\203\216\346\030\360\121\276\367\052"
	"\004\013\000\203\304\131\262\211\327\243\313\005\170\170\326\175"
	"\130\316\243\300\241\110\015\123\343\301\351\075\154\251\007\137"
	"\244\371\162\027\002\123\264\316\271\254\000\171\247\266\245\014"
	"\165\300\072\367\062\200\121\212\214\306\134\244\242\325\115\324"
	"\250\070\305\022\122\163\323\102\145\222\341\027\265\033\155\331"
	"\110\047\014\024\262\336\056\126\370\140\076\063\034\112\371\107"
	"\122\201\352\361\134\142\163\123\024\334\052\337\340\204\245\331"
	"\334\121\036\035\050\210\042\112\145\304\046\163\375\017\177\200"
	"\214\375\142\167\367\136\242\272\166\041\012\357\204\261\354\250"
	"\054\017\210\205\021\241\200\351\351\151\005\247\311\115\164\022"
	"\233\244\151\057\317\155\365\023\301\266\155\234\203\127\056\152"
	"\103\210\222\153\136\231\321\047\275\200\062\340\244\074\063\317"
	"\312\126\331\214\016\071\177\152\350\077\246\224\065\360\374\022"
	"\255\004\226\201\044\074\355\317\220\312\207\273\221\214\330\047"
	"\134\270\173\362\067\151\156\211\352\013"
#define      lsto_z	1
#define      lsto	((&data[282]))
	"\243"
#define      shll_z	10
#define      shll	((&data[285]))
	"\044\024\107\175\223\320\142\117\022\127\237\077"
#define      inlo_z	3
#define      inlo	((&data[295]))
	"\005\236\047"
#define      xecc_z	15
#define      xecc	((&data[301]))
	"\171\027\314\363\374\263\240\302\304\003\210\347\225\172\123\175"
	"\215\036"
#define      tst2_z	19
#define      tst2	((&data[318]))
	"\236\303\032\165\133\257\246\115\373\374\117\266\331\332\173\072"
	"\247\207\235\056\371\022\000\013\227"
#define      tst1_z	22
#define      tst1	((&data[341]))
	"\134\233\265\007\167\374\345\372\202\156\274\117\243\035\123\122"
	"\107\236\047\324\230\345\125\015\314\362"
#define      msg1_z	42
#define      msg1	((&data[367]))
	"\263\374\147\354\126\037\024\306\305\162\151\013\103\273\252\376"
	"\162\306\164\037\205\357\334\012\153\071\134\004\111\245\003\375"
	"\034\104\052\017\162\226\005\344\350\341\142\170\366"
#define      opts_z	1
#define      opts	((&data[412]))
	"\113"
#define      rlax_z	1
#define      rlax	((&data[413]))
	"\141"
#define      msg2_z	19
#define      msg2	((&data[416]))
	"\023\371\376\224\210\207\071\226\237\301\046\074\356\322\167\161"
	"\302\332\107\344\224\224\245"
#define      chk2_z	19
#define      chk2	((&data[438]))
	"\123\131\347\312\165\330\212\304\265\157\354\010\377\360\100\114"
	"\310\023\310\117\201\331\171\226"
#define      text_z	439
#define      text	((&data[468]))
	"\154\335\214\273\255\042\255\062\055\105\147\140\130\340\132\214"
	"\130\105\336\205\254\057\312\067\172\135\377\240\013\103\233\251"
	"\134\103\254\240\201\021\354\375\212\350\116\324\366\273\110\166"
	"\016\357\274\275\163\067\341\045\314\355\176\027\124\245\116\047"
	"\051\354\061\256\114\161\055\331\144\164\326\357\114\072\303\210"
	"\373\277\230\264\226\244\145\141\340\064\176\352\103\100\314\330"
	"\033\314\022\102\304\347\164\035\173\064\061\225\257\371\373\001"
	"\046\226\061\206\142\212\271\340\145\202\040\267\242\253\157\326"
	"\262\041\234\373\024\304\270\266\042\022\111\136\241\326\351\077"
	"\163\206\237\034\262\076\344\340\304\141\106\067\333\143\202\073"
	"\372\007\026\323\112\203\256\321\304\375\171\024\333\115\051\306"
	"\163\117\103\312\232\134\122\134\034\272\202\340\311\315\051\134"
	"\306\325\205\114\167\376\227\205\321\336\035\151\273\255\165\326"
	"\204\350\201\050\062\343\267\105\125\100\017\164\103\054\303\036"
	"\144\054\002\076\120\175\127\100\217\117\255\160\253\055\046\220"
	"\332\350\105\356\010\210\112\204\102\304\374\157\263\213\211\013"
	"\077\253\306\333\160\323\247\124\020\115\211\240\304\335\223\341"
	"\241\234\141\226\236\145\303\334\375\045\232\144\365\235\266\332"
	"\156\344\346\256\147\115\056\001\036\172\216\312\217\007\172\215"
	"\252\176\227\102\034\011\007\226\027\220\262\314\142\273\310\200"
	"\125\173\021\235\314\041\174\147\350\377\235\005\337\157\327\266"
	"\101\277\101\063\337\333\137\221\151\123\263\266\173\253\061\367"
	"\067\142\210\045\157\351\170\232\344\323\107\163\212\213\164\225"
	"\016\002\151\312\000\125\073\346\027\352\137\355\235\150\133\021"
	"\042\117\114\270\110\301\051\301\076\301\011\210\176\370\054\120"
	"\275\202\263\356\042\214\062\257\264\051\030\114\013\313\157\022"
	"\117\101\026\112\046\273\234\321\025\104\376\312\316\334\150\366"
	"\274\152\356\172\371\274\153\304\172\112\321\153\073\323\323\137"
	"\252\330\210\257\312\330\364\170\125\247\013\176\125\256\066\335"
	"\351\252\111\371\320\155\062\246\115\241\122\036\312\125\345\143"
	"\100\304\166\361\360\317\267\011\225\240\067\160\072\121\240\157"
	"\106\170"
#define      chk1_z	22
#define      chk1	((&data[959]))
	"\024\214\071\347\330\041\235\004\156\161\245\205\171\115\234\011"
	"\070\366\232\376\115\357\052"
#define      date_z	1
#define      date	((&data[982]))
	"\314"/* End of data[] */;
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
