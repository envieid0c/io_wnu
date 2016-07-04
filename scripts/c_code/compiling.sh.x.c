#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f compiling.sh 
#endif

static  char data [] = 
#define      rlax_z	1
#define      rlax	((&data[0]))
	"\246"
#define      chk1_z	22
#define      chk1	((&data[2]))
	"\247\310\262\205\026\171\103\154\047\233\042\070\036\206\357\014"
	"\126\236\336\055\307\135\250"
#define      inlo_z	3
#define      inlo	((&data[24]))
	"\223\214\116"
#define      shll_z	10
#define      shll	((&data[28]))
	"\140\323\144\347\125\327\077\242\322\137\143\354\253"
#define      lsto_z	1
#define      lsto	((&data[40]))
	"\324"
#define      opts_z	1
#define      opts	((&data[41]))
	"\326"
#define      text_z	633
#define      text	((&data[109]))
	"\332\042\255\271\314\304\314\367\074\337\360\252\302\037\047\024"
	"\072\207\142\333\370\225\004\061\360\217\250\007\352\203\276\142"
	"\111\115\063\236\133\370\254\223\351\040\321\100\254\260\064\314"
	"\366\373\243\247\301\351\226\002\132\043\170\253\237\034\201\034"
	"\257\214\137\337\273\307\316\071\234\376\335\137\071\202\327\301"
	"\155\052\217\073\342\301\157\016\016\254\360\005\321\127\143\032"
	"\355\163\232\165\373\070\167\053\326\321\320\272\015\160\041\042"
	"\324\071\300\045\200\200\216\276\213\114\147\076\333\026\211\140"
	"\214\010\032\032\216\324\205\141\153\165\136\273\034\046\323\331"
	"\173\261\251\062\111\222\153\224\111\125\117\077\113\216\327\275"
	"\162\235\350\021\265\147\344\237\326\122\065\021\072\177\132\160"
	"\014\134\155\013\051\130\056\317\367\017\277\074\360\336\051\363"
	"\333\112\153\050\175\140\362\005\353\346\075\210\373\121\124\320"
	"\026\255\245\023\037\065\057\211\117\365\013\164\251\104\274\167"
	"\376\211\277\204\040\371\170\116\157\305\127\046\257\054\275\245"
	"\043\045\163\341\374\003\322\260\031\266\030\172\075\043\272\326"
	"\137\157\222\317\206\074\131\232\132\225\245\044\072\053\162\065"
	"\224\341\352\245\030\055\160\252\352\176\351\305\055\126\351\053"
	"\125\301\054\124\217\163\273\140\154\112\021\206\211\125\364\143"
	"\101\006\140\263\056\004\152\330\030\255\207\006\140\263\260\076"
	"\261\036\104\260\310\157\125\274\076\312\374\175\334\231\012\116"
	"\116\041\143\316\025\311\111\042\102\371\330\206\315\317\016\300"
	"\221\302\324\057\261\311\272\207\236\161\122\260\144\014\150\340"
	"\104\364\306\154\216\026\023\374\267\345\110\010\313\262\167\163"
	"\303\017\101\075\352\333\255\353\267\124\004\247\325\236\266\323"
	"\075\164\215\362\312\135\213\014\074\042\134\050\335\107\232\142"
	"\103\073\011\173\262\334\060\225\026\361\367\026\254\357\171\277"
	"\002\324\353\121\231\225\264\104\125\272\322\303\205\351\053\366"
	"\334\260\274\327\012\163\017\111\340\304\273\112\101\116\342\016"
	"\041\053\005\217\343\307\057\254\344\274\053\360\327\003\050\116"
	"\061\377\153\320\126\061\316\207\311\004\252\360\115\365\041\203"
	"\233\023\016\005\166\252\156\046\366\142\037\277\210\150\143\106"
	"\135\266\057\220\212\347\370\326\323\353\353\260\271\227\045\363"
	"\124\274\155\353\375\333\124\175\323\331\264\063\065\366\312\225"
	"\134\213\024\044\067\342\130\167\034\001\350\262\360\321\206\076"
	"\111\327\017\004\063\005\352\052\335\304\260\265\230\273\144\213"
	"\106\143\345\376\003\206\333\320\077\041\034\260\036\256\234\363"
	"\362\032\044\040\342\265\361\202\017\362\032\314\106\265\055\207"
	"\065\353\231\376\115\065\015\325\377\051\265\317\202\315\271\016"
	"\257\120\306\015\176\115\106\332\365\013\335\260\242\251\241\174"
	"\111\100\046\030\255\245\353\360\126\320\100\213\135\203\307\257"
	"\254\075\301\075\027\062\320\133\343\234\053\240\233\024\064\151"
	"\310\053\244\026\231\333\046\313\136\003\362\252\215\344\325\022"
	"\026\342\301\316\200\036\013\077\341\272\314\144\222\306\201\202"
	"\142\344\123\220\007\120\217\306\233\057\304\161\232\213\213\172"
	"\034\043\124\157\327\336\136\246\120\270\067\360\015\256\010\333"
	"\100\210\034\063\332\175\236\201\070\376\364\310\310\007\310\030"
	"\207\206\122\366\137\236\340\132\162\205\121\064\043\106\320\201"
	"\011\203\353\364\177\224\226\037\274\051\234\214\037\132\363\030"
	"\253\362\246\175\252\375\176\172\027\361\111\176\040\351\063\354"
	"\023\034\065\341\311\340\132\333\123\177\265\227"
