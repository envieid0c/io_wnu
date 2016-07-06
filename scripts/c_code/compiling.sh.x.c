#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f compiling.sh 
#endif

static  char data [] = 
#define      tst2_z	19
#define      tst2	((&data[2]))
	"\156\312\071\020\146\277\254\277\363\001\132\321\160\273\302\245"
	"\342\211\034\103\011"
#define      chk1_z	22
#define      chk1	((&data[22]))
	"\056\275\061\055\040\351\356\316\150\053\321\055\003\074\031\331"
	"\077\326\171\135\332\367\270\127\171"
#define      date_z	1
#define      date	((&data[46]))
	"\355"
#define      pswd_z	256
#define      pswd	((&data[109]))
	"\205\324\153\110\062\060\376\156\137\342\376\006\011\205\053\152"
	"\010\301\204\065\024\072\356\127\253\334\316\352\113\362\024\252"
	"\132\277\233\154\074\355\055\047\020\204\144\041\205\376\222\252"
	"\167\251\004\073\136\155\240\354\250\012\047\363\114\255\217\235"
	"\244\042\237\301\030\232\223\012\240\212\147\050\302\350\376\323"
	"\110\020\260\356\206\157\021\023\013\334\101\152\142\053\046\204"
	"\023\307\154\260\274\055\026\231\020\234\000\015\233\041\271\057"
	"\171\026\055\115\065\032\224\114\247\254\167\136\121\164\023\235"
	"\171\353\320\341\066\175\036\014\262\173\302\021\037\376\033\221"
	"\037\126\135\311\110\341\246\030\150\202\143\353\013\271\026\007"
	"\234\277\140\135\272\344\361\077\272\323\346\215\025\157\245\221"
	"\004\313\325\220\306\325\176\274\216\222\337\131\037\045\146\007"
	"\173\136\360\357\074\363\361\345\343\347\120\055\264\334\223\013"
	"\066\112\364\171\266\071\304\035\066\076\326\100\245\141\122\075"
	"\277\166\230\033\031\014\366\365\357\354\335\364\215\312\241\163"
	"\164\041\317\243\053\327\362\215\326\246\103\025\270\003\103\372"
	"\271\252\361\177\222\262\234\014\261\321\024\056\156\052\364\276"
	"\161\022\300\333\360\025\012\061\112\107\165\357\213\022\272\046"
	"\266\274\065\200\015\334\343\251\056\303\076\307\315\215\302\312"
	"\317\363\306\043\364\167\141\021\231\363\036\366\223\054\056\235"
	"\341\115\346\055\307\126\151\071\040\311\215\360\125\104\231\017"
	"\120\167\153\041\005\025\150\024\047\155\362\000\027\137\314\011"
	"\361\232\156\064\122\030\000\052"
#define      msg2_z	19
#define      msg2	((&data[410]))
	"\217\005\363\005\302\172\340\046\010\324\251\055\316\112\174\373"
	"\173\323\065\220\027\237"
#define      shll_z	10
#define      shll	((&data[430]))
	"\217\367\202\115\012\155\360\236\207\051\305\212\214"
#define      chk2_z	19
#define      chk2	((&data[444]))
	"\257\044\117\234\040\375\201\035\157\260\367\005\246\056\064\315"
	"\336\325\113\203\231"
#define      inlo_z	3
#define      inlo	((&data[463]))
	"\216\327\075"
#define      rlax_z	1
#define      rlax	((&data[466]))
	"\003"
#define      msg1_z	42
#define      msg1	((&data[477]))
	"\261\110\325\317\357\102\244\351\111\056\302\044\266\002\063\350"
	"\357\037\114\037\303\114\021\170\266\277\266\323\305\057\120\124"
	"\312\370\302\126\321\142\330\066\367\313\141\027\315\322\301\176"
	"\046\024\051\216\252\226\230\051\070\016\151\361"
#define      opts_z	1
#define      opts	((&data[527]))
	"\021"
