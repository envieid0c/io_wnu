#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f compiling.sh 
#endif

static  char data [] = 
#define      xecc_z	15
#define      xecc	((&data[1]))
	"\100\144\011\135\304\200\051\325\302\350\006\366\270\315\026\310"
	"\232\354"
#define      tst2_z	19
#define      tst2	((&data[19]))
	"\206\334\064\044\247\064\165\211\160\255\272\161\204\055\005\231"
	"\374\232\272\234\363\234\134"
#define      shll_z	10
#define      shll	((&data[42]))
	"\344\250\337\060\325\146\072\041\023\243\136\277\127"
#define      inlo_z	3
#define      inlo	((&data[54]))
	"\236\126\166"
#define      lsto_z	1
#define      lsto	((&data[57]))
	"\251"
#define      chk1_z	22
#define      chk1	((&data[59]))
	"\173\134\365\275\166\211\046\033\232\057\263\365\117\043\132\303"
	"\212\366\104\301\251\341\253"
#define      tst1_z	22
#define      tst1	((&data[83]))
	"\313\110\300\255\211\124\044\361\374\373\106\235\153\244\036\355"
	"\155\302\312\006\346\367\231\065"
#define      opts_z	1
#define      opts	((&data[105]))
	"\267"
#define      msg2_z	19
#define      msg2	((&data[108]))
	"\177\126\030\330\047\045\240\165\253\045\103\257\152\132\275\037"
	"\272\332\177\240\136\274"
#define      date_z	1
#define      date	((&data[128]))
	"\133"
#define      rlax_z	1
#define      rlax	((&data[129]))
	"\165"
#define      chk2_z	19
#define      chk2	((&data[132]))
	"\017\020\214\350\367\035\163\335\256\241\230\052\054\250\323\046"
	"\101\253\143\305\267\347\354"
#define      text_z	564
#define      text	((&data[205]))
	"\345\253\217\267\275\305\344\373\117\132\050\244\103\366\343\063"
	"\065\273\042\203\361\161\160\271\200\253\231\030\076\066\073\244"
	"\076\036\237\364\015\274\256\167\162\022\021\345\013\150\012\211"
	"\136\027\375\342\337\334\334\113\063\040\113\150\235\240\104\222"
	"\274\016\147\113\105\004\066\361\235\074\232\214\162\123\066\314"
	"\301\176\207\232\025\310\040\040\253\026\327\157\236\377\115\113"
	"\147\164\053\025\237\062\325\064\002\353\241\025\302\314\240\307"
	"\244\255\236\113\154\144\024\023\324\151\311\175\235\346\114\307"
	"\257\006\013\277\247\176\225\360\027\202\305\207\344\037\102\210"
	"\144\162\323\174\377\221\311\365\354\014\314\115\252\125\160\025"
	"\370\252\113\236\357\224\340\050\114\047\376\005\053\050\121\237"
	"\264\305\367\132\302\154\220\123\074\275\065\035\011\323\270\043"
	"\230\343\243\054\142\273\263\041\277\132\014\255\336\043\012\323"
	"\351\143\110\162\260\074\232\073\347\115\003\371\120\234\014\170"
	"\366\354\266\277\072\272\266\232\367\014\273\230\307\066\050\076"
	"\213\112\234\136\102\051\375\026\074\300\075\031\227\361\015\340"
	"\231\071\060\270\114\055\323\334\102\145\151\162\005\067\344\317"
	"\211\217\244\031\375\000\203\014\306\165\301\254\241\334\153\025"
	"\103\106\154\076\117\232\330\352\235\317\013\011\107\055\021\076"
	"\064\322\137\205\144\116\170\104\064\115\300\107\123\255\307\346"
	"\050\203\024\372\274\167\205\032\264\302\330\224\311\116\320\346"
	"\315\052\365\311\007\211\131\131\034\151\312\301\115\051\374\134"
	"\223\222\270\112\125\315\354\204\116\104\203\135\025\137\203\372"
	"\144\043\115\017\305\300\111\131\073\262\206\131\035\342\064\153"
	"\016\273\244\154\024\334\014\134\354\262\344\157\347\134\203\174"
	"\334\115\210\120\166\156\003\176\251\070\240\172\317\330\141\213"
	"\053\222\076\126\075\146\061\177\226\200\117\127\134\323\266\023"
	"\146\260\350\025\047\320\321\157\205\301\332\135\273\143\016\055"
	"\132\260\332\356\276\237\004\324\312\257\240\353\160\300\245\302"
	"\303\044\172\224\020\111\227\357\254\171\304\343\254\022\111\322"
	"\114\155\273\261\131\245\143\352\144\275\362\161\212\134\205\065"
	"\334\176\146\355\025\306\000\073\026\366\275\166\313\321\265\003"
	"\320\146\035\116\263\326\342\274\142\216\300\247\041\212\262\224"
	"\246\227\166\022\012\133\247\205\177\367\022\235\336\106\162\354"
	"\105\353\044\234\331\054\170\002\163\074\175\267\173\313\001\177"
	"\041\041\232\307\363\074\203\057\371\376\067\204\052\272\014\175"
	"\272\035\001\170\014\216\374\315\155\124\007\313\346\243\073\117"
	"\351\076\201\344\076\167\314\232\133\307\271\013\313\357\004\341"
	"\160\330\301\122\343\171\237\103\166"
