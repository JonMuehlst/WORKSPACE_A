{"filter":false,"title":"functions.cpp","tooltip":"/4_functions/functions.cpp","undoManager":{"mark":20,"position":20,"stack":[[{"group":"doc","deltas":[{"action":"removeText","range":{"start":{"row":10,"column":0},"end":{"row":10,"column":4}},"text":"    "},{"action":"removeLines","range":{"start":{"row":6,"column":0},"end":{"row":10,"column":0}},"nl":"\n","lines":["    ","    assert(b != 0);","    ","    return a/b;"]}]}],[{"group":"doc","deltas":[{"action":"removeText","range":{"start":{"row":23,"column":0},"end":{"row":23,"column":4}},"text":"    "},{"action":"removeLines","range":{"start":{"row":11,"column":0},"end":{"row":23,"column":0}},"nl":"\n","lines":["    ","    assert( n >= 0);","    ","    if( n == 0 ){","        return 0;","    } else if( n == 1){","        return 1;","    } else if( n == 2){","        return fibonacci(1) + fibonacci(0);","    } else {","        return fibonacci(n-1) + fibonacci(n-2);","    }"]}]}],[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":11,"column":0},"end":{"row":12,"column":0}},"text":"\n"}]}],[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":6,"column":0},"end":{"row":7,"column":0}},"text":"\n"}]}],[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":7,"column":0},"end":{"row":8,"column":0}},"text":"\n"}]}],[{"group":"doc","deltas":[{"action":"removeText","range":{"start":{"row":34,"column":0},"end":{"row":34,"column":4}},"text":"    "},{"action":"removeLines","range":{"start":{"row":21,"column":0},"end":{"row":34,"column":0}},"nl":"\n","lines":["    assert( n >= 0);","    ","    int fibVal = 0;","    int valZero = 0;","    int valOne = 1;","    int i = 1;","    ","    while(i < n){","        fibVal = valZero + valOne;","        valZero = valOne;","        valOne = fibVal;","        i++;","    }    "]}]}],[{"group":"doc","deltas":[{"action":"removeText","range":{"start":{"row":23,"column":0},"end":{"row":23,"column":4}},"text":"    "},{"action":"removeLines","range":{"start":{"row":21,"column":0},"end":{"row":23,"column":0}},"nl":"\n","lines":["","    return fibVal;"]}]}],[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":21,"column":0},"end":{"row":22,"column":0}},"text":"\n"}]}],[{"group":"doc","deltas":[{"action":"removeText","range":{"start":{"row":35,"column":0},"end":{"row":35,"column":4}},"text":"    "},{"action":"removeLines","range":{"start":{"row":28,"column":0},"end":{"row":35,"column":0}},"nl":"\n","lines":["    float ans = (x - center_x)*(x - center_x) + (y - center_y)*(y - center_y);","    ","    if( ans  <= radius*radius ){","        return true;","    }","","    return false;"]}]}],[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":28,"column":0},"end":{"row":29,"column":0}},"text":"\n"}]}],[{"group":"doc","deltas":[{"action":"removeText","range":{"start":{"row":43,"column":0},"end":{"row":43,"column":4}},"text":"    "},{"action":"removeLines","range":{"start":{"row":34,"column":0},"end":{"row":43,"column":0}},"nl":"\n","lines":["    float ans = a-b;","    ","    if(ans<0)","        ans *= -1;","        ","    if(ans <= eps)","        return true;","    ","    return false;"]}]}],[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":34,"column":0},"end":{"row":35,"column":0}},"text":"\n"}]}],[{"group":"doc","deltas":[{"action":"removeText","range":{"start":{"row":55,"column":0},"end":{"row":55,"column":4}},"text":"    "},{"action":"removeLines","range":{"start":{"row":53,"column":0},"end":{"row":55,"column":0}},"nl":"\n","lines":["    EXPECT_DOUBLE_EQ(3,division(9,3));","    EXPECT_DOUBLE_EQ(3,division(12,4));"]}]}],[{"group":"doc","deltas":[{"action":"removeText","range":{"start":{"row":63,"column":0},"end":{"row":63,"column":4}},"text":"    "},{"action":"removeLines","range":{"start":{"row":58,"column":0},"end":{"row":63,"column":0}},"nl":"\n","lines":["","    EXPECT_EQ(34, fibonacci(9));","    EXPECT_NE(55, fibonacci(9));","    EXPECT_EQ(34, fibonacciLoop(9));","    EXPECT_NE(55, fibonacciLoop(9));"]}]}],[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":58,"column":0},"end":{"row":59,"column":0}},"text":"\n"}]}],[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":59,"column":0},"end":{"row":60,"column":0}},"text":"\n"}]}],[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":52,"column":0},"end":{"row":53,"column":0}},"text":"\n"}]}],[{"group":"doc","deltas":[{"action":"removeText","range":{"start":{"row":69,"column":0},"end":{"row":69,"column":4}},"text":"    "},{"action":"removeLines","range":{"start":{"row":67,"column":0},"end":{"row":69,"column":0}},"nl":"\n","lines":["    EXPECT_TRUE(inCircle(0,0,1,1,0));","    EXPECT_FALSE(inCircle(0,0,1,1,2));"]}]}],[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":67,"column":0},"end":{"row":68,"column":0}},"text":"\n"}]}],[{"group":"doc","deltas":[{"action":"removeText","range":{"start":{"row":79,"column":0},"end":{"row":79,"column":4}},"text":"    "},{"action":"removeLines","range":{"start":{"row":75,"column":0},"end":{"row":79,"column":0}},"nl":"\n","lines":["    EXPECT_TRUE(floatEquality(3.123456,3.123457,0.0001));","    EXPECT_TRUE(floatEquality(3.123457,3.123456,0.0001));","    EXPECT_FALSE(floatEquality(3.123456,3.123789,0.0001));","    EXPECT_FALSE(floatEquality(3.123789,3.123456,0.0001));"]}]}],[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":75,"column":0},"end":{"row":76,"column":0}},"text":"\n"}]}]]},"ace":{"folds":[],"scrolltop":713,"scrollleft":0,"selection":{"start":{"row":78,"column":0},"end":{"row":78,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1416213817277,"hash":"f290d4560d26d00d54759d48069087d7fbdf3811"}