#if 0
	shc Version 3.9.3a3, Generic Shell Script Compiler
	GNU GPL Version 3 Fedor Mankov <envieidoc@gmail.com>

	./shc -v -r -f io_build.command 
#endif

static  char data [] = 
#define      tst2_z	19
#define      tst2	((&data[1]))
	"\156\212\366\116\056\144\055\026\227\115\011\241\053\150\056\073"
	"\015\301\224\163\160\252\005\254"
#define      xecc_z	15
#define      xecc	((&data[26]))
	"\300\055\137\072\132\324\075\053\065\051\340\302\336\043\113\250"
	"\334\132\206\353"
#define      date_z	1
#define      date	((&data[44]))
	"\172"
#define      shll_z	10
#define      shll	((&data[45]))
	"\342\350\227\055\265\354\067\357\375\206"
#define      opts_z	1
#define      opts	((&data[55]))
	"\251"
#define      msg1_z	62
#define      msg1	((&data[67]))
	"\065\016\236\027\324\070\044\117\161\117\007\056\171\033\357\360"
	"\106\302\336\171\016\316\263\056\251\321\340\072\313\244\312\272"
	"\352\022\226\203\156\067\314\244\066\020\152\320\325\124\202\156"
	"\334\046\301\203\064\106\131\115\257\301\243\223\020\201\322\177"
	"\106\065\215\064\241\236\104\002\371\012\112\022\165\136\036\320"
	"\076\001\205\303\357"
#define      inlo_z	3
#define      inlo	((&data[141]))
	"\343\371\302"
#define      lsto_z	1
#define      lsto	((&data[144]))
	"\222"
#define      rlax_z	1
#define      rlax	((&data[145]))
	"\073"
#define      tst1_z	22
#define      tst1	((&data[148]))
	"\352\333\045\173\132\150\275\213\255\226\367\211\250\366\121\107"
	"\174\122\056\130\237\321\105\115"
#define      chk1_z	22
#define      chk1	((&data[174]))
	"\043\321\121\171\046\262\151\110\040\262\044\026\247\367\076\143"
	"\305\133\271\155\222\337\171\004\043\356\056\246\030"
#define      pswd_z	256
#define      pswd	((&data[218]))
	"\346\065\277\070\037\000\226\232\102\200\031\104\072\352\152\336"
	"\044\207\055\357\217\076\323\235\131\203\260\215\371\133\315\002"
	"\140\224\135\310\071\137\152\102\130\167\241\111\010\313\000\151"
	"\077\153\254\120\337\325\162\344\335\060\113\052\112\134\257\024"
	"\035\212\037\323\056\225\111\132\175\275\254\043\302\014\066\332"
	"\325\054\137\367\310\373\156\246\032\116\145\362\260\066\070\275"
	"\226\164\234\377\227\173\342\053\025\343\332\020\021\177\205\244"
	"\032\012\230\064\031\065\076\027\272\256\176\343\272\067\345\042"
	"\007\360\037\332\344\250\141\130\076\064\220\067\332\014\107\127"
	"\130\041\042\310\350\362\012\143\020\157\071\131\116\143\074\145"
	"\215\302\375\103\015\245\377\360\212\324\315\036\202\264\336\106"
	"\374\062\351\341\100\327\207\005\075\142\245\064\332\326\172\220"
	"\024\011\223\166\056\212\035\061\027\332\133\341\357\127\064\214"
	"\135\213\323\111\215\027\257\151\325\073\265\232\162\103\261\003"
	"\075\137\305\066\200\063\276\311\351\156\340\156\207\045\036\331"
	"\213\131\220\324\045\003\267\213\221\301\304\174\141\213\213\356"
	"\040\253\326\022\176\045\031\277\143\073\357\050\274\352\101\046"
	"\060\144\003\017\112\253\322\376\316\024\375\310\003\002\262\332"
	"\255\240\246\375\226\171\230\265\234\331\215\041\033\334\364\375"
	"\112\114\277\367\020\133\035\253\157\014\037\256\337\266\140\112"
	"\266\354\147\126\066\053\365\004"
#define      msg2_z	19
#define      msg2	((&data[527]))
	"\070\054\345\030\366\320\225\374\047\123\256\224\332\144\304\303"
	"\074\113\036\213"
