#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f wifi.sh 
#endif

static  char data [] = 
#define      lsto_z	1
#define      lsto	((&data[0]))
	"\226"
#define      xecc_z	15
#define      xecc	((&data[1]))
	"\241\151\052\026\126\363\317\270\267\261\302\140\136\213\013\174"
	"\126\264"
#define      tst2_z	19
#define      tst2	((&data[21]))
	"\055\112\103\225\130\177\023\110\327\051\377\264\237\115\051\037"
	"\366\312\326\334\317\033"
#define      tst1_z	22
#define      tst1	((&data[43]))
	"\166\176\035\271\341\333\033\124\165\120\114\326\363\012\216\175"
	"\201\051\240\173\007\256\200\317"
#define      rlax_z	1
#define      rlax	((&data[65]))
	"\012"
#define      chk1_z	22
#define      chk1	((&data[68]))
	"\101\215\321\274\214\042\334\171\241\151\037\215\074\171\344\024"
	"\163\326\203\102\225\206\374\376\335\237\146"
#define      pswd_z	256
#define      pswd	((&data[105]))
	"\167\032\372\005\320\153\222\210\313\046\214\336\132\016\351\010"
	"\136\020\122\070\244\166\102\204\103\034\111\270\014\330\073\220"
	"\004\364\106\276\056\012\127\363\134\250\355\011\262\202\274\067"
	"\352\152\214\320\021\200\326\021\121\061\365\005\323\040\137\153"
	"\014\236\132\336\325\265\371\047\251\331\344\027\176\110\077\055"
	"\174\223\313\000\075\010\076\116\365\370\111\241\063\053\215\126"
	"\254\030\040\010\047\221\320\101\105\101\236\313\012\272\175\010"
	"\274\115\311\140\333\172\302\147\240\270\177\136\245\033\355\127"
	"\357\370\107\375\335\225\114\124\276\265\315\332\053\237\105\074"
	"\154\047\376\225\137\133\210\326\307\115\347\304\107\254\212\113"
	"\316\112\246\063\220\066\014\343\146\247\226\216\322\132\336\027"
	"\134\007\116\375\017\066\270\241\223\001\032\151\223\124\240\170"
	"\230\161\075\007\332\046\374\240\247\016\047\046\207\173\236\140"
	"\064\117\151\104\214\032\244\211\250\362\207\160\137\225\074\315"
	"\243\377\015\244\052\154\063\154\354\330\153\255\260\177\237\046"
	"\270\040\241\241\166\070\074\144\100\207\300\317\132\016\017\153"
	"\075\206\227\170\147\141\255\156\211\251\127\043\225\145\173\337"
	"\263\021\363\371\323\262\045\076\242\201\253\076"
#define      date_z	1
#define      date	((&data[377]))
	"\021"
#define      shll_z	10
#define      shll	((&data[378]))
	"\205\155\324\124\334\110\203\031\274\267\045"
#define      msg1_z	42
#define      msg1	((&data[399]))
	"\217\167\057\002\372\201\037\373\221\312\366\173\046\002\336\114"
	"\256\270\323\222\241\353\325\104\232\066\214\242\336\150\010\365"
	"\374\130\201\271\215\343\322\033\367\270\017\166\165\233\047\223"
	"\374\311\204\036\035\264\077"
#define      opts_z	1
#define      opts	((&data[444]))
	"\345"
#define      msg2_z	19
#define      msg2	((&data[446]))
	"\233\325\226\327\207\032\010\270\235\354\222\271\062\232\331\215"
	"\105\260\011\130\365\176\002\266"
#define      inlo_z	3
#define      inlo	((&data[469]))
	"\301\013\333"