#define      chk2_z	19
#define      chk2	((&data[858]))
	"\124\152\002\343\231\070\125\000\367\013\141\165\234\141\363\250"
	"\056\140\040\274\353\267\074\244\055"
#define      msg1_z	42
#define      msg1	((&data[885]))
	"\247\157\271\104\213\242\205\311\322\320\313\377\053\121\106\251"
	"\131\336\140\103\320\154\256\203\234\014\302\272\335\323\345\222"
	"\021\351\173\346\046\312\042\360\222\145\215\377\012\211\003\051"
#define      date_z	1
#define      date	((&data[927]))
	"\357"
#define      pswd_z	256
#define      pswd	((&data[978]))
	"\147\365\350\262\051\132\363\275\104\327\162\075\074\247\321\041"
	"\350\312\270\274\153\271\135\110\210\134\224\314\300\365\344\035"
	"\310\353\062\202\342\205\357\051\334\051\141\043\034\075\127\225"
	"\175\062\160\001\261\016\301\044\052\043\112\066\372\216\254\123"
	"\344\100\143\154\003\016\162\004\115\043\156\113\145\264\346\321"
	"\265\037\030\164\361\247\257\160\065\225\141\163\355\313\225\066"
	"\237\152\327\303\037\167\052\321\142\305\324\072\124\256\155\054"
	"\302\372\366\254\310\262\041\312\164\056\054\245\107\162\233\344"
	"\377\144\057\337\322\171\305\107\271\264\110\343\063\115\363\225"
	"\316\240\342\056\222\375\326\062\015\324\307\220\322\155\024\264"
	"\216\256\223\112\271\062\245\350\051\102\147\344\001\211\033\016"
	"\152\063\220\152\302\234\202\035\152\205\206\272\000\357\375\304"
	"\350\034\125\155\062\032\262\271\046\204\307\110\263\002\106\303"
	"\312\353\243\306\312\147\056\302\143\065\003\346\127\153\123\242"
	"\011\045\016\142\222\302\347\345\341\105\106\126\054\117\207\137"
	"\212\235\024\270\252\313\105\153\047\216\172\362\177\275\266\073"
	"\163\224\347\237\343\073\345\315\304\364\175\061\131\060\044\051"
	"\126\034\203\006\021\102\136\306\016\203\334\205\023\026\152\343"
	"\371\306\271\305\332\103\013\374\163\327\221\330\143\023\312\151"
	"\143\342\203\036\354\166\012\376\361\316\355\071\326\151\366\130"
	"\247\106\050\022\022\127\365\172\344\076\032\135\101\347\365\142"
	"\305\036\320\340\230\152\106\355\050\056\163\174"
#define      tst2_z	19
#define      tst2	((&data[1277]))
	"\335\134\126\177\161\233\204\203\041\223\071\257\200\176\351\145"
	"\211\175\236\103"
#define      xecc_z	15
#define      xecc	((&data[1299]))
	"\176\134\342\236\100\060\063\053\371\315\220\255\372\125\340\253"
	"\217\163"
#define      tst1_z	22
#define      tst1	((&data[1316]))
	"\270\160\161\012\121\023\275\015\254\242\225\025\253\255\112\073"
	"\071\006\021\002\322\262\144\175"
#define      msg2_z	19
#define      msg2	((&data[1339]))
	"\313\256\004\116\113\352\202\266\056\233\027\012\344\036\332\242"
	"\206\326\214\110\207\037"/* End of data[] */;
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
