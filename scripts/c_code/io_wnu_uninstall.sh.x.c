#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f io_wnu_uninstall.sh 
#endif

static  char data [] = 
#define      chk2_z	19
#define      chk2	((&data[1]))
	"\176\344\047\070\146\335\116\110\365\126\136\266\006\105\315\157"
	"\227\011\362\260"
#define      chk1_z	22
#define      chk1	((&data[21]))
	"\334\276\121\334\336\357\027\357\344\136\001\045\353\144\177\252"
	"\316\176\167\224\374\030\302\220\141\063\001"
#define      date_z	1
#define      date	((&data[47]))
	"\110"
#define      xecc_z	15
#define      xecc	((&data[50]))
	"\013\221\250\031\223\122\177\061\150\022\265\113\305\365\221\200"
	"\063\047\272"
#define      rlax_z	1
#define      rlax	((&data[67]))
	"\333"
#define      shll_z	10
#define      shll	((&data[70]))
	"\145\033\301\210\200\204\142\235\307\235\327\116"
#define      msg1_z	42
#define      msg1	((&data[81]))
	"\244\125\146\371\217\067\116\333\014\116\300\043\206\277\363\174"
	"\245\364\016\027\131\253\206\133\361\265\306\144\310\065\033\354"
	"\030\311\370\173\312\304\202\321\343\274\205\001\300\121\133"
#define      pswd_z	256
#define      pswd	((&data[187]))
	"\267\242\061\357\114\166\336\064\305\304\246\245\264\247\371\232"
	"\021\102\252\176\157\072\134\065\304\335\253\042\103\347\337\046"
	"\015\102\060\015\100\034\342\231\101\271\102\077\102\021\255\321"
	"\363\170\252\172\201\217\131\036\155\352\305\045\242\141\007\121"
	"\262\037\046\034\061\015\031\166\204\153\355\306\005\044\357\253"
	"\323\301\360\351\366\213\353\310\074\216\107\127\301\221\205\341"
	"\254\276\140\252\343\150\256\222\020\117\114\024\003\221\221\001"
	"\275\203\331\352\053\224\364\175\141\161\173\354\332\100\074\016"
	"\122\104\362\017\013\076\002\335\246\021\310\154\075\214\077\057"
	"\214\216\026\264\174\333\133\353\164\126\317\331\276\223\227\367"
	"\251\317\043\111\370\260\327\241\000\023\360\054\200\364\025\141"
	"\165\316\254\006\025\352\040\115\327\254\247\016\100\106\056\223"
	"\273\023\274\245\171\000\100\053\202\175\160\333\222\043\347\142"
	"\064\026\044\261\026\232\277\146\244\312\027\331\304\306\223\067"
	"\326\245\017\250\323\307\137\327\272\273\134\107\277\073\065\171"
	"\256\130\217\033\071\223\106\071\166\351\005\274\152\156\141\025"
	"\304\263\301\035\167\335\104\252\222\240\337\244\016\363\027\174"
	"\256\371\317\335\032\074\145\035\004\352\073\372\135\330\257\222"
	"\304\205\270\145\163\132\112\163\370\264\326\053\064\274\224\173"
	"\212\244\212\144\046\060\104\123\205\032\154\222"
#define      msg2_z	19
#define      msg2	((&data[444]))
	"\277\311\307\157\127\363\132\164\026\324\236\135\056\035\372\161"
	"\222\204\075\332\212\377\255"
#define      lsto_z	1
#define      lsto	((&data[466]))
	"\351"
#define      tst2_z	19
#define      tst2	((&data[471]))
	"\173\002\106\245\347\202\165\203\223\304\030\256\230\305\034\360"
	"\332\332\277\211\302\373\212\021\376\200\063"
#define      opts_z	1
#define      opts	((&data[494]))
	"\106"
