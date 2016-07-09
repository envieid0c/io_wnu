#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f compiling.sh 
#endif

static  char data [] = 
#define      date_z	1
#define      date	((&data[0]))
	"\037"
#define      opts_z	1
#define      opts	((&data[1]))
	"\267"
#define      shll_z	10
#define      shll	((&data[3]))
	"\073\035\140\302\147\104\254\301\250\353\027\203\315"
#define      tst2_z	19
#define      tst2	((&data[17]))
	"\262\213\152\227\056\267\047\335\236\154\246\206\366\312\042\214"
	"\173\341\267\236\373"
#define      chk1_z	22
#define      chk1	((&data[41]))
	"\310\004\030\050\274\200\252\100\245\101\246\011\037\264\343\356"
	"\034\340\277\223\235\154\131\164\371\270\327\216\246"
#define      pswd_z	256
#define      pswd	((&data[125]))
	"\235\115\157\135\034\320\133\273\276\244\073\256\335\151\361\353"
	"\216\003\230\262\135\133\122\327\275\137\171\342\317\053\320\311"
	"\315\117\101\363\034\041\245\063\020\275\323\224\223\030\032\256"
	"\123\170\325\342\265\232\344\047\015\020\010\201\237\277\025\360"
	"\211\300\210\005\256\026\320\160\110\345\046\032\212\056\266\115"
	"\265\365\167\211\131\147\165\260\304\167\355\325\165\210\354\347"
	"\364\054\143\361\003\041\113\242\254\075\305\055\102\120\264\043"
	"\103\144\157\233\135\222\047\227\141\376\143\137\065\330\366\341"
	"\104\021\356\077\376\160\122\235\210\357\266\066\356\052\366\173"
	"\226\061\261\301\341\007\162\345\002\035\303\062\236\020\251\376"
	"\021\276\212\142\335\146\112\262\360\310\036\013\023\275\064\043"
	"\150\274\067\201\100\346\204\306\340\343\020\333\076\247\350\111"
	"\155\336\167\133\075\163\153\173\135\336\222\120\343\313\051\056"
	"\263\071\171\157\234\054\066\153\036\056\023\253\260\357\224\164"
	"\127\125\123\377\130\362\026\332\100\300\177\246\215\056\302\224"
	"\276\045\305\364\061\112\342\306\027\323\002\005\365\341\346\060"
	"\121\146\151\340\056\256\145\301\064\014\057\033\313\067\247\011"
	"\042\216\344\022\276\327\342\133\056\376\347\064\020\307\124\310"
	"\362\236\225\272\145\134\156\123\253\107\203\261\106\267\244\075"
	"\371\266\122\371\236\004\116\161\075\105\227\315"
#define      text_z	503
#define      text	((&data[407]))
	"\371\022\340\304\217\340\147\345\030\052\156\074\165\356\246\316"
	"\341\123\371\162\023\064\344\354\054\037\164\120\366\163\232\210"
	"\216\032\060\112\324\075\331\232\017\332\071\025\324\007\174\004"
	"\146\032\016\072\343\316\124\314\114\247\050\370\136\307\161\302"
	"\364\135\263\172\161\105\361\025\370\025\160\367\242\227\162\034"
	"\277\217\166\075\035\145\300\330\204\036\232\024\331\376\072\300"
	"\161\254\204\273\146\251\305\074\344\046\253\241\374\121\174\007"
	"\230\242\270\243\055\167\035\317\145\115\363\341\363\242\123\356"
	"\316\206\235\104\001\027\225\353\215\075\123\336\142\264\116\065"
	"\167\164\155\153\200\177\124\322\040\055\240\253\163\176\100\264"
	"\064\370\245\305\076\252\302\117\216\315\152\311\142\371\353\036"
	"\373\003\352\206\327\100\220\074\004\232\127\247\215\151\073\016"
	"\002\004\010\270\166\361\357\302\012\006\324\167\006\340\336\130"
	"\237\123\026\147\021\352\077\037\133\130\121\333\371\360\115\370"
	"\077\375\147\062\166\350\333\261\111\365\310\055\046\277\376\123"
	"\101\244\266\353\301\125\170\057\363\255\214\140\163\334\003\203"
	"\252\321\047\174\234\113\043\236\042\024\331\220\075\245\336\174"
	"\345\053\051\116\045\336\016\247\070\303\240\303\052\334\032\314"
	"\220\324\045\247\271\045\261\275\253\066\013\331\342\247\017\371"
	"\245\202\002\354\230\063\242\030\064\231\203\257\116\050\356\135"
	"\204\117\025\215\143\225\045\324\207\351\254\060\133\134\145\252"
	"\375\230\355\144\370\064\213\214\034\132\321\122\316\015\137\204"
	"\161\373\075\371\151\267\106\150\377\042\177\067\147\156\220\227"
	"\067\331\264\243\163\003\171\267\211\143\263\032\205\337\160\121"
	"\332\124\136\272\314\155\362\317\074\126\353\357\323\213\303\112"
	"\105\300\051\136\357\254\062\156\124\355\147\244\126\265\376\025"
	"\160\352\241\251\173\310\051\175\016\121\045\132\360\366\063\070"
	"\054\127\340\027\263\006\255\326\371\226\356\110\356\370\235\350"
	"\310\150\036\067\242\122\272\044\150\371\315\226\166\202\235\116"
	"\132\026\071\040\042\136\111\305\015\244\337\376\167\214\034\334"
	"\104\115\230\121\052\043\277\101\176\026\344\344\247\336\022\231"
	"\222\031\321\102\132\047\336\245\361\021\013\024\124\375\063\102"
	"\232\155\175\067\024\336\155\236\375\170\251\270\262\053\154\143"
	"\240\316\302\223\056\261\275\233\304\311\152\000\110\015\302\317"
	"\110\342\221\102\336\125\026\320\064\326\055\010\271\236\155\122"
	"\240\065\216\056\241\322\237\241\040\212\065\050\332\253\143\276"
	"\151\232\244"
#define      tst1_z	22
#define      tst1	((&data[964]))
	"\022\316\320\354\015\341\330\001\012\334\216\252\364\217\273\367"
	"\173\027\302\026\236\163\152\350\244\121\263\037\355\123"
#define      msg2_z	19
#define      msg2	((&data[993]))
	"\113\321\206\275\124\215\313\011\107\352\136\253\266\103\166\300"
	"\304\361\006\027\203\172\072\012\227"
#define      msg1_z	42
#define      msg1	((&data[1022]))
	"\205\301\202\340\120\313\016\046\346\316\063\361\061\002\220\167"
	"\275\235\115\357\163\323\242\351\000\035\027\146\331\125\066\110"
	"\003\331\152\064\227\142\264\305\265\230\010\277\174\035\255\252"
	"\077\310\147\312\104\274\037\044\361\140\332"
#define      chk2_z	19
#define      chk2	((&data[1078]))
	"\022\122\127\013\104\161\054\272\300\014\225\106\307\335\351\164"
	"\364\352\270\046\151\367\326\105"
#define      inlo_z	3
#define      inlo	((&data[1098]))
	"\207\174\313"
#define      xecc_z	15
#define      xecc	((&data[1102]))
	"\330\277\132\341\203\222\274\103\070\007\071\143\376\341\307\312"
	"\331"
#define      rlax_z	1
#define      rlax	((&data[1118]))
	"\373"
#define      lsto_z	1
#define      lsto	((&data[1119]))
	"\246"/* End of data[] */;
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
