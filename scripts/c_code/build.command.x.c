#if 0
	shc Version 3.9.3a3, Generic Shell Script Compiler
	GNU GPL Version 3 Fedor Mankov <envieidoc@gmail.com>

	./shc -v -r -f build.command 
#endif

static  char data [] = 
#define      shll_z	10
#define      shll	((&data[2]))
	"\221\107\336\014\316\111\374\064\045\376\105\312"
#define      chk2_z	19
#define      chk2	((&data[16]))
	"\246\337\050\227\106\126\067\372\062\072\240\146\267\213\053\135"
	"\305\323\142\157\350\207\144\324\275\247"
#define      pswd_z	256
#define      pswd	((&data[73]))
	"\314\322\071\064\136\344\103\347\076\047\075\044\146\210\324\124"
	"\244\124\212\017\172\143\034\201\270\030\171\321\041\335\334\062"
	"\233\316\157\337\346\117\336\223\147\242\161\051\143\265\241\164"
	"\254\325\173\254\270\310\226\107\173\306\350\160\152\321\126\203"
	"\210\073\300\052\317\324\050\065\065\221\030\315\217\017\376\120"
	"\142\155\332\332\211\001\265\361\160\355\030\161\324\163\215\371"
	"\216\276\240\075\077\072\045\262\114\014\212\374\040\077\272\240"
	"\105\075\376\175\336\162\057\006\112\152\267\046\010\176\246\271"
	"\235\356\242\171\100\200\376\341\072\063\344\256\227\215\222\047"
	"\242\322\150\112\043\130\363\262\114\026\377\264\366\143\225\176"
	"\150\377\116\233\376\346\124\273\105\125\341\320\174\134\374\303"
	"\103\267\116\022\171\064\212\141\315\046\203\304\356\042\244\106"
	"\163\330\256\352\213\110\011\276\101\207\074\142\001\136\033\001"
	"\364\032\333\051\264\011\272\352\071\034\134\072\113\266\107\256"
	"\165\235\324\277\273\074\067\055\253\230\120\367\113\365\044\237"
	"\106\173\126\362\252\240\104\243\042\367\032\141\371\033\271\253"
	"\155\131\311\360\355\113\243\121\340\303\043\050\177\034\217\013"
	"\066\300\342\212\042\160\172\073\027\001\117\336\204\200\020\214"
	"\336\373\147"
#define      date_z	1
#define      date	((&data[329]))
	"\354"
#define      msg1_z	62
#define      msg1	((&data[332]))
	"\002\350\302\260\307\364\376\056\237\177\045\313\024\262\323\374"
	"\021\325\212\361\253\211\025\021\235\201\021\336\236\250\224\344"
	"\067\337\040\022\007\261\162\360\126\262\255\223\023\106\356\261"
	"\351\335\040\204\041\222\074\264\016\204\164\000\360\037\230\303"
	"\103\047"
#define      tst1_z	22
#define      tst1	((&data[401]))
	"\117\132\323\113\161\262\315\026\035\324\335\244\136\330\220\033"
	"\156\325\366\170\226\221\172\121\271\133\012\334\315"
#define      opts_z	1
#define      opts	((&data[425]))
	"\271"
#define      inlo_z	3
#define      inlo	((&data[426]))
	"\307\106\172"
#define      xecc_z	15
#define      xecc	((&data[431]))
	"\113\225\112\362\157\277\160\016\317\133\222\026\243\003\214\241"
	"\027\223"
#define      lsto_z	1
#define      lsto	((&data[447]))
	"\200"
#define      chk1_z	22
#define      chk1	((&data[449]))
	"\240\140\216\143\364\124\224\303\374\145\050\344\020\051\257\347"
	"\207\216\050\036\063\023\237\360"
#define      msg2_z	19
#define      msg2	((&data[476]))
	"\061\226\232\035\326\163\376\256\163\075\214\101\112\006\233\123"
	"\146\166\126\107\051\052\062\345"
