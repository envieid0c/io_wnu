#if 0
	shc Version 3.9.3a3, Generic Shell Script Compiler
	GNU GPL Version 3 Fedor Mankov <envieidoc@gmail.com>

	./shc -v -r -f io_build.command 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[5]))
	"\146\331\070\301\250\355\210\004\257\073\022\011\145\045\071\054"
	"\026\354\207\234\273\146\032\134\103\056\320"
#define      chk1_z	22
#define      chk1	((&data[30]))
	"\312\271\315\231\054\275\345\231\254\175\056\060\331\235\272\042"
	"\173\025\014\240\104\243\244\316\072\004\212\057"
#define      msg2_z	19
#define      msg2	((&data[56]))
	"\214\054\351\360\362\266\122\061\327\214\232\105\063\337\030\261"
	"\143\270\005\334\157\364"
#define      rlax_z	1
#define      rlax	((&data[77]))
	"\374"
#define      opts_z	1
#define      opts	((&data[78]))
	"\230"
#define      text_z	533
#define      text	((&data[84]))
	"\227\272\036\260\072\263\227\153\345\101\072\317\045\221\366\267"
	"\352\300\355\354\006\062\206\334\107\343\036\352\163\204\257\053"
	"\353\061\061\237\041\031\202\151\104\130\055\057\002\210\066\303"
	"\246\216\170\274\036\273\321\254\126\262\055\333\056\100\065\163"
	"\114\116\243\215\211\214\253\354\044\212\203\033\037\246\336\037"
	"\044\304\050\161\121\374\146\170\223\275\243\354\206\266\374\056"
	"\220\353\150\331\112\273\264\154\370\156\245\107\133\372\254\075"
	"\235\147\014\221\046\015\124\110\324\300\350\221\116\345\062\147"
	"\270\171\315\305\330\245\114\214\120\245\023\001\261\176\374\275"
	"\300\230\374\247\046\101\375\250\265\231\063\114\336\020\047\122"
	"\124\077\225\361\034\244\046\037\241\272\302\152\011\024\324\373"
	"\265\040\057\254\356\003\350\005\125\067\344\120\260\270\332\162"
	"\243\323\037\370\137\330\112\154\302\012\321\173\155\253\366\364"
	"\135\236\000\263\256\011\324\035\371\073\332\310\364\136\047\046"
	"\377\310\353\325\367\263\307\377\146\253\164\074\215\316\176\334"
	"\202\256\060\163\103\277\272\245\106\250\332\057\163\313\275\010"
	"\012\200\026\153\363\125\203\107\202\246\017\247\011\266\270\100"
	"\155\321\157\347\041\276\143\106\251\347\012\150\025\256\072\174"
	"\314\214\136\273\016\000\373\134\066\356\007\067\031\220\105\321"
	"\256\306\352\344\274\015\251\171\343\170\375\043\135\075\365\110"
	"\177\214\147\065\155\152\206\022\360\366\014\324\031\374\350\265"
	"\366\351\267\130\055\334\356\205\356\062\312\032\046\232\366\077"
	"\061\076\036\147\146\112\046\331\357\004\113\321\041\015\351\037"
	"\136\333\223\064\255\240\211\240\231\116\354\174\277\012\235\232"
	"\043\357\334\352\044\077\141\213\313\130\332\103\101\335\001\006"
	"\202\167\336\254\217\020\307\365\122\022\305\240\134\017\002\253"
	"\236\320\015\246\155\171\136\110\110\336\152\010\317\263\313\107"
	"\102\063\237\251\307\127\151\013\017\043\077\177\325\322\152\354"
	"\111\105\336\212\302\207\027\057\337\267\323\212\364\355\161\323"
	"\056\167\165\217\052\342\361\175\275\054\304\270\017\124\351\215"
	"\310\103\145\162\316\252\236\207\345\333\042\056\344\131\231\023"
	"\311\154\005\204\073\040\201\113\036\062\310\225\205\254\076\002"
	"\347\005\175\161\040\305\031\154\037\133\212\017\134\120\031\340"
	"\240\342\222\356\060\266\063\000\242\070\045\356\054\374\173\112"
	"\257\137\227\371\260\136\311\111\106\123\053\066\201\241\066\171"
	"\202\025\135\137\322\015\217\051\012\163\313\246\226\200\077\332"
	"\302\052\253\070\023\330\112\033\112\173\131\275\305\127\167\131"
	"\007\062\235\332\162\070\332\226\153\352\010\134\003\233\201\275"
	"\043\237\340\377\112\241\174\003\251\106\210\003\073\070\345\033"
	"\144\045\135\071\277"
