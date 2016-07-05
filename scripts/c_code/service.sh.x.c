#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f service.sh 
#endif

static  char data [] = 
#define      rlax_z	1
#define      rlax	((&data[0]))
	"\135"
#define      lsto_z	1
#define      lsto	((&data[1]))
	"\131"
#define      xecc_z	15
#define      xecc	((&data[3]))
	"\276\274\274\112\231\136\023\131\102\007\226\056\372\066\025\114"
#define      pswd_z	256
#define      pswd	((&data[79]))
	"\331\070\003\320\375\357\021\340\347\031\025\303\234\301\376\340"
	"\040\251\314\200\010\072\212\003\347\271\255\263\362\357\314\253"
	"\035\001\354\241\155\055\247\304\340\076\163\202\255\110\014\135"
	"\126\150\210\054\122\306\156\202\214\103\277\001\151\131\276\356"
	"\226\215\073\107\326\070\023\107\330\314\043\260\052\124\056\101"
	"\321\035\344\237\272\151\272\156\266\225\133\244\174\040\155\156"
	"\375\202\135\122\144\323\000\260\107\111\361\243\357\137\230\164"
	"\125\231\372\165\214\376\203\310\362\334\165\176\247\244\315\133"
	"\140\372\073\273\366\151\162\257\135\010\252\313\144\001\142\060"
	"\041\001\363\317\245\063\046\302\351\025\035\310\012\232\133\124"
	"\117\207\017\025\012\243\121\300\220\252\331\125\003\363\200\060"
	"\354\061\254\320\306\012\367\012\263\156\251\045\070\234\120\375"
	"\050\176\217\320\075\144\253\011\036\007\043\022\007\267\205\130"
	"\266\037\107\276\213\271\010\230\305\200\245\040\176\201\141\143"
	"\234\353\174\240\307\223\355\160\167\246\016\376\376\317\266\106"
	"\120\211\213\253\347\317\243\212\166\044\005\240\243\345\054\236"
	"\237\142\344\241\130\114\267\277\165\163\020\117\062\171\372\243"
	"\153\313\075\113\031\116\251\151\307\271\262\222\022\125\163\063"
	"\176\217\113\052\026\257\100\201\116\267\054\231\214\213\075\332"
	"\013\326\125\252\102\056\140\240\133\007\034\344\066\355\053\056"
	"\023\061\240\214\017\121\335\171\215\276"
#define      tst1_z	22
#define      tst1	((&data[351]))
	"\112\301\115\115\265\222\243\157\331\064\302\303\345\211\335\040"
	"\242\300\367\251\166\177\323\005\355"
#define      tst2_z	19
#define      tst2	((&data[375]))
	"\251\040\266\054\103\041\362\311\102\141\372\354\332\123\326\111"
	"\272\057\157\325\010\306\145\255\355"
#define      chk2_z	19
#define      chk2	((&data[401]))
	"\325\320\167\217\005\022\304\014\233\162\066\216\373\160\214\062"
	"\371\123\156\113\233\053\017\116\254\303"
#define      msg1_z	42
#define      msg1	((&data[425]))
	"\260\310\252\310\304\020\307\243\055\273\120\101\007\112\162\046"
	"\316\126\224\041\277\343\216\166\305\162\202\366\157\123\374\143"
	"\047\144\247\135\051\113\221\075\262\014\227\300\207\034\130\374"
	"\370\274\355\326\350"
#define      date_z	1
#define      date	((&data[477]))
	"\101"
#define      chk1_z	22
#define      chk1	((&data[482]))
	"\367\235\221\026\266\131\344\322\324\222\052\240\035\221\326\033"
	"\325\145\211\342\311\235\330\176\233\017\266"
#define      shll_z	10
#define      shll	((&data[507]))
	"\153\203\372\113\142\170\227\040\273\234\374\356\356\230"
#define      msg2_z	19
#define      msg2	((&data[519]))
	"\204\016\006\236\330\205\254\266\272\074\337\104\136\072\057\167"
	"\170\227\207\153\377\011"