#define      pswd_z	256
#define      pswd	((&data[823]))
	"\242\304\154\314\174\070\074\240\202\054\251\360\177\110\052\223"
	"\314\240\163\034\007\345\274\131\124\264\232\034\265\220\125\275"
	"\060\155\363\114\240\127\113\270\070\023\137\012\132\104\365\234"
	"\177\142\001\054\304\107\314\144\145\037\030\037\061\257\343\237"
	"\311\321\157\255\144\077\306\141\052\017\362\151\351\136\357\106"
	"\373\357\154\060\202\331\174\352\240\243\221\040\200\205\124\057"
	"\005\062\233\321\152\236\351\274\032\323\153\123\122\215\076\134"
	"\346\202\256\232\100\023\033\314\123\357\117\133\211\075\167\174"
	"\353\050\033\373\072\150\027\037\004\343\375\002\124\026\310\105"
	"\035\124\160\115\253\110\114\052\034\061\121\224\075\262\107\103"
	"\215\020\215\315\150\322\235\214\030\272\201\375\327\253\110\376"
	"\156\035\356\020\057\247\140\342\062\023\212\116\202\272\202\366"
	"\150\233\054\334\113\074\024\262\226\363\324\013\120\156\005\075"
	"\107\020\361\171\374\367\336\124\033\026\377\123\120\011\213\245"
	"\165\234\255\110\031\077\220\135\103\071\233\072\355\222\365\125"
	"\237\002\202\271\360\276\012\356\005\333\037\240\337\161\236\244"
	"\164\147\227\341\016\352\030\365\115\150\326\003\336\002\211\032"
	"\244\104\151\101\110\036\043\150\043\137\354\136\255\162\104\054"
	"\066\173\323\364\141\347\254\226\112\222\107\241\134\263\134\103"
	"\156\175\165\060\004\266\063\317\122\240\043\336\275\113\352\115"
	"\147\316\040\104\246\315\272\205\204\100\112\026\063\011\315\247"
	"\003\070\034\033\012\167\035\260\200\306\241\122"
#define      msg1_z	42
#define      msg1	((&data[1118]))
	"\122\314\304\337\245\333\024\150\125\055\315\322\157\044\120\104"
	"\043\216\133\354\061\050\005\012\325\052\025\254\340\316\070\323"
	"\067\257\365\002\202\270\161\370\030\027\360\161\141\130\375"/* End of data[] */;
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
