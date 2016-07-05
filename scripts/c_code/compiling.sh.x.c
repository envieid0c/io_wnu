#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f compiling.sh 
#endif

static  char data [] = 
#define      chk1_z	22
#define      chk1	((&data[0]))
	"\126\167\321\046\164\111\371\055\147\063\123\325\051\101\230\246"
	"\146\165\210\161\262\006\055\353\022\141"
#define      tst2_z	19
#define      tst2	((&data[28]))
	"\342\310\042\262\145\000\232\325\122\171\126\367\235\323\070\375"
	"\265\356\027\163\372\314\112\260\126"
#define      inlo_z	3
#define      inlo	((&data[51]))
	"\123\163\345"
#define      date_z	1
#define      date	((&data[54]))
	"\055"
#define      msg2_z	19
#define      msg2	((&data[55]))
	"\067\267\357\377\237\060\005\063\251\060\162\212\021\317\013\261"
	"\262\237\315\370\345\165\257"
#define      xecc_z	15
#define      xecc	((&data[78]))
	"\347\354\174\206\203\064\154\336\021\333\124\230\231\112\036\274"
	"\261"
#define      opts_z	1
#define      opts	((&data[95]))
	"\323"
#define      msg1_z	42
#define      msg1	((&data[98]))
	"\271\102\070\372\206\026\157\242\017\146\320\321\177\143\004\033"
	"\063\100\034\133\344\303\123\134\330\062\212\260\306\077\200\152"
	"\327\373\131\050\352\252\174\002\033\077\023\163\065\073\363\065"
	"\156\061\157\221\161\332"
#define      shll_z	10
#define      shll	((&data[151]))
	"\111\013\213\240\350\217\043\066\133\205\114\074"
#define      tst1_z	22
#define      tst1	((&data[166]))
	"\361\203\360\017\077\233\317\137\163\112\011\176\165\255\202\243"
	"\257\341\230\325\365\300\333\305\130\112\062\044\154"
#define      rlax_z	1
#define      rlax	((&data[191]))
	"\236"
#define      lsto_z	1
#define      lsto	((&data[192]))
	"\203"
#define      text_z	564
#define      text	((&data[222]))
	"\301\140\154\012\174\220\046\375\370\060\061\260\267\133\010\327"
	"\227\241\025\377\205\202\127\065\037\355\112\150\134\271\027\162"
	"\336\120\110\336\350\074\357\367\354\123\264\366\166\244\220\062"
	"\254\315\261\161\123\146\146\372\141\041\351\314\350\063\322\130"
	"\041\245\120\175\215\235\224\115\104\355\013\176\057\061\353\350"
	"\165\323\233\350\010\203\102\044\140\027\357\055\334\366\307\224"
	"\333\004\114\313\376\353\142\336\161\121\054\355\144\143\102\024"
	"\140\066\311\276\172\256\237\124\371\123\272\156\305\042\054\031"
	"\052\146\073\167\314\154\030\172\311\312\246\262\245\115\071\344"
	"\065\273\123\124\177\323\246\367\205\203\354\163\140\111\160\264"
	"\172\243\167\136\347\111\326\020\324\262\301\215\134\333\377\221"
	"\312\042\023\146\010\013\373\047\233\376\005\127\364\370\114\314"
	"\307\215\214\236\135\076\115\352\070\364\275\345\033\217\341\211"
	"\244\124\115\252\360\161\104\323\333\355\233\340\361\074\125\346"
	"\365\156\040\065\350\325\056\361\115\045\315\125\136\016\017\161"
	"\231\104\244\201\237\115\300\034\077\101\376\041\054\374\037\326"
	"\365\252\246\323\063\302\367\341\034\167\017\007\117\167\054\104"
	"\157\305\356\231\202\063\352\024\111\165\124\257\307\256\344\035"
	"\043\326\175\113\344\063\355\251\214\357\150\105\272\053\152\241"
	"\033\023\152\030\315\273\053\270\307\327\340\025\143\136\010\226"
	"\024\266\171\257\000\101\220\153\153\037\107\300\121\143\340\041"
	"\026\071\016\257\257\067\330\155\050\275\316\271\065\007\304\347"
	"\303\020\144\306\137\060\033\302\204\245\136\231\042\360\010\261"
	"\016\322\201\132\222\201\274\177\026\037\263\214\213\371\127\305"
	"\320\356\215\121\357\254\120\113\142\352\107\205\373\122\374\037"
	"\020\033\166\206\256\323\157\263\060\277\233\142\144\366\141\127"
	"\043\254\130\166\250\015\203\200\273\250\364\003\361\107\352\263"
	"\251\261\131\313\126\335\270\173\047\352\151\121\300\176\247\257"
	"\042\336\022\060\171\204\334\242\141\170\142\044\016\314\054\121"
	"\253\163\271\345\252\270\345\313\321\012\317\054\014\145\225\030"
	"\213\132\371\376\076\137\375\016\011\111\055\056\114\017\127\202"
	"\000\103\272\045\035\121\276\131\220\170\024\244\126\307\362\013"
	"\352\172\377\117\055\263\376\321\212\273\370\254\274\103\241\110"
	"\011\332\300\076\267\106\341\310\071\067\076\333\122\044\254\172"
	"\027\162\312\126\261\216\254\345\345\234\233\366\226\322\172\227"
	"\013\366\376\130\353\237\126\017\121\227\124\226\236\034\142\272"
	"\265\062\267\044\320\301\017\371\246\353\163\313\153\255\246\107"
	"\102\120\226"
#define      pswd_z	256
#define      pswd	((&data[822]))
	"\064\316\340\036\042\106\346\074\101\367\242\361\137\373\221\053"
	"\366\162\034\250\226\343\057\205\237\373\255\035\201\205\217\353"
	"\146\200\131\364\034\103\231\075\310\217\365\374\215\167\144\076"
	"\146\036\316\155\206\364\171\336\170\200\175\226\137\243\345\313"
	"\305\340\206\361\374\175\300\221\010\025\272\161\320\142\042\105"
	"\331\077\031\217\373\237\065\306\364\340\217\074\340\342\317\232"
	"\003\334\066\233\340\107\116\227\301\101\107\260\243\072\045\104"
	"\052\012\177\145\262\051\312\031\136\334\057\225\070\267\121\211"
	"\262\034\312\111\362\232\270\010\106\277\216\234\155\237\304\315"
	"\350\365\262\001\057\336\116\173\257\362\363\301\042\365\112\140"
	"\050\345\146\172\140\006\116\135\050\245\142\143\323\055\351\266"
	"\336\304\056\231\342\312\061\350\227\115\301\154\317\350\216\174"
	"\004\061\157\240\330\035\323\127\106\122\345\016\243\316\231\077"
	"\104\257\350\011\126\342\270\004\216\270\252\206\111\214\045\222"
	"\264\324\033\126\316\151\324\044\260\274\130\057\126\000\260\122"
	"\202\250\311\072\027\170\340\227\034\377\355\104\045\144\023\177"
	"\146\050\051\030\221\121\362\241\337\221\027\264\352\367\235\162"
	"\263\004\300\117\320\333\205\032\243\054\133\031\245\142\307\142"
	"\033\224\001\054\333\035\074\001\332\252\060\263\113\140\270\212"
	"\314\204\136\035\071\364\074\055\223\237\214\070\004\172\300\333"
	"\013\065\124\073\340\146\243\274\127\004\004\323\036\250"
#define      chk2_z	19
#define      chk2	((&data[1125]))
	"\270\304\151\141\377\343\365\335\340\116\141\075\135\054\060\127"
	"\172\053\242\343\245\116"/* End of data[] */;
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
