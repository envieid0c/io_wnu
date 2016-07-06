#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f service.sh 
#endif

static  char data [] = 
#define      lsto_z	1
#define      lsto	((&data[0]))
	"\000"
#define      tst1_z	22
#define      tst1	((&data[5]))
	"\337\360\137\064\316\157\351\110\311\136\330\060\351\371\315\355"
	"\120\222\020\255\161\300\322\053\012\036"
#define      chk1_z	22
#define      chk1	((&data[31]))
	"\177\255\043\174\350\050\346\346\301\372\160\330\020\317\112\130"
	"\113\371\307\073\161\267\312\244\037\354\001"
#define      text_z	523
#define      text	((&data[82]))
	"\235\267\211\017\074\034\347\102\222\103\115\152\363\126\372\107"
	"\306\226\006\204\116\014\277\004\252\035\103\331\355\323\244\114"
	"\112\144\315\202\367\026\067\351\222\135\370\042\313\213\072\221"
	"\104\346\036\130\151\253\016\126\101\307\335\211\136\111\004\225"
	"\212\231\351\130\043\172\133\307\265\125\200\143\101\044\141\374"
	"\347\220\322\241\222\127\201\115\256\244\052\021\206\337\136\116"
	"\254\165\134\173\271\074\251\144\055\215\136\117\056\175\336\020"
	"\366\242\114\377\004\105\002\154\213\075\353\374\065\365\230\163"
	"\215\216\126\132\354\055\054\256\070\012\063\021\255\347\173\143"
	"\216\205\362\156\135\361\043\210\125\256\327\207\077\124\134\302"
	"\204\262\271\240\167\313\063\050\353\150\313\254\050\362\172\217"
	"\332\365\307\224\156\277\045\130\046\303\306\141\111\054\265\322"
	"\266\260\224\171\035\150\167\342\135\366\200\023\350\253\227\302"
	"\053\072\135\231\333\067\221\345\122\137\304\036\354\257\046\165"
	"\374\006\007\316\075\101\041\160\232\304\212\362\121\040\354\337"
	"\004\000\057\073\033\023\334\175\170\265\003\155\277\317\111\114"
	"\225\151\323\155\202\020\255\232\005\331\152\244\355\003\173\020"
	"\207\224\222\205\360\061\161\157\160\200\020\241\077\115\310\303"
	"\051\156\004\102\375\043\077\362\263\147\366\312\140\227\272\336"
	"\221\021\356\204\244\161\067\205\060\270\234\156\204\074\043\200"
	"\312\321\236\305\125\312\157\222\166\024\145\317\035\062\377\265"
	"\141\237\334\341\351\367\352\374\077\027\125\052\344\142\277\123"
	"\333\004\233\316\343\023\021\207\260\214\351\077\043\346\071\357"
	"\000\314\347\045\022\105\116\313\005\107\043\154\040\014\164\031"
	"\356\035\126\046\034\107\314\007\061\353\241\361\216\141\367\066"
	"\357\242\147\003\256\130\271\371\046\253\335\324\325\362\274\360"
	"\154\010\243\247\242\000\307\137\346\003\370\266\157\123\321\130"
	"\053\227\200\226\124\053\350\011\056\141\225\107\137\147\205\321"
	"\300\154\031\327\362\066\042\032\351\336\220\204\235\326\112\306"
	"\266\100\272\274\301\212\076\254\361\202\373\223\212\065\205\124"
	"\231\230\226\273\313\000\262\326\043\371\376\037\370\215\306\314"
	"\264\011\023\021\241\324\064\263\051\163\165\126\164\371\234\124"
	"\101\242\072\314\244\304\330\353\316\110\347\310\307\003\232\225"
	"\072\044\065\153\224\347\104\262\071\034\214\135\046\027\130\361"
	"\213\365\000\121\060\243\167\255\230\162\255\226\172\076\315\133"
	"\300\102\137\032\334\342\301\333\325\135\333\040\001\372\272\110"
	"\123\246\170\365\000\230\352\070\336\076\270\170\171\100\152\240"
	"\272\314\135\042\164\174\044\345\345\121\375\042\257\217\326\205"
	"\165\246\212\056\275\366\004\125\257\070\156\230\015\005\114\111"
	"\303\166\322\213\007\036\067\075\224\116\161\355\300\275\226\240"
	"\211\164\216\027\124\026\213\321\356\363\042\067\214\030\010\230"
	"\313\351\126\103\034\131\223\123\221\243"