#define      text_z	533
#define      text	((&data[648]))
	"\356\323\101\027\333\344\166\257\361\300\230\250\061\306\372\006"
	"\353\077\142\035\032\356\065\135\025\034\367\131\251\245\341\271"
	"\140\040\075\363\252\305\117\235\131\365\171\360\334\313\205\100"
	"\147\007\003\113\132\232\213\056\372\336\156\055\045\055\324\122"
	"\303\236\213\176\064\000\313\151\046\351\124\366\244\340\100\103"
	"\045\100\311\167\043\247\110\314\256\007\130\351\000\117\114\141"
	"\225\357\051\274\153\151\155\105\325\367\303\020\276\043\217\115"
	"\025\235\271\333\234\161\304\033\110\237\224\212\203\315\040\206"
	"\065\027\040\155\225\175\053\316\377\350\171\357\204\056\200\166"
	"\117\242\047\115\142\126\121\172\360\247\211\323\040\224\245\317"
	"\255\134\141\121\357\213\340\312\015\231\222\367\350\314\107\335"
	"\025\212\356\060\062\124\162\326\057\002\361\200\067\114\122\156"
	"\167\305\116\034\254\112\072\067\164\222\063\003\263\232\241\253"
	"\313\160\242\307\037\335\233\144\246\231\174\034\203\213\136\033"
	"\063\145\023\201\114\014\253\312\102\141\310\310\142\004\050\067"
	"\173\033\225\307\020\263\060\355\302\014\100\070\200\100\330\004"
	"\122\122\022\370\173\161\153\176\236\007\157\201\217\360\122\236"
	"\263\246\373\032\377\317\022\130\107\127\272\253\146\230\343\227"
	"\022\244\231\217\064\362\201\242\276\307\074\155\106\225\323\017"
	"\232\330\011\300\353\135\032\142\362\130\176\332\341\100\146\214"
	"\103\251\371\334\071\000\155\133\177\000\167\104\120\246\113\362"
	"\340\125\371\275\165\105\307\076\257\215\346\026\230\332\104\115"
	"\177\151\056\242\063\324\300\373\167\206\054\103\277\141\032\102"
	"\063\032\342\337\341\035\202\323\120\204\340\375\252\161\245\044"
	"\026\370\140\034\277\064\216\317\115\270\006\114\052\307\075\361"
	"\275\035\146\370\130\313\355\002\302\160\131\123\362\252\366\366"
	"\163\206\224\352\362\166\012\072\256\217\075\365\373\273\021\051"
	"\023\334\233\000\033\250\215\130\126\105\031\137\207\015\067\155"
	"\154\036\375\304\240\275\040\222\324\100\325\216\015\025\254\373"
	"\101\026\253\343\064\005\106\361\352\145\026\165\063\335\105\334"
	"\001\172\217\005\051\350\362\222\060\344\140\317\371\172\216\056"
	"\371\021\056\210\344\374\241\345\075\212\277\000\224\367\053\032"
	"\305\326\136\356\136\364\160\077\255\240\343\026\042\227\360\315"
	"\011\106\007\127\317\312\043\332\033\205\341\226\047\140\333\026"
	"\331\030\275\065\216\164\303\011\040\142\013\374\340\217\070\123"
	"\076\044\343\201\325\262\062\315\025\127\137\173\205\233\353\221"
	"\170\343\175\131\206\105\231\013\150\066\353\050\212\031\236\302"
	"\345\155\227\006\073\172\060\327\152\201\236\315\050\326\044\355"
	"\016\154\210\354\132\307\160\070\135\051\363\137\020\146\021\154"
	"\104\321\130\211\361\363\120\077\172\030\260\315\266\044\374\234"
	"\372\322\254\044\020\206\346\334\033\152\033\226\022\064\326\075"
	"\357\357\166\061\045\224\014\324\325\172\242\332\135\214\315\207"
	"\245\140\262\101\353\361\026\340\354\130\037\112\322\012\243\012"
	"\237\067\105\244\123\321\156\216\175\274\227\042\112\027\155\336"
	"\312\313\173\354\176\273\054\025\157\043\244"
#define      chk2_z	19
#define      chk2	((&data[1266]))
	"\157\217\265\153\255\171\306\312\052\037\177\167\041\271\106\044"
	"\247\224\131\375\371\043\052\113"/* End of data[] */;
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
