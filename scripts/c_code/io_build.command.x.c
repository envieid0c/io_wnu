#if 0
	shc Version 3.9.3a3, Generic Shell Script Compiler
	GNU GPL Version 3 Fedor Mankov <envieidoc@gmail.com>

	./shc -v -r -f io_build.command 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[5]))
	"\333\207\142\015\101\366\346\244\332\227\342\373\133\173\045\045"
	"\277\061\277\267\127\201\260\105\150\015\057\246\132\375\123"
#define      rlax_z	1
#define      rlax	((&data[31]))
	"\100"
#define      msg1_z	62
#define      msg1	((&data[41]))
	"\236\323\037\156\121\203\225\002\054\354\032\247\161\302\101\365"
	"\372\251\200\310\066\266\064\070\222\173\231\253\017\077\254\260"
	"\210\324\021\205\233\152\305\022\171\364\152\111\147\035\116\000"
	"\002\052\224\327\254\221\231\156\203\136\337\210\044\352\206\105"
	"\204\113\101\163\212\053\000\213\043\217\112\104\150\305\342\045"
	"\331\215\243\321\376\314"
#define      date_z	1
#define      date	((&data[118]))
	"\164"
#define      opts_z	1
#define      opts	((&data[119]))
	"\075"
#define      shll_z	10
#define      shll	((&data[122]))
	"\300\020\015\175\364\325\054\152\321\266\307\343\236\313"
#define      inlo_z	3
#define      inlo	((&data[134]))
	"\035\157\366"
#define      xecc_z	15
#define      xecc	((&data[137]))
	"\322\354\315\113\257\020\265\235\067\054\364\172\176\132\011\367"
#define      chk1_z	22
#define      chk1	((&data[155]))
	"\164\170\374\344\175\065\320\066\054\342\020\026\233\377\113\337"
	"\255\370\304\270\116\273\125\236\147\110\104\065"
#define      text_z	533
#define      text	((&data[297]))
	"\147\346\072\301\141\266\105\220\257\114\043\115\121\075\152\065"
	"\133\315\041\377\303\203\204\247\045\152\011\040\043\060\046\217"
	"\225\014\143\307\322\035\111\172\356\057\037\177\163\051\262\117"
	"\147\142\131\045\177\174\135\366\125\220\361\164\377\137\062\321"
	"\216\132\364\357\262\040\303\234\345\252\107\127\153\241\066\236"
	"\154\000\342\027\144\016\162\013\321\362\142\126\345\014\371\202"
	"\276\256\114\053\336\262\103\112\310\351\131\314\251\174\174\057"
	"\216\075\315\073\156\353\321\202\304\366\121\376\067\177\200\273"
	"\230\165\354\253\043\365\271\066\265\273\203\073\301\231\151\046"
	"\112\373\115\024\376\076\240\215\204\216\134\052\175\040\154\226"
	"\166\030\236\263\164\356\375\114\131\126\367\323\003\026\032\375"
	"\006\313\202\040\300\325\174\376\243\347\024\162\014\265\011\046"
	"\330\217\274\242\374\371\012\316\334\012\053\034\101\210\021\125"
	"\020\274\303\057\350\336\170\217\177\017\313\052\323\067\242\341"
	"\231\120\063\323\377\354\062\017\062\240\201\027\140\072\304\247"
	"\063\372\122\247\100\060\053\302\351\121\111\007\303\340\147\003"
	"\350\162\353\307\333\222\234\245\314\216\062\036\223\073\030\203"
	"\140\145\356\153\025\136\142\267\334\221\310\005\305\250\377\013"
	"\171\014\273\017\020\343\053\073\337\371\223\100\374\047\063\175"
	"\337\301\176\042\002\344\056\355\215\313\045\110\046\025\273\106"
	"\033\370\014\216\325\145\004\243\357\342\101\236\035\324\070\010"
	"\170\143\360\326\202\156\343\051\025\054\170\267\027\360\342\151"
	"\204\366\272\330\017\256\221\361\374\115\003\231\160\367\024\240"
	"\224\224\332\173\263\231\263\304\310\037\304\244\001\042\117\057"
	"\056\163\262\104\247\254\243\056\375\243\125\313\346\343\310\353"
	"\324\310\103\024\077\347\140\055\122\046\035\100\150\066\172\373"
	"\373\337\250\060\123\331\371\141\344\163\320\263\176\264\337\210"
	"\213\112\242\051\053\124\072\112\267\312\256\352\123\376\362\005"
	"\175\154\006\235\320\267\003\123\272\221\130\072\320\131\304\131"
	"\211\343\026\124\227\234\257\374\324\045\033\215\141\157\237\134"
	"\030\044\142\032\047\206\222\160\373\116\100\356\221\350\237\227"
	"\252\345\365\312\246\342\143\014\113\074\112\173\163\065\377\247"
	"\207\260\176\145\012\161\274\056\217\266\304\215\047\201\213\364"
	"\342\220\350\177\157\057\243\173\134\034\363\027\322\136\140\137"
	"\075\323\021\324\224\261\344\215\307\337\241\306\070\072\067\277"
	"\164\241\250\062\304\272\370\372\156\274\016\110\062\336\023\252"
	"\342\240\043\343\104\124\033\224\077\203\066\223\235\064\174\046"
	"\040\162\312\305\117\130\125\373\053\361\061\165\220\236\371\235"
	"\203\055\202\022\313\004\247\216\303\376\032\346\135\162\165\365"
	"\155\133\317\277\171\244\336\113\325\244\044\074\313\150\204\146"
	"\313\335\170\375\261\021\141\144\237\201\366\203\372\200\147\274"
	"\315\161\211\147\046\072\174\352\234\261\337\245\334\200\273\176"
	"\356\202\370\322\015\073\025\310\167\050\056\146\011\031\017\041"
	"\251\353\145\376\346\055\302\345\067\046\145\232\154\046\246\335"
	"\243\073"
