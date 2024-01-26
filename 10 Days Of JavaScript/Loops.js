function vowelsAndConsonants(s) {
    let i=0;
    while(i<s.length){
        switch(s.at(i)){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            console.log(s.at(i));
            break;}
        i++;
    }
    
    i=0;
    while(i<s.length){
        switch(s.at(i)){
            case 'b':
            case 'c':
            case 'd':
            case 'f':
            case 'g':
            case 'h':
            case 'j':
            case 'k':
            case 'l':
            case 'm':
            case 'n':
            case 'p':
            case 'q':
            case 'r':
            case 's':
            case 't':
            case 'v':
            case 'w':
            case 'x':
            case 'y':
            case 'z':
            console.log(s.at(i));
            break;
        }
        i++;
    }
}
