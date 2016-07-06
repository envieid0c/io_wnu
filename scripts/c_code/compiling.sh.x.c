#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f compiling.sh 
#endif

static  char data [] = 
#define      msg2_z	19
#define      msg2	((&data[4]))
	"\237\122\373\310\355\122\272\243\167\133\245\055\143\355\163\231"
	"\072\170\047\261\035\272\263\113\247\323"
#define      date_z	1
#define      date	((&data[26]))
	"\262"
#define      tst1_z	22
#define      tst1	((&data[29]))
	"\376\324\015\224\247\140\045\257\250\231\322\340\047\364\340\345"
	"\137\306\360\020\223\031\104\162\036"
#define      chk1_z	22
#define      chk1	((&data[56]))
	"\160\031\354\237\312\250\360\126\216\167\175\146\037\262\355\105"
	"\366\112\243\052\207\213\244\254\236\105\337\240\246"
#define      rlax_z	1
#define      rlax	((&data[81]))
	"\357"
#define      opts_z	1
#define      opts	((&data[82]))
	"\372"
#define      xecc_z	15
#define      xecc	((&data[86]))
	"\326\061\071\200\107\256\303\363\005\137\256\315\252\227\055\151"
	"\205\376"
#define      lsto_z	1
#define      lsto	((&data[101]))
	"\323"
#define      shll_z	10
#define      shll	((&data[104]))
	"\170\223\032\035\036\351\310\250\331\361\211\144\345"
#define      inlo_z	3
#define      inlo	((&data[115]))
	"\314\271\323"
#define      text_z	503
#define      text	((&data[203]))
	"\336\303\033\060\200\072\234\176\135\050\346\361\321\166\364\223"
	"\351\046\041\274\217\004\031\054\124\213\101\354\166\251\247\107"
	"\026\241\321\047\373\330\107\040\376\335\131\026\112\373\025\225"
	"\223\053\204\257\130\071\313\246\111\151\241\046\230\223\321\257"
	"\073\212\033\360\220\343\302\266\025\146\127\006\225\350\206\356"
	"\210\316\117\066\132\233\150\324\215\342\106\246\070\012\236\235"
	"\120\161\144\357\071\321\142\105\065\030\070\146\231\176\314\240"
	"\347\134\207\007\001\325\056\121\345\021\322\013\305\236\362\200"
	"\073\261\047\320\066\060\033\221\340\322\126\173\310\332\143\364"
	"\140\150\363\142\214\245\123\152\064\174\037\143\311\100\134\142"
	"\326\264\046\221\000\113\376\067\351\356\153\121\271\216\352\014"
	"\054\341\154\123\144\255\034\120\231\354\041\027\317\267\010\113"
	"\375\377\242\321\152\300\163\103\053\020\306\153\042\350\164\012"
	"\143\127\226\360\256\134\157\274\032\172\117\270\347\147\347\065"
	"\051\375\216\335\236\272\055\242\153\055\170\170\171\151\024\122"
	"\115\354\114\370\026\363\366\117\143\147\272\027\115\056\104\306"
	"\157\121\346\126\130\323\146\345\032\065\254\220\345\301\355\204"
	"\242\115\265\166\120\060\234\031\302\174\007\053\120\145\173\320"
	"\070\171\344\264\273\012\233\344\100\013\250\272\341\120\260\145"
	"\007\235\055\364\231\251\143\177\015\377\314\033\176\220\244\034"
	"\042\154\001\132\201\117\003\340\163\241\157\050\001\135\136\070"
	"\364\334\124\202\305\212\200\135\065\301\073\275\103\350\317\071"
	"\055\370\103\110\226\221\252\013\102\265\236\315\212\247\212\022"
	"\107\340\375\321\203\200\341\307\165\077\062\152\077\341\321\130"
	"\365\002\342\115\014\243\106\065\220\033\144\360\053\303\113\251"
	"\045\307\103\333\043\250\205\033\061\200\360\341\004\035\326\262"
	"\204\164\350\141\075\030\252\202\313\364\007\021\144\067\366\215"
	"\015\032\355\242\060\301\020\105\043\114\027\342\031\022\013\000"
	"\144\057\030\212\033\050\132\362\211\351\164\242\242\312\162\262"
	"\065\263\353\065\104\012\367\031\305\064\052\135\255\346\113\217"
	"\252\062\201\012\334\303\356\112\125\271\124\304\044\225\160\251"
	"\065\204\273\266\247\045\166\013\060\335\321\270\035\335\103\113"
	"\173\363\024\032\353\364\264\174\147\000\132\224\077\340\173\233"
	"\055\101\163\025\145\262\054\060\305\154\067\135\302\245\372\034"
	"\162\017\162\064\265\261\344\060\222\116\370\034\345\377\064\372"
	"\063\054\323\212\023\247\324\312\144\137\014\152\160\127\172\304"
	"\222\271\161\013\010\050\142\120\344\144\343\260\326\251\232\043"
	"\203\075\013\036\023"
#define      pswd_z	256
#define      pswd	((&data[755]))
	"\267\124\066\257\275\251\144\332\146\224\271\001\104\300\076\200"
	"\032\276\125\364\235\303\134\033\023\202\261\133\231\176\024\165"
	"\355\060\157\322\052\304\241\260\242\347\303\224\022\121\040\237"
	"\271\117\064\107\152\337\054\005\065\167\011\171\134\231\254\375"
	"\200\255\307\077\264\001\203\132\306\217\157\253\076\203\000\002"
	"\103\255\010\066\155\135\323\075\170\346\303\022\272\017\357\351"
	"\232\107\044\010\140\242\052\122\113\377\152\336\040\135\372\062"
	"\256\240\102\137\054\054\304\305\001\320\352\031\004\377\002\053"
	"\166\055\046\310\063\345\243\141\015\353\346\151\072\166\063\306"
	"\155\262\212\004\162\003\020\232\313\135\123\276\053\276\260\200"
	"\350\162\100\264\370\174\014\042\331\234\157\366\013\261\360\356"
	"\167\062\352\256\112\236\314\024\336\116\334\034\313\232\241\017"
	"\141\376\047\324\367\045\062\223\055\311\355\301\010\204\371\237"
	"\237\003\342\011\231\213\130\237\140\350\031\231\134\127\210\075"
	"\227\236\321\146\367\021\320\374\241\305\040\177\271\106\065\300"
	"\147\133\272\300\123\307\161\077\147\127\120\115\051\237\121\353"
	"\273\351\214\352\073\366\260\267\123\141\272\070\046\005\026\307"
	"\114\063\064\001\005\160\031\311\072\064\067\134\340\207\201\330"
	"\241\023\112\134\001\246\324\036\164\147\203\374\333\154\316\341"
	"\326\124\365\172\142\247\023\357\336\343\360\237\266\265\331\144"
	"\330\077\166\374\102\343\321\012\051"
#define      msg1_z	42
#define      msg1	((&data[1045]))
	"\043\225\020\001\251\322\033\277\022\042\332\336\026\157\022\076"
	"\245\050\110\327\143\044\153\133\251\342\160\220\373\163\110\076"
	"\154\242\270\165\246\150\044\112\013\247\124\317\252\272\043\240"
	"\051\112"
#define      tst2_z	19
#define      tst2	((&data[1096]))
	"\170\213\356\303\025\041\161\145\173\362\132\065\307\304\374\355"
	"\175\216\150\005\311"
#define      chk2_z	19
#define      chk2	((&data[1117]))
	"\075\140\060\050\107\025\050\346\270\027\076\002\111\250\143\136"
	"\070\322\035\253\026\215\131\116\154"/* End of data[] */;
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