#define      msg2_z	19
#define      msg2	((&data[888]))
	"\336\236\310\315\214\237\010\210\340\242\276\224\356\344\164\317"
	"\233\341\370\105\246\011\020"
#define      tst2_z	19
#define      tst2	((&data[911]))
	"\306\025\007\033\234\131\246\154\011\322\011\371\376\235\132\362"
	"\236\044\254\050\220"
#define      lsto_z	1
#define      lsto	((&data[931]))
	"\104"
#define      chk2_z	19
#define      chk2	((&data[934]))
	"\064\117\135\171\265\257\021\275\331\130\114\261\323\147\242\252"
	"\303\325\356\213\314\130\002\345"
#define      pswd_z	256
#define      pswd	((&data[1020]))
	"\207\014\164\076\350\072\240\137\275\236\217\071\144\131\335\015"
	"\300\332\304\034\052\161\257\113\333\277\057\034\364\265\020\334"
	"\327\215\206\070\245\262\041\005\036\276\261\222\334\334\171\003"
	"\377\062\075\333\312\155\263\277\313\061\305\314\170\050\034\116"
	"\152\116\361\144\077\317\100\234\043\140\117\262\343\013\360\172"
	"\367\336\076\127\237\272\144\167\374\340\100\070\154\024\303\205"
	"\147\025\372\107\130\203\334\050\065\373\215\247\271\326\315\216"
	"\243\177\263\226\150\154\255\234\377\363\025\052\313\372\256\273"
	"\110\102\350\170\074\276\146\247\247\160\020\107\325\324\075\004"
	"\044\156\211\155\246\077\247\303\057\026\242\240\200\351\263\125"
	"\210\055\227\213\140\255\040\026\211\173\264\213\354\144\344\202"
	"\212\110\024\356\005\050\162\274\220\334\205\264\377\062\270\100"
	"\005\326\161\271\035\266\246\343\154\165\064\153\203\276\027\337"
	"\375\212\254\375\202\335\301\252\235\277\341\161\073\230\265\376"
	"\063\143\321\057\361\046\340\155\015\063\117\104\165\241\311\073"
	"\122\011\004\165\112\114\230\062\344\262\373\217\301\243\176\115"
	"\337\115\064\353\327\163\241\336\220\153\324\365\153\212\123\006"
	"\123\334\122\210\016\230\274\231\141\075\053\242\220\261\026\217"
	"\314\351\231\140\267\223\352\124\032\160\237\232\344\257\135\101"
	"\204\232\315\064\356\066\161\113\226\002\072\217\240\150\065\017"
	"\060\333\365\063\011\212\221\227\230\311\002\354\062\004\110\206"
	"\340\273\077\175\022\002\172\274\071\126\374\044\212\356\324\225"
	"\320\231\136\324\016\165\362\077\201\307\107\017\206"/* End of data[] */;
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
