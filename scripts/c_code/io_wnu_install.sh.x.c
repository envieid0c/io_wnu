#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f io_wnu_install.sh 
#endif

static  char data [] = 
#define      lsto_z	1
#define      lsto	((&data[0]))
	"\340"
#define      pswd_z	256
#define      pswd	((&data[29]))
	"\131\164\047\161\023\364\125\041\174\321\220\065\302\215\132\135"
	"\024\377\305\100\137\076\014\021\350\264\222\275\225\224\260\312"
	"\213\113\173\071\137\320\064\007\033\201\250\166\217\325\237\171"
	"\002\042\327\230\102\020\004\147\204\367\246\065\142\013\330\207"
	"\345\357\107\060\102\372\064\204\376\151\127\176\363\047\074\321"
	"\020\205\244\200\111\001\342\364\103\065\107\030\237\255\310\207"
	"\103\044\244\320\106\332\140\364\261\277\113\341\070\261\155\041"
	"\317\317\161\207\053\001\314\166\116\244\061\150\247\202\224\133"
	"\256\120\207\214\161\113\176\007\152\347\103\206\032\144\073\270"
	"\326\051\067\305\316\026\276\056\067\162\244\335\020\230\024\326"
	"\064\124\040\015\274\203\121\173\270\175\155\052\003\221\075\345"
	"\001\241\015\015\265\100\162\204\242\206\026\367\256\153\057\041"
	"\007\306\002\237\247\264\362\334\150\227\174\314\071\052\256\251"
	"\251\366\307\141\112\366\162\031\333\136\313\304\275\032\154\041"
	"\071\076\201\113\327\136\235\152\062\271\020\017\071\240\115\070"
	"\236\126\051\022\065\123\157\141\157\240\363\374\250\172\316\014"
	"\313\376\014\270\122\206\055\274\156\372\160\017\142\315\264\114"
	"\112\137\213\246\373\026\071\132\230\334\235\043\125\367\111\345"
	"\270\114"
#define      msg1_z	42
#define      msg1	((&data[299]))
	"\273\366\022\021\266\261\343\100\313\357\270\161\344\171\304\156"
	"\347\056\005\332\264\306\104\311\263\042\053\177\163\207\371\065"
	"\014\333\011\351\327\373\071\017\146\216\037\120\037\200\207\015"
	"\040\261\215\105"
#define      rlax_z	1
#define      rlax	((&data[343]))
	"\322"
#define      opts_z	1
#define      opts	((&data[344]))
	"\327"
