#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f io_wnu_install.sh 
#endif

static  char data [] = 
#define      lsto_z	1
#define      lsto	((&data[0]))
	"\221"
#define      inlo_z	3
#define      inlo	((&data[1]))
	"\273\067\036"
#define      tst1_z	22
#define      tst1	((&data[9]))
	"\115\073\344\330\215\160\373\105\366\061\176\064\335\146\351\215"
	"\160\102\202\223\076\236\254\022\254\251\221\103"
#define      msg2_z	19
#define      msg2	((&data[33]))
	"\176\031\111\015\214\076\075\071\366\116\052\211\236\106\367\063"
	"\020\225\133\313\351"
#define      xecc_z	15
#define      xecc	((&data[54]))
	"\334\102\140\315\117\132\046\110\114\273\240\335\070\041\205\270"
	"\035\246"
#define      chk1_z	22
#define      chk1	((&data[71]))
	"\214\126\163\067\124\266\302\317\304\344\354\226\156\245\103\367"
	"\215\206\356\075\136\025\145\064\206\146\127"
#define      opts_z	1
#define      opts	((&data[98]))
	"\266"
#define      text_z	2727
#define      text	((&data[779]))
	"\320\045\351\354\206\037\237\267\031\176\326\167\102\304\173\024"
	"\304\345\375\035\207\210\240\346\246\073\152\064\052\124\202\313"
	"\022\171\300\156\027\320\136\104\036\350\361\006\263\250\055\235"
	"\211\346\150\342\013\142\016\005\045\120\142\131\027\041\045\056"
	"\142\041\057\071\136\177\174\110\352\344\305\136\253\216\303\272"
	"\170\333\037\004\037\326\236\005\117\061\214\107\232\336\317\202"
	"\204\306\334\160\032\336\163\001\340\030\262\162\251\242\062\333"
	"\165\047\306\327\063\007\135\257\260\353\364\107\257\337\352\343"
	"\144\032\206\123\314\233\364\271\243\326\216\152\361\115\210\226"
	"\102\051\231\273\167\006\355\125\044\174\114\305\211\325\077\021"
	"\120\253\062\014\246\004\312\230\100\075\205\157\024\232\254\314"
	"\105\105\362\237\237\224\256\047\216\300\036\217\220\017\024\335"
	"\156\277\047\346\033\252\271\115\040\243\046\027\011\243\041\204"
	"\067\013\364\105\211\135\152\321\206\065\171\165\351\327\106\231"
	"\044\361\043\050\147\164\152\117\256\262\273\047\174\267\113\315"
	"\150\240\150\353\320\146\035\136\173\112\057\073\154\364\357\245"
	"\260\206\144\047\267\103\302\246\201\137\362\320\065\054\204\166"
	"\165\167\336\137\137\021\144\005\045\146\333\171\261\122\121\041"
	"\166\375\372\116\246\365\301\367\325\133\130\303\313\152\335\045"
	"\306\261\136\101\151\035\114\176\145\235\057\010\360\177\173\163"
	"\167\164\146\245\043\031\231\072\121\162\325\212\177\130\145\237"
	"\367\316\261\061\167\213\167\013\123\120\263\021\355\315\240\213"
	"\307\266\246\223\251\130\026\211\116\074\162\142\210\135\040\216"
	"\036\325\075\051\273\003\046\344\007\376\316\360\320\253\265\040"
	"\065\124\204\253\123\260\130\357\172\341\345\123\331\063\350\015"
	"\364\367\372\333\054\175\210\153\327\342\115\134\244\251\353\122"
	"\013\161\074\004\272\253\275\127\304\306\020\230\342\274\214\067"
	"\046\023\326\037\142\202\307\161\345\052\255\151\022\016\156\237"
	"\215\216\200\217\216\363\352\155\134\110\064\264\074\204\174\026"
	"\076\205\311\037\163\175\253\025\262\362\310\130\161\375\344\376"
	"\304\353\101\045\324\375\372\167\147\230\226\370\003\075\363\111"
	"\042\271\175\221\171\374\265\227\353\266\141\152\133\062\025\374"
	"\006\307\375\047\107\006\064\305\334\105\003\232\041\331\207\255"
	"\266\105\313\226\051\107\371\322\231\351\251\027\171\262\323\016"
	"\125\047\204\037\142\155\213\227\342\304\173\277\241\053\336\316"
	"\045\352\047\070\370\255\113\257\352\060\124\131\136\252\133\160"
	"\241\270\114\065\246\002\016\322\355\264\120\137\352\340\161\003"
	"\022\255\022\072\022\155\260\172\313\332\260\022\333\274\040\176"
	"\244\307\002\116\305\000\035\336\024\171\124\272\324\373\307\201"
	"\134\137\233\150\057\143\364\350\155\224\245\041\310\127\036\162"
	"\207\264\105\003\114\313\073\332\351\177\001\074\337\021\051\061"
	"\216\074\146\171\026\344\144\306\335\116\011\235\327\251\221\365"
	"\025\350\052\343\242\142\172\023\305\276\242\116\002\202\326\064"
	"\357\050\363\163\275\043\114\321\065\375\370\037\347\315\276\244"
	"\000\302\001\337\076\002\006\204\222\244\001\323\012\262\341\024"
	"\337\371\135\002\275\062\030\214\253\334\334\177\171\070\073\053"
	"\360\245\330\050\226\147\102\274\252\037\206\204\073\123\041\346"
	"\017\221\154\375\303\076\057\122\240\012\174\353\032\145\150\362"
	"\136\271\253\356\052\177\270\262\245\233\375\342\210\075\046\202"
	"\366\047\131\046\351\362\345\200\301\373\056\155\006\310\001\001"
	"\015\322\170\110\232\151\252\021\166\256\111\030\271\156\010\363"
	"\237\051\355\211\154\147\303\330\101\245\330\307\362\140\055\163"
	"\211\142\212\247\325\263\057\375\153\173\300\213\122\023\312\254"
	"\043\042\113\002\363\132\141\364\020\034\040\100\214\107\164\252"
	"\243\021\234\333\227\263\374\012\372\040\115\067\256\341\325\207"
	"\273\103\125\203\363\142\251\206\315\322\330\124\243\057\370\357"
	"\373\104\070\130\055\177\306\051\351\350\273\043\370\101\112\130"
	"\070\275\167\376\265\136\361\162\170\145\260\254\314\144\363\231"
	"\312\326\160\053\051\144\007\116\007\356\334\213\327\043\155\005"
	"\307\222\053\152\122\002\374\015\032\223\031\216\165\324\142\176"
	"\256\064\031\021\120\126\227\315\206\042\244\106\114\142\123\172"
	"\146\301\106\077\174\000\303\031\245\052\115\233\230\057\033\171"
	"\301\247\073\035\066\050\125\043\200\157\375\156\306\270\241\372"
	"\210\016\016\045\011\040\043\050\310\273\106\114\063\270\006\162"
	"\020\027\156\036\120\112\225\203\045\341\255\116\047\223\121\144"
	"\351\133\152\227\307\036\157\032\133\134\270\306\017\305\365\002"
	"\015\037\273\231\215\361\217\062\043\076\331\213\140\132\063\240"
	"\332\333\110\357\023\203\054\064\101\121\035\254\252\224\101\150"
	"\202\352\371\317\324\211\013\234\175\204\071\034\004\274\137\355"
	"\217\330\017\267\101\321\162\045\270\246\317\031\310\151\147\232"
	"\255\231\235\302\062\007\201\040\170\033\237\356\346\264\126\135"
	"\344\321\145\156\330\125\075\255\033\362\342\327\373\024\030\362"
	"\056\325\132\220\261\113\140\154\177\337\130\214\022\075\240\165"
	"\276\305\072\201\206\017\354\012\100\100\333\363\244\020\161\102"
	"\377\121\122\315\361\351\206\024\063\027\345\020\151\301\203\360"
	"\010\360\245\155\262\205\254\334\311\004\243\203\135\162\324\356"
	"\072\142\242\147\156\156\024\070\174\224\221\273\337\100\065\317"
	"\121\272\247\032\122\226\135\171\003\264\350\071\333\172\143\370"
	"\071\205\006\207\351\152\151\240\315\134\122\247\204\057\104\233"
	"\270\347\035\276\017\016\367\124\115\114\052\071\360\345\253\166"
	"\134\142\057\221\014\065\350\037\050\104\064\246\125\165\222\077"
	"\105\157\172\172\346\370\307\310\063\103\044\125\131\002\363\213"
	"\022\260\243\073\150\056\256\361\060\113\351\276\103\343\227\056"
	"\267\145\103\330\271\040\072\241\214\042\116\033\333\166\361\306"
	"\055\233\233\271\064\224\020\012\314\214\176\253\362\261\257\245"
	"\263\126\303\230\267\102\267\040\336\357\176\011\070\343\154\216"
	"\163\076\214\373\212\271\103\175\264\146\151\012\342\157\150\372"
	"\047\365\231\020\101\020\317\355\113\016\212\325\320\073\254\026"
	"\326\167\332\345\163\367\231\321\121\057\307\146\107\210\224\166"
	"\275\241\010\204\166\103\265\011\201\203\367\377\255\127\371\235"
	"\221\050\140\326\241\050\252\160\155\265\030\250\003\052\302\352"
	"\360\204\036\017\000\003\306\242\030\021\326\347\163\225\265\036"
	"\335\373\053\306\353\264\361\066\333\254\313\124\304\317\362\116"
	"\252\126\072\151\031\250\334\234\060\322\042\331\032\366\231\044"
	"\033\324\275\005\073\201\247\030\040\035\362\161\135\175\267\332"
	"\174\314\113\042\326\030\332\053\022\043\116\014\342\112\311\221"
	"\076\276\163\213\270\206\210\044\037\265\033\006\106\374\227\045"
	"\050\116\237\102\004\256\031\230\360\006\230\003\107\135\062\132"
	"\344\234\152\365\101\056\303\043\105\100\102\010\333\341\120\254"
	"\167\341\306\214\050\213\020\340\057\351\364\200\110\045\123\113"
	"\137\066\265\253\370\275\241\371\227\136\331\205\011\210\054\377"
	"\237\114\006\144\204\127\326\325\141\213\012\066\056\066\155\306"
	"\346\343\231\064\161\220\167\137\020\322\047\044\314\207\041\222"
	"\153\200\152\352\044\035\362\150\224\136\311\041\212\365\230\123"
	"\206\376\012\377\335\063\004\305\112\155\100\331\146\326\376\173"
	"\106\132\246\366\017\271\063\143\026\037\043\135\144\024\340\100"
	"\261\130\203\007\262\206\326\141\337\200\057\060\046\170\306\271"
	"\257\154\142\012\202\021\317\344\247\055\274\224\243\275\124\317"
	"\131\130\171\362\250\117\314\300\154\153\044\257\054\277\035\366"
	"\345\050\015\001\052\002\242\106\264\116\232\024\247\142\310\221"
	"\174\045\103\323\252\370\312\267\310\057\241\027\100\221\067\222"
	"\244\365\305\214\326\357\046\007\150\222\015\377\375\346\153\020"
	"\055\054\340\141\110\225\134\205\011\103\115\027\031\240\077\141"
	"\075\121\102\353\013\151\035\021\313\050\027\126\125\020\302\342"
	"\347\136\072\004\230\371\205\240\311\336\372\165\007\076\236\020"
	"\201\364\225\306\262\000\077\025\223\031\100\241\045\373\045\352"
	"\163\271\275\257\367\153\037\360\147\103\235\006\071\353\053\123"
	"\125\372\317\113\155\242\363\150\127\367\161\301\307\276\242\230"
	"\257\203\245\205\336\361\344\346\216\367\347\035\076\067\232\136"
	"\231\336\311\123\002\327\115\213\245\353\347\032\004\105\131\164"
	"\301\154\333\274\056\357\263\355\266\313\236\362\010\244\000\310"
	"\203\230\272\175\352\053\217\253\237\061\010\307\316\312\346\075"
	"\000\172\355\100\203\135\313\301\364\106\251\021\112\025\110\372"
	"\132\115\237\026\160\165\367\216\304\152\034\062\312\115\151\262"
	"\004\357\040\056\275\056\162\237\044\167\377\045\361\347\362\035"
	"\320\330\320\201\317\112\032\130\045\115\172\362\020\224\017\072"
	"\276\052\215\017\166\107\215\070\142\322\055\226\266\102\053\247"
	"\327\074\123\216\307\265\352\134\375\072\346\017\140\334\320\014"
	"\246\000\366\377\154\263\243\335\206\135\352\000\220\145\124\177"
	"\255\241\325\216\335\124\323\257\301\162\322\064\043\234\006\020"
	"\174\125\035\374\126\031\023\352\275\351\242\103\153\345\150\127"
	"\337\311\350\312\107\044\360\241\047\146\270\244\263\131\325\127"
	"\323\273\371\161\152\201\235\114\363\227\142\046\226\063\117\375"
	"\344\250\135\264\333\302\140\321\324\075\331\247\057\136\314\260"
	"\354\373\114\113\041\104\204\320\350\212\052\302\237\345\372\150"
	"\024\010\353\274\012\147\063\106\167\131\125\323\070\322\017\365"
	"\367\327\165\162\121\140\051\321\342\030\163\222\012\130\067\061"
	"\252\101\334\073\152\240\137\036\333\110\210\361\212\340\244\347"
	"\265\004\016\247\271\045\123\332\354\245\326\014\126\077\377\325"
	"\007\262\042\040\206\333\123\134\367\360\164\036\024\132\067\241"
	"\331\357\304\117\031\024\332\062\164\136\360\146\131\265\040\201"
	"\063\114\257\001\140\305\222\233\374\250\052\262\013\206\133\145"
	"\146\145\165\027\215\044\375\202\304\210\330\223\133\056\200\074"
	"\176\216\040\257\274\272\247\311\165\146\217\052\207\137\376\167"
	"\062\104\271\244\064\001\357\167\220\366\060\157\141\001\071\207"
	"\321\272\140\007\272\275\034\334\230\032\225\073\025\035\314\056"
	"\023\324\264\273\073\223\043\312\165\252\107\152\021\115\245\320"
	"\267\106\304\252\067\116\205\267\034\337\175\066\350\207\223\112"
	"\227\134\154\276\137\117\254\270\166\267\355\222\357\330\367\306"
	"\331\317\227\010\371\341\327\236\102\131\073\343\300\143\114\326"
	"\323\271\374\063\142\363\002\131\237\174\237\121\342\344\332\212"
	"\077\373\165\355\204\205\235\252\060\307\323\131\153\271\116\361"
	"\161\046\016\263\311\127\106\351\271\374\322\273\363\106\106\024"
	"\134\025\273\377\346\062\322\320\323\115\104\067\333\306\034\002"
	"\124\050\064\126\140\060\037\130\234\354\133\234\071\172\244\363"
	"\027\145\346\072\037\000\021\266\044\232\114\047\337\047\220\244"
	"\046\230\067\016\120\343\322\031\006\326\362\154\076\276\027\202"
	"\245\361\040\274\300\017\145\265\221\116\251\234\146\067\274\213"
	"\245\015\347\227\272\302\045\222\024\016\367\234\340\044\044\211"
	"\312\377\374\372\163\363\351\210\223\146\171\264\042\044\335\051"
	"\342\107\362\060\105\335\237\374\007\023\110\257\115\032\175\300"
	"\167\170\335\117\017\150\005\011\312\042\361\165\275\372\247\222"
	"\046\025\150\076\373\141\361\274\230\374\206\061\062\366\003\251"
	"\146\066\073\367\060\373\360\266\146\113\040\205\251\200\330\351"
	"\201\374\145\253\202\311\346\164\337\350\251\033\327\031\161\163"
	"\103\224\311\037\203\361\225\001\204\350\222\021\114\073\321\013"
	"\355\134\176\145\340\027\260\116\203\262\330\161\230\253\220\037"
	"\202\306\132\012\275\233\174\124\210\376\244\130\332\340\114\234"
	"\147\077\044\341\273\020\242\125\077\223\254\014\262\110\022\264"
	"\311\122\252\225\333\227\373\353\006\363\321\054\322\330\223\110"
	"\246\107\127\363\213\001\243\275\236\054\253\203\136\222\071\060"
	"\346\117\244\223\133\261\212\226\107\067\363\161\147\172\125\331"
	"\354\357\274\336\244\213\236\137\124\222\151\242\123\040\005\015"
	"\101\145\121\051\222\341\011\243\321\103\054\012\022\346\115\306"
	"\016\321\071\062\273\270\273\147\322\267\202\132\311\260\151\346"
	"\352\106\253\162\223\024\101\036\207\300\155\005\001\314\025\103"
	"\022\173\232\231\162\134\225\233\147\154\321\361\315\060\323\130"
	"\003\211\210\360\217\322\142\126\306\242\024\046\341\307\267\172"
	"\150\256\233\267\103\121\041\142\042\375\311\043\063\001\103\365"
	"\154\333\372\202\125\001\061\153\331\362\124\055\074\063\030\215"
	"\010\151\172\335\011\231\157\330\253\347\352\325\054\306\253\100"
	"\171\355\256\101\001\141\313\321\367\002\231\035\061\333\200\301"
	"\362\323\353\203\055\014\026\133\024\134\042\012\356\347\061\162"
	"\016\271\215\344\371\160\222\055\023\112\211\327\305\162\233\031"
	"\113\102\270\352\160\144\045\043\135\215\311\357\331\272\120\345"
	"\072\115\132\225\265\216\272\244\306\311\342\112\252\100\312\234"
	"\236\241\107\325\017\363\341\262\043\004\321\221\333\320\260\066"
	"\105\370\063\036\174\160\352\373\344\164\116\151\025\352\311\000"
	"\171\065\022\112\317\212\352\201\137\016\040\227\304\317\322\175"
	"\017\000\305\177\375\063\301\220\313\116\140\326\026\107\021\125"
	"\133\241\117\260\265\132\334\027\330\162\150\304\304\160\357\231"
	"\226\052\343\022\222\023\257\326\147\265\216\211\041\276\206\201"
	"\133\060\075\350\307\356\365\360\161\326\247\021\123\104\111\007"
	"\333\214\356\342\035\330\000\207\146\170\164\307\045\177\022\126"
	"\273\277\111\255\160\070\230\343\064\024\207\256\111\000\001\061"
	"\276\233\166\371\157\373\365\055\210\314\112\020\272\366\236\372"
	"\305\254\266\061\152\361\360\157\275\174\042\104\130\121\043\074"
	"\311\307\313\355\024\205\174\107\354\033\303\344\327\121\052\340"
	"\217\137\244\372\104\152\262\001\303\124\116\015\021\255\063\005"
	"\036\324\031\106\370\071\047\050\276\116\010\025\062\355\272\045"
	"\351\272\020\212\255\202\363\242\374\021\043\366\032\025\130\241"
	"\035\226\155\224\316\073\074\207\311\311\134\135\321\366\330\153"
	"\222\125\120\245\203\330\003\140\332\223\023\050\032\171\052\324"
	"\061\140\030\132\176\035\036\205\370\303\147\273\151\070\230\151"
	"\047\014\371\362\051\021\036\067\340\371\022\142\024\053\064\322"
	"\233\000\102\175\144\126\203\042\013\134\374\002\201\221\022\113"
	"\040\015\371\274\022\106\053\270\100\335\171\164\124\305\152\332"
	"\311\020\077\220\167\067\336\145\300\330\200\176\317\043\055\221"
	"\215\344\022\314\076\224\053\351\337\146\007\100\102\243\153\360"
	"\164\013\005\212\177\102\320\363\330\206\044\031\263\067\002\014"
	"\063\266\033\025\162\046\236\024\252\132\205\351\162\014\260\304"
	"\055\027\100\114\154\055\267\257\132\315\000\054\016\010\270\364"
	"\313\077\242\300\121\120\006\044\250\042\267\075\152\330\211\123"
	"\364\226\002\275\244\202\360\216\300\327\120\027\067\066\367\055"
	"\005\264\307\145\067\347\074\265\032\242\352\076\047\227\247\166"
	"\071\365\371\206\300\136\372\067\273\077\140\034\311\270\151\050"
	"\132\030\270\160\350\062\020\254\373\022\304\300\146\061\346\177"
	"\235\166\362\047\202\317\127\144\052\050\363\101\023\030\202\125"
	"\242\235\017\235\366\073\157\377\014\101\341\356\011\345\163\117"
	"\134\046\042\023\021\251\076\111\343\265\225\377\302\276\120\077"
	"\322\230\242\350\125\240\141\154\102\025\107\264\252\262\111\055"
	"\333\033\150\233\050\073\200\303\064\012\011\045\114\305\220\317"
	"\350\277\202\103\111\346\215\347\242\047\271\205\312\136\351\030"
	"\231\146\336\312\017\135\242\367\334\044\070\170\172\126\002\070"
	"\313\070\017\325\111\276\243\120\305\177\160\304\326\123\070\240"
	"\361\146\176\117\270\237\253\241\314\170\025\102\073\056\155\354"
	"\217\131\207\210\003\256\026\112\076\142\061\101\137\064\077\071"
	"\357\210\241\242\304\266\117\224\226\165\332\021\166\037\252\124"
	"\274\237\123\237\243\313\000\261\145\130\346\327\162\025\112\245"
	"\174\275\167\206\177\037\301\040\143\155\206\375\004\176\372\010"
	"\120\377\160\332\360\022\022\235\044\206\121\337\074\006\057\046"
	"\027\377\155\160\260\242\301\051\045\003\131\324\363\241\073\067"
	"\001\203\104\240\032\302\116\347\203\064\302\346\123\004\140\144"
	"\006\037\372\370\125\126\334\363\275\036\023\064\323\267\164\244"
	"\204\225\002\112\335\364\270\221\226\376\343\143\375\373\060\236"
	"\333\000\160\371\146\224\005\222\011\035\357\347\167\163\272\232"
	"\104\242\224\317\163\264\173\352\234\001\333\346\120\324\143\234"
	"\370\106\335\053\073\331\077\007\032\230\057\342\234\252\204\303"
	"\361\340\322\202\015\061\034\267\022\345\266\240\352\134\253\010"
	"\207\231\162\013\147\236\364\271\002\166\057\371\146\161\156\272"
	"\175\361\147\166\354\045\014\354\036\032\215\331\362\331\170\316"
	"\204\301\022\062\300\154\347\073\164\220\373\005\360\202\103\012"
	"\032\071\263\322\307\060\255\020\277\053\237\372\043\322\042\116"
	"\061\262\014\250\353\323\121\155\001\221\042\066\163\217\223\135"
	"\265\002\364\225\034\170\156\131\353\062\327\263\203\141\100\123"
	"\124\135\203\364\241\274\060\340\020\100\231\214\346\254\261\136"
	"\266\314\145\176\144\307\324\140\105\014\320\030\310\230\272\215"
	"\073\265\177\032\176\114\151\011\343\010\073\326\356\260\301\225"
	"\366\067\247\251\261\264\232\366\226\203\034\317\147\270\275\350"
	"\204\341\176\154\174\017\343\077\034\054\015\213\360\075\355\262"
	"\314\263\140\012\217\352\053\015\010\172\304\332\166\200\361\254"
	"\241\117\176\254\207\035\171\202\264\062\365\011\106\026\134\066"
	"\262\246\213\232\101\204"
