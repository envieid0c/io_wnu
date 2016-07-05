#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f utility.sh 
#endif

static  char data [] = 
#define      lsto_z	1
#define      lsto	((&data[0]))
	"\262"
#define      inlo_z	3
#define      inlo	((&data[1]))
	"\262\161\343"
#define      xecc_z	15
#define      xecc	((&data[7]))
	"\030\177\132\350\346\101\055\370\263\004\061\315\264\026\170\054"
	"\304\037\142"
#define      tst1_z	22
#define      tst1	((&data[26]))
	"\033\015\373\140\352\373\324\001\115\035\207\124\160\312\200\017"
	"\300\122\326\340\314\211\317\126\011\135\340"
#define      chk1_z	22
#define      chk1	((&data[53]))
	"\151\274\243\035\075\123\074\315\162\071\375\326\274\060\060\113"
	"\003\374\355\230\356\362\337\300\377\033\254\270\205\177"
#define      shll_z	10
#define      shll	((&data[81]))
	"\226\104\305\053\260\004\026\064\237\176\101\331"
#define      tst2_z	19
#define      tst2	((&data[96]))
	"\056\065\012\211\153\336\275\001\205\142\327\253\373\056\304\231"
	"\035\300\222\226\001\176\344"
#define      msg2_z	19
#define      msg2	((&data[119]))
	"\241\007\266\214\112\275\121\121\072\235\042\343\004\317\311\250"
	"\231\116\042\332\255\363\121\172\061\327"
#define      rlax_z	1
#define      rlax	((&data[141]))
	"\326"
#define      opts_z	1
#define      opts	((&data[142]))
	"\126"
#define      pswd_z	256
#define      pswd	((&data[156]))
	"\262\205\053\361\121\243\311\054\361\011\301\337\216\335\263\306"
	"\256\327\020\246\064\357\155\172\146\166\164\166\014\012\267\307"
	"\107\000\221\041\217\130\234\254\353\330\327\200\105\046\137\061"
	"\315\100\025\301\321\237\031\023\147\334\047\165\304\366\113\146"
	"\200\002\325\007\351\032\263\221\045\206\371\336\072\161\301\315"
	"\266\265\102\252\061\030\354\253\016\077\241\255\364\361\001\064"
	"\115\355\160\360\272\231\314\156\302\347\110\237\315\210\205\037"
	"\333\276\271\010\244\106\121\357\053\163\212\353\245\353\127\152"
	"\323\367\332\032\315\110\345\005\354\136\316\354\354\335\321\310"
	"\063\331\342\340\306\343\003\376\071\336\341\242\376\140\321\202"
	"\013\003\212\052\263\012\343\146\077\220\324\065\176\006\056\102"
	"\333\112\173\111\050\025\305\165\033\231\171\252\161\325\065\051"
	"\343\157\244\100\010\301\310\261\163\244\323\363\101\046\236\033"
	"\311\274\066\003\145\374\354\232\356\172\053\205\233\341\320\012"
	"\235\261\012\371\235\317\043\047\217\200\030\203\111\020\333\004"
	"\372\036\272\320\271\071\014\136\300\174\025\156\270\011\223\062"
	"\360\146\222\250\120\267\174\264\024\110\170\367\266\100\121\323"
	"\035\161\206\350\260\336\132\156\133\301\031"
