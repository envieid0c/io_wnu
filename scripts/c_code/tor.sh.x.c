#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f tor.sh 
#endif

static  char data [] = 
#define      chk1_z	22
#define      chk1	((&data[3]))
	"\376\013\344\124\115\224\035\124\234\245\321\035\161\115\133\074"
	"\210\324\034\102\102\365\352\263\045\050\376\223\104"
#define      opts_z	1
#define      opts	((&data[29]))
	"\143"
#define      chk2_z	19
#define      chk2	((&data[34]))
	"\226\361\104\370\371\152\112\065\067\217\073\014\246\121\315\172"
	"\174\115\230\370\254\370\362\037\327"
#define      pswd_z	256
#define      pswd	((&data[119]))
	"\101\266\240\150\264\155\227\135\046\302\334\037\320\322\136\042"
	"\356\215\033\047\305\061\214\037\216\344\116\303\250\312\252\141"
	"\121\163\202\205\337\244\313\057\276\214\045\155\324\241\065\360"
	"\144\261\170\126\054\266\261\130\053\000\043\057\375\060\034\117"
	"\107\374\172\030\254\277\302\201\374\307\200\271\270\156\041\007"
	"\310\215\103\072\364\010\124\356\325\247\233\004\337\026\312\147"
	"\075\034\222\034\112\241\143\347\133\325\072\054\115\177\200\302"
	"\265\101\202\100\355\162\350\176\161\066\376\044\106\014\241\000"
	"\166\310\024\262\163\054\326\145\064\367\037\163\336\247\346\344"
	"\146\164\252\015\266\273\250\113\033\003\202\073\047\215\051\043"
	"\125\344\132\020\235\277\077\021\075\263\376\227\220\030\030\265"
	"\275\310\155\255\030\126\103\017\010\121\350\152\125\130\335\072"
	"\150\053\051\111\267\310\036\103\074\073\356\342\176\167\273\377"
	"\270\071\226\064\244\251\226\160\306\072\373\007\144\016\162\262"
	"\307\015\012\066\104\331\365\062\216\245\327\306\360\370\071\200"
	"\350\245\247\017\026\175\304\351\254\267\240\103\301\213\016\104"
	"\125\124\003\235\104\305\343\364\166\101\004\306\267\063\113\042"
	"\352\027\074\342\245\254\315\035\312\013\227\027\222\057\321\144"
	"\155\365\013\133\226\127\101\336\254\073\034\205\073\344\314\164"
	"\126\353\007\345\373\045\247\350\152\174\076\150\017\135\356\347"
	"\325\110\372\312\105\364\337\025\036\333\025\243\030\060\342\134"
	"\233\226\270\100\137"
#define      date_z	1
#define      date	((&data[396]))
	"\310"
#define      xecc_z	15
#define      xecc	((&data[398]))
	"\022\076\032\121\266\174\030\005\372\231\303\274\211\013\331\076"
	"\310"
#define      shll_z	10
#define      shll	((&data[416]))
	"\223\274\116\171\367\136\361\044\252\066\106\371\265\153"
#define      tst1_z	22
#define      tst1	((&data[433]))
	"\121\013\063\173\345\207\341\305\327\032\176\056\046\236\207\334"
	"\213\237\162\017\306\122\270\125\223\077\016\101\147\140"
#define      inlo_z	3
#define      inlo	((&data[458]))
	"\327\106\257"
#define      lsto_z	1
#define      lsto	((&data[461]))
	"\055"