#define      text_z	710
#define      text	((&data[526]))
	"\213\244\043\037\145\302\006\075\231\060\063\261\234\342\006\155"
	"\357\044\333\205\323\223\033\274\016\050\132\342\132\064\375\114"
	"\347\115\076\165\025\205\053\114\162\050\326\006\161\153\122\044"
	"\352\277\075\163\315\373\215\221\340\240\016\234\206\311\023\355"
	"\363\216\061\264\152\143\207\132\037\040\233\223\056\023\203\067"
	"\124\315\230\022\066\046\022\033\374\275\153\245\134\277\304\331"
	"\075\256\271\237\023\015\214\246\322\152\335\235\027\067\157\231"
	"\271\212\374\155\253\167\037\265\250\047\011\037\001\333\006\375"
	"\165\307\071\174\154\133\100\264\250\045\353\125\220\253\166\037"
	"\056\346\146\061\000\232\234\021\171\171\276\137\256\163\120\006"
	"\200\032\205\364\035\310\065\015\273\137\143\301\272\335\324\220"
	"\144\364\257\165\076\230\217\232\116\020\140\376\172\273\307\342"
	"\273\254\043\037\132\317\171\033\163\141\135\176\062\057\347\205"
	"\236\221\032\071\136\106\276\210\167\364\132\327\153\051\100\232"
	"\224\172\050\044\001\364\033\300\005\226\010\045\207\140\346\176"
	"\355\102\173\376\244\072\101\176\060\320\367\107\255\364\270\273"
	"\261\357\152\111\125\026\142\023\325\314\326\352\342\243\137\307"
	"\142\266\241\130\152\222\140\127\375\352\265\051\040\076\343\242"
	"\354\222\056\223\350\320\174\306\054\074\061\301\253\312\332\365"
	"\143\173\254\267\044\172\352\341\350\370\223\370\375\016\376\350"
	"\213\307\337\255\317\005\137\222\077\121\066\062\352\261\223\267"
	"\254\073\220\256\033\231\203\266\342\120\371\174\131\111\342\144"
	"\166\346\055\125\053\241\172\037\113\024\160\311\213\072\116\247"
	"\342\315\107\274\121\146\245\022\045\233\052\144\150\134\060\105"
	"\273\311\221\247\114\363\161\005\261\177\222\153\325\271\143\112"
	"\153\204\276\310\001\132\054\240\020\225\107\134\223\175\033\174"
	"\306\171\170\334\014\243\166\212\310\062\276\163\376\161\141\154"
	"\264\056\226\113\243\073\007\025\300\315\043\204\167\162\045\330"
	"\217\251\061\104\113\270\306\240\215\207\351\265\262\214\337\247"
	"\346\063\330\000\106\320\103\054\157\141\226\156\047\033\275\004"
	"\116\355\373\051\072\316\047\244\020\105\170\260\012\047\351\135"
	"\332\077\204\353\062\036\133\307\262\060\367\334\061\144\334\042"
	"\122\132\175\315\072\345\377\170\167\112\131\063\227\045\356\277"
	"\256\365\206\353\005\164\353\174\315\064\021\271\120\032\253\274"
	"\140\361\174\046\101\127\316\207\355\317\144\257\217\344\145\111"
	"\007\322\037\366\330\161\045\131\042\237\055\112\235\256\156\274"
	"\216\037\146\332\320\111\041\201\000\346\324\271\365\017\267\125"
	"\171\051\345\070\067\235\173\071\224\153\252\256\301\303\017\144"
	"\013\317\136\070\315\315\322\176\123\030\077\370\334\041\106\120"
	"\023\337\271\040\026\116\115\372\364\257\155\336\173\141\364\020"
	"\350\250\150\337\232\305\325\060\352\114\014\071\211\176\264\033"
	"\355\327\113\256\207\116\306\233\263\007\075\324\064\310\041\167"
	"\121\161\332\367\056\223\354\273\073\127\270\262\243\222\333\026"
	"\010\135\010\307\372\051\075\261\301\070\027\316\356\226\050\014"
	"\133\114\115\244\170\066\213\150\346\223\353\025\216\337\161\346"
	"\352\043\376\044\260\247\120\364\220\011\117\157\170\217\066\342"
	"\015\304\373\010\353\232\060\264\057\241\227\151\236\250\142\073"
	"\270\154\357\176\315\337\205\100\333\131\370\364\332\160\267\200"
	"\057\305\117\376\367\372\102\264\250\126\165\177\121\016\323\030"
	"\157\206\052\175\337\122\272\165\041\272\315\235\053\131\222\343"
	"\275\222\041\101\137\255\326\161\034\252\027\317\043\162\214\054"
	"\252\106\151\333\151\310\252\025\222\356\270\102\031\115\200\111"
	"\051\116\256\164\067\335\005\107\340\233\277\030\275\030\116\032"
	"\150\354\224\127"
#define      chk2_z	19
#define      chk2	((&data[1326]))
	"\054\002\170\277\077\337\147\000\000\313\344\017\040\342\252\332"
	"\313\346\026\026\043\122\123\155\333"/* End of data[] */;
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
