#if 0
	shc Version 3.9.3a3, Generic Shell Script Compiler
	GNU GPL Version 3 Fedor Mankov <envieidoc@gmail.com>

	./shc -v -r -f compiling.sh 
#endif

static  char data [] = 
#define      lsto_z	1
#define      lsto	((&data[0]))
	"\301"
#define      tst1_z	22
#define      tst1	((&data[3]))
	"\134\220\143\045\323\324\103\302\255\247\067\304\152\250\176\100"
	"\341\224\123\337\341\213\137\177\244\332"
#define      chk1_z	22
#define      chk1	((&data[28]))
	"\142\155\101\025\110\050\226\273\373\366\303\153\011\305\326\315"
	"\025\352\152\173\121\064\167\323\165\201"
#define      msg1_z	65
#define      msg1	((&data[60]))
	"\325\052\253\300\142\343\040\160\303\361\066\023\062\160\021\043"
	"\075\242\132\264\214\040\135\226\245\056\222\332\354\132\146\315"
	"\214\333\077\224\314\051\021\034\365\345\275\177\114\163\152\320"
	"\236\054\026\134\121\104\131\363\245\256\052\347\123\124\132\360"
	"\332\030\236\121\376\326\270\276\042\034\014"
#define      rlax_z	1
#define      rlax	((&data[128]))
	"\115"
#define      inlo_z	3
#define      inlo	((&data[129]))
	"\235\311\071"
#define      date_z	1
#define      date	((&data[132]))
	"\364"
#define      msg2_z	19
#define      msg2	((&data[135]))
	"\233\150\267\241\347\257\075\010\053\072\102\315\343\024\256\330"
	"\372\201\206\261\374\315"
#define      pswd_z	256
#define      pswd	((&data[216]))
	"\216\211\104\047\303\377\306\153\315\131\021\250\157\203\032\134"
	"\343\004\373\143\024\320\366\113\000\345\053\025\304\013\042\257"
	"\136\014\365\270\361\121\230\235\064\213\232\115\113\303\240\041"
	"\017\205\307\363\201\314\206\175\237\303\040\306\106\123\077\275"
	"\376\025\035\302\033\175\155\100\135\220\143\156\111\205\355\150"
	"\024\321\341\261\134\171\024\003\124\355\306\060\353\356\356\260"
	"\051\363\171\120\067\251\016\033\033\321\261\235\055\000\333\311"
	"\275\067\116\265\236\266\126\137\023\127\166\035\216\332\363\100"
	"\342\303\156\105\215\347\335\271\046\323\222\223\153\350\144\257"
	"\367\062\343\025\322\121\115\020\126\124\244\152\116\206\276\122"
	"\365\216\143\174\267\002\272\142\160\012\026\061\153\013\137\342"
	"\340\211\047\313\340\215\323\153\103\210\332\225\102\276\044\317"
	"\020\062\144\265\217\001\335\042\346\351\042\243\150\132\250\374"
	"\075\207\105\252\115\277\206\070\164\220\117\374\233\020\215\341"
	"\032\173\242\252\074\115\201\301\135\360\070\036\350\107\004\300"
	"\254\110\237\123\032\207\220\211\310\132\367\211\166\266\213\223"
	"\264\365\236\346\174\327\256\020\176\356\253\026\335\354\257\040"
	"\001\352\046\054\176\142\240\072\177\103\336\310\042\060\252\051"
	"\315\357\333\130\166\136\047\207\146\100\151\043\371\013\115\322"
	"\117\016\231\240\170\260\044\337\114\306\325\121\362\131\357\324"
	"\236\324\274\073\357\207\077\367"
#define      tst2_z	19
#define      tst2	((&data[485]))
	"\067\372\042\040\356\105\022\340\321\214\247\330\055\000\324\240"
	"\032\100\377\060\121\270\016"
#define      shll_z	10
#define      shll	((&data[506]))
	"\130\225\056\023\352\161\014\361\044\137\277"
