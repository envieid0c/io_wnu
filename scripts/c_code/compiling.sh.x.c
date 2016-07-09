#if 0
	shc Version 3.9.3a3, Generic Shell Script Compiler
	GNU GPL Version 3 Fedor Mankov <envieidoc@gmail.com>

	./shc -v -r -f compiling.sh 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[2]))
	"\131\250\315\131\310\303\276\341\255\200\147\373\132\234\331\145"
	"\014\101\316\254\051\117\010\221"
#define      msg2_z	19
#define      msg2	((&data[28]))
	"\072\361\260\041\120\206\266\051\245\366\203\007\075\042\023\153"
	"\167\160\210\006\310\076\174\204\222\225\373"
#define      date_z	1
#define      date	((&data[51]))
	"\273"
#define      opts_z	1
#define      opts	((&data[52]))
	"\340"
#define      inlo_z	3
#define      inlo	((&data[53]))
	"\326\020\310"
#define      shll_z	10
#define      shll	((&data[57]))
	"\105\362\234\374\046\117\032\107\330\002\320"
#define      chk1_z	22
#define      chk1	((&data[69]))
	"\123\363\321\266\052\320\050\127\136\212\243\022\067\070\244\147"
	"\130\015\370\013\247\262\127\021\013\054\353\070\144"
#define      pswd_z	256
#define      pswd	((&data[160]))
	"\042\341\021\005\242\215\244\350\352\106\300\266\016\267\365\234"
	"\277\266\266\274\135\207\026\172\312\140\300\030\072\334\162\210"
	"\365\023\161\267\000\061\147\002\215\353\172\363\114\054\327\016"
	"\012\162\173\235\033\242\154\015\070\311\026\207\052\224\031\206"
	"\111\110\150\153\270\365\105\243\264\355\377\250\306\327\200\143"
	"\166\234\235\126\053\370\247\265\030\016\160\276\102\174\177\063"
	"\130\060\043\207\224\321\152\161\315\265\226\330\036\226\241\364"
	"\136\243\002\300\024\341\210\371\223\236\247\006\021\260\055\116"
	"\213\306\332\354\035\237\371\334\316\150\222\167\226\305\207\273"
	"\003\216\206\006\120\041\304\211\072\125\202\116\156\347\350\354"
	"\343\133\345\210\330\023\004\241\376\247\337\011\246\277\306\125"
	"\230\310\121\246\020\121\361\337\065\035\122\300\111\100\344\250"
	"\337\350\125\167\131\233\013\243\345\016\264\261\314\164\314\107"
	"\364\316\327\156\135\151\067\032\126\156\317\053\177\007\255\203"
	"\345\212\156\102\061\132\247\002\044\133\253\027\076\263\270\041"
	"\036\342\221\011\143\040\270\316\045\123\051\231\356\273\105\377"
	"\146\260\366\326\370\265\003\125\025\357\015\046\053\351\270\344"
	"\312\230\343\171\072\230\325\244\352\246\160\007\357\102\041\074"
	"\100\201\272\077\355\110\046\273\377\027\203\176\175\232\232\314"
	"\003\114\224\005\100\141\136\023\333\061\255\225\061\071\113\005"
	"\161\350\050\102\005\137\147\066\351\067\215\002\202\304\371\036"
	"\270\311\153\002\352\052\221\307\137\363\262\271\010\252\107\035"
	"\177\362\315\066\025\000\263\174\243\201\277\377\234\260\170\345"
	"\005"
#define      xecc_z	15
#define      xecc	((&data[466]))
	"\377\127\242\072\111\217\053\125\024\245\346\103\000\370\260\024"
	"\240\344"
#define      msg1_z	62
#define      msg1	((&data[493]))
	"\342\074\376\056\344\162\363\052\106\152\023\137\327\357\101\135"
	"\122\122\344\276\222\366\141\052\307\015\277\060\066\177\156\254"
	"\067\350\126\236\101\002\321\052\046\366\200\110\051\022\206\137"
	"\127\062\113\060\135\134\373\310\261\067\200\333\055\325\337\024"
	"\211\236\320\215\143\312\175\330\140\342\056\026\202\360\215\123"
	"\050\201"
#define      rlax_z	1
#define      rlax	((&data[565]))
	"\141"
