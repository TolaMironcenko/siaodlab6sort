#ifndef SIAODLAB6_KOLFORALG_CPP
#define SIAODLAB6_KOLFORALG_CPP

int ch(int n) {
    int k = 0;
    if (n/2 == 0) {
        k = 0;
    }else {
        k = ch(n/2);
    }
    return 2*k+n;
}

#endif