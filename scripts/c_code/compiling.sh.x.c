#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f compiling.sh 
#endif

static  char data [] = 
#define      shll_z	10
#define      shll	((&data[0]))
	"\044\222\030\050\025\152\351\166\355\361\014"
#define      rlax_z	1
#define      rlax	((&data[11]))
	"\040"
#define      date_z	1
#define      date	((&data[12]))
	"\333"
#define      inlo_z	3
#define      inlo	((&data[13]))
	"\376\277\134"
#define      xecc_z	15
#define      xecc	((&data[17]))
	"\072\004\264\174\124\236\122\062\362\325\323\360\314\316\023\023"
	"\332\122\216"
#define      tst1_z	22
#define      tst1	((&data[40]))
	"\361\167\332\226\171\364\170\057\325\207\142\364\250\217\320\124"
	"\103\332\141\040\312\331\315\040\360\272\262\365\263"
#define      msg2_z	19
#define      msg2	((&data[67]))
	"\357\054\235\026\117\117\375\013\136\066\132\073\225\233\147\215"
	"\334\032\316\345\144\354\260\010\245\221"
#define      pswd_z	256
#define      pswd	((&data[137]))
	"\271\130\020\132\272\356\126\340\233\342\230\215\133\370\135\212"
	"\134\202\232\134\243\033\355\265\236\101\047\161\373\034\242\207"
	"\017\033\303\322\150\153\217\114\234\341\172\000\172\351\201\237"
	"\367\365\334\203\322\147\213\001\030\333\200\355\243\361\001\220"
	"\016\320\152\245\315\317\025\173\304\175\044\062\327\152\307\322"
	"\070\220\071\254\203\110\223\046\211\014\275\340\244\276\032\120"
	"\043\321\022\130\246\201\045\226\364\261\106\256\356\005\204\027"
	"\354\374\147\212\021\355\345\014\131\054\020\243\362\064\123\056"
	"\005\146\317\106\004\354\034\104\117\216\320\376\071\233\243\131"
	"\314\305\314\361\002\215\176\235\201\140\010\144\103\070\241\346"
	"\112\114\327\145\162\175\065\017\202\316\270\043\210\025\225\303"
	"\004\352\234\077\360\051\122\331\215\264\211\300\263\227\204\234"
	"\203\257\356\044\240\360\267\232\363\007\101\055\374\357\154\340"
	"\266\366\211\372\074\347\045\162\355\166\201\377\052\007\060\130"
	"\255\167\325\135\010\255\177\332\236\251\140\107\106\147\051\330"
	"\044\367\163\314\216\036\214\125\257\307\116\276\003\372\333\035"
	"\300\236\073\006\043\021\126\020\323\122\237\042\356\013\031\010"
	"\304\072\154\150\221\331\305\052\352\312\305\232\156\057\017\326"
	"\210\126\350\266\016\320\064\077\244\151\017\345\275\317\014\020"
	"\325\156\173\336\377\172\116\132\064\064\161\104\310\244\003\043"
	"\311\370\371\254\373\241\243"
#define      msg1_z	42
#define      msg1	((&data[424]))
	"\330\226\374\073\160\365\347\137\330\347\041\071\130\320\040\066"
	"\141\154\316\257\324\147\256\100\237\225\170\130\252\325\250\374"
	"\100\353\042\135\215\220\140\154\200\001\251\243\243\141\043\256"
	"\313\034\344\206\175\145\030\272"
#define      chk1_z	22
#define      chk1	((&data[478]))
	"\041\132\300\150\247\024\127\251\055\230\262\105\045\002\303\036"
	"\317\125\023\214\175\156\220\154\211\272\271\323"
#define      lsto_z	1
#define      lsto	((&data[501]))
	"\227"
#define      opts_z	1
#define      opts	((&data[502]))
	"\351"