#define      opts_z	1
#define      opts	((&data[541]))
	"\142"
#define      text_z	523
#define      text	((&data[672]))
	"\015\266\274\277\034\375\020\162\235\343\362\374\103\151\335\315"
	"\175\136\077\234\175\247\204\131\075\313\102\131\224\055\141\177"
	"\034\320\335\262\206\302\340\154\323\241\044\135\123\143\165\120"
	"\066\072\203\302\350\152\275\237\142\302\344\012\014\314\054\035"
	"\001\057\071\137\207\231\041\213\265\261\261\303\362\166\300\250"
	"\364\171\071\372\224\334\061\067\262\213\226\023\331\015\125\260"
	"\302\355\053\271\375\324\326\043\301\347\172\143\100\265\133\004"
	"\361\331\303\032\202\230\333\110\344\244\233\370\040\201\266\104"
	"\133\035\156\273\045\246\115\310\175\016\246\153\121\305\337\033"
	"\114\032\047\025\365\100\337\161\331\306\056\145\043\131\302\022"
	"\112\122\202\034\331\343\167\237\255\016\236\056\161\251\137\006"
	"\345\235\354\311\365\024\142\274\167\155\044\065\371\221\352\060"
	"\323\074\141\352\072\111\255\375\235\227\006\152\250\113\345\112"
	"\101\230\012\174\272\366\156\046\236\342\142\237\354\150\143\247"
	"\235\247\072\233\227\157\347\240\236\306\154\251\060\272\162\067"
	"\335\141\235\035\230\323\114\326\173\237\230\305\013\216\123\045"
	"\337\156\222\076\272\232\313\376\262\102\350\341\123\122\231\175"
	"\335\362\354\265\254\242\101\270\110\162\337\173\243\055\331\017"
	"\077\236\142\276\121\144\131\214\376\277\200\166\131\365\237\213"
	"\064\171\137\326\376\002\062\253\337\277\350\271\325\026\114\226"
	"\066\040\175\026\266\023\134\166\025\257\111\031\030\106\342\346"
	"\232\231\133\012\236\075\053\205\224\160\126\074\040\077\153\134"
	"\174\353\223\242\304\055\330\162\143\350\133\131\024\217\173\356"
	"\157\032\336\133\373\044\111\075\266\065\063\034\255\121\276\037"
	"\052\234\104\315\257\055\227\112\266\220\056\206\334\372\323\131"
	"\275\160\013\152\110\343\074\326\035\051\231\003\024\006\200\314"
	"\304\127\232\377\173\353\235\135\155\034\332\063\316\173\003\377"
	"\175\232\075\357\072\075\143\255\333\351\331\200\155\053\167\217"
	"\045\017\053\323\016\352\310\052\375\354\335\365\352\370\035\175"
	"\125\107\156\313\015\267\102\212\277\217\323\233\152\331\150\027"
	"\372\004\016\143\061\121\302\171\027\363\041\312\124\243\156\141"
	"\170\057\077\067\103\054\312\123\172\231\033\150\111\354\316\024"
	"\053\347\260\156\122\265\044\330\263\300\317\116\252\330\237\137"
	"\225\164\273\020\046\331\376\217\375\335\170\042\351\202\232\201"
	"\246\307\236\320\060\041\344\074\350\107\222\116\214\153\116\254"
	"\123\371\335\061\245\300\371\251\360\357\154\122\360\147\275\112"
	"\122\055\337\247\347\005\035\127\032\211\276\277\154\134\353\174"
	"\256\220\320\350\152\325\160\320\326\022\105\074\070\037\023\013"
	"\364\172\337\064\011\364\326\125\370\243\072\342\073\310\336\257"
	"\145\014\017\053\350\002\140\152\133\217\122\232\211\345\315\064"
	"\165\020\023\212\302\320\072\365\060\277\325\202\367\267\035\274"
	"\234\075\373\032"
#define      inlo_z	3
#define      inlo	((&data[1202]))
	"\005\312\333"/* End of data[] */;
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