#define      text_z	3190
#define      text	((&data[745]))
	"\161\041\021\021\141\146\215\307\157\233\306\161\154\200\177\314"
	"\145\222\315\165\124\333\171\072\337\310\063\133\007\102\172\333"
	"\216\160\252\033\241\330\324\114\150\046\022\364\276\243\151\346"
	"\366\052\137\046\227\055\022\226\307\105\322\076\030\177\163\207"
	"\275\215\274\121\115\242\231\011\065\342\261\163\036\140\115\132"
	"\021\000\242\251\112\154\112\275\175\340\241\027\154\214\342\013"
	"\326\163\354\233\064\374\011\204\043\025\332\154\301\163\341\134"
	"\244\036\046\301\053\134\221\345\056\124\052\252\227\372\202\226"
	"\357\143\271\255\052\202\020\051\040\264\352\364\242\306\253\130"
	"\152\273\064\217\204\344\240\357\202\056\323\265\155\201\343\150"
	"\345\254\273\144\201\276\203\176\327\133\277\264\156\206\174\261"
	"\156\160\015\001\166\215\032\207\151\315\265\334\373\012\207\146"
	"\012\063\054\144\142\313\026\027\147\075\066\277\112\273\043\005"
	"\317\363\214\261\066\120\013\064\057\222\024\365\223\077\376\244"
	"\315\074\006\142\075\146\166\230\215\374\150\004\300\020\343\335"
	"\331\122\036\270\117\225\041\310\000\036\342\210\076\363\004\026"
	"\277\226\236\261\333\013\031\130\012\063\107\174\256\231\050\263"
	"\155\343\326\375\304\065\153\245\342\326\034\306\222\050\041\337"
	"\301\154\330\041\251\270\312\157\123\223\273\353\335\326\171\350"
	"\012\145\172\042\310\062\107\050\156\364\025\305\247\177\243\372"
	"\321\076\254\147\365\063\120\323\035\221\247\133\130\301\150\243"
	"\334\055\235\253\234\140\341\340\316\215\305\363\152\225\130\350"
	"\264\327\234\247\021\055\332\153\200\164\073\026\035\043\245\064"
	"\120\121\210\354\231\065\127\053\173\224\272\017\037\063\247\356"
	"\165\070\121\241\215\040\036\010\145\223\021\034\121\101\152\132"
	"\254\343\137\004\021\374\052\321\256\352\334\027\117\104\167\074"
	"\373\201\220\216\202\120\322\006\206\032\020\265\165\371\112\351"
	"\113\270\235\316\161\026\377\310\357\126\040\150\360\060\151\101"
	"\265\061\325\375\005\001\164\075\360\124\124\304\357\203\320\043"
	"\325\024\207\323\153\216\147\261\260\071\135\136\226\037\052\142"
	"\274\314\026\062\015\256\323\335\072\161\317\336\065\003\334\176"
	"\303\061\132\043\121\364\332\351\133\156\143\317\273\322\206\334"
	"\371\361\235\007\343\273\004\241\131\125\241\356\122\366\047\315"
	"\042\244\302\055\254\344\306\130\025\225\111\213\133\235\345\241"
	"\071\342\045\006\137\032\054\206\324\002\150\326\027\131\073\335"
	"\354\110\103\275\151\233\045\217\134\011\021\151\014\204\351\003"
	"\137\106\167\177\300\170\161\341\000\005\077\357\014\134\372\300"
	"\243\340\252\367\154\133\036\214\130\102\303\131\256\376\240\115"
	"\325\002\122\221\266\142\054\165\303\352\107\306\332\176\203\004"
	"\275\111\047\061\310\207\143\147\235\244\035\372\162\266\013\143"
	"\047\207\062\274\162\324\057\166\025\053\167\147\121\327\271\060"
	"\153\057\121\131\350\136\306\242\105\221\051\052\362\224\036\176"
	"\325\301\130\372\037\006\353\036\306\105\370\170\162\366\262\102"
	"\236\067\372\317\155\057\135\220\000\120\360\052\051\164\346\070"
	"\115\361\246\356\255\265\166\236\052\121\226\342\033\250\130\131"
	"\124\310\204\120\061\341\203\237\271\323\061\106\365\246\141\362"
	"\107\277\122\364\366\342\065\014\261\100\150\323\226\244\062\315"
	"\141\160\314\316\352\376\034\101\107\342\267\350\253\144\333\106"
	"\136\070\263\337\000\372\014\122\134\143\023\151\146\163\036\254"
	"\116\151\203\340\132\023\371\365\146\375\005\144\163\150\041\266"
	"\037\303\011\023\211\023\326\060\363\375\055\274\243\273\363\340"
	"\116\175\142\054\351\344\216\001\002\335\066\212\055\375\363\072"
	"\325\047\351\330\210\335\064\270\222\052\033\016\256\073\004\337"
	"\260\037\026\116\325\202\265\363\024\062\053\253\022\367\020\044"
	"\330\005\325\315\307\142\320\257\247\275\153\151\211\026\337\213"
	"\324\266\373\267\332\221\031\245\000\136\327\166\230\057\257\177"
	"\263\037\173\042\311\326\121\154\142\357\007\153\057\373\267\074"
	"\010\342\251\163\336\037\354\006\001\000\315\120\006\255\100\373"
	"\001\137\003\365\262\161\221\171\212\354\056\102\222\312\344\036"
	"\304\141\223\213\155\044\321\164\327\075\177\120\106\065\151\073"
	"\120\157\013\030\012\051\136\056\056\153\011\161\152\174\350\260"
	"\044\243\364\111\342\357\055\336\362\317\217\141\250\356\040\346"
	"\141\266\237\251\172\335\105\054\051\313\157\316\362\022\136\367"
	"\002\236\160\110\052\261\251\117\114\305\360\340\102\250\371\256"
	"\343\242\305\026\132\002\322\226\305\202\130\102\110\356\223\323"
	"\213\117\334\346\332\135\350\352\075\073\061\177\205\362\231\140"
	"\115\260\002\054\330\013\336\016\142\370\315\234\152\334\035\031"
	"\213\135\214\165\006\017\064\233\066\316\265\013\370\205\031\277"
	"\207\163\310\310\263\276\102\034\173\055\076\276\350\362\211\352"
	"\306\101\177\026\076\174\254\363\223\002\272\201\302\236\247\372"
	"\335\116\224\032\305\103\104\245\303\000\240\170\103\313\077\216"
	"\063\367\031\337\266\166\350\247\044\112\245\343\205\325\073\313"
	"\146\346\136\020\333\337\246\211\072\175\203\157\165\056\366\030"
	"\115\010\167\201\072\377\127\363\333\351\036\061\121\127\273\231"
	"\246\142\116\320\072\303\312\230\017\277\206\307\063\302\144\023"
	"\045\067\015\150\246\223\006\051\223\305\267\124\327\101\072\011"
	"\054\011\051\046\213\375\266\014\255\255\354\126\164\241\051\324"
	"\115\177\011\150\312\004\353\325\014\105\157\224\214\304\061\006"
	"\215\014\011\050\163\336\242\365\315\062\003\343\105\177\001\061"
	"\310\327\302\362\256\257\125\354\037\016\017\002\330\311\272\052"
	"\020\104\161\072\041\043\054\307\315\017\007\156\065\233\075\220"
	"\326\215\213\235\132\224\010\160\120\170\113\135\305\030\232\335"
	"\014\273\154\063\120\023\210\320\347\063\022\142\202\370\323\303"
	"\355\220\330\015\342\130\265\076\041\136\051\356\336\174\120\061"
	"\365\124\161\334\131\277\351\065\021\000\233\152\104\074\157\360"
	"\106\330\115\074\200\271\264\174\123\060\047\004\247\167\320\020"
	"\262\013\124\026\352\071\125\233\272\204\127\023\263\156\333\066"
	"\222\010\271\113\063\320\265\341\113\162\333\240\235\107\224\342"
	"\173\015\164\115\300\167\203\252\111\145\010\030\277\241\173\264"
	"\260\262\051\062\075\273\061\015\027\230\065\263\165\261\115\035"
	"\023\102\001\143\264\032\343\251\112\207\266\140\052\122\317\120"
	"\221\053\271\335\116\256\070\026\312\122\046\362\237\325\367\162"
	"\365\114\067\062\362\041\341\114\054\162\171\206\252\374\273\367"
	"\032\350\321\211\217\300\220\215\106\157\106\126\043\222\213\035"
	"\320\062\124\215\344\002\252\171\040\057\300\372\264\142\123\242"
	"\115\106\252\300\266\335\201\224\333\172\065\314\236\245\276\337"
	"\037\221\120\351\140\261\364\005\227\054\300\141\345\171\220\260"
	"\001\370\364\125\116\371\300\002\213\011\300\104\115\260\162\257"
	"\046\310\261\177\075\333\243\227\345\167\150\011\333\323\233\236"
	"\073\277\307\160\152\177\156\245\022\055\205\120\003\065\246\143"
	"\107\073\376\065\073\137\277\207\224\333\231\020\154\070\104\327"
	"\256\131\002\362\174\142\026\023\302\176\364\027\214\215\145\102"
	"\270\333\307\106\033\215\361\110\142\260\012\077\261\004\001\064"
	"\176\051\333\115\061\346\374\267\223\313\242\251\217\000\056\166"
	"\173\053\001\240\265\254\210\242\134\133\076\317\065\040\305\133"
	"\262\145\067\034\254\164\210\227\134\134\107\366\363\230\047\047"
	"\266\052\374\012\330\014\276\076\141\225\102\044\063\112\360\125"
	"\053\312\256\263\275\217\364\306\176\121\150\347\315\114\247\040"
	"\321\364\071\244\001\044\130\243\201\315\005\162\362\252\105\211"
	"\067\261\140\225\321\330\233\210\060\122\134\042\204\174\335\263"
	"\172\174\376\062\245\025\041\321\021\314\132\336\030\020\047\370"
	"\361\013\126\241\154\033\102\160\240\157\261\157\111\060\162\247"
	"\100\340\236\350\260\101\107\272\205\001\077\202\215\072\037\261"
	"\246\335\206\144\202\223\125\304\345\147\377\243\226\352\046\235"
	"\337\237\024\360\206\277\124\236\242\131\225\070\031\045\023\231"
	"\320\172\076\170\326\060\141\307\010\362\246\241\337\072\060\133"
	"\200\214\357\023\017\331\210\241\130\115\322\003\103\016\052\306"
	"\377\007\113\134\207\320\200\165\232\242\373\324\160\254\221\300"
	"\332\303\027\260\002\162\224\170\177\133\147\026\155\344\176\143"
	"\044\354\104\324\167\017\043\352\140\222\011\365\116\312\350\002"
	"\277\274\111\263\024\021\217\154\022\047\365\016\160\054\306\345"
	"\027\012\305\002\230\244\277\102\360\170\233\016\076\026\253\262"
	"\155\025\157\025\014\326\015\165\213\242\012\131\163\252\337\036"
	"\175\104\257\202\002\277\051\172\011\333\366\202\355\147\156\275"
	"\101\206\005\035\143\266\215\067\224\011\053\356\377\040\045\145"
	"\305\273\376\316\241\243\370\370\336\361\065\213\263\226\035\056"
	"\320\326\370\357\011\040\324\036\376\170\334\177\025\014\356\356"
	"\162\134\205\230\037\112\116\160\106\257\120\251\307\261\336\317"
	"\243\121\325\045\034\112\244\051\122\272\264\316\257\007\351\370"
	"\025\037\143\015\367\127\277\327\134\111\330\003\157\040\333\226"
	"\016\276\073\221\162\030\116\275\074\204\336\343\300\001\136\261"
	"\020\205\164\324\010\364\336\001\220\243\033\123\306\271\014\304"
	"\352\135\270\006\311\104\000\202\144\324\246\222\177\033\315\366"
	"\340\253\315\242\120\177\062\145\114\024\150\340\011\316\062\326"
	"\037\076\226\257\245\241\233\272\324\127\213\024\306\175\221\127"
	"\113\225\057\324\062\033\176\166\225\021\056\007\156\335\306\224"
	"\277\224\267\215\100\214\071\306\173\072\337\263\372\124\320\011"
	"\123\226\163\137\232\116\143\332\075\234\374\174\316\336\002\227"
	"\214\212\060\160\160\047\272\331\006\110\257\113\367\014\303\057"
	"\053\355\021\231\241\100\360\202\317\174\134\241\307\003\164\232"
	"\213\123\001\162\317\232\203\317\243\021\070\205\110\323\252\331"
	"\241\037\374\216\337\226\117\166\006\055\237\142\056\033\042\203"
	"\334\324\353\226\130\370\312\041\120\312\171\063\032\147\132\044"
	"\316\234\274\043\104\244\057\200\004\133\044\275\116\265\123\177"
	"\154\253\154\151\042\155\037\215\051\053\241\131\356\046\024\025"
	"\213\207\102\123\107\333\044\242\012\057\106\002\254\035\045\345"
	"\063\134\164\346\104\300\171\205\203\177\315\154\276\131\375\131"
	"\166\202\265\010\022\374\377\026\365\224\276\150\105\312\130\360"
	"\305\005\217\252\125\260\135\136\352\250\112\262\253\255\102\207"
	"\152\136\327\031\301\306\316\324\247\262\115\317\154\340\205\210"
	"\322\024\365\007\357\030\077\335\172\005\000\101\062\101\056\373"
	"\267\063\156\047\321\254\124\120\346\254\102\333\113\302\354\144"
	"\235\226\054\362\211\062\272\130\115\107\323\076\206\347\021\150"
	"\067\243\221\114\306\011\100\220\203\236\032\025\332\233\107\263"
	"\201\067\002\101\050\254\273\273\244\043\261\113\376\275\233\065"
	"\154\254\213\015\234\007\130\211\316\066\355\012\071\224\376\040"
	"\232\202\272\122\346\145\370\150\322\043\006\214\173\322\164\174"
	"\170\106\112\314\345\261\066\050\224\360\341\151\265\210\154\162"
	"\313\262\273\351\267\327\311\060\037\247\056\132\340\140\316\125"
	"\040\355\177\225\127\070\276\330\270\342\105\052\151\160\353\373"
	"\107\217\111\010\044\046\104\213\017\140\062\307\332\370\332\376"
	"\032\367\123\030\240\054\176\275\132\115\124\067\322\142\306\302"
	"\360\341\126\202\000\363\173\225\306\133\344\076\264\047\334\140"
	"\073\174\032\224\252\251\317\364\277\063\105\223\046\217\356\046"
	"\251\130\333\335\126\047\117\062\042\016\230\161\125\153\265\013"
	"\036\043\374\113\032\066\125\046\321\271\317\124\224\144\212\267"
	"\233\162\261\306\013\043\256\076\244\065\157\354\267\040\112\164"
	"\347\135\134\132\035\047\107\174\223\030\016\324\341\042\341\242"
	"\007\101\023\073\277\000\315\274\220\276\352\174\260\336\071\365"
	"\305\363\067\307\266\251\376\067\053\270\201\157\011\011\072\116"
	"\151\005\337\265\237\143\061\055\012\176\335\236\107\065\251\170"
	"\226\200\176\271\076\137\120\355\043\177\067\316\027\365\040\062"
	"\331\140\033\131\060\124\152\203\375\046\206\302\273\267\327\107"
	"\036\060\144\140\024\123\152\167\051\157\166\105\301\344\344\105"
	"\375\344\250\162\351\152\267\373\365\313\005\360\104\300\123\043"
	"\077\146\012\116\024\045\163\142\017\273\325\176\116\160\156\156"
	"\110\246\336\157\237\135\130\101\323\203\023\172\171\334\045\222"
	"\253\365\151\255\361\320\200\307\360\107\205\275\333\034\073\114"
	"\324\250\015\164\127\116\277\076\065\264\241\001\310\117\157\046"
	"\204\172\275\145\316\062\101\022\016\352\043\175\101\043\000\234"
	"\064\214\324\017\047\313\203\247\220\041\170\340\304\274\074\322"
	"\030\221\324\103\072\332\206\317\300\347\265\277\060\036\204\136"
	"\226\306\343\027\103\376\241\061\137\046\356\061\115\155\206\151"
	"\017\012\042\310\324\214\217\277\171\147\152\152\125\276\151\373"
	"\370\320\171\345\257\033\242\172\131\271\262\074\135\005\176\230"
	"\355\226\047\071\057\374\263\312\146\022\224\315\312\245\075\305"
	"\256\213\343\100\250\113\107\236\212\261\100\136\365\236\265\230"
	"\145\236\276\010\255\025\063\256\204\111\076\224\230\322\054\040"
	"\364\373\037\102\012\262\151\255\040\340\205\322\262\051\254\031"
	"\161\173\350\105\010\170\111\353\116\167\056\165\050\365\302\277"
	"\153\160\261\113\133\311\134\135\162\043\160\277\162\264\364\302"
	"\031\114\342\202\330\312\044\361\267\072\331\247\007\051\375\240"
	"\326\214\132\064\047\374\243\275\143\321\114\273\173\214\066\273"
	"\214\364\242\062\126\040\303\363\155\121\123\247\277\353\302\032"
	"\155\032\374\214\351\255\376\347\064\277\023\013\311\261\062\147"
	"\017\351\324\164\363\376\161\275\262\146\364\130\271\216\030\211"
	"\245\154\025\306\154\231\267\021\071\111\032\130\346\221\376\175"
	"\276\302\256\203\217\214\310\025\261\007\344\101\262\142\324\006"
	"\042\344\063\156\210\106\141\221\355\044\370\233\024\224\173\133"
	"\016\011\004\124\113\362\063\201\200\322\345\001\265\212\030\016"
	"\034\133\227\060\132\334\261\304\324\117\221\240\324\323\157\201"
	"\351\006\263\153\010\264\271\275\274\140\160\167\146\042\165\040"
	"\127\147\347\232\071\262\000\311\366\010\140\263\043\340\347\026"
	"\237\101\100\050\040\110\023\136\152\354\154\267\352\172\075\063"
	"\220\267\153\211\264\165\061\057\143\337\356\317\130\352\170\143"
	"\213\275\112\017\360\267\045\214\004\316\146\160\167\265\254\142"
	"\272\020\164\104\146\211\273\023\157\327\250\225\334\230\033\256"
	"\322\211\254\326\207\217\267\011\311\302\210\145\162\234\333\236"
	"\134\022\302\065\076\155\112\217\316\265\366\202\215\141\343\234"
	"\042\237\276\057\275\336\147\275\371\354\026\320\374\016\221\225"
	"\143\357\121\137\233\154\314\057\346\370\025\163\164\012\103\250"
	"\115\047\140\370\176\377\327\340\134\122\320\045\005\056\061\363"
	"\063\153\024\010\356\153\327\375\016\127\133\302\043\216\166\334"
	"\104\325\077\343\141\343\171\305\220\136\102\171\062\125\302\016"
	"\113\156\123\101\323\117\343\374\112\125\067\200\110\240\367\242"
	"\331\032\072\150\003\162\211\025\106\242\011\253\222\110\235\352"
	"\070\365\161\104\137\347\214\300\171\374\204\161\150\257\054\244"
	"\361\370\106\047\227\077\357\065\054\316\202\137\326\346\210\146"
	"\041\071\321\147\146\257\232\201\251\116\367\202\172\226\172\042"
	"\330\340\202\000\357\335\132\256\060\106\261\362\034\213\251\036"
	"\200\102\021\177\303\376\175\313\142\270\161\215\236\373\327\015"
	"\013\331\304\205\342\106\322\114\317\232\312\007\135\014\357\237"
	"\375\237\273\064\175\326\272\203\202\220\117\075\112\331\314\100"
	"\335\336\221\252\121\206\271\232\221\221\273\114\115\131\066\231"
	"\046\155\365\137\110\264\262\065\244\077\134\271\035\072\053\327"
	"\042\251\111\267\102\170\055\313\235\171\034\075\336\073\271\111"
	"\063\322\040\342\354\256\266\264\010\061\323\145\135\051\360\326"
	"\362\115\130\043\130\360\377\237\023\103\056\343\277\046\214\110"
	"\042\036\025\106\372\346\013\341\261\071\256\343\135\174\330\264"
	"\363\037\124\133\147\245\251\065\231\314\170\106\055\201\034\210"
	"\157\346\345\150\313\160\060\357\045\237\325\012\273\274\032\144"
	"\212\034\063\226\327\100\137\105\027\231\227\033\366\316\016\057"
	"\112\027\145\165\040\260\321\006\365\310\225\337\311\377\250\002"
	"\117\262\147\377\355\245\227\064\245\054\150\246\267\117\164\302"
	"\112\247\061\020\023\201\123\321\171\006\073\343\161\154\075\206"
	"\354\255\130\204\303\077\322\216\077\066\045\303\220\365\051\355"
	"\106\156\040\004\023\374\270\120\252\112\034\206\057\313\005\144"
	"\064\262\361\114\233\367\324\377\240\161\312\365\264\311\333\157"
	"\156\247\010\116\062\100\026\306\137\263\346\113\265\012\172\354"
	"\201\025\162\050\113\364\272\075\377\057\364\377\373\204\127\307"
	"\131\002\333\022\041\201\215\136\144\274\275\104\105\074\243\171"
	"\220\110\333\263\242\174\234\001\270\017\331\014\235\074\244\172"
	"\354\340\103\247\343\027\326\027\165\053\333\201\203\237\373\117"
	"\305\256\315\267\206\315\046\064\315\170\353\027\203\120\201\264"
	"\211\172\231\235\030\354\314\053\123\232\315\063\342\346\226\356"
	"\047\352\163\024\012\056\171\362\234\167\033\374\363\263\373\364"
	"\165\074\352\342\247\265\267\145\351\274\241\334\231\033\000\233"
	"\216\262\116\155\307\031\146\105\060\046\012\070\223\152\105\270"
	"\141\157\261\300\001\356\156\342\133\112\326\373\323\100\301\025"
	"\075\346\352\334\125\141\037\160\066\364\217\316\116\251\266\001"
	"\001\337\264\316\032\060\325\261\232\304\212\244\107\362\203\344"
	"\376\300\124\137\171\232\217\351\137\141\075\374\347\174\225\130"
	"\037\300\323\050\275\174\122\145\055\140\235\341\206\167\217\024"
	"\355\374\171\151\340\364\136\364\005\117\277\126\145\107\121\030"
	"\007\145\216\331\337\066\170\112\221\352\060\227\042\337\342\062"
	"\165\362\057\076\315\131\120\101\363\242\216\160\250\052\201\217"
	"\107\234\366\267\004\025\102\312\114\331\167\117\342\244\051\043"
	"\121\325\106\003\155\134\325\225\126\033\025\001\105\032\115\205"
	"\262\067\177\323\340\303\127\076\310\212\306\066\332\211\310\237"
	"\164\255\372\331\361\040\230\001\102\343\326\366\032\026\151\356"
	"\227\004\114\313\123\362\230\144\217\136\351\076\152\271\015\274"
	"\050\210\155\322\076\245\266\155\261\324\152\330\323\036\305\201"
	"\114\157\312\202\176\314\150\021\113\203"