#define      text_z	564
#define      text	((&data[621]))
	"\260\316\163\264\014\172\142\237\342\233\170\054\340\366\212\003"
	"\050\075\237\315\127\371\321\004\131\107\217\355\204\257\074\172"
	"\030\366\152\222\312\152\257\024\234\101\233\011\121\354\341\244"
	"\374\166\275\011\372\220\030\212\255\055\326\051\071\064\251\334"
	"\044\075\073\141\015\377\140\266\202\256\217\317\251\064\011\061"
	"\325\223\357\267\117\261\304\207\003\357\060\303\011\062\127\015"
	"\272\070\070\226\147\251\213\242\140\037\357\365\027\375\342\206"
	"\267\231\305\047\356\014\315\315\376\257\236\271\005\376\220\332"
	"\151\071\246\217\254\353\142\374\310\246\154\276\213\371\106\225"
	"\233\061\342\307\157\365\157\201\346\335\117\054\230\204\134\302"
	"\165\145\307\165\353\356\130\243\245\012\165\000\112\053\063\373"
	"\300\102\000\352\143\261\033\347\024\114\323\165\046\165\253\241"
	"\037\121\215\126\125\066\014\070\363\151\354\326\133\031\124\206"
	"\123\115\253\176\115\310\076\205\142\172\116\241\141\021\315\271"
	"\372\132\221\305\021\016\165\317\353\057\373\266\301\025\250\034"
	"\027\236\157\132\362\247\350\333\262\042\004\254\001\054\017\073"
	"\133\057\116\236\341\172\364\262\120\247\370\031\056\370\225\106"
	"\171\327\053\000\037\267\233\104\014\315\130\225\114\140\111\003"
	"\133\315\066\343\336\073\313\074\222\363\036\031\233\337\371\073"
	"\323\015\104\007\106\242\176\340\261\000\225\256\215\362\026\040"
	"\015\105\204\041\323\333\067\242\303\003\173\113\105\122\355\105"
	"\006\264\150\266\111\032\276\130\136\077\001\246\273\321\336\220"
	"\133\341\347\243\360\243\056\336\200\010\255\036\032\070\027\360"
	"\127\265\016\077\355\152\333\317\060\224\122\060\101\230\325\360"
	"\062\040\217\157\245\377\366\075\241\274\340\135\103\056\025\247"
	"\310\353\164\246\161\137\217\252\252\041\127\205\372\027\016\057"
	"\343\022\000\327\026\332\332\122\257\203\252\020\047\323\342\147"
	"\363\350\006\043\007\134\277\330\247\034\017\254\226\327\071\050"
	"\164\171\177\041\273\271\010\121\257\061\143\071\345\254\311\156"
	"\110\050\020\062\026\224\207\046\045\164\136\037\127\212\042\232"
	"\024\205\327\046\102\301\174\374\014\242\003\360\145\347\274\370"
	"\343\206\346\033\362\061\045\171\166\032\363\166\035\104\150\030"
	"\104\265\121\022\003\340\340\325\134\356\217\140\302\345\023\371"
	"\172\273\043\365\314\111\024\113\056\334\340\036\350\272\150\364"
	"\101\354\020\350\334\261\361\362\043\144\336\057\160\106\300\056"
	"\256\260\316\024\214\052\034\201\005\273\135\066\304\116\002\124"
	"\345\140\330\252\253\161\273\043\101\321\067\332\310\044\244\073"
	"\112\071\056\132\050\225\001\364\204\005\344\234\141\247\137\261"
	"\212\106\271\360\145\370\353\143\273\304\044\117\275\176\035\205"
	"\365\060\127\327\071\336\251\361\126\265\374\110\265\174\256\033"
	"\166\062\116\123\140\216\061\014\271\372\153\371\172\144\260\157"
	"\235\022\205\061\236\271\354\046\051\353\345\056\070\370\251\064"
	"\007\141\142\013\370\003\052\204\231\206\267\110\322\221\014\200"
	"\354\320\014\343\157\367\336\271\053\035\176\120\350\161\342\365"
	"\257\107\010\147\000\210\136\323\074\300\006\357\307\350\341\013"
	"\106\347\110\075\207\317\215\153\126\207\140\356\030\210\236\237"
	"\316\377\126\053\301\360\246\260\104\175\253\262\326\030\265\000"
	"\066\037\027\206\304\014\355\351\225\223\312\264\275\132\110\107"
	"\257\202\322\211\102\312\271\057\210\050\000\041\005\160\304\106"
	"\217\007\046\334\015\065\020\013\363\307\115\072\204\166"
#define      tst2_z	19
#define      tst2	((&data[1305]))
	"\200\233\147\124\216\147\030\330\175\047\322\267\203\034\262\175"
	"\024\037\056\251\140\241\225"
#define      chk2_z	19
#define      chk2	((&data[1328]))
	"\054\226\377\135\363\123\371\176\132\140\120\247\020\132\000\354"
	"\024\255\213\245\370\330\227\260"/* End of data[] */;
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
