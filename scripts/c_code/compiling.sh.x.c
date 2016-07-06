#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f compiling.sh 
#endif

static  char data [] = 
#define      msg1_z	42
#define      msg1	((&data[5]))
	"\131\004\162\051\112\342\024\311\073\231\300\242\137\112\030\215"
	"\152\203\366\226\224\157\321\015\327\343\107\212\276\047\153\320"
	"\107\242\360\134\245\337\134\133\164\216\112\176\123\202\110\237"
	"\056\246\207\054\132\225\354\310"
#define      rlax_z	1
#define      rlax	((&data[56]))
	"\025"
#define      opts_z	1
#define      opts	((&data[57]))
	"\333"
#define      lsto_z	1
#define      lsto	((&data[58]))
	"\331"
#define      chk2_z	19
#define      chk2	((&data[60]))
	"\155\267\124\220\172\234\250\137\172\375\251\316\331\257\242\027"
	"\037\266\026\032\242\350"
#define      xecc_z	15
#define      xecc	((&data[82]))
	"\246\161\367\133\144\330\071\031\365\247\100\336\031\072\146\254"
	"\117\141"
#define      shll_z	10
#define      shll	((&data[99]))
	"\061\365\326\355\101\063\053\343\212\004\213\337"
#define      date_z	1
#define      date	((&data[111]))
	"\076"
#define      text_z	503
#define      text	((&data[167]))
	"\261\314\352\336\174\165\352\253\202\204\162\067\161\171\150\160"
	"\364\347\305\110\270\320\155\274\224\350\302\266\347\162\314\076"
	"\115\227\131\041\340\330\123\302\167\034\140\325\357\205\035\334"
	"\344\250\213\175\234\123\032\147\176\041\032\006\254\337\160\231"
	"\206\134\253\267\122\257\116\256\173\156\325\367\256\330\021\246"
	"\045\032\147\055\015\345\011\131\370\031\112\351\027\313\003\333"
	"\012\121\023\374\153\172\146\366\352\177\123\000\075\154\025\104"
	"\131\145\013\100\032\065\175\154\020\243\106\021\151\346\334\115"
	"\036\355\346\031\220\031\316\210\075\115\172\253\254\000\250\227"
	"\141\272\203\020\302\161\340\027\123\337\154\352\240\165\151\372"
	"\215\063\204\226\357\336\363\352\224\276\241\324\231\231\344\354"
	"\141\250\137\365\005\126\114\357\171\351\345\162\231\052\322\253"
	"\104\374\072\252\220\054\021\260\166\120\247\247\371\140\154\255"
	"\365\041\235\173\125\220\046\113\257\231\037\274\267\346\173\056"
	"\242\041\034\032\007\130\127\367\035\174\112\246\156\037\332\065"
	"\234\335\377\131\375\127\025\212\115\227\102\276\241\252\215\274"
	"\331\250\001\114\016\032\036\130\315\231\230\332\216\226\115\223"
	"\244\320\127\135\355\236\043\037\130\234\256\331\101\305\210\155"
	"\214\305\224\303\167\343\116\034\102\026\154\200\226\023\266\233"
	"\303\043\342\343\100\124\335\361\114\375\321\142\054\351\331\110"
	"\243\315\143\110\157\223\017\026\232\277\146\030\013\111\361\214"
	"\103\121\220\131\353\064\202\313\137\153\053\260\321\306\076\225"
	"\136\075\355\153\223\216\071\224\204\141\375\031\213\245\000\234"
	"\044\315\021\124\313\246\231\342\035\131\252\317\174\373\037\335"
	"\133\205\050\040\335\257\074\353\313\235\021\325\332\015\206\204"
	"\165\106\142\074\217\301\353\012\311\151\240\146\204\236\213\171"
	"\146\020\163\243\353\024\275\056\217\023\015\316\052\170\323\046"
	"\000\306\220\230\371\370\031\243\042\071\254\024\135\361\302\203"
	"\355\350\204\051\143\266\111\126\307\232\015\015\117\351\226\021"
	"\304\054\312\010\345\245\326\265\074\165\141\325\005\357\042\205"
	"\241\321\375\336\137\103\353\104\172\067\044\002\213\331\363\132"
	"\262\054\116\014\227\367\244\117\065\354\113\027\045\322\104\351"
	"\006\231\166\352\011\201\325\041\367\226\120\072\260\221\207\131"
	"\215\240\350\254\240\250\330\160\120\032\340\244\152\112\065\375"
	"\060\201\311\010\221\057\324\070\344\332\337\112\101\327\151\354"
	"\062\131\121\020\155\072\341\166\064\103\160\213\165\333\150\136"
	"\355\376\170\043\056\013\144\117\117\171\105\072\244\144\321\157"
	"\363\126\053\103\111\221\334\150\371\001\066\056\333\041\102\171"
	"\147\127\327\176\145\127\310\111\302\144\357\217\071\013\365\037"
	"\056\310\175\064\107\164\010"