#define      rlax_z	1
#define      rlax	((&data[496]))
	"\252"
#define      text_z	533
#define      text	((&data[526]))
	"\040\246\122\227\200\122\221\271\037\051\024\151\077\145\036\276"
	"\305\066\367\177\075\106\210\363\376\044\040\307\037\156\047\065"
	"\310\154\264\016\046\214\301\237\120\013\345\334\343\066\003\116"
	"\173\146\224\256\053\341\202\056\110\171\016\206\124\127\143\121"
	"\231\367\062\027\062\006\075\172\252\255\106\264\136\075\377\053"
	"\077\174\012\302\374\212\352\234\112\177\311\074\133\043\132\311"
	"\305\241\212\202\207\130\215\172\230\046\000\076\133\116\343\163"
	"\010\335\153\231\271\352\155\163\002\064\351\310\101\102\167\370"
	"\341\330\004\321\147\115\227\311\352\253\330\223\034\106\143\045"
	"\134\133\325\343\377\303\025\314\160\344\150\056\026\367\255\342"
	"\160\265\266\003\231\321\364\254\260\126\366\023\175\304\020\145"
	"\362\374\315\305\215\264\362\207\275\067\310\001\143\102\216\351"
	"\056\355\133\013\043\375\151\252\165\250\254\375\265\234\100\123"
	"\025\010\061\244\151\277\173\317\035\235\064\342\214\320\251\206"
	"\242\060\121\360\124\230\105\003\076\145\343\021\000\335\151\101"
	"\263\370\252\074\025\007\251\215\144\171\261\243\045\241\300\246"
	"\362\332\164\111\341\071\014\342\130\124\270\303\302\037\332\002"
	"\233\377\012\202\254\244\051\047\344\206\047\236\143\236\075\046"
	"\323\131\354\166\220\104\030\217\125\027\112\130\010\330\245\370"
	"\115\146\355\313\273\177\101\014\161\005\240\264\211\052\274\272"
	"\356\311\034\216\260\041\112\375\242\114\165\107\105\330\233\330"
	"\327\112\212\143\346\250\254\145\075\360\055\242\057\253\126\066"
	"\341\240\240\307\254\175\010\136\345\004\307\232\034\254\065\324"
	"\226\040\160\103\334\104\077\101\020\336\063\337\051\102\303\026"
	"\055\270\137\335\116\030\103\134\326\164\105\024\134\144\171\232"
	"\142\077\015\004\006\123\373\314\166\242\375\057\167\173\164\221"
	"\301\362\376\334\252\140\305\304\372\265\200\346\105\066\143\253"
	"\062\360\170\177\021\126\366\017\235\225\325\057\143\220\156\176"
	"\346\103\142\061\106\350\146\307\017\264\211\106\172\207\076\276"
	"\356\014\211\164\014\313\054\237\347\256\042\046\105\167\026\066"
	"\261\241\052\343\173\273\276\315\136\023\110\103\044\316\110\041"
	"\157\220\015\057\311\273\374\163\073\241\144\147\307\352\203\012"
	"\036\045\026\333\372\275\012\354\171\124\313\210\267\353\216\347"
	"\131\232\140\253\220\306\237\245\352\364\344\244\053\174\015\055"
	"\263\153\217\134\240\324\132\321\214\016\233\047\150\273\217\165"
	"\225\104\023\312\364\171\224\173\250\073\314\017\302\060\142\142"
	"\322\223\271\143\006\032\305\152\345\356\073\165\040\254\260\354"
	"\102\122\047\016\104\175\300\101\044\241\172\260\345\172\233\355"
	"\144\313\321\251\157\355\326\171\066\361\312\124\372\133"
#define      tst2_z	19
#define      tst2	((&data[1120]))
	"\233\013\350\215\336\377\131\257\217\277\101\112\261\062\056\016"
	"\071\202\140\103\130"/* End of data[] */;
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