#define      text_z	726
#define      text	((&data[544]))
	"\047\241\236\316\322\243\327\161\114\162\065\367\337\244\300\067"
	"\117\237\342\352\046\352\260\303\327\204\045\163\142\035\042\240"
	"\114\222\133\371\106\121\163\030\114\322\366\070\275\334\276\331"
	"\376\010\134\060\161\301\274\066\233\144\062\062\227\073\371\357"
	"\154\113\044\000\104\261\247\017\034\370\201\273\205\213\342\072"
	"\256\024\242\307\141\246\335\144\245\343\170\011\313\370\316\220"
	"\147\005\200\266\067\105\150\131\160\061\303\242\201\013\202\136"
	"\147\116\245\001\063\044\337\050\077\155\244\074\211\325\331\156"
	"\031\000\044\131\331\162\210\016\377\261\132\001\125\271\215\136"
	"\101\340\063\376\166\013\305\307\377\323\122\105\153\244\372\374"
	"\116\267\111\330\356\260\146\256\174\051\226\103\211\253\012\311"
	"\364\301\206\235\366\154\111\272\373\346\041\334\332\360\057\237"
	"\005\043\213\050\131\274\022\237\236\163\102\271\041\026\134\141"
	"\277\103\053\243\175\133\326\166\010\247\103\222\275\360\010\263"
	"\246\117\232\041\117\225\261\054\066\332\313\354\036\035\103\353"
	"\024\171\344\225\241\007\352\264\114\266\140\365\120\345\143\312"
	"\040\372\307\200\155\257\301\140\351\367\225\147\203\160\246\023"
	"\061\043\251\073\217\073\334\131\300\164\376\337\200\272\076\111"
	"\016\317\360\274\143\365\107\302\144\154\150\122\076\013\360\322"
	"\057\143\171\114\301\161\257\054\352\271\062\156\260\076\320\222"
	"\013\056\366\210\176\150\360\343\352\375\277\301\001\362\017\373"
	"\305\074\364\311\125\155\331\226\223\201\011\330\203\243\115\004"
	"\231\031\113\212\262\301\360\171\163\045\072\213\275\321\052\112"
	"\342\365\110\064\273\107\262\332\045\040\110\142\353\314\202\057"
	"\172\323\230\247\031\064\276\225\342\213\223\066\170\070\133\015"
	"\205\012\100\256\335\315\346\365\150\256\305\004\366\212\366\075"
	"\255\261\105\166\036\111\171\264\240\117\157\031\053\254\007\004"
	"\152\314\372\254\220\333\355\061\222\341\026\202\042\163\107\074"
	"\000\256\371\040\231\115\027\324\025\161\250\274\123\236\104\223"
	"\112\154\240\332\015\061\152\051\067\271\236\153\130\237\364\127"
	"\257\077\040\247\270\375\354\115\020\360\225\165\077\322\041\122"
	"\152\233\271\377\201\132\256\201\056\213\073\210\150\207\301\046"
	"\232\035\217\023\204\311\140\137\270\237\162\000\250\134\202\017"
	"\015\362\333\153\141\003\055\213\327\345\037\355\231\162\121\365"
	"\130\352\136\076\212\260\355\321\055\150\220\031\376\037\031\146"
	"\053\133\041\026\234\305\371\345\040\310\347\145\212\317\256\007"
	"\053\126\041\131\105\046\326\231\310\201\042\031\101\260\234\221"
	"\312\056\233\274\275\131\257\060\101\107\162\075\171\001\225\005"
	"\357\267\336\146\356\225\114\212\141\343\053\041\135\273\312\163"
	"\360\105\172\153\346\226\030\173\013\325\027\224\100\144\302\271"
	"\237\356\376\140\075\107\001\213\221\364\021\041\177\314\311\207"
	"\375\205\354\155\142\041\147\056\165\112\105\365\114\163\074\043"
	"\320\004\031\347\260\006\215\356\013\034\242\037\121\322\023\063"
	"\256\364\130\166\040\033\201\030\100\351\330\250\000\210\310\340"
	"\350\003\275\374\156\021\350\206\061\131\325\132\322\070\357\141"
	"\352\207\221\253\076\033\231\261\246\377\216\347\046\304\023\305"
	"\205\064\375\267\227\107\232\116\107\305\134\004\161\360\110\020"
	"\303\173\267\262\240\317\162\234\253\352\145\112\206\175\331\231"
	"\015\316\234\171\245\113\034\100\015\106\044\302\072\214\144\007"
	"\227\265\072\204\263\201\110\376\324\136\355\265\113\212\377\377"
	"\257\326\175\366\363\071\217\011\277\104\041\143\034\327\323\250"
	"\255\226\316\075\010\016\341\165\100\165\242\103\126\134\074\351"
	"\255\336\062\013\231\223\171\173\324\042\223\345\270\257\306\037"
	"\337\347\101\013\312\023\256\213\050\163\324\206\341\361\112\374"
	"\121\261\270\251\170\245\326\066\013\350\153\247"
#define      msg2_z	19
#define      msg2	((&data[1338]))
	"\365\100\317\276\201\207\121\062\043\365\102\126\151\022\212\346"
	"\332\144\035\062\173\325"
#define      rlax_z	1
#define      rlax	((&data[1360]))
	"\054"
#define      tst2_z	19
#define      tst2	((&data[1364]))
	"\253\211\231\002\000\203\327\042\232\147\370\163\106\102\217\120"
	"\242\210\371\220\320\221\162\000"
#define      msg1_z	42
#define      msg1	((&data[1387]))
	"\167\045\130\316\245\355\347\024\125\272\064\056\355\247\020\303"
	"\247\255\217\306\346\233\147\175\173\006\151\067\001\024\310\064"
	"\311\377\055\105\160\373\002\273\175\273\305\157\253\216\355"/* End of data[] */;
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
