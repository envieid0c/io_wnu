#if 0
	shc Version 3.9.3a3, Generic Shell Script Compiler
	GNU GPL Version 3 Fedor Mankov <envieidoc@gmail.com>

	./shc -v -r -f io_build.command 
#endif

static  char data [] = 
#define      shll_z	10
#define      shll	((&data[2]))
	"\073\036\276\022\131\035\246\331\271\252\314\106\305\066"
#define      rlax_z	1
#define      rlax	((&data[14]))
	"\034"
#define      inlo_z	3
#define      inlo	((&data[15]))
	"\367\166\025"
#define      msg2_z	19
#define      msg2	((&data[21]))
	"\117\005\312\347\377\330\272\055\003\272\106\247\257\277\055\010"
	"\272\065\104\303\353\157"
#define      chk2_z	19
#define      chk2	((&data[44]))
	"\165\134\235\047\251\115\063\300\150\160\046\331\017\245\224\256"
	"\352\061\031\245\223\367\174\251\273"
#define      pswd_z	256
#define      pswd	((&data[65]))
	"\270\025\272\114\171\243\051\335\245\117\222\001\220\100\032\173"
	"\373\231\062\063\264\036\255\063\152\023\364\230\015\352\270\326"
	"\003\034\353\226\344\223\245\164\161\271\355\370\071\037\340\047"
	"\216\267\146\271\327\161\166\150\373\200\026\011\125\046\130\113"
	"\050\300\056\012\163\335\120\110\122\317\154\326\001\240\213\043"
	"\071\116\257\002\227\331\146\267\350\230\060\217\265\021\125\056"
	"\113\035\321\202\151\151\147\356\213\061\244\267\077\246\165\066"
	"\333\200\002\106\337\365\116\041\103\003\300\143\015\124\315\176"
	"\015\116\010\301\011\215\234\121\227\115\376\332\204\143\264\055"
	"\335\203\127\004\013\373\051\206\120\312\251\152\270\002\256\214"
	"\253\225\312\323\250\211\244\232\057\251\172\336\027\240\226\131"
	"\212\133\132\350\142\117\105\014\205\150\341\310\140\102\321\313"
	"\232\010\122\225\350\311\310\351\007\132\007\244\054\355\120\060"
	"\357\041\347\157\213\234\150\213\102\003\015\072\257\277\326\252"
	"\251\014\371\251\204\111\014\371\042\246\270\101\126\230\222\206"
	"\171\037\125\302\341\115\234\046\063\370\377\337\332\205\107\124"
	"\212\361\307\350\235\226\106\105\271\231\217\074\367\254\245\327"
	"\167\001\362\060\254\146\363\366\034\376\265\255\335\354\022\354"
	"\222\071\124\341\062\216\056\156"
#define      opts_z	1
#define      opts	((&data[361]))
	"\264"
#define      msg1_z	62
#define      msg1	((&data[374]))
	"\121\156\345\161\100\277\246\325\205\036\123\116\222\162\076\133"
	"\120\274\206\272\367\326\035\355\236\225\305\247\015\300\340\272"
	"\233\034\351\352\267\117\264\112\044\303\210\243\174\305\070\130"
	"\243\375\156\363\110\261\145\124\153\372\351\376\236\213\131\024"
	"\300\073\131\263\343\320\331\112\357\200\102\163\321"
#define      date_z	1
#define      date	((&data[439]))
	"\200"
#define      xecc_z	15
#define      xecc	((&data[441]))
	"\311\073\004\214\373\061\310\301\220\037\167\261\234\242\222\047"