#define      rlax_z	1
#define      rlax	((&data[4137]))
	"\104"
#define      tst2_z	19
#define      tst2	((&data[4139]))
	"\204\051\042\340\122\354\261\371\230\036\152\146\140\326\305\331"
	"\003\351\142\017\246\210\263"
#define      chk2_z	19
#define      chk2	((&data[4161]))
	"\062\157\374\123\256\362\067\136\050\316\006\065\343\344\250\326"
	"\212\064\356"
#define      pswd_z	256
#define      pswd	((&data[4191]))
	"\316\000\075\313\232\071\015\162\235\022\342\107\226\355\046\121"
	"\151\150\104\302\176\355\347\315\244\000\221\106\322\256\221\220"
	"\021\361\176\162\031\323\347\156\241\246\025\154\305\125\231\157"
	"\032\022\261\001\071\205\213\032\013\233\271\101\207\126\370\100"
	"\021\173\121\170\241\321\103\360\265\263\052\376\022\145\337\237"
	"\301\134\327\347\363\251\265\315\150\215\331\137\330\070\046\031"
	"\304\155\257\026\035\254\363\160\204\331\277\301\130\307\232\153"
	"\040\115\117\236\265\023\277\105\213\210\345\046\365\114\046\260"
	"\310\107\240\067\355\003\352\106\060\260\237\275\110\064\034\372"
	"\241\237\325\272\145\174\173\046\347\062\056\043\210\214\372\167"
	"\302\324\024\057\070\047\016\323\332\063\316\163\272\252\123\102"
	"\150\343\053\270\001\156\306\052\246\266\112\303\140\020\377\122"
	"\121\024\204\173\100\151\023\203\255\215\372\130\361\167\313\220"
	"\353\103\322\224\325\221\056\202\123\032\044\211\224\153\220\014"
	"\066\072\051\320\306\215\302\225\217\010\254\146\022\152\073\222"
	"\154\220\005\265\032\337\046\306\200\331\167\061\117\144\041\303"
	"\214\240\110\173\016\104\160\040\322\032\206\011\275\320\022\362"
	"\201\021\242\025\117\162\017\302\035\250\225\352\340\322\074\266"
	"\340\131\330\112\231\102\154\167\355\201\067\235\073\311\323\351"
	"\222\325\237\325\111\034\230\060\315\131\174\100\107\231\136\256"
#define      msg1_z	42
#define      msg1	((&data[4505]))
	"\301\203\313\137\170\243\373\277\320\167\332\001\114\246\152\175"
	"\027\355\372\030\133\177\251\306\117\200\003\055\364\326\073\274"
	"\057\134\250\272\326\167\247\250\125\175\214\255\072\130\210\024"
	"\242\107\176\313\377\026\301"
#define      date_z	1
#define      date	((&data[4555]))
	"\326"
#define      shll_z	10
#define      shll	((&data[4558]))
	"\324\124\212\252\310\227\071\161\122\260\342\000"/* End of data[] */;
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