#define      text_z	499
#define      text	((&data[665]))
	"\122\272\337\301\023\323\375\325\361\350\142\312\270\052\124\024"
	"\137\324\261\016\153\176\075\103\070\113\154\312\013\120\231\335"
	"\171\227\251\272\320\365\346\161\327\342\033\120\066\366\162\176"
	"\221\145\036\327\131\266\310\302\010\216\245\071\224\040\213\145"
	"\156\025\016\371\027\266\352\340\114\270\230\326\231\121\144\166"
	"\110\300\321\250\075\276\225\052\146\330\333\341\001\044\311\041"
	"\341\305\204\201\375\030\201\327\334\053\362\344\041\077\116\054"
	"\302\146\267\222\006\122\305\070\132\121\266\101\146\122\202\252"
	"\262\346\130\017\110\060\312\335\230\002\176\314\345\147\146\046"
	"\004\006\361\276\126\277\217\237\040\137\340\105\351\353\101\327"
	"\216\200\370\200\170\144\020\261\165\131\070\312\040\271\325\173"
	"\163\207\167\217\033\276\312\202\156\040\057\004\326\336\173\065"
	"\371\373\020\165\016\004\373\105\047\225\016\301\041\333\165\366"
	"\160\021\050\137\036\042\304\350\243\221\200\142\043\313\321\270"
	"\102\144\115\257\337\346\017\355\246\250\320\316\127\171\254\253"
	"\335\043\145\326\350\277\366\353\330\072\345\152\070\063\351\227"
	"\247\035\024\356\026\103\102\224\106\315\373\111\255\222\305\104"
	"\340\216\131\157\204\316\237\240\221\305\317\272\336\052\154\303"
	"\177\353\332\077\155\362\302\222\213\047\233\061\327\030\321\010"
	"\110\314\120\011\126\124\366\066\146\177\015\101\250\260\322\214"
	"\005\145\121\314\100\250\333\065\266\025\356\152\072\310\016\133"
	"\257\174\064\022\374\262\160\316\037\151\366\372\357\243\376\370"
	"\021\266\021\263\041\070\012\242\140\150\207\353\043\375\224\320"
	"\123\374\246\140\034\002\040\266\376\175\226\250\334\024\343\325"
	"\147\127\241\240\246\201\211\064\203\377\055\360\233\105\241\366"
	"\044\306\275\335\344\175\013\210\240\344\230\042\043\225\373\012"
	"\046\012\051\331\356\206\243\051\150\370\335\144\061\176\302\126"
	"\151\203\062\316\120\143\002\066\036\327\157\246\231\332\051\361"
	"\376\245\233\110\247\013\217\337\110\346\142\073\342\361\273\037"
	"\137\344\124\054\132\050\314\153\030\105\144\262\161\052\275\225"
	"\316\051\036\231\011\105\300\142\013\217\136\213\242\154\016\330"
	"\334\157\377\332\111\243\377\122\103\123\062\057\306\051\304\043"
	"\070\342\161\007\160\200\130\362\107\067\053\347\211\265\302\256"
	"\222\012\272\023\271\341\133\327\202\024\073\354\056\352\205\200"
	"\300\024\144\025\223\376\000\140\071\334\300\252\151\227\206\070"
	"\221\170\216\237\232\003\252\054\053\070\267\056\143\161\167\166"
	"\266\004\212\203\325\134\224\224\212\063\052\256\157\315\310\150"
	"\032\324\015\367\164\275\137\333\337\074\300\230\012\150\201\235"
	"\053\323\044\375\132\325\103\355\271\261\254\053\041\030\124\130"
	"\132\064\321\347\106\377\241\000\173\247\271\175\333\064\137\017"
	"\123\326\120\071\160\266\257\241\266\300\271\130\030\065\377\012"
	"\374\032\342\360\256\207\355\357\347\067\251\066\010"
#define      chk2_z	19
#define      chk2	((&data[1239]))
	"\225\033\376\152\154\140\326\174\121\131\215\003\227\166\176\303"
	"\307\360\307\140\265\071\262\047\243\117"
#define      tst2_z	19
#define      tst2	((&data[1261]))
	"\044\055\136\120\024\173\364\123\215\210\276\234\014\136\277\131"
	"\275\376\044\260"
#define      lsto_z	1
#define      lsto	((&data[1281]))
	"\047"/* End of data[] */;
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