#define      text_z	533
#define      text	((&data[565]))
	"\210\156\025\307\323\376\316\135\035\365\270\060\204\365\012\355"
	"\247\026\026\350\203\366\237\025\356\245\125\103\065\242\346\236"
	"\165\340\162\040\227\226\356\207\371\166\233\313\025\111\300\225"
	"\121\265\062\003\375\112\314\234\030\130\276\341\155\002\274\126"
	"\067\332\042\315\146\020\256\366\113\000\015\077\015\201\116\202"
	"\322\266\110\163\361\025\355\344\011\164\063\115\347\077\076\106"
	"\133\050\153\014\361\317\015\060\241\135\137\275\311\101\122\077"
	"\047\160\026\327\364\140\102\342\025\007\070\071\363\002\352\105"
	"\017\350\314\250\066\135\263\304\140\350\314\111\042\057\223\065"
	"\271\111\371\321\262\055\114\152\372\221\101\372\276\140\105\134"
	"\041\116\053\177\255\100\321\232\257\302\076\353\174\173\320\236"
	"\106\162\112\017\073\022\111\137\357\163\232\177\102\333\204\201"
	"\143\171\224\302\167\263\164\163\336\375\212\060\307\241\004\306"
	"\342\123\231\272\052\352\147\072\010\124\165\247\256\016\276\227"
	"\161\024\157\310\004\300\040\051\275\263\067\274\321\234\231\160"
	"\102\016\237\140\215\250\164\364\342\300\242\152\103\372\011\033"
	"\350\261\137\132\134\127\170\232\165\046\251\203\237\272\276\256"
	"\354\302\361\017\022\231\241\334\076\376\136\374\262\014\237\310"
	"\224\051\044\262\074\217\035\271\224\113\350\075\233\104\232\164"
	"\251\112\304\244\342\010\222\133\046\207\210\175\274\002\216\375"
	"\311\213\205\167\376\144\046\224\013\152\323\146\225\126\213\156"
	"\114\372\205\324\242\057\016\157\172\323\004\125\236\257\031\311"
	"\345\110\050\033\347\252\337\204\274\122\265\105\247\206\220\003"
	"\262\050\160\322\170\107\036\331\376\115\037\203\356\123\063\373"
	"\020\135\021\047\210\247\103\011\040\313\166\270\353\275\031\324"
	"\066\024\053\140\302\101\354\060\223\244\024\376\144\026\201\137"
	"\207\217\060\275\251\056\300\147\213\053\161\165\104\070\313\342"
	"\334\215\064\374\217\067\342\306\133\145\347\012\170\335\371\022"
	"\074\073\266\126\116\177\205\343\061\322\323\045\370\132\010\311"
	"\213\045\176\300\120\373\371\234\114\072\337\312\244\315\027\334"
	"\065\145\170\173\215\137\306\213\257\126\004\120\260\145\262\036"
	"\220\022\004\025\025\232\137\165\105\002\305\174\247\014\042\222"
	"\211\310\213\270\007\154\011\326\220\272\370\055\043\033\365\011"
	"\022\105\031\325\133\175\255\363\355\061\256\055\102\213\004\270"
	"\001\070\367\373\235\232\201\114\156\177\260\106\171\106\162\012"
	"\055\203\035\264\367\234\000\366\262\322\253\045\113\252\375\323"
	"\166\175\156\150\254\236\074\236\234\063\201\207\211\200\367\014"
	"\033\041\010\314\077\127\015\315\070\306\110\265\002\223\224\015"
	"\121\167\303\044\160\326\247\364\351\171\356\250\070\073\171\330"
	"\241\336\320\115\366\245\352\376\157\110\224\012\227\132\162\330"
	"\076\342\153\235\375\100\037\272\365\330\243\121\323\036\214\325"
	"\026\235\352\304\363\264\050\274\211\144\166\162\231\072\247\334"
	"\267\003\112\374\036\165\302\040\016\032\137\047\227\324\010\262"
	"\156\045\061\013\024\060\104\176\107\050\316\227\103\330\270\305"
	"\203\045\036\163\146\031\152\324\344\007\342"
#define      lsto_z	1
#define      lsto	((&data[1171]))
	"\275"
#define      tst1_z	22
#define      tst1	((&data[1176]))
	"\260\164\123\347\100\116\161\011\311\141\013\366\305\271\276\235"
	"\036\344\324\243\013\107\133\211\335\272\133\036\320\360"
#define      tst2_z	19
#define      tst2	((&data[1206]))
	"\332\102\163\340\101\120\304\336\251\206\062\031\052\216\113\117"
	"\161\153\305\316\222\334\155\340\010\374\037"
#define      chk1_z	22
#define      chk1	((&data[1232]))
	"\122\163\276\157\316\265\203\146\317\275\200\271\226\336\147\077"
	"\370\354\305\311\047\121\216\327\225\220\303"/* End of data[] */;
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