#define      text_z	499
#define      text	((&data[636]))
	"\132\030\223\046\015\237\225\373\305\127\040\331\307\154\276\116"
	"\270\272\307\222\060\077\127\326\151\117\375\060\020\277\167\234"
	"\224\365\063\053\232\212\302\127\060\115\246\257\210\326\274\340"
	"\170\167\313\322\257\243\312\021\122\064\146\304\040\264\063\032"
	"\217\000\062\353\253\224\365\057\020\017\374\044\105\100\340\373"
	"\120\350\015\076\316\135\151\070\303\203\071\255\335\066\203\003"
	"\310\170\144\046\171\062\215\376\047\225\230\207\326\126\041\152"
	"\212\307\134\302\057\214\070\310\114\247\177\060\023\025\060\224"
	"\232\026\367\342\054\213\073\246\150\222\316\020\253\146\276\010"
	"\326\073\140\120\151\277\132\176\043\043\060\143\122\164\070\361"
	"\223\027\301\073\020\160\242\324\332\257\163\362\054\221\106\227"
	"\214\134\037\014\170\210\056\270\223\354\010\247\360\351\122\340"
	"\217\377\105\066\313\330\024\050\270\206\124\047\237\362\147\123"
	"\257\357\350\245\010\164\024\152\261\336\366\150\163\303\324\223"
	"\212\127\022\031\072\253\024\306\261\046\043\161\337\342\316\135"
	"\233\351\252\022\243\120\262\264\106\336\042\052\360\077\151\024"
	"\031\301\177\340\032\076\014\115\236\343\304\256\200\015\275\112"
	"\163\125\113\211\222\215\164\000\036\257\133\355\207\025\243\352"
	"\147\252\266\231\253\211\010\005\201\014\120\175\062\365\052\006"
	"\337\264\335\110\145\135\152\266\047\141\010\100\005\174\064\360"
	"\303\152\217\160\251\147\037\104\267\102\353\270\263\141\245\263"
	"\111\015\006\235\147\072\240\114\376\331\241\213\170\020\165\021"
	"\005\125\007\160\331\216\270\337\161\163\126\373\177\107\276\314"
	"\265\233\274\314\317\150\071\200\177\274\214\347\301\341\217\212"
	"\235\236\072\045\151\260\041\371\200\013\140\072\241\104\133\340"
	"\020\004\254\222\141\056\250\125\217\157\213\150\023\211\200\324"
	"\171\312\366\163\153\314\153\302\034\236\215\321\160\135\265\262"
	"\012\176\043\251\067\266\023\134\066\276\207\230\127\276\153\131"
	"\143\310\041\301\267\327\026\217\206\054\263\227\022\111\234\222"
	"\313\177\063\060\156\227\161\050\071\355\222\214\116\242\004\157"
	"\336\357\211\103\312\163\354\171\305\347\026\311\100\034\203\302"
	"\303\250\013\124\021\132\364\175\276\261\315\067\075\037\141\217"
	"\114\066\335\247\327\142\324\255\206\032\302\267\166\210\013\214"
	"\304\326\306\030\036\210\055\165\365\134\347\070\332\241\330\343"
	"\364\165\002\016\152\021\130\315\020\022\346\340\114\242\245\310"
	"\171\072\122\272\364\153\034\003\371\304\102\345\015\040\243\065"
	"\057\241\250\077\320\140\067\150\060\234\237\223\250\330\113\002"
	"\172\313\160\337\153\041\161\364\341\362\332\350\232\022\231\236"
	"\161\175\307\306\011\370\254\257\201\070\121\002\065\246\040\251"
	"\005\171\051\164\346\326\077\237\025\330\375\246\313\040\317\116"
	"\211\345\253\301\064\130\223\334\116\122\250\236\330\211\232\166"
	"\155\243\101\235\321\176\362\342\170\131\203\337\313\300\340\060"
	"\347\017\004\232\345\250\200\215\122\110\154\250\322\313\112\012"
	"\320\352\034\175\214\056\302\152\277\155\270\250\155\143\005\345"
	"\233\222\314\042\304\215"
#define      xecc_z	15
#define      xecc	((&data[1230]))
	"\152\373\257\213\074\316\261\001\314\163\350\225\221\107\347\034"
	"\012\334\060\153\215"
#define      opts_z	1
#define      opts	((&data[1248]))
	"\301"
#define      chk2_z	19
#define      chk2	((&data[1250]))
	"\320\002\103\016\040\220\004\213\000\020\336\246\356\201\060\001"
	"\203\106\344\116\106\117\141"/* End of data[] */;
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
