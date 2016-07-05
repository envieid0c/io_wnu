#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f service.sh 
#endif

static  char data [] = 
#define      shll_z	10
#define      shll	((&data[2]))
	"\073\325\101\376\014\167\056\132\060\103\372\170"
#define      pswd_z	256
#define      pswd	((&data[21]))
	"\104\212\356\312\151\321\053\373\156\335\037\265\055\163\157\026"
	"\017\311\065\340\052\175\011\321\261\374\237\055\172\375\123\020"
	"\145\060\112\221\022\333\155\223\037\000\315\134\334\250\001\334"
	"\157\250\116\147\134\012\107\340\047\260\017\063\304\047\211\270"
	"\351\103\356\250\153\253\353\254\146\232\324\233\237\125\140\250"
	"\225\305\365\117\173\364\007\211\266\002\200\003\012\202\342\032"
	"\005\233\042\242\025\261\037\207\246\226\154\344\337\113\034\226"
	"\200\156\165\116\306\011\217\164\252\103\247\353\270\014\114\206"
	"\074\061\232\374\363\014\111\252\013\261\002\043\140\013\265\077"
	"\037\343\076\362\024\312\152\365\067\224\352\316\104\374\255\230"
	"\053\207\175\222\262\013\003\300\333\015\166\226\153\362\251\053"
	"\163\267\331\342\173\176\207\320\017\314\226\303\155\076\067\213"
	"\332\357\063\211\213\243\177\113\057\362\316\011\075\121\236\275"
	"\200\267\177\302\172\103\263\022\157\243\330\037\030\151\110\213"
	"\007\063\250\100\124\336\313\364\201\200\375\001\312\271\272\154"
	"\013\262\140\367\341\346\273\244\213\165\114\226\102\005\010\253"
	"\170\046\027\262\022\000\276\043\263\322\254\364\216\044\213\230"
	"\025\231\125\117\277\342\342\270\006\170\203\262\376\323\046\342"
	"\214\227\260\000\342\354\270\007\132\211\323\247\313\156\131\040"
	"\252\103\060\071\112\104\147\137\302\175\023\206\004\161\162\342"
	"\322\225\303\035\211\364\035"
#define      lsto_z	1
#define      lsto	((&data[339]))
	"\100"
#define      tst1_z	22
#define      tst1	((&data[343]))
	"\075\104\235\135\036\076\246\124\043\113\343\214\272\317\164\026"
	"\233\215\020\355\365\166\323\003\072\033\302\113\013"
#define      chk2_z	19
#define      chk2	((&data[372]))
	"\163\316\235\274\220\346\261\045\015\003\332\267\345\020\324\313"
	"\055\064\311\221\024\263\224\317\124"
#define      msg1_z	42
#define      msg1	((&data[394]))
	"\244\306\373\142\214\347\133\264\125\345\246\043\271\260\004\032"
	"\140\265\074\064\157\162\131\112\030\036\352\041\107\017\334\037"
	"\152\332\020\037\175\257\300\226\144\174\046\161\232\207\277\157"
	"\263"
#define      opts_z	1
#define      opts	((&data[443]))
	"\003"
#define      chk1_z	22
#define      chk1	((&data[449]))
	"\172\147\217\274\127\220\356\030\007\142\043\104\255\162\355\223"
	"\101\353\134\307\274\204\137\266\357\244\217\302"
#define      date_z	1
#define      date	((&data[472]))
	"\052"
#define      tst2_z	19
#define      tst2	((&data[476]))
	"\322\120\157\032\270\145\104\214\357\204\003\021\145\041\027\322"
	"\376\015\174\133\221\122\140\251\171"
#define      text_z	523
#define      text	((&data[512]))
	"\052\253\223\151\206\023\037\364\073\073\342\367\147\074\272\126"
	"\060\256\237\032\202\320\014\072\174\224\253\224\074\056\237\012"
	"\210\305\154\326\173\266\061\151\372\076\010\326\371\113\050\016"
	"\101\217\015\135\207\162\340\344\045\023\341\302\172\121\052\247"
	"\065\367\223\147\042\256\144\363\163\055\130\312\124\247\305\315"
	"\250\257\350\355\370\222\224\240\207\033\002\117\136\301\130\123"
	"\217\133\235\273\161\317\030\265\043\156\233\201\316\044\325\132"
	"\140\337\216\161\366\054\315\114\116\354\165\117\122\171\323\216"
	"\034\027\354\352\117\201\236\136\277\246\025\310\076\030\042\070"
	"\300\371\126\331\353\100\203\266\260\306\015\257\156\220\233\344"
	"\215\303\312\070\202\247\126\150\313\233\165\371\240\057\203\324"
	"\173\037\003\240\212\323\007\066\150\007\126\227\361\145\247\054"
	"\320\371\065\113\076\357\201\025\124\051\125\131\334\365\240\062"
	"\362\144\033\355\052\377\055\251\066\254\227\165\057\251\106\113"
	"\142\266\215\256\063\365\043\224\066\150\152\056\264\071\044\043"
	"\172\014\074\047\352\304\120\355\055\210\173\240\142\017\366\165"
	"\333\231\316\336\222\302\343\032\021\307\310\156\332\224\252\003"
	"\213\377\002\020\270\231\215\157\065\036\301\340\237\306\317\157"
	"\352\006\064\356\363\271\025\033\076\002\035\275\252\335\057\075"
	"\312\200\044\231\155\017\050\212\377\142\110\304\255\216\106\101"
	"\235\113\146\274\202\025\056\270\234\100\240\355\026\050\040\153"
	"\162\131\152\233\205\065\040\223\101\002\372\001\304\277\101\302"
	"\266\210\251\200\302\167\020\035\351\304\000\323\261\212\027\102"
	"\304\335\256\366\331\357\372\342\321\346\176\213\006\256\063\250"
	"\040\234\055\224\221\346\234\337\345\143\361\055\044\124\256\147"
	"\301\255\365\232\076\051\377\373\077\047\316\373\020\243\267\037"
	"\333\330\024\005\110\117\076\254\370\371\247\100\154\064\173\342"
	"\016\332\326\101\273\036\304\275\151\055\302\054\174\015\015\217"
	"\331\172\335\311\014\271\353\240\217\232\272\143\122\103\144\044"
	"\062\332\047\355\125\005\346\201\063\215\171\127\026\352\271\300"
	"\056\064\075\074\343\145\056\237\234\210\002\357\271\360\337\033"
	"\235\023\112\273\355\226\062\070\311\040\244\325\362\157\262\257"
	"\070\001\115\006\344\277\274\155\301\337\370\374\324\105\330\357"
	"\052\264\117\010\276\204\152\165\254\233\212\272\023\272\257\103"
	"\057\310\027\070\007\007\026\322\336\155\152\374\336\364\150\166"
	"\221\045\156\155\053\107\060\026\151\135\375\113\052\261"
#define      inlo_z	3
#define      inlo	((&data[1072]))
	"\043\331\344"
#define      xecc_z	15
#define      xecc	((&data[1076]))
	"\313\055\007\137\340\033\122\124\243\034\307\231\147\352\155\067"
	"\030\110\304"
#define      msg2_z	19
#define      msg2	((&data[1098]))
	"\002\357\202\224\143\142\120\151\044\264\037\021\323\366\341\214"
	"\212\275\222\137\044\025\014\117\233"
#define      rlax_z	1
#define      rlax	((&data[1119]))
	"\245"/* End of data[] */;
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