#define      tst2_z	19
#define      tst2	((&data[4551]))
	"\136\341\362\201\307\263\260\116\347\144\262\146\015\213\236\072"
	"\111\314\264\010\335\070\271\020\364"
#define      chk2_z	19
#define      chk2	((&data[4576]))
	"\372\064\232\366\251\316\170\267\316\342\147\132\133\045\236\276"
	"\265\126\320\062\372\321\114\152\024\232"
#define      date_z	1
#define      date	((&data[4598]))
	"\100"
#define      inlo_z	3
#define      inlo	((&data[4599]))
	"\127\303\222"
#define      msg2_z	19
#define      msg2	((&data[4603]))
	"\165\374\227\143\136\344\240\305\245\274\122\034\306\345\044\045"
	"\177\371\310\347\250\041"
#define      xecc_z	15
#define      xecc	((&data[4624]))
	"\027\146\247\004\105\133\223\111\153\162\132\275\041\112\245\116"
	"\201"
#define      shll_z	10
#define      shll	((&data[4643]))
	"\125\071\215\067\256\332\052\120\046\161\002\035\152"
#define      tst1_z	22
#define      tst1	((&data[4658]))
	"\347\056\002\267\367\071\362\131\134\033\132\010\365\147\350\254"
	"\100\216\364\262\256\013\042\206\211\147\214\243\160\146\060"
#define      chk1_z	22
#define      chk1	((&data[4686]))
	"\242\311\323\247\256\341\232\016\270\324\071\244\153\263\301\137"
	"\336\343\265\246\043\372\200"/* End of data[] */;
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