#define      xecc_z	15
#define      xecc	((&data[528]))
	"\175\323\024\116\143\047\015\105\010\263\170\326\200\332\143\124"
#define      tst1_z	22
#define      tst1	((&data[547]))
	"\127\114\215\006\254\331\303\234\055\161\140\243\026\232\220\141"
	"\237\066\104\260\236\303\273\017\323\372\326\004\310"
#define      text_z	503
#define      text	((&data[581]))
	"\014\262\201\144\104\246\225\371\274\262\355\173\016\164\222\273"
	"\174\300\062\217\056\325\334\227\263\063\020\252\254\060\350\252"
	"\056\103\143\052\007\211\066\147\264\334\051\254\146\322\144\013"
	"\226\217\102\123\061\320\351\217\021\127\266\116\041\246\120\265"
	"\163\235\116\377\274\257\125\064\355\143\116\132\336\026\252\012"
	"\354\147\161\264\000\151\211\147\123\205\321\054\106\303\021\344"
	"\030\126\334\033\140\272\070\170\250\117\351\337\335\156\023\253"
	"\201\046\073\301\131\076\101\346\011\105\241\115\017\251\002\037"
	"\003\116\341\252\247\257\102\264\072\225\143\070\012\166\157\121"
	"\007\240\355\030\064\030\141\372\011\252\122\221\017\111\343\057"
	"\305\161\112\137\040\035\143\266\152\373\131\006\204\343\354\267"
	"\130\132\072\021\241\003\021\332\000\224\025\063\046\011\372\267"
	"\073\377\246\234\123\113\317\326\135\271\305\046\243\125\252\020"
	"\070\001\371\017\174\127\134\112\060\177\237\356\075\230\134\225"
	"\165\302\115\044\343\151\272\013\115\330\305\010\213\074\310\273"
	"\252\045\110\164\106\135\373\371\315\224\237\047\272\050\022\260"
	"\162\223\263\211\034\240\310\353\254\071\110\015\063\234\201\323"
	"\261\104\312\177\317\060\367\130\304\033\151\065\327\310\035\322"
	"\110\017\164\062\236\204\124\002\043\334\075\160\113\210\375\143"
	"\201\253\300\036\224\124\331\356\167\324\337\035\271\055\346\243"
	"\065\312\212\310\264\317\145\024\026\277\064\172\071\002\252\005"
	"\350\125\140\333\003\162\016\132\346\260\326\324\041\036\204\025"
	"\230\246\365\100\157\334\162\161\220\027\351\246\173\317\046\063"
	"\337\230\112\207\356\041\360\116\354\274\026\027\103\020\041\373"
	"\126\276\044\114\237\253\236\136\201\146\264\220\360\123\023\047"
	"\346\205\172\321\177\366\200\065\253\215\355\213\204\353\202\031"
	"\033\113\060\040\161\131\154\176\334\233\054\010\066\063\325\053"
	"\306\371\217\050\031\152\062\001\143\114\034\345\303\021\026\136"
	"\374\212\273\231\134\343\167\074\127\015\027\102\352\266\050\063"
	"\336\271\114\076\000\076\056\267\204\260\355\204\227\001\255\211"
	"\053\060\063\040\156\103\345\314\030\273\362\307\027\142\320\156"
	"\371\021\174\000\034\237\225\346\310\127\224\304\006\174\270\272"
	"\376\327\116\236\024\207\056\033\067\303\334\360\360\002\360\165"
	"\031\273\200\012\111\174\074\171\307\324\272\163\254\252\123\041"
	"\242\166\267\263\337\256\076\312\015\321\334\155\064\061\322\023"
	"\037\214\137\314\355\016\243\013\122\020\205\321\021\363\330\217"
	"\003\322\115\032\072\264\377\353\247\140\303\114\130\365\232\114"
	"\325\236\160\261\033\313\042\372\063\141\053\227\044\155\072\141"
	"\370\140"
#define      lsto_z	1
#define      lsto	((&data[1183]))
	"\065"/* End of data[] */;
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