#define      text_z	1100
#define      text	((&data[501]))
	"\345\071\205\253\273\367\271\335\066\172\314\152\161\354\344\336"
	"\034\017\242\144\220\123\064\221\361\175\202\354\241\250\164\145"
	"\212\256\271\175\224\072\041\243\122\361\032\272\117\321\137\112"
	"\173\366\046\227\227\360\055\324\055\072\263\204\033\343\162\070"
	"\342\102\371\026\360\152\134\163\352\213\314\115\224\163\257\011"
	"\275\006\125\332\145\305\213\116\163\064\326\327\347\361\375\122"
	"\370\137\367\323\330\041\021\015\176\167\227\354\221\077\304\225"
	"\003\326\142\003\004\303\342\156\222\075\103\316\317\377\135\260"
	"\131\101\057\027\111\006\340\330\276\271\054\145\013\040\344\062"
	"\113\266\035\165\237\006\123\307\344\131\275\373\213\313\040\026"
	"\226\367\152\252\004\060\066\037\250\013\051\305\074\047\362\115"
	"\336\014\227\163\356\252\124\165\313\262\067\030\025\036\134\323"
	"\221\047\020\000\056\262\307\046\173\365\336\312\256\042\227\230"
	"\030\347\136\342\000\223\260\073\011\373\174\173\364\072\150\345"
	"\035\073\315\203\164\321\345\267\110\152\205\071\372\271\032\271"
	"\374\161\224\220\145\113\272\133\062\134\025\150\305\257\365\055"
	"\165\012\057\311\357\142\154\064\321\365\041\335\203\036\066\150"
	"\002\357\164\364\301\174\354\230\026\021\205\307\004\075\062\050"
	"\200\223\042\276\201\106\246\015\342\205\323\212\357\111\120\101"
	"\205\322\173\040\043\305\050\373\002\213\344\364\320\074\031\356"
	"\336\251\256\341\056\244\007\054\330\312\252\117\173\035\020\322"
	"\204\014\056\135\352\044\354\262\020\206\356\113\070\351\265\054"
	"\027\210\046\067\036\360\235\025\302\103\133\073\214\176\034\340"
	"\373\056\115\062\103\066\063\221\300\255\235\100\104\021\011\367"
	"\223\017\374\034\105\263\004\101\151\142\247\033\216\330\125\025"
	"\350\261\043\304\030\022\044\173\327\070\272\274\061\146\227\237"
	"\323\126\304\273\351\037\313\022\113\313\250\115\036\215\017\003"
	"\074\372\357\253\126\076\033\213\005\253\142\017\275\332\201\104"
	"\011\223\355\255\366\237\154\157\350\233\057\202\070\146\076\364"
	"\253\353\035\063\237\076\006\121\373\053\041\036\354\326\340\370"
	"\152\203\113\243\230\253\311\235\274\234\054\177\145\100\000\351"
	"\166\105\027\054\043\167\006\070\371\053\120\027\160\131\362\207"
	"\063\125\175\350\246\315\311\175\205\234\335\326\343\116\034\270"
	"\212\227\063\264\256\012\106\217\034\157\372\234\324\221\243\340"
	"\000\032\266\354\220\071\047\026\326\134\043\116\124\312\157\022"
	"\072\366\145\257\062\100\177\006\211\213\130\212\207\314\077\040"
	"\071\232\047\320\317\257\342\145\310\174\233\115\324\371\366\112"
	"\162\141\145\017\315\325\014\134\371\033\002\051\355\336\160\245"
	"\020\062\165\371\374\334\177\115\062\051\325\225\241\153\337\377"
	"\167\102\007\110\273\107\066\150\051\330\166\320\112\036\026\232"
	"\163\365\050\110\062\134\227\226\244\246\267\103\337\074\162\262"
	"\066\077\177\163\327\254\331\147\276\104\214\003\252\260\220\307"
	"\371\267\367\357\302\145\076\171\150\332\163\273\327\024\306\274"
	"\063\337\045\044\121\377\075\335\061\161\045\304\376\232\006\260"
	"\011\337\140\257\122\077\050\333\232\003\046\245\153\226\253\174"
	"\321\311\052\320\312\232\010\112\050\054\237\335\072\264\100\022"
	"\232\115\375\352\365\142\324\220\272\224\250\043\040\334\231\151"
	"\355\313\334\276\320\374\314\332\152\125\000\077\344\163\343\335"
	"\134\146\164\343\103\101\362\344\173\127\371\321\323\212\346\061"
	"\035\043\241\020\012\050\043\205\163\142\062\043\026\302\075\316"
	"\137\071\366\364\253\261\207\015\260\264\361\335\056\201\357\271"
	"\270\377\371\221\176\144\253\257\234\351\240\157\115\070\311\061"
	"\051\340\240\231\310\306\154\351\143\335\032\062\007\336\172\165"
	"\341\324\070\336\154\346\104\104\175\007\132\222\012\347\344\352"
	"\310\276\153\011\334\265\073\116\107\352\027\320\034\357\166\163"
	"\335\232\157\100\202\230\042\235\103\361\041\124\377\260\277\110"
	"\053\076\363\043\207\324\065\206\144\266\062\122\332\317\244\112"
	"\037\222\311\273\170\153\240\032\167\076\073\357\053\064\355\144"
	"\225\362\316\120\312\015\264\237\012\255\021\105\226\372\104\022"
	"\344\256\351\276\122\333\241\141\265\024\246\125\240\015\050\327"
	"\170\110\106\162\113\247\376\127\370\374\252\372\224\030\123\254"
	"\222\315\374\147\047\247\073\000\051\245\044\017\035\043\254\306"
	"\040\136\132\316\324\070\312\141\166\104\153\136\277\346\355\042"
	"\276\154\176\034\043\306\276\036\357\322\121\155\264\221\013\103"
	"\112\316\375\177\301\361\245\306\071\073\216\016\045\275\065\013"
	"\050\130\157\370\262\377\227\272\247\163\146\314\212\056\140\057"
	"\115\201\016\023\054\114\061\275\051\320\110\253\247\117\177\003"
	"\030\201\310\116\271\076\042\147\017\307\005\230\375\221\043\025"
	"\356\033\031\232\351\345\365\047\142\333\210\036\125\066\357\201"
	"\103\052\243\222\064\212\277\157\213\374\112\211\357\057\217\100"
#define      tst1_z	22
#define      tst1	((&data[1616]))
	"\000\371\155\337\372\101\333\116\134\162\037\224\134\052\154\347"
	"\336\012\335\175\164\173\124\261\260\360\332"
#define      inlo_z	3
#define      inlo	((&data[1642]))
	"\324\361\355"/* End of data[] */;
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