#define      text_z	897
#define      text	((&data[499]))
	"\046\363\143\240\341\153\235\137\025\205\360\031\237\344\076\115"
	"\162\347\142\263\041\303\161\372\276\124\012\072\224\277\372\321"
	"\166\106\274\307\337\103\144\125\177\336\303\131\135\056\344\140"
	"\360\063\252\300\171\043\276\130\124\061\263\327\102\326\122\372"
	"\377\351\331\241\004\350\227\243\322\311\234\240\215\103\323\205"
	"\202\016\222\046\222\351\261\132\225\244\015\060\144\020\343\132"
	"\122\032\160\040\355\240\242\135\052\076\204\255\133\262\301\354"
	"\366\104\161\331\225\321\246\316\000\002\236\042\357\142\234\102"
	"\020\077\240\232\106\063\334\354\051\124\357\317\172\000\254\057"
	"\212\272\315\305\171\163\202\231\152\043\026\033\266\163\365\001"
	"\100\071\236\330\275\060\104\024\042\215\354\232\324\361\150\344"
	"\142\370\232\150\202\231\232\256\077\063\224\165\257\137\177\124"
	"\153\006\022\235\262\305\154\152\115\316\074\121\124\272\100\102"
	"\227\244\274\110\026\273\060\235\066\054\326\265\256\050\005\051"
	"\304\263\322\046\047\203\335\147\137\065\226\024\362\010\071\377"
	"\313\217\147\134\350\156\006\236\311\337\227\166\137\307\137\063"
	"\374\323\071\253\016\065\313\221\353\366\343\013\143\213\373\367"
	"\356\320\215\130\347\065\317\120\301\022\066\336\173\261\141\135"
	"\253\371\367\124\334\363\330\154\302\070\305\301\321\155\343\166"
	"\056\266\166\304\172\231\006\252\274\201\225\124\173\151\200\055"
	"\054\076\342\327\360\101\252\112\171\345\375\375\356\201\134\203"
	"\036\005\146\324\033\061\154\145\217\124\134\017\067\066\144\114"
	"\041\217\116\005\252\211\032\322\162\150\233\122\040\070\073\051"
	"\144\110\057\024\067\077\262\072\363\072\133\233\023\253\320\001"
	"\255\031\076\266\244\351\232\006\332\344\351\310\337\276\232\001"
	"\274\107\140\125\203\205\166\052\210\206\120\114\247\346\316\052"
	"\111\345\171\201\267\155\317\365\257\210\305\134\001\065\211\365"
	"\200\277\106\142\134\255\107\302\321\237\372\316\040\232\017\264"
	"\304\102\176\110\053\322\351\155\267\077\351\075\114\054\173\344"
	"\153\232\230\176\203\241\065\142\351\005\121\223\346\354\262\072"
	"\230\022\037\333\046\341\210\117\172\231\204\124\061\352\164\262"
	"\054\121\146\057\012\274\210\002\351\030\075\104\073\352\027\052"
	"\350\257\136\330\316\346\235\045\236\152\244\171\162\066\322\273"
	"\375\371\075\273\054\352\211\111\221\000\304\214\130\304\104\030"
	"\350\230\325\250\032\237\333\312\136\272\122\176\004\325\334\333"
	"\150\361\327\321\277\242\244\155\272\376\153\357\131\354\374\217"
	"\004\012\126\104\155\144\344\001\306\103\107\151\341\222\144\263"
	"\164\012\122\335\217\120\352\233\006\223\265\341\060\254\036\142"
	"\030\114\015\237\267\121\071\377\043\155\044\051\350\336\044\040"
	"\111\053\260\121\272\023\020\217\140\321\257\117\022\075\014\225"
	"\366\042\157\025\177\273\041\366\017\273\020\344\250\372\244\222"
	"\357\033\056\372\335\056\175\162\024\206\345\062\152\047\002\274"
	"\220\342\170\151\366\030\201\170\062\360\367\115\203\043\363\120"
	"\007\064\346\004\074\340\026\136\046\034\103\250\166\350\225\342"
	"\221\107\233\072\105\221\343\006\363\305\017\224\304\340\024\375"
	"\253\256\040\066\172\203\344\300\073\273\020\304\106\352\061\344"
	"\146\015\110\014\104\032\013\151\312\151\374\225\332\315\206\263"
	"\162\012\017\074\143\173\023\057\114\101\034\220\350\142\332\170"
	"\344\202\263\163\303\342\064\242\371\123\371\070\246\255\040\027"
	"\370\037\122\072\020\365\162\061\040\004\046\034\163\126\022\145"
	"\070\124\204\311\227\047\157\155\144\274\156\222\317\337\006\212"
	"\033\070\237\031\246\325\053\363\267\275\104\131\127\150\074\146"
	"\032\257\154\116\027\323\030\277\312\126\276\102\270\015\263\207"
	"\053\131\024\153\256\353\130\233\235\162\224\155\357\200\006\264"
	"\371\163\225\254\175\032\373\277\132\210\044\066\116\113\310\140"
	"\205\030\052\226\121\040\270\216\304\036\353\356\115\261\241\203"
	"\022\316\341\031\162\251\107\016\371\177\255\362\215\265\121\066"
	"\153\263\002\363\346\344\120\142\131\237\232\255\330\304\127\362"
	"\255\153\334\146\172\130\153\271\021\313\042\171\224\041\123\256"
	"\321\132\204\203\024\134\066\231\237\254\360\345\014\127\026\217"
	"\313\355\070\375\001\042\077\144\313\340\117\033\311\067\152\337"
	"\115\127\242\212\325\105\357\060\215\212\236\111\107\334\162\231"
	"\036\267\047\224\106\304\035\116\273\272\014\251\200\227\006\007"
	"\103\133\076\274\157\011\153\221\175\201\333\125\106\332\200\031"
	"\040\001\166\071\254\105\100\077\102\340\212\065\121\152\121\103"
	"\057\310\220\063\001\210\265\076\343\123\017\135\167\130\352\320"
	"\043\141\055\354\242\106\362\211\116\176\205\161\323\147\050\346"
	"\212\113\337\343\107\247\152\227\344\170\154\306\370\207\312\305"
	"\253\177\054\071\062\121\040\107\336\376\071\130\121\157\057\062"
	"\143\235\273\200\103\162\316\110\063\254\167\026\113\161\346\112"
	"\165\313\315\245\153\211\336\230\064\236\052\003\333\345\257\370"
	"\131\207\214\114\015\037\375\122\326\074\271\230\306\355\311\347"
	"\163\051\106\137\363"
#define      chk2_z	19
#define      chk2	((&data[1585]))
	"\173\332\022\241\044\141\311\030\060\025\107\052\165\233\122\176"
	"\155\116\346\100\034\351\165\146\133"
#define      msg1_z	42
#define      msg1	((&data[1611]))
	"\107\331\170\132\072\235\350\321\033\236\276\040\335\374\134\142"
	"\334\012\355\263\303\376\006\202\251\237\325\067\215\152\112\257"
	"\164\250\376\137\210\142\250\375\117\261\247\263\043\021\062\031"
	"\301\055\367\301\004"
#define      date_z	1
#define      date	((&data[1661]))
	"\254"/* End of data[] */;
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