#define      tst2_z	19
#define      tst2	((&data[709]))
	"\372\045\361\267\074\301\325\200\253\337\201\375\003\365\235\137"
	"\101\366\320\311\236\372"
#define      inlo_z	3
#define      inlo	((&data[730]))
	"\031\115\275"
#define      pswd_z	256
#define      pswd	((&data[780]))
	"\171\040\072\146\017\216\130\222\371\361\353\065\213\072\147\155"
	"\233\376\303\161\307\364\054\341\115\301\111\150\171\073\043\344"
	"\367\272\275\142\215\332\203\311\330\167\272\361\275\326\030\243"
	"\304\076\037\072\362\066\360\302\340\237\333\075\223\034\121\071"
	"\322\107\137\271\125\176\223\267\256\166\333\047\104\245\222\051"
	"\141\246\022\376\154\106\112\177\277\364\334\241\307\325\052\042"
	"\155\066\316\277\310\336\157\022\271\355\251\322\152\315\271\066"
	"\215\231\264\010\015\242\024\016\214\324\044\125\365\323\116\146"
	"\171\032\274\354\270\245\205\247\363\335\043\017\265\166\335\231"
	"\154\030\360\113\062\315\354\357\162\046\300\244\323\351\276\212"
	"\142\012\153\043\107\126\221\035\166\003\001\143\217\274\333\306"
	"\312\304\073\237\374\043\060\334\255\275\376\350\322\122\136\260"
	"\267\114\327\214\113\226\071\017\312\064\111\060\007\170\132\170"
	"\262\212\352\327\323\173\141\126\157\360\266\135\275\017\076\360"
	"\333\047\241\166\206\201\314\351\205\210\150\174\214\302\135\047"
	"\251\226\051\252\012\337\040\333\062\051\315\140\217\122\125\112"
	"\321\357\216\027\170\363\207\067\112\335\223\030\057\166\362\006"
	"\022\065\030\201\126\261\360\213\065\241\073\107\077\275\257\007"
	"\237\102\013\164\373\316\002\304\106\277\205\230\126\171\027\236"
	"\311\145\307\341\201\254\251\054\365\221\071\276\031\253\177\003"
	"\172\363\332\135\033\154\067\263\110\333\314\013\266\165\313\242"
	"\314\137\227\306\063\040\007\330\207\252\147\004\026\306\366\134"
#define      xecc_z	15
#define      xecc	((&data[1086]))
	"\372\277\163\014\311\136\156\324\333\106\210\105\064\102\073\371"
	"\132\047"
#define      msg1_z	62
#define      msg1	((&data[1111]))
	"\324\102\247\067\323\255\243\354\304\057\111\333\262\073\251\054"
	"\262\056\216\323\256\034\366\207\047\135\156\054\151\016\035\154"
	"\177\266\177\016\013\253\140\052\053\121\335\223\047\355\344\276"
	"\176\267\173\177\305\340\162\062\320\141\370\350\376\026\364\360"
	"\165\015\104\240\301\170\017\363\064\231\135\157\340\367\374\007"
	"\144\237\057\130"
#define      chk2_z	19
#define      chk2	((&data[1189]))
	"\271\161\316\113\264\062\132\343\244\366\012\101\135\106\145\027"
	"\101\064\076\215\047\170\016\212\003"
#define      lsto_z	1
#define      lsto	((&data[1212]))
	"\113"
#define      shll_z	10
#define      shll	((&data[1215]))
	"\375\360\307\111\262\045\024\311\163\044\334\055\155\336"
#define      date_z	1
#define      date	((&data[1227]))
	"\242"/* End of data[] */;
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