#define      tst2_z	19
#define      tst2	((&data[743]))
	"\162\370\224\316\107\211\312\165\354\212\245\302\136\222\125\037"
	"\161\105\333\332"
#define      pswd_z	256
#define      pswd	((&data[790]))
	"\003\060\074\347\160\127\375\003\005\163\362\102\365\101\152\007"
	"\367\160\041\355\013\214\355\066\320\250\375\225\121\056\337\172"
	"\333\143\336\004\362\157\375\162\157\214\147\067\321\333\127\054"
	"\302\251\274\221\002\325\031\257\220\324\256\334\363\137\337\241"
	"\153\113\165\303\003\302\002\260\103\023\272\147\107\264\334\226"
	"\371\354\053\120\065\021\325\164\063\076\165\245\261\100\130\135"
	"\376\244\014\270\007\121\007\317\246\305\127\220\160\145\301\022"
	"\215\370\024\053\072\124\331\233\235\003\266\324\323\012\207\233"
	"\140\364\061\043\046\343\366\130\350\132\007\376\234\373\011\205"
	"\274\311\202\237\212\274\132\051\007\304\142\264\365\116\210\347"
	"\367\132\107\274\070\045\312\212\223\120\336\014\300\364\304\200"
	"\247\040\041\164\332\316\102\141\070\327\134\057\167\150\271\371"
	"\370\050\126\302\341\257\026\071\104\127\021\267\345\035\300\366"
	"\017\051\204\374\210\026\110\133\246\332\301\211\167\351\064\122"
	"\372\240\245\166\367\243\201\176\045\375\007\004\314\045\167\275"
	"\341\154\244\233\352\363\127\252\223\006\332\073\177\170\257\144"
	"\051\120\360\074\077\107\301\377\025\316\007\236\354\304\257\217"
	"\363\213\130\270\332\071\131\014\150\371\116\217\144\204\107\026"
	"\320\133\072\244\271\010\045\000\174\162\162\225\206\364\371\333"
	"\007"
#define      inlo_z	3
#define      inlo	((&data[1068]))
	"\064\325\117"
#define      tst1_z	22
#define      tst1	((&data[1072]))
	"\135\351\165\340\343\365\131\355\056\131\166\364\255\367\052\223"
	"\220\034\322\211\304\224\307\227\220\126\077\336"
#define      chk1_z	22
#define      chk1	((&data[1104]))
	"\147\207\176\271\156\136\252\211\335\013\032\172\270\373\371\171"
	"\033\122\070\351\210\216\275\225\101\237\254\023\312"
#define      msg2_z	19
#define      msg2	((&data[1129]))
	"\216\336\100\370\264\372\242\375\361\001\330\245\356\302\116\067"
	"\324\265\210\163"/* End of data[] */;
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