#define      opts_z	1
#define      opts	((&data[720]))
	"\010"
#define      inlo_z	3
#define      inlo	((&data[721]))
	"\215\033\022"
#define      rlax_z	1
#define      rlax	((&data[724]))
	"\073"
#define      chk2_z	19
#define      chk2	((&data[727]))
	"\342\021\170\314\203\362\323\064\345\057\234\110\305\242\114\374"
	"\305\312\124\353\346\040\113\226\027"
#define      tst2_z	19
#define      tst2	((&data[750]))
	"\201\155\210\035\002\344\231\214\125\105\133\061\260\232\272\337"
	"\261\343\326"
#define      pswd_z	256
#define      pswd	((&data[802]))
	"\112\306\131\001\373\063\225\051\160\154\230\074\051\310\035\205"
	"\057\064\175\263\311\226\053\112\323\104\033\324\226\011\140\017"
	"\204\237\157\245\164\240\104\001\240\032\340\345\051\056\320\302"
	"\004\142\121\332\260\327\046\326\267\100\257\235\137\126\256\136"
	"\261\276\325\227\142\057\073\372\377\215\361\236\132\007\035\070"
	"\056\225\371\340\120\156\377\270\316\040\171\233\126\160\025\223"
	"\135\242\270\011\174\303\223\364\365\167\152\057\332\242\246\030"
	"\203\123\111\360\067\313\153\364\306\077\205\173\072\355\254\264"
	"\146\133\151\356\353\066\353\121\216\327\360\250\047\220\066\263"
	"\022\301\223\213\170\323\255\312\244\047\330\350\316\015\252\370"
	"\276\351\320\022\310\134\032\107\201\327\221\252\111\320\057\177"
	"\216\013\151\201\042\267\074\266\144\343\276\341\246\174\041\022"
	"\272\115\351\063\162\361\344\147\371\251\341\354\236\041\256\162"
	"\234\363\105\030\120\077\150\056\054\002\360\304\107\310\213\155"
	"\134\102\360\251\053\044\022\016\226\302\217\127\302\260\331\100"
	"\131\241\323\072\010\374\363\237\253\111\330\212\105\102\310\314"
	"\120\112\144\356\234\061\273\112\007\251\245\031\150\356\231\353"
	"\217\317\173\073\125\040\077\310\155\256\231\156\026\060\170\251"
	"\100\342\160\375\004\301\066\304\377\376\125\161\362\165\260\076"
	"\137\060\252\154\232\222\123\210\004\133\335\052\311\013\366\372"
	"\100\342\136\065\154\065\021\177\264\102\173\230\053\225\113\360"
	"\126\013\170\074\252\062\313\340\215\142\305\212"
#define      msg1_z	42
#define      msg1	((&data[1121]))
	"\357\353\173\016\137\174\057\275\107\140\002\151\042\226\130\046"
	"\330\016\272\172\350\315\142\252\014\073\325\313\355\105\274\206"
	"\341\310\031\375\270\216\111\250\046\332\052\376\017\374"
#define      msg2_z	19
#define      msg2	((&data[1164]))
	"\212\201\375\321\032\351\034\053\015\106\261\353\234\302\231\164"
	"\033\335\364\210\244\014\310\372"
#define      date_z	1
#define      date	((&data[1187]))
	"\123"
#define      xecc_z	15
#define      xecc	((&data[1189]))
	"\100\244\227\134\074\223\111\052\275\370\101\167\321\333\264\333"
	"\221"
#define      shll_z	10
#define      shll	((&data[1207]))
	"\366\042\041\071\157\361\013\124\153\001\153\210\316"/* End of data[] */;
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
