/* glass.f -- translated by f2c (version 20090411).
   You must link the resulting object file with libf2c:
	on Microsoft Windows system, link with libf2c.lib;
	on Linux or Unix systems, link with .../path/to/libf2c.a -lm
	or, if you install libf2c.a in a standard place, with -lf2c -lm
	-- in that order, at the end of the command line, as in
		cc *.o -lf2c -lm
	Source for libf2c is in /netlib/f2c/libf2c.zip, e.g.,

		http://www.netlib.org/f2c/libf2c.zip
*/

#include "f2c.h"

/* Common Block Declarations */

struct {
    integer mti, mt[624];
} block_;

#define block_1 block_

/* Table of constant values */

static integer c__4 = 4;
static integer c__1 = 1;
static integer c__3 = 3;
static integer c__0 = 0;
static integer c__6 = 6;
static integer c__9 = 9;
static integer c__214 = 214;
static integer c__2 = 2;
static real c_b113 = -999.f;
static integer c__500 = 500;
static integer c__429 = 429;
static integer c__100 = 100;
static integer c__4357 = 4357;

/* Main program */ int MAIN__(void)
{
    /* System generated locals */
    integer i__1, i__2, i__3;
    real r__1, r__2;
    olist o__1;
    cllist cl__1;

    /* Builtin functions */
    integer f_open(olist *), s_rsle(cilist *), do_lio(integer *, integer *, 
	    char *, ftnlen), e_rsle(void), f_clos(cllist *), s_wsle(cilist *),
	     e_wsle(void), s_wsfe(cilist *), do_fio(integer *, char *, ftnlen)
	    , e_wsfe(void);
    double sqrt(doublereal);
    integer i_nint(real *), s_rsfe(cilist *), e_rsfe(void);
    /* Subroutine */ int s_stop(char *, ftnlen);

    /* Local variables */
    static integer nbestcat[429]	/* was [1][429] */, ndimreps;
    static real classpop[2574]	/* was [6][429] */, popclass[12]	/* 
	    was [2][6] */, prothigh[108]	/* was [9][2][6] */;
    extern /* Subroutine */ int roughfix_(real *, real *, integer *, integer *
	    , integer *, integer *, real *, integer *, integer *, real *);
    static real protfreq[108]	/* was [9][2][6][1] */;
    extern /* Subroutine */ int compprot_(integer *, integer *, integer *, 
	    integer *, integer *, integer *, real *, integer *, real *, 
	    integer *, integer *, real *, integer *, integer *, integer *, 
	    integer *, integer *, real *, real *, real *, real *, real *, 
	    real *, real *, real *, integer *, real *, real *, real *);
    static integer a[1926]	/* was [9][214] */, b[1926]	/* was [9][
	    214] */;
    static real g[9];
    static integer i__, j;
    static real protvlow[108]	/* was [9][2][6] */;
    static integer k, m, n;
    static real q[1284]	/* was [6][214] */;
    static doublereal u[214];
    static real v[214], x[1926]	/* was [9][214] */;
    static doublereal y[214];
    static integer ndbigtree, nodeclass[429], m1, n0;
    static real tclasscat[6]	/* was [6][1] */;
    static integer n1, n2, n3, n4, n5, n6, n7;
    extern /* Subroutine */ int buildtree_(integer *, integer *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, integer *, 
	    integer *, integer *, real *, integer *, integer *, integer *, 
	    real *, real *, real *, integer *, integer *, integer *, integer *
	    , integer *, integer *, integer *, integer *, integer *, real *, 
	    real *, real *, integer *, integer *, integer *, real *, real *, 
	    real *, real *, integer *, integer *, integer *, integer *, 
	    integer *, integer *, integer *), finishimp_(integer *, real *, 
	    real *, real *, real *, integer *, integer *, integer *);
    static real v5[9];
    extern /* Subroutine */ int locateout_(integer *, real *, real *, integer 
	    *, integer *, real *, integer *, integer *, integer *, real *);
    static integer nmissfill, ncatsplit[1], nodestart[429];
    static real tclasspop[6];
    static integer bestsplit[429];
    static real protvhigh[108]	/* was [9][2][6] */;
    extern /* Subroutine */ int comperrtr_(real *, integer *, integer *, 
	    integer *, real *, real *, integer *, integer *, integer *), 
	    comperrts_(real *, integer *, integer *, integer *, real *, real *
	    , integer *, integer *, integer *), quicksort_(real *, integer *, 
	    integer *, integer *, integer *), runforest_(integer *, integer *,
	     integer *, integer *, integer *, integer *, integer *, integer *,
	     real *, real *, real *, integer *, integer *, integer *, integer 
	    *, integer *, integer *, integer *, integer *, real *, integer *, 
	    real *, integer *, real *, real *, real *, real *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, integer *);
    static doublereal ee[214];
    static integer jb, cl[214];
    static real cm[1];
    static integer nc[6];
    static real dn[1], cp[1];
    static doublereal dl[3];
    static integer ta[214], jj;
    static real er, wc[214], xc[1];
    static doublereal ev[642]	/* was [214][3] */;
    static integer iv[9], mr;
    static real tn[429], wl[6], v95[9], wr[6], tw[429], zt[9];
    extern /* Subroutine */ int testreebag_(real *, integer *, integer *, 
	    integer *, integer *, real *, integer *, integer *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, integer *, 
	    integer *, real *, real *, real *, integer *, real *), 
	    getweights_(real *, integer *, integer *, integer *, integer *, 
	    real *, integer *, integer *, integer *, integer *, integer *, 
	    integer *, integer *, real *, real *, real *, real *), 
	    xtranslate_(real *, integer *, integer *, integer *, integer *, 
	    integer *, integer *, real *, integer *, integer *, integer *);
    static integer nodestatus[429];
    static real xbestsplit[429];
    static integer cat[9];
    static doublereal red[214];
    static integer ncn[214], jin[214], ncp[214], nod[429], nmf, nmd, msm[9];
    static real win[214];
    static doublereal xsc[642]	/* was [214][3] */;
    static integer jtr[214], jts[1], jvr[214], its[214];
    static doublereal ppr[214];
    static integer loz[45796]	/* was [214][214] */;
    static real qts[6]	/* was [6][1] */;
    static integer out[214];
    static real xts[9]	/* was [9][1] */, wtx[214];
    extern /* Subroutine */ int createclass_(real *, integer *, integer *, 
	    integer *, integer *), testreelite_(real *, integer *, integer *, 
	    integer *, integer *, real *, integer *, integer *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, integer *),
	     moda_(integer *, integer *, integer *, integer *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, integer *);
    static integer jinb[107000]	/* was [214][500] */, mtab[36]	/* was [6][6] 
	    */;
    static real fill[9];
    static integer kcat[1], joob[214];
    static real freq[1];
    static integer imax[1];
    static real tavg, temp[214], qimp[214], hist[90]	/* was [10][9] */;
    static integer irnk[4500]	/* was [9][500] */, muse[9];
    static real sqsd[9];
    static integer jest[214], kpop[429], clts[1], ncts[6];
    static real rpop[429];
    static integer jpur[214], nuse;
    static real prot[108]	/* was [9][2][6] */;
    static char text[500];
    extern /* Subroutine */ int zerv_(integer *, integer *);
    static doublereal prox[45796]	/* was [214][214] */;
    extern /* Subroutine */ int zerm_(integer *, integer *, integer *);
    static real tout[214];
    static integer mtry;
    extern /* Subroutine */ int compinteract_(real *, real *, integer *, 
	    integer *, integer *, integer *, real *, integer *, integer *, 
	    real *, real *), makea_(real *, integer *, integer *, integer *, 
	    integer *, real *, integer *, integer *, integer *, integer *, 
	    real *, real *, integer *);
    static integer ncase[214];
    static real dgini[429];
    static integer iseed, inear[214], asave[1926]	/* was [9][214] */, 
	    npend[6], ibest[214], nrcat[1], ncmax, pjoob[214];
    static real tgini[9];
    static integer mdimt;
    static real avimp[9];
    extern /* Subroutine */ int sgrnd_(integer *), xfill_(real *, integer *, 
	    integer *, real *, real *), zermd_(doublereal *, integer *, 
	    integer *);
    static real qimpm[1926]	/* was [214][9] */;
    static integer jests[1], iwork[214];
    static real errtr, tmiss[6], votes[4500]	/* was [9][500] */;
    static integer isort[214];
    static real errts;
    extern /* Subroutine */ int zermr_(real *, integer *, integer *), zervr_(
	    real *, integer *);
    static real protv[108]	/* was [9][2][6] */, outtr[214], outts[1], 
	    effect[81]	/* was [9][9] */;
    static integer bestsplitnext[429], npcase[107000]	/* was [214][500] */;
    static real avgini[9], signif[9];
    static integer nodexb[107000]	/* was [214][500] */, idmove[214], 
	    nmfmax, parent[429];
    extern /* Subroutine */ int varimp_(real *, integer *, integer *, integer 
	    *, integer *, integer *, integer *, integer *, integer *, integer 
	    *, integer *, real *, real *, real *, real *, integer *, integer *
	    , real *, integer *, integer *, integer *, integer *, integer *, 
	    integer *, integer *, integer *, integer *, real *, integer *, 
	    integer *, integer *, integer *), impute_(real *, doublereal *, 
	    integer *, integer *, integer *, real *, integer *, integer *, 
	    integer *, integer *);
    static real devout[6], rinpop[107000]	/* was [214][500] */, zscore[
	    9];
    static integer ncount[107000]	/* was [214][500] */;
    extern /* Subroutine */ int checkin_(integer *, integer *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, integer *);
    static integer ndbegin[107000]	/* was [214][500] */;
    static real teffect[81]	/* was [9][9] */;
    static integer treemap[858]	/* was [2][429] */;
    extern /* Subroutine */ int myscale_(integer *, doublereal *, doublereal *
	    , doublereal *, doublereal *, integer *, integer *, doublereal *, 
	    integer *, doublereal *, doublereal *, doublereal *);
    static integer nodepop[429];
    static real votecat[1];
    static integer bestvar[429], missing[1926]	/* was [9][214] */;
    extern doublereal randomu_(void);
    static integer ncsplit;
    static real rmedout[6], classwt[6];
    static integer nodextr[214];
    static real tnodewt[429];
    static integer nodexvr[214], nodexts[1];
    extern /* Subroutine */ int comprox_(doublereal *, integer *, integer *, 
	    integer *, integer *, doublereal *, real *, integer *, integer *, 
	    integer *, real *, integer *, integer *, integer *, real *, 
	    integer *, integer *, integer *), preprox_(integer *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, integer *, 
	    real *, integer *, real *, integer *);
    static real tmissts[6], protlow[108]	/* was [9][2][6] */;

    /* Fortran I/O blocks */
    static cilist io___2 = { 0, 16, 0, 0, 0 };
    static cilist io___6 = { 0, 17, 0, 0, 0 };
    static cilist io___96 = { 0, 6, 0, 0, 0 };
    static cilist io___97 = { 0, 6, 0, 0, 0 };
    static cilist io___98 = { 0, 6, 0, 0, 0 };
    static cilist io___99 = { 0, 6, 0, 0, 0 };
    static cilist io___100 = { 0, 6, 0, 0, 0 };
    static cilist io___104 = { 0, 6, 0, "(i8,100f10.2)", 0 };
    static cilist io___105 = { 0, 6, 0, "(i8,2f10.2)", 0 };
    static cilist io___109 = { 0, 6, 0, "(i8,20f10.2)", 0 };
    static cilist io___110 = { 0, 6, 0, "(i8,2f10.2)", 0 };
    static cilist io___111 = { 0, 6, 0, 0, 0 };
    static cilist io___117 = { 0, 1, 0, 0, 0 };
    static cilist io___118 = { 0, 1, 0, 0, 0 };
    static cilist io___119 = { 0, 1, 0, 0, 0 };
    static cilist io___120 = { 0, 1, 0, 0, 0 };
    static cilist io___121 = { 0, 6, 0, 0, 0 };
    static cilist io___132 = { 0, 13, 0, "(i5,500(i5,f10.3))", 0 };
    static cilist io___140 = { 0, 14, 0, "(i5,f10.3)", 0 };
    static cilist io___141 = { 0, 14, 0, "(3i5,15f10.3)", 0 };
    static cilist io___144 = { 0, 10, 0, "(100f10.3)", 0 };
    static cilist io___145 = { 0, 9, 0, "(i5,10f10.3)", 0 };
    static cilist io___146 = { 0, 6, 0, "(i5,10f10.3)", 0 };
    static cilist io___152 = { 0, 11, 0, 0, 0 };
    static cilist io___154 = { 0, 11, 0, 0, 0 };
    static cilist io___155 = { 0, 6, 0, 0, 0 };
    static cilist io___156 = { 0, 11, 0, "(40i5)", 0 };
    static cilist io___157 = { 0, 6, 0, 0, 0 };
    static cilist io___158 = { 0, 6, 0, 0, 0 };
    static cilist io___159 = { 0, 6, 0, 0, 0 };
    static cilist io___160 = { 0, 6, 0, "(20i5)", 0 };
    static cilist io___162 = { 0, 8, 0, 0, 0 };
    static cilist io___178 = { 0, 12, 0, "(a5,50i10)", 0 };
    static cilist io___179 = { 0, 12, 0, "(a5,50i10)", 0 };
    static cilist io___180 = { 0, 12, 0, "(a5,50i10)", 0 };
    static cilist io___181 = { 0, 12, 0, "(i5,50f10.3)", 0 };
    static cilist io___182 = { 0, 12, 0, "(i5,50f10.3)", 0 };
    static cilist io___184 = { 0, 6, 0, "(a5,50i10)", 0 };
    static cilist io___185 = { 0, 6, 0, "(i5,50f10.3)", 0 };
    static cilist io___186 = { 0, 6, 0, "(i5,50f10.3)", 0 };
    static cilist io___191 = { 0, 15, 0, "(2i5,f10.3)", 0 };
    static cilist io___192 = { 0, 6, 0, 0, 0 };
    static cilist io___193 = { 0, 6, 0, 0, 0 };
    static cilist io___194 = { 0, 6, 0, 0, 0 };
    static cilist io___195 = { 0, 6, 0, 0, 0 };
    static cilist io___197 = { 0, 6, 0, 0, 0 };
    static cilist io___198 = { 0, 6, 0, 0, 0 };
    static cilist io___199 = { 0, 6, 0, "(20i6)", 0 };
    static cilist io___200 = { 0, 6, 0, 0, 0 };
    static cilist io___201 = { 0, 6, 0, "(20i6)", 0 };
    static cilist io___202 = { 0, 6, 0, 0, 0 };
    static cilist io___203 = { 0, 6, 0, 0, 0 };
    static cilist io___204 = { 0, 6, 0, 0, 0 };
    static cilist io___205 = { 0, 6, 0, 0, 0 };
    static cilist io___206 = { 0, 6, 0, "(20i6)", 0 };
    static cilist io___207 = { 0, 6, 0, 0, 0 };
    static cilist io___208 = { 0, 6, 0, "(20i6)", 0 };
    static cilist io___209 = { 0, 6, 0, 0, 0 };
    static cilist io___210 = { 0, 7, 0, "(3i5,5000f10.3)", 0 };
    static cilist io___211 = { 0, 7, 0, "(3i5,1000f10.3)", 0 };
    static cilist io___212 = { 0, 7, 0, "(2i5,1000f10.3)", 0 };
    static cilist io___213 = { 0, 21, 0, "(1000f10.3)", 0 };
    static cilist io___214 = { 0, 22, 0, "(100f10.3)", 0 };
    static cilist io___215 = { 0, 23, 0, "(3i5,5000f10.3)", 0 };
    static cilist io___216 = { 0, 24, 0, 0, 0 };
    static cilist io___217 = { 0, 25, 0, "(50f10.3)", 0 };
    static cilist io___218 = { 0, 26, 0, "(3i5,5000f10.3)", 0 };
    static cilist io___219 = { 0, 26, 0, "(3i5,5000f10.3)", 0 };
    static cilist io___220 = { 0, 26, 0, "(3i5,5000f10.3)", 0 };
    static cilist io___221 = { 0, 27, 0, "(i5)", 0 };
    static cilist io___222 = { 0, 28, 0, "(40i5)", 0 };
    static cilist io___223 = { 0, 29, 0, "(5000(i5,f10.3))", 0 };
    static cilist io___224 = { 0, 3, 0, 0, 0 };
    static cilist io___225 = { 0, 2, 0, 0, 0 };
    static cilist io___226 = { 0, 2, 0, 0, 0 };
    static cilist io___227 = { 0, 2, 0, 0, 0 };
    static cilist io___237 = { 0, 6, 0, 0, 0 };
    static cilist io___238 = { 0, 6, 0, 0, 0 };
    static cilist io___239 = { 0, 6, 0, 0, 0 };
    static cilist io___240 = { 0, 6, 0, 0, 0 };
    static cilist io___241 = { 0, 6, 0, 0, 0 };
    static cilist io___242 = { 0, 6, 0, 0, 0 };
    static cilist io___243 = { 0, 6, 0, 0, 0 };
    static cilist io___244 = { 0, 6, 0, 0, 0 };
    static cilist io___245 = { 0, 6, 0, 0, 0 };
    static cilist io___246 = { 0, 6, 0, 0, 0 };
    static cilist io___247 = { 0, 6, 0, 0, 0 };
    static cilist io___248 = { 0, 6, 0, 0, 0 };
    static cilist io___249 = { 0, 2, 0, "(500a)", 0 };
    static cilist io___251 = { 0, 6, 0, 0, 0 };



/* 	Copyright 2002-2003  Leo Breiman and Adele Cutler */

/* 	This is free open source software but its use,in part or */
/* 	in whole,in any commercial product that is sold for profit */
/* 	is prohibited without the written consent of Leo Breiman */
/* 	and Adele Cutler. */

/* 	We very much appreciate bug notices and suggested improvements. */

/* 	leo@stat.berkeley.edu   adele@math.usu.edu */

/* 	SET ALL PARAMETERS FIRST GROUP BELOW.  GENERALLY, */
/* 	SETTING PARAMETERS TO ZERO TURNS THE CORRESPONDING */
/* 	OPTION OFF. */

/* 	ALL RELEVANT OUTPUT FILES MUST BE GIVEN NAMES--SEE BELOW. */


/* 	------------------------------------------------------- */
/* 	CONTROL PARAMETERS */

/*  		DESCRIBE DATA */

/* 		SET RUN PARAMETERS */

/* 		SET IMPORTANCE OPTIONS */

/* 		SET PROXIMITY COMPUTATIONS */

/* 		SET OPTIONS BASED ON PROXIMITIES */

/* 		REPLACE MISSING VALUES */

/* 		GRAPHICS */

/* 		SAVING A FOREST */

/* 		RUNNING A SAVED FOREST */

/* 	------------------------------------------------------- */
/* 	OUTPUT CONTROLS */


/* 	------------------------------------------------------- */
/* 	DERIVED PARAMETERS (DO NOT CHANGE) */

/* 0/1		1=summary to screen */
/* 0/1/2	1=train,2=adds test(7) */
/* 0/1		1=gini fastimp	(8) */
/* 0/1/2 	1=imp,2=to screen(9) */
/* 0/1		1=impn		(10) */
/* 0/1/2	1=interaction,2=screen(11) */
/* 0/1/2	1=prototypes,2=screen(12) */
/* 0/1/2	1=prox,2=adds test(13) */
/* 0/1		1=scaling coors	(14) */
/* 0/1/2	1=train,2=adds test (15) */

/* 	------------------------------------------------------- */
/* 	DIMENSIONING OF ARRAYS */


/* 	------------------------------------------------------- */
/*    	USED IN PROXIMITY AND SCALING */



/* 	------------------------------------------------------- */
/*    	SCALAR DECLARATIONS */



/* 	------------------------------------------------------- */
/* 	READ OLD TREE STRUCTURE AND/OR PARAMETERS */

    if (FALSE_) {
	o__1.oerr = 0;
	o__1.ounit = 1;
	o__1.ofnmlen = 11;
	o__1.ofnm = "savedforest";
	o__1.orl = 0;
	o__1.osta = "old";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
    }
    if (FALSE_) {
	o__1.oerr = 0;
	o__1.ounit = 2;
	o__1.ofnmlen = 11;
	o__1.ofnm = "savedparams";
	o__1.orl = 0;
	o__1.osta = "old";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
    }
    if (FALSE_) {
	o__1.oerr = 0;
	o__1.ounit = 3;
	o__1.ofnmlen = 13;
	o__1.ofnm = "savedmissfill";
	o__1.orl = 0;
	o__1.osta = "old";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
    }
    if (FALSE_) {
	o__1.oerr = 0;
	o__1.ounit = 4;
	o__1.ofnmlen = 9;
	o__1.ofnm = "savedprox";
	o__1.orl = 0;
	o__1.osta = "old";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
    }

/* 	------------------------------------------------------- */
/* 	NAME OUTPUT FILES FOR SAVING THE FOREST STRUCTURE */

    if (FALSE_) {
	o__1.oerr = 0;
	o__1.ounit = 1;
	o__1.ofnmlen = 11;
	o__1.ofnm = "savedforest";
	o__1.orl = 0;
	o__1.osta = "new";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
    }
    if (FALSE_) {
	o__1.oerr = 0;
	o__1.ounit = 2;
	o__1.ofnmlen = 11;
	o__1.ofnm = "savedparams";
	o__1.orl = 0;
	o__1.osta = "new";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
    }
    if (FALSE_) {
	o__1.oerr = 0;
	o__1.ounit = 3;
	o__1.ofnmlen = 13;
	o__1.ofnm = "savedmissfill";
	o__1.orl = 0;
	o__1.osta = "new";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
    }
    if (FALSE_) {
	o__1.oerr = 0;
	o__1.ounit = 4;
	o__1.ofnmlen = 9;
	o__1.ofnm = "savedprox";
	o__1.orl = 0;
	o__1.osta = "new";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
    }

/* 	------------------------------------------------------- */
/* 	NAME OUTPUT FILES TO SAVE DATA FROM CURRENT RUN */

    if (FALSE_) {
	o__1.oerr = 0;
	o__1.ounit = 7;
	o__1.ofnmlen = 18;
	o__1.ofnm = "save-data-from-run";
	o__1.orl = 0;
	o__1.osta = "new";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
    }
    if (FALSE_) {
	o__1.oerr = 0;
	o__1.ounit = 8;
	o__1.ofnmlen = 12;
	o__1.ofnm = "save-impfast";
	o__1.orl = 0;
	o__1.osta = "new";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
    }
    if (FALSE_) {
	o__1.oerr = 0;
	o__1.ounit = 9;
	o__1.ofnmlen = 20;
	o__1.ofnm = "save-importance-data";
	o__1.orl = 0;
	o__1.osta = "new";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
    }
    if (FALSE_) {
	o__1.oerr = 0;
	o__1.ounit = 10;
	o__1.ofnmlen = 17;
	o__1.ofnm = "save-caseimp-data";
	o__1.orl = 0;
	o__1.osta = "new";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
    }
    if (FALSE_) {
	o__1.oerr = 0;
	o__1.ounit = 11;
	o__1.ofnmlen = 21;
	o__1.ofnm = "save-pairwise-effects";
	o__1.orl = 0;
	o__1.osta = "new";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
    }
    if (FALSE_) {
	o__1.oerr = 0;
	o__1.ounit = 12;
	o__1.ofnmlen = 11;
	o__1.ofnm = "save-protos";
	o__1.orl = 0;
	o__1.osta = "new";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
    }
    if (TRUE_) {
	o__1.oerr = 0;
	o__1.ounit = 13;
	o__1.ofnmlen = 20;
	o__1.ofnm = "save-run-proximities";
	o__1.orl = 0;
	o__1.osta = "new";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
    }
    if (FALSE_) {
	o__1.oerr = 0;
	o__1.ounit = 14;
	o__1.ofnmlen = 10;
	o__1.ofnm = "save-scale";
	o__1.orl = 0;
	o__1.osta = "new";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
    }
    if (FALSE_) {
	o__1.oerr = 0;
	o__1.ounit = 15;
	o__1.ofnmlen = 13;
	o__1.ofnm = "save-outliers";
	o__1.orl = 0;
	o__1.osta = "new";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
    }
    if (TRUE_) {
/* 		the graphics program expects files to be named in the */
/* 		following way: */
	o__1.oerr = 0;
	o__1.ounit = 21;
	o__1.ofnmlen = 8;
	o__1.ofnm = "data.txt";
	o__1.orl = 0;
	o__1.osta = "new";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
	o__1.oerr = 0;
	o__1.ounit = 22;
	o__1.ofnmlen = 7;
	o__1.ofnm = "imp.txt";
	o__1.orl = 0;
	o__1.osta = "new";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
	o__1.oerr = 0;
	o__1.ounit = 23;
	o__1.ofnmlen = 8;
	o__1.ofnm = "info.txt";
	o__1.orl = 0;
	o__1.osta = "new";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
	o__1.oerr = 0;
	o__1.ounit = 24;
	o__1.ofnmlen = 7;
	o__1.ofnm = "par.txt";
	o__1.orl = 0;
	o__1.osta = "new";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
	o__1.oerr = 0;
	o__1.ounit = 25;
	o__1.ofnmlen = 9;
	o__1.ofnm = "scale.txt";
	o__1.orl = 0;
	o__1.osta = "new";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
	if (FALSE_) {
	    o__1.oerr = 0;
	    o__1.ounit = 26;
	    o__1.ofnmlen = 9;
	    o__1.ofnm = "proto.txt";
	    o__1.orl = 0;
	    o__1.osta = "new";
	    o__1.oacc = 0;
	    o__1.ofm = 0;
	    o__1.oblnk = 0;
	    f_open(&o__1);
	    o__1.oerr = 0;
	    o__1.ounit = 27;
	    o__1.ofnmlen = 11;
	    o__1.ofnm = "protinf.txt";
	    o__1.orl = 0;
	    o__1.osta = "new";
	    o__1.oacc = 0;
	    o__1.ofm = 0;
	    o__1.oblnk = 0;
	    f_open(&o__1);
	}
	if (TRUE_) {
	    o__1.oerr = 0;
	    o__1.ounit = 28;
	    o__1.ofnmlen = 9;
	    o__1.ofnm = "inter.txt";
	    o__1.orl = 0;
	    o__1.osta = "new";
	    o__1.oacc = 0;
	    o__1.ofm = 0;
	    o__1.oblnk = 0;
	    f_open(&o__1);
	}
	if (TRUE_) {
	    o__1.oerr = 0;
	    o__1.ounit = 29;
	    o__1.ofnmlen = 8;
	    o__1.ofnm = "prox.txt";
	    o__1.orl = 0;
	    o__1.osta = "new";
	    o__1.oacc = 0;
	    o__1.ofm = 0;
	    o__1.oblnk = 0;
	    f_open(&o__1);
	}
    }

/* 	------------------------------------------------------- */
/* 	READ IN DATA--SEE MANUAL FOR FORMAT */

    o__1.oerr = 0;
    o__1.ounit = 16;
    o__1.ofnmlen = 24;
    o__1.ofnm = "../../../Data/glass.data";
    o__1.orl = 0;
    o__1.osta = "old";
    o__1.oacc = 0;
    o__1.ofm = 0;
    o__1.oblnk = 0;
    f_open(&o__1);
    for (n = 1; n <= 214; ++n) {
	s_rsle(&io___2);
	for (m = 1; m <= 9; ++m) {
	    do_lio(&c__4, &c__1, (char *)&x[m + n * 9 - 10], (ftnlen)sizeof(
		    real));
	}
	do_lio(&c__3, &c__1, (char *)&cl[n - 1], (ftnlen)sizeof(integer));
	e_rsle();
    }
    cl__1.cerr = 0;
    cl__1.cunit = 16;
    cl__1.csta = 0;
    f_clos(&cl__1);
    if (FALSE_) {
	o__1.oerr = 0;
	o__1.ounit = 17;
	o__1.ofnmlen = 9;
	o__1.ofnm = "data.test";
	o__1.orl = 0;
	o__1.osta = "old";
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
	for (n = 1; n <= 1; ++n) {
	    s_rsle(&io___6);
	    for (m = 1; m <= 9; ++m) {
		do_lio(&c__4, &c__1, (char *)&xts[m + n * 9 - 10], (ftnlen)
			sizeof(real));
	    }
	    do_lio(&c__3, &c__1, (char *)&clts[n - 1], (ftnlen)sizeof(integer)
		    );
	    e_rsle();
	}
	cl__1.cerr = 0;
	cl__1.cunit = 17;
	cl__1.csta = 0;
	f_clos(&cl__1);
    }

/* 	------------------------------------------------------- */
/* 	SELECT SUBSET OF VARIABLES TO USE */

    if (TRUE_) {
	mdimt = 9;
	for (k = 1; k <= 9; ++k) {
	    msm[k - 1] = k;
	}
    }
/* 	if (mselect.eq.1) then */
/* 		fill in which variables */
/* 		mdimt= */
/* 		msm(1)= */
/* 		--- */
/* 		msm(mdimt)= */
/* 	endif */

/* 	------------------------------------------------------- */
/* 	SET CATEGORICAL VALUES */

    for (m = 1; m <= 9; ++m) {
	cat[m - 1] = 1;
    }
/* 	fill in cat(m) for all variables m for which cat(m)>1 */
/* 	do m=1,mdim */
/* 		cat(m)=4 */
/* 	enddo */

/* 	------------------------------------------------------- */
/* 	SET CLASS WEIGHTS */

    for (j = 1; j <= 6; ++j) {
	classwt[j - 1] = 1.f;
    }
/* 	if(jclasswt.eq.1) then */
/* 		fill in classwt(j) for each j: */
/* 		classwt(1)=1. */
/* 		classwt(2)=10. */
/* 	endif */
    classwt[0] = 3.0571428571428569f;
    classwt[1] = 2.8157894736842106f;
    classwt[2] = 12.588235294117647f;
    classwt[3] = 16.46153846153846f;
    classwt[4] = 23.777777777777779f;
    classwt[5] = 7.3793103448275863f;

/* 	======================================================= */
/* 	**************  END OF USER INPUT  ******************** */
/* 	======================================================= */

/* 	------------------------------------------------------- */
/* 	MISC PARAMETERS (SHOULD NOT USUALLY NEED ADJUSTMENT) */
    iseed = 4351;
    sgrnd_(&iseed);
    nmfmax = 5;
/* number of iterations (iterative fillin) */
    ncsplit = 25;
/* number of random splits (big categoricals) */
    ncmax = 25;

/* 	------------------------------------------------------- */
/* 	ERROR CHECKING */

/* big categorical has more than ncmax levels */
    checkin_(&c__0, &c__1, &c__6, &c__1, &c__0, &c__0, &c__0, &c__9, &c__1, &
	    c__1, &c__1, &c__1, &c__214, &c__214, &c__0, &c__3, &c__2, &c__0, 
	    &c__1, &c__0, &c__0, &c__0, &c__0, &c__0, &c__0, &c__0, &c__0, &
	    c__1, &c__0, &c__0, &c__0, &c__0, &c__0, &c__1, &c__0, &c__0, cat,
	     &c__1, cl);

/* 	------------------------------------------------------- */
/* 	SPECIAL CASES - QUERY PARAMETERS OR USE SAVED TREE */

/* 	query parameters */
    if (FALSE_) {
	goto L888;
    }

/* 	use saved tree */
    if (FALSE_) {
	goto L999;
    }

/* 	------------------------------------------------------- */
/* 	INITIALIZATION */

/* 	mtry will change if mdim2nd>0, so make it a variable */
    mtry = 2;

/* 	nmissfill is the number of missing-value-fillin loops */
    nmissfill = 1;
    if (FALSE_) {
	nmissfill = nmfmax;
    }

/* 	ndimreps is 2 if we want to do variable selection, */
/* 	otherwise it's 1 */
    ndimreps = 1;
    if (FALSE_) {
	ndimreps = 2;
    }

/* 	assign weights for equal weighting case */
/* 	(use getweights for unequal weighting case) */
    if (TRUE_) {
	for (k = 1; k <= 429; ++k) {
	    tnodewt[k - 1] = 1.f;
	}
    }

    if (TRUE_) {
	for (n = 1; n <= 214; ++n) {
	    wtx[n - 1] = classwt[cl[n - 1] - 1];
	}
    } else {
	for (n = 1; n <= 214; ++n) {
	    wtx[n - 1] = 1.f;
	}
    }

/* 	------------------------------------------------------- */
/* 	IF DATA ARE UNLABELED, ADD A SYNTHETIC CLASS */

    if (FALSE_) {
	createclass_(x, cl, &c__214, &c__214, &c__9);
    }

/* 	------------------------------------------------------- */
/* 	COUNT CLASS POPULATIONS */

    zerv_(nc, &c__6);
    for (n = 1; n <= 214; ++n) {
	++nc[cl[n - 1] - 1];
    }
    if (FALSE_) {
	zerv_(ncts, &c__6);
	for (n = 1; n <= 1; ++n) {
	    ++ncts[clts[n - 1] - 1];
	}
    }

/* 	------------------------------------------------------- */
/* 	DO PRELIMINARY MISSING DATA */

    if (FALSE_) {
	roughfix_(x, v, ncase, &c__9, &c__214, cat, &c_b113, nrcat, &c__1, 
		fill);
	if (FALSE_) {
	    xfill_(xts, &c__0, &c__9, fill, &c_b113);
	}
    }
    if (FALSE_) {
	for (n = 1; n <= 214; ++n) {
	    for (m = 1; m <= 9; ++m) {
		if ((r__1 = -999.f - x[m + n * 9 - 10], dabs(r__1)) < 
			8.232e-11) {
		    missing[m + n * 9 - 10] = 1;
		} else {
		    missing[m + n * 9 - 10] = 0;
		}
	    }
	}
	roughfix_(x, v, ncase, &c__9, &c__214, cat, &c_b113, nrcat, &c__1, 
		fill);
    }

/* 	------------------------------------------------------- */
/* 	TOP OF LOOP FOR ITERATIVE MISSING VALUE FILL OR SUBSET SELECTION */

    i__1 = ndimreps;
    for (nmd = 1; nmd <= i__1; ++nmd) {
	if (TRUE_) {
	    zervr_(sqsd, &c__9);
	    zervr_(avimp, &c__9);
	}
	zervr_(avgini, &c__9);
	if (TRUE_) {
	    zervr_(qimp, &c__214);
	    zermr_(qimpm, &c__214, &c__9);
	}
	if (TRUE_) {
	    zermr_(votes, &c__9, &c__500);
	}
	i__2 = nmissfill;
	for (nmf = 1; nmf <= i__2; ++nmf) {

/* 	------------------------------------------------------- */
/* 	INITIALIZE FOR RUN */

	    makea_(x, &c__9, &c__214, cat, isort, v, asave, b, &mdimt, msm, 
		    v5, v95, &c__1);

	    zermr_(q, &c__6, &c__214);
	    zerv_(out, &c__214);
	    if (TRUE_) {
		zermd_(prox, &c__214, &c__214);
	    }
	    if (FALSE_) {
		zermr_(qts, &c__6, &c__0);
	    }

/* 	======================================================= */
/* 	**************  BEGIN MAIN LOOP  ********************** */
/* 	======================================================= */

	    for (jb = 1; jb <= 500; ++jb) {

/* 	------------------------------------------------------- */
/* 	INITIALIZE */

		zervr_(win, &c__214);
		zerv_(jin, &c__214);
		zervr_(tclasspop, &c__6);

/* 	------------------------------------------------------- */
/* 	TAKE A BOOTSTRAP SAMPLE */

		for (n = 1; n <= 214; ++n) {
		    k = (integer) (randomu_() * 214);
		    if (k < 214) {
			++k;
		    }
		    win[k - 1] += classwt[cl[k - 1] - 1];
		    ++jin[k - 1];
		    tclasspop[cl[k - 1] - 1] += classwt[cl[k - 1] - 1];
		}
		for (n = 1; n <= 214; ++n) {
		    if (jin[n - 1] == 0) {
			++out[n - 1];
		    }
/* 		out(n)=number of trees for which the nth */
/* 		obs has been out-of-bag */
		}

/* 	------------------------------------------------------- */
/* 	PREPARE TO BUILD TREE */

		moda_(asave, a, &nuse, &c__214, &c__9, cat, &c__1, ncase, jin,
			 &mdimt, msm);

/* 	------------------------------------------------------- */
/* 	MAIN TREE-BUILDING */

		buildtree_(a, b, cl, cat, &c__9, &c__214, &c__6, treemap, 
			bestvar, bestsplit, bestsplitnext, dgini, nodestatus, 
			nodepop, nodestart, classpop, tclasspop, tclasscat, 
			ta, &c__429, idmove, &c__1, ncase, parent, &mtry, 
			nodeclass, &ndbigtree, win, wr, wl, &nuse, kcat, 
			ncatsplit, xc, dn, cp, cm, &c__1, nbestcat, msm, &
			mdimt, &iseed, &ncsplit, &ncmax);

/* 	------------------------------------------------------- */
/* 	SPLIT X */

		xtranslate_(x, &c__9, &c__429, &c__214, bestvar, bestsplit, 
			bestsplitnext, xbestsplit, nodestatus, cat, &
			ndbigtree);

/* 	------------------------------------------------------- */
/* 	ASSIGN CLASSWEIGHTS TO NODES */

		if (FALSE_) {
		    getweights_(x, &c__214, &c__9, treemap, nodestatus, 
			    xbestsplit, bestvar, &c__429, &ndbigtree, cat, &
			    c__1, nbestcat, jin, win, tw, tn, tnodewt);
		}

/* 	------------------------------------------------------- */
/* 	GET OUT-OF-BAG ESTIMATES */

		testreebag_(x, &c__214, &c__9, treemap, nodestatus, 
			xbestsplit, bestvar, nodeclass, &c__429, &ndbigtree, 
			kpop, cat, jtr, nodextr, &c__1, nbestcat, rpop, dgini,
			 tgini, jin, wtx);
		for (n = 1; n <= 214; ++n) {
		    if (jin[n - 1] == 0) {
/* 		this case is out-of-bag */
			q[jtr[n - 1] + n * 6 - 7] += tnodewt[nodextr[n - 1] - 
				1];
		    }
		}
		i__3 = mdimt;
		for (k = 1; k <= i__3; ++k) {
		    m = msm[k - 1];
		    avgini[m - 1] += tgini[m - 1];
		    if (TRUE_) {
			votes[m + jb * 9 - 10] = tgini[m - 1];
		    }
		}

/* 	------------------------------------------------------- */
/* 	DO PRE-PROX COMPUTATION */

		if (TRUE_) {
		    preprox_(&c__214, &c__429, &c__500, nodestatus, ncount, &
			    jb, nod, nodextr, nodexb, jin, jinb, ncn, ndbegin,
			     kpop, rinpop, npcase, rpop, &c__214);
		}

/* 	------------------------------------------------------- */
/* 	GET TEST SET ERROR ESTIMATES */

		if (FALSE_) {
		    testreelite_(xts, &c__0, &c__9, treemap, nodestatus, 
			    xbestsplit, bestvar, nodeclass, &c__429, &
			    ndbigtree, cat, jts, &c__1, nbestcat, nodexts);
		    for (n = 1; n <= 1; ++n) {
			qts[jts[n - 1] + n * 6 - 7] += tnodewt[nodexts[n - 1] 
				- 1];
		    }
		}

/* 	------------------------------------------------------- */
/* 	GIVE RUNNING OUTPUT */

		if (jb == 1) {
		    s_wsle(&io___96);
		    do_lio(&c__9, &c__1, "class counts-training data", (
			    ftnlen)26);
		    e_wsle();
		    s_wsle(&io___97);
		    for (j = 1; j <= 6; ++j) {
			do_lio(&c__3, &c__1, (char *)&nc[j - 1], (ftnlen)
				sizeof(integer));
		    }
		    e_wsle();
		    if (FALSE_) {
			s_wsle(&io___98);
			e_wsle();
			s_wsle(&io___99);
			do_lio(&c__9, &c__1, "class counts-test data", (
				ftnlen)22);
			e_wsle();
			s_wsle(&io___100);
			for (j = 1; j <= 6; ++j) {
			    do_lio(&c__3, &c__1, (char *)&ncts[j - 1], (
				    ftnlen)sizeof(integer));
			}
			e_wsle();
		    }
		}
		if (jb % 100 == 0 || jb == 500) {
		    comperrtr_(q, cl, &c__214, &c__6, &errtr, tmiss, nc, jest,
			     out);
		    if (TRUE_) {
			if (TRUE_) {
			    s_wsfe(&io___104);
			    do_fio(&c__1, (char *)&jb, (ftnlen)sizeof(integer)
				    );
			    r__1 = errtr * 100;
			    do_fio(&c__1, (char *)&r__1, (ftnlen)sizeof(real))
				    ;
			    for (j = 1; j <= 6; ++j) {
				r__2 = tmiss[j - 1] * 100;
				do_fio(&c__1, (char *)&r__2, (ftnlen)sizeof(
					real));
			    }
			    e_wsfe();
			} else {
			    s_wsfe(&io___105);
			    do_fio(&c__1, (char *)&jb, (ftnlen)sizeof(integer)
				    );
			    r__1 = errtr * 100;
			    do_fio(&c__1, (char *)&r__1, (ftnlen)sizeof(real))
				    ;
			    e_wsfe();
			}
		    }
		    if (FALSE_) {
			comperrts_(qts, clts, &c__0, &c__6, &errts, tmissts, 
				ncts, jests, &c__0);
			if (TRUE_) {
			    if (FALSE_) {
				if (TRUE_) {
				    s_wsfe(&io___109);
				    do_fio(&c__1, (char *)&jb, (ftnlen)sizeof(
					    integer));
				    r__1 = errts * 100;
				    do_fio(&c__1, (char *)&r__1, (ftnlen)
					    sizeof(real));
				    for (j = 1; j <= 6; ++j) {
					r__2 = tmissts[j - 1] * 100;
					do_fio(&c__1, (char *)&r__2, (ftnlen)
						sizeof(real));
				    }
				    e_wsfe();
				} else {
				    s_wsfe(&io___110);
				    do_fio(&c__1, (char *)&jb, (ftnlen)sizeof(
					    integer));
				    r__1 = errts * 100;
				    do_fio(&c__1, (char *)&r__1, (ftnlen)
					    sizeof(real));
				    e_wsfe();
				}
				s_wsle(&io___111);
				e_wsle();
			    }
			}
		    }
		}

/* 	------------------------------------------------------- */
/* 	VARIABLE IMPORTANCE */

		if (nmf == nmissfill) {
		    varimp_(x, &c__214, &c__9, cl, &c__6, jin, jtr, &c__1, &
			    c__1, msm, &mdimt, qimp, qimpm, avimp, sqsd, 
			    treemap, nodestatus, xbestsplit, bestvar, 
			    nodeclass, &c__429, &ndbigtree, cat, jvr, nodexvr,
			     &c__1, nbestcat, tnodewt, nodextr, joob, pjoob, 
			    iv);
		}

/* 	------------------------------------------------------- */
/* 	SEND SAVETREE DATA TO FILE (IF THIS IS THE FINAL FOREST) */

		if (FALSE_) {
		    if (jb == 1) {
			s_wsle(&io___117);
			for (m = 1; m <= 9; ++m) {
			    do_lio(&c__3, &c__1, (char *)&cat[m - 1], (ftnlen)
				    sizeof(integer));
			}
			e_wsle();
			if (FALSE_) {
			    s_wsle(&io___118);
			    for (m = 1; m <= 9; ++m) {
				do_lio(&c__4, &c__1, (char *)&fill[m - 1], (
					ftnlen)sizeof(real));
			    }
			    e_wsle();
			}
		    }
		    s_wsle(&io___119);
		    do_lio(&c__3, &c__1, (char *)&ndbigtree, (ftnlen)sizeof(
			    integer));
		    e_wsle();
		    i__3 = ndbigtree;
		    for (n = 1; n <= i__3; ++n) {
			s_wsle(&io___120);
			do_lio(&c__3, &c__1, (char *)&n, (ftnlen)sizeof(
				integer));
			do_lio(&c__3, &c__1, (char *)&nodestatus[n - 1], (
				ftnlen)sizeof(integer));
			do_lio(&c__3, &c__1, (char *)&bestvar[n - 1], (ftnlen)
				sizeof(integer));
			do_lio(&c__3, &c__1, (char *)&treemap[(n << 1) - 2], (
				ftnlen)sizeof(integer));
			do_lio(&c__3, &c__1, (char *)&treemap[(n << 1) - 1], (
				ftnlen)sizeof(integer));
			do_lio(&c__3, &c__1, (char *)&nodeclass[n - 1], (
				ftnlen)sizeof(integer));
			do_lio(&c__4, &c__1, (char *)&xbestsplit[n - 1], (
				ftnlen)sizeof(real));
			do_lio(&c__4, &c__1, (char *)&tnodewt[n - 1], (ftnlen)
				sizeof(real));
			for (k = 1; k <= 1; ++k) {
			    do_lio(&c__3, &c__1, (char *)&nbestcat[k + n - 2],
				     (ftnlen)sizeof(integer));
			}
			e_wsle();
		    }
		}
/* 	======================================================= */
/* 	**************  END MAIN LOOP  ************************ */
/* 	======================================================= */
	    }

/* 	------------------------------------------------------- */
/* 	FIND PROXIMITIES, FILL IN MISSING VALUES AND ITERATE */

/* jb */
	    if (nmf < nmissfill) {
		s_wsle(&io___121);
		do_lio(&c__9, &c__1, "nrep", (ftnlen)4);
		do_lio(&c__3, &c__1, (char *)&nmf, (ftnlen)sizeof(integer));
		e_wsle();
/* 		compute proximities between each obs in the training */
/* 		set and its nrnn closest neighbors */
		comprox_(prox, nodexb, jinb, ndbegin, npcase, ppr, rinpop, &
			c__214, &c__500, &c__0, outtr, cl, loz, &c__214, wtx, 
			&c__214, iwork, ibest);
/* 		use proximities to impute missing values */
		impute_(x, prox, &c__214, &c__9, &c__1, votecat, cat, &c__214,
			 loz, missing);
	    }
	}

/* 	------------------------------------------------------- */
/* 	COMPUTE IMPORTANCES, SELECT SUBSET AND LOOP BACK */

/* nmf */
	if (TRUE_) {
	    finishimp_(&c__9, sqsd, avimp, signif, zscore, &c__500, &mdimt, 
		    msm);
	    i__2 = mdimt;
	    for (m = 1; m <= i__2; ++m) {
/* 			zt(m) is the negative z-score for variable msm(m) */
		zt[m - 1] = -zscore[msm[m - 1] - 1];
		muse[m - 1] = msm[m - 1];
	    }
/* 		sort zt from smallest to largest,and sort muse accordingly */
	    quicksort_(zt, muse, &c__1, &mdimt, &c__9);
/* 		muse(m) refers to the variable that has the mth-smallest zt */
/* 		select the mdim2nd most important variables and iterate */
	    if (FALSE_) {
		mdimt = 0;
		i__2 = mdimt;
		for (m = 1; m <= i__2; ++m) {
		    msm[m - 1] = muse[m - 1];
		}
		r__1 = sqrt((real) mdimt);
		mtry = i_nint(&r__1);
	    }
	}
    }

/* 	------------------------------------------------------- */
/* 	END OF ITERATIONS - NOW ENDGAME */
/* 	------------------------------------------------------- */

/* 	------------------------------------------------------- */
/* 	NORMALIZE VOTES */

/* nmd */
    for (j = 1; j <= 6; ++j) {
	for (n = 1; n <= 214; ++n) {
	    if (q[j + n * 6 - 7] > 0.f && out[n - 1] > 0) {
		q[j + n * 6 - 7] /= (real) out[n - 1];
	    }
	}
	if (FALSE_) {
	    for (n = 1; n <= 1; ++n) {
		qts[j + n * 6 - 7] /= 500;
	    }
	}
    }

/* 	------------------------------------------------------- */
/* 	COMPUTE PROXIMITIES AND SEND TO FILE */

    if (TRUE_) {
/* 		compute proximities between each obs in the training */
/* 		set and its nrnn closest neighbors */
	comprox_(prox, nodexb, jinb, ndbegin, npcase, ppr, rinpop, &c__214, &
		c__500, &c__0, outtr, cl, loz, &c__214, wtx, &c__214, iwork, 
		ibest);
	if (TRUE_) {
	    for (n = 1; n <= 214; ++n) {
		s_wsfe(&io___132);
		do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
		for (k = 1; k <= 214; ++k) {
		    do_fio(&c__1, (char *)&loz[n + k * 214 - 215], (ftnlen)
			    sizeof(integer));
		    do_fio(&c__1, (char *)&prox[n + k * 214 - 215], (ftnlen)
			    sizeof(doublereal));
		}
		e_wsfe();
	    }
	}
    }
    cl__1.cerr = 0;
    cl__1.cunit = 13;
    cl__1.csta = 0;
    f_clos(&cl__1);

/* 	------------------------------------------------------- */
/* 	COMPUTE SCALING COORDINATES AND SEND TO FILE */

    if (TRUE_) {
	myscale_(loz, prox, xsc, y, u, &c__214, &c__3, red, &c__214, ee, ev, 
		dl);
	if (FALSE_) {
	    for (n = 1; n <= 3; ++n) {
		s_wsfe(&io___140);
		do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
		do_fio(&c__1, (char *)&dl[n - 1], (ftnlen)sizeof(doublereal));
		e_wsfe();
	    }
	    for (n = 1; n <= 214; ++n) {
		s_wsfe(&io___141);
		do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
		do_fio(&c__1, (char *)&cl[n - 1], (ftnlen)sizeof(integer));
		do_fio(&c__1, (char *)&jest[n - 1], (ftnlen)sizeof(integer));
		for (k = 1; k <= 3; ++k) {
		    do_fio(&c__1, (char *)&xsc[n + k * 214 - 215], (ftnlen)
			    sizeof(doublereal));
		}
		e_wsfe();
	    }
	    cl__1.cerr = 0;
	    cl__1.cunit = 14;
	    cl__1.csta = 0;
	    f_clos(&cl__1);
	}
    }

/* 	------------------------------------------------------- */
/* 	COMPUTE CASEWISE VARIABLE IMPORTANCE (FOR GRAPHICS) */
/* 	AND SEND TO FILE */

    if (TRUE_) {
	for (n = 1; n <= 214; ++n) {
	    i__1 = mdimt;
	    for (m1 = 1; m1 <= i__1; ++m1) {
		mr = msm[m1 - 1];
		qimpm[n + mr * 214 - 215] = (qimp[n - 1] - qimpm[n + mr * 214 
			- 215]) * 100 / 500;
	    }
	    if (FALSE_) {
		s_wsfe(&io___144);
		i__1 = mdimt;
		for (m1 = 1; m1 <= i__1; ++m1) {
		    do_fio(&c__1, (char *)&qimpm[n + msm[m1 - 1] * 214 - 215],
			     (ftnlen)sizeof(real));
		}
		e_wsfe();
	    }
	}
    }

/* 	------------------------------------------------------- */
/* 	SEND IMPORTANCES TO FILE OR SCREEN */

    if (TRUE_) {
	i__1 = min(mdimt,25);
	for (k = 1; k <= i__1; ++k) {
	    m = muse[k - 1];
	    if (FALSE_) {
		s_wsfe(&io___145);
		do_fio(&c__1, (char *)&m, (ftnlen)sizeof(integer));
		r__1 = avimp[m - 1] * 100;
		do_fio(&c__1, (char *)&r__1, (ftnlen)sizeof(real));
		do_fio(&c__1, (char *)&zscore[m - 1], (ftnlen)sizeof(real));
		do_fio(&c__1, (char *)&signif[m - 1], (ftnlen)sizeof(real));
		e_wsfe();
	    }
	    if (FALSE_) {
		s_wsfe(&io___146);
		do_fio(&c__1, (char *)&m, (ftnlen)sizeof(integer));
		r__1 = avimp[m - 1] * 100;
		do_fio(&c__1, (char *)&r__1, (ftnlen)sizeof(real));
		do_fio(&c__1, (char *)&zscore[m - 1], (ftnlen)sizeof(real));
		do_fio(&c__1, (char *)&signif[m - 1], (ftnlen)sizeof(real));
		e_wsfe();
	    }
	}
	cl__1.cerr = 0;
	cl__1.cunit = 9;
	cl__1.csta = 0;
	f_clos(&cl__1);
    }

/* 	------------------------------------------------------- */
/* 	COMPUTE INTERACTIONS AND SEND TO FILE OR SCREEN */

    if (TRUE_) {
	compinteract_(votes, effect, msm, &c__9, &mdimt, &c__500, g, iv, irnk,
		 hist, teffect);
	if (FALSE_) {
	    s_wsle(&io___152);
	    do_lio(&c__9, &c__1, "CODE", (ftnlen)4);
	    e_wsle();
	    i__1 = mdimt;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		s_wsle(&io___154);
		do_lio(&c__3, &c__1, (char *)&i__, (ftnlen)sizeof(integer));
		do_lio(&c__3, &c__1, (char *)&msm[i__ - 1], (ftnlen)sizeof(
			integer));
		e_wsle();
	    }
	    s_wsle(&io___155);
	    e_wsle();
	    i__1 = mdimt;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		m = msm[i__ - 1];
		effect[m + m * 9 - 10] = 0.f;
		s_wsfe(&io___156);
		do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
		i__2 = mdimt;
		for (j = 1; j <= i__2; ++j) {
		    i__3 = i_nint(&effect[m + msm[j - 1] * 9 - 10]);
		    do_fio(&c__1, (char *)&i__3, (ftnlen)sizeof(integer));
		}
		e_wsfe();
	    }
	    cl__1.cerr = 0;
	    cl__1.cunit = 11;
	    cl__1.csta = 0;
	    f_clos(&cl__1);
	}
	if (FALSE_) {
	    s_wsle(&io___157);
	    do_lio(&c__9, &c__1, "CODE", (ftnlen)4);
	    e_wsle();
	    i__1 = mdimt;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		s_wsle(&io___158);
		do_lio(&c__3, &c__1, (char *)&i__, (ftnlen)sizeof(integer));
		do_lio(&c__3, &c__1, (char *)&msm[i__ - 1], (ftnlen)sizeof(
			integer));
		e_wsle();
	    }
	    s_wsle(&io___159);
	    e_wsle();
	    i__1 = mdimt;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		m = msm[i__ - 1];
		effect[m + m * 9 - 10] = 0.f;
		s_wsfe(&io___160);
		do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
		i__3 = mdimt;
		for (j = 1; j <= i__3; ++j) {
		    i__2 = i_nint(&effect[m + msm[j - 1] * 9 - 10]);
		    do_fio(&c__1, (char *)&i__2, (ftnlen)sizeof(integer));
		}
		e_wsfe();
	    }
	}
    }

/* 	------------------------------------------------------- */
/* 	COMPUTE FASTIMP AND SEND TO FILE */

    if (FALSE_) {
	tavg = 0.f;
	i__1 = mdimt;
	for (k = 1; k <= i__1; ++k) {
	    m = msm[k - 1];
	    tavg += avgini[m - 1];
	}
	tavg /= mdimt;
	i__1 = mdimt;
	for (k = 1; k <= i__1; ++k) {
	    m = msm[k - 1];
	    s_wsle(&io___162);
	    do_lio(&c__3, &c__1, (char *)&m, (ftnlen)sizeof(integer));
	    r__1 = avgini[m - 1] / tavg;
	    do_lio(&c__4, &c__1, (char *)&r__1, (ftnlen)sizeof(real));
	    e_wsle();
	}
	cl__1.cerr = 0;
	cl__1.cunit = 8;
	cl__1.csta = 0;
	f_clos(&cl__1);
    }
/* 	------------------------------------------------------- */
/* 	COMPUTE PROTOTYPES AND SEND TO FILE */

    if (TRUE_) {
	compprot_(loz, &c__214, &c__214, &c__9, its, cl, wc, &c__6, x, &mdimt,
		 msm, temp, cat, &c__1, jpur, inear, &c__2, protlow, prothigh,
		 prot, protfreq, protvlow, protvhigh, protv, popclass, npend, 
		freq, v5, v95);

	if (FALSE_) {
	    s_wsfe(&io___178);
	    do_fio(&c__1, "     ", (ftnlen)5);
	    for (j = 1; j <= 6; ++j) {
		i__1 = npend[j - 1];
		for (i__ = 1; i__ <= i__1; ++i__) {
		    i__2 = i_nint(&popclass[i__ + (j << 1) - 3]);
		    do_fio(&c__1, (char *)&i__2, (ftnlen)sizeof(integer));
		}
	    }
	    e_wsfe();
	    s_wsfe(&io___179);
	    do_fio(&c__1, "     ", (ftnlen)5);
	    for (j = 1; j <= 6; ++j) {
		i__2 = npend[j - 1];
		for (i__ = 1; i__ <= i__2; ++i__) {
		    do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
		}
	    }
	    e_wsfe();
	    s_wsfe(&io___180);
	    do_fio(&c__1, "     ", (ftnlen)5);
	    for (j = 1; j <= 6; ++j) {
		i__2 = npend[j - 1];
		for (i__ = 1; i__ <= i__2; ++i__) {
		    do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
		}
	    }
	    e_wsfe();
	    i__2 = mdimt;
	    for (k = 1; k <= i__2; ++k) {
		m = msm[k - 1];
		if (cat[m - 1] == 1) {
		    s_wsfe(&io___181);
		    do_fio(&c__1, (char *)&k, (ftnlen)sizeof(integer));
		    for (j = 1; j <= 6; ++j) {
			i__1 = npend[j - 1];
			for (i__ = 1; i__ <= i__1; ++i__) {
			    do_fio(&c__1, (char *)&prot[m + (i__ + (j << 1)) *
				     9 - 28], (ftnlen)sizeof(real));
			    do_fio(&c__1, (char *)&protlow[m + (i__ + (j << 1)
				    ) * 9 - 28], (ftnlen)sizeof(real));
			    do_fio(&c__1, (char *)&prothigh[m + (i__ + (j << 
				    1)) * 9 - 28], (ftnlen)sizeof(real));
			}
		    }
		    e_wsfe();
		} else {
		    s_wsfe(&io___182);
		    do_fio(&c__1, (char *)&k, (ftnlen)sizeof(integer));
		    for (j = 1; j <= 6; ++j) {
			i__1 = npend[j - 1];
			for (i__ = 1; i__ <= i__1; ++i__) {
			    i__3 = cat[m - 1];
			    for (jj = 1; jj <= i__3; ++jj) {
				do_fio(&c__1, (char *)&protfreq[m + (i__ + (j 
					+ jj * 6 << 1)) * 9 - 136], (ftnlen)
					sizeof(real));
			    }
			}
		    }
		    e_wsfe();
		}
	    }
	}
	cl__1.cerr = 0;
	cl__1.cunit = 12;
	cl__1.csta = 0;
	f_clos(&cl__1);

	if (FALSE_) {
	    s_wsfe(&io___184);
	    do_fio(&c__1, "     ", (ftnlen)5);
	    for (j = 1; j <= 6; ++j) {
		i__2 = npend[j - 1];
		for (i__ = 1; i__ <= i__2; ++i__) {
		    i__3 = i_nint(&popclass[i__ + (j << 1) - 3]);
		    do_fio(&c__1, (char *)&i__3, (ftnlen)sizeof(integer));
		}
	    }
	    e_wsfe();
	    i__3 = mdimt;
	    for (k = 1; k <= i__3; ++k) {
		m = msm[k - 1];
		if (cat[m - 1] == 1) {
		    s_wsfe(&io___185);
		    do_fio(&c__1, (char *)&k, (ftnlen)sizeof(integer));
		    for (j = 1; j <= 6; ++j) {
			i__2 = npend[j - 1];
			for (i__ = 1; i__ <= i__2; ++i__) {
			    do_fio(&c__1, (char *)&prot[m + (i__ + (j << 1)) *
				     9 - 28], (ftnlen)sizeof(real));
			    do_fio(&c__1, (char *)&protlow[m + (i__ + (j << 1)
				    ) * 9 - 28], (ftnlen)sizeof(real));
			    do_fio(&c__1, (char *)&prothigh[m + (i__ + (j << 
				    1)) * 9 - 28], (ftnlen)sizeof(real));
			}
		    }
		    e_wsfe();
		} else {
		    s_wsfe(&io___186);
		    do_fio(&c__1, (char *)&k, (ftnlen)sizeof(integer));
		    for (j = 1; j <= 6; ++j) {
			i__2 = npend[j - 1];
			for (i__ = 1; i__ <= i__2; ++i__) {
			    i__1 = cat[m - 1];
			    for (jj = 1; jj <= i__1; ++jj) {
				do_fio(&c__1, (char *)&protfreq[m + (i__ + (j 
					+ jj * 6 << 1)) * 9 - 136], (ftnlen)
					sizeof(real));
			    }
			}
		    }
		    e_wsfe();
		}
	    }
	}
    }

/* 	------------------------------------------------------- */
/* 	COMPUTE OUTLIER MEASURE AND SEND TO FILE */

    if (FALSE_) {
	locateout_(cl, tout, outtr, ncp, isort, devout, &c__214, &c__214, &
		c__6, rmedout);
	if (FALSE_) {
	    for (n = 1; n <= 214; ++n) {
		s_wsfe(&io___191);
		do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
		do_fio(&c__1, (char *)&cl[n - 1], (ftnlen)sizeof(integer));
/* Computing MAX */
		r__2 = outtr[n - 1];
		r__1 = dmax(r__2,0.f);
		do_fio(&c__1, (char *)&r__1, (ftnlen)sizeof(real));
		e_wsfe();
	    }
	}
    }
/* 	------------------------------------------------------- */
/* 	SUMMARY OUTPUT */

    if (TRUE_) {
	s_wsle(&io___192);
	do_lio(&c__9, &c__1, "final error rate %    ", (ftnlen)22);
	r__1 = errtr * 100;
	do_lio(&c__4, &c__1, (char *)&r__1, (ftnlen)sizeof(real));
	e_wsle();
	if (FALSE_) {
	    s_wsle(&io___193);
	    do_lio(&c__9, &c__1, "final error test %    ", (ftnlen)22);
	    r__1 = errts * 100;
	    do_lio(&c__4, &c__1, (char *)&r__1, (ftnlen)sizeof(real));
	    e_wsle();
	}
	s_wsle(&io___194);
	e_wsle();
	s_wsle(&io___195);
	do_lio(&c__9, &c__1, "Training set confusion matrix (OOB):", (ftnlen)
		36);
	e_wsle();
	zerm_(mtab, &c__6, &c__6);
	for (n = 1; n <= 214; ++n) {
	    if (jest[n - 1] > 0) {
		++mtab[cl[n - 1] + jest[n - 1] * 6 - 7];
	    }
	}
	s_wsle(&io___197);
	do_lio(&c__9, &c__1, "\t    true class ", (ftnlen)16);
	e_wsle();
	s_wsle(&io___198);
	e_wsle();
	s_wsfe(&io___199);
	for (i__ = 1; i__ <= 6; ++i__) {
	    do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
	}
	e_wsfe();
	s_wsle(&io___200);
	e_wsle();
	for (j = 1; j <= 6; ++j) {
	    s_wsfe(&io___201);
	    do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
	    for (i__ = 1; i__ <= 6; ++i__) {
		do_fio(&c__1, (char *)&mtab[i__ + j * 6 - 7], (ftnlen)sizeof(
			integer));
	    }
	    e_wsfe();
	}
	s_wsle(&io___202);
	e_wsle();
	if (FALSE_) {
	    zerm_(mtab, &c__6, &c__6);
	    for (n = 1; n <= 1; ++n) {
		++mtab[clts[n - 1] + jests[n - 1] * 6 - 7];
	    }
	    s_wsle(&io___203);
	    do_lio(&c__9, &c__1, "Test set confusion matrix:", (ftnlen)26);
	    e_wsle();
	    s_wsle(&io___204);
	    do_lio(&c__9, &c__1, "\t    true class ", (ftnlen)16);
	    e_wsle();
	    s_wsle(&io___205);
	    e_wsle();
	    s_wsfe(&io___206);
	    for (i__ = 1; i__ <= 6; ++i__) {
		do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
	    }
	    e_wsfe();
	    s_wsle(&io___207);
	    e_wsle();
	    for (j = 1; j <= 6; ++j) {
		s_wsfe(&io___208);
		do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
		for (i__ = 1; i__ <= 6; ++i__) {
		    do_fio(&c__1, (char *)&mtab[i__ + j * 6 - 7], (ftnlen)
			    sizeof(integer));
		}
		e_wsfe();
	    }
	    s_wsle(&io___209);
	    e_wsle();
	}
    }

/* 	------------------------------------------------------- */
/* 	SEND INFO ON TRAINING AND/OR TEST SET DATA TO FILE */

    if (FALSE_) {
	for (n = 1; n <= 214; ++n) {
	    s_wsfe(&io___210);
	    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&cl[n - 1], (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&jest[n - 1], (ftnlen)sizeof(integer));
	    for (j = 1; j <= 6; ++j) {
		do_fio(&c__1, (char *)&q[j + n * 6 - 7], (ftnlen)sizeof(real))
			;
	    }
	    for (m = 1; m <= 9; ++m) {
		do_fio(&c__1, (char *)&x[m + n * 9 - 10], (ftnlen)sizeof(real)
			);
	    }
	    e_wsfe();
	}
    }
    if (FALSE_) {
	if (FALSE_) {
	    for (n = 1; n <= 1; ++n) {
		s_wsfe(&io___211);
		do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
		do_fio(&c__1, (char *)&clts[n - 1], (ftnlen)sizeof(integer));
		do_fio(&c__1, (char *)&jests[n - 1], (ftnlen)sizeof(integer));
		for (j = 1; j <= 6; ++j) {
		    do_fio(&c__1, (char *)&qts[j + n * 6 - 7], (ftnlen)sizeof(
			    real));
		}
		for (m = 1; m <= 9; ++m) {
		    do_fio(&c__1, (char *)&xts[m + n * 9 - 10], (ftnlen)
			    sizeof(real));
		}
		e_wsfe();
	    }
	} else {
	    for (n = 1; n <= 1; ++n) {
		s_wsfe(&io___212);
		do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
		do_fio(&c__1, (char *)&jests[n - 1], (ftnlen)sizeof(integer));
		for (j = 1; j <= 6; ++j) {
		    do_fio(&c__1, (char *)&qts[j + n * 6 - 7], (ftnlen)sizeof(
			    real));
		}
		for (m = 1; m <= 9; ++m) {
		    do_fio(&c__1, (char *)&xts[m + n * 9 - 10], (ftnlen)
			    sizeof(real));
		}
		e_wsfe();
	    }
	}
    }
    cl__1.cerr = 0;
    cl__1.cunit = 7;
    cl__1.csta = 0;
    f_clos(&cl__1);

/* 	------------------------------------------------------- */
/* 	SEND GRAPHICS INFO TO FILES */

    if (TRUE_) {
	for (n = 1; n <= 214; ++n) {
	    s_wsfe(&io___213);
	    i__3 = mdimt;
	    for (m = 1; m <= i__3; ++m) {
		do_fio(&c__1, (char *)&x[msm[m - 1] + n * 9 - 10], (ftnlen)
			sizeof(real));
	    }
	    e_wsfe();
	}
	for (n = 1; n <= 214; ++n) {
	    s_wsfe(&io___214);
	    i__3 = mdimt;
	    for (m1 = 1; m1 <= i__3; ++m1) {
		do_fio(&c__1, (char *)&qimpm[n + msm[m1 - 1] * 214 - 215], (
			ftnlen)sizeof(real));
	    }
	    e_wsfe();
	}
	for (n = 1; n <= 214; ++n) {
	    s_wsfe(&io___215);
	    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&cl[n - 1], (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&jest[n - 1], (ftnlen)sizeof(integer));
	    for (j = 1; j <= 6; ++j) {
		do_fio(&c__1, (char *)&q[j + n * 6 - 7], (ftnlen)sizeof(real))
			;
	    }
	    e_wsfe();
	}
	s_wsle(&io___216);
	do_lio(&c__3, &c__1, (char *)&c__214, (ftnlen)sizeof(integer));
	do_lio(&c__3, &c__1, (char *)&mdimt, (ftnlen)sizeof(integer));
	do_lio(&c__3, &c__1, (char *)&c__3, (ftnlen)sizeof(integer));
	do_lio(&c__3, &c__1, (char *)&c__6, (ftnlen)sizeof(integer));
	do_lio(&c__3, &c__1, (char *)&mdimt, (ftnlen)sizeof(integer));
	do_lio(&c__3, &c__1, (char *)&c__2, (ftnlen)sizeof(integer));
	do_lio(&c__3, &c__1, (char *)&c__214, (ftnlen)sizeof(integer));
	e_wsle();
	for (n = 1; n <= 214; ++n) {
	    s_wsfe(&io___217);
	    for (k = 1; k <= 3; ++k) {
		do_fio(&c__1, (char *)&xsc[n + k * 214 - 215], (ftnlen)sizeof(
			doublereal));
	    }
	    e_wsfe();
	}
	if (FALSE_) {
	    for (j = 1; j <= 6; ++j) {
		i__3 = npend[j - 1];
		for (i__ = 1; i__ <= i__3; ++i__) {
		    s_wsfe(&io___218);
		    do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
		    do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
		    do_fio(&c__1, (char *)&c__1, (ftnlen)sizeof(integer));
		    i__1 = mdimt;
		    for (m = 1; m <= i__1; ++m) {
			do_fio(&c__1, (char *)&protv[msm[m - 1] + (i__ + (j <<
				 1)) * 9 - 28], (ftnlen)sizeof(real));
		    }
		    e_wsfe();
		    s_wsfe(&io___219);
		    do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
		    do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
		    do_fio(&c__1, (char *)&c__2, (ftnlen)sizeof(integer));
		    i__1 = mdimt;
		    for (m = 1; m <= i__1; ++m) {
			do_fio(&c__1, (char *)&protvlow[msm[m - 1] + (i__ + (
				j << 1)) * 9 - 28], (ftnlen)sizeof(real));
		    }
		    e_wsfe();
		    s_wsfe(&io___220);
		    do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
		    do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
		    do_fio(&c__1, (char *)&c__3, (ftnlen)sizeof(integer));
		    i__1 = mdimt;
		    for (m = 1; m <= i__1; ++m) {
			do_fio(&c__1, (char *)&protvhigh[msm[m - 1] + (i__ + (
				j << 1)) * 9 - 28], (ftnlen)sizeof(real));
		    }
		    e_wsfe();
		    s_wsfe(&io___221);
		    i__1 = i_nint(&popclass[i__ + (j << 1) - 3]);
		    do_fio(&c__1, (char *)&i__1, (ftnlen)sizeof(integer));
		    e_wsfe();
		}
	    }
	}
	if (TRUE_) {
	    i__3 = mdimt;
	    for (i__ = 1; i__ <= i__3; ++i__) {
		m = msm[i__ - 1];
		effect[m + m * 9 - 10] = 0.f;
		s_wsfe(&io___222);
		i__1 = mdimt;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = i_nint(&effect[m + msm[j - 1] * 9 - 10]);
		    do_fio(&c__1, (char *)&i__2, (ftnlen)sizeof(integer));
		}
		e_wsfe();
	    }
	}
	if (TRUE_) {
	    for (n = 1; n <= 214; ++n) {
/* 				write(29,'(5000(i5,f10.3))') (loz(n,k),prox(n,k),k=1,nrnn) */
/* 				NEW???: */
		s_wsfe(&io___223);
		for (k = 1; k <= 214; ++k) {
		    do_fio(&c__1, (char *)&k, (ftnlen)sizeof(integer));
		    do_fio(&c__1, (char *)&prox[n + k * 214 - 215], (ftnlen)
			    sizeof(doublereal));
		}
		e_wsfe();
	    }
	}
    }

/* 	------------------------------------------------------- */
/* 	SEND FILL TO FILE (ROUGH FILL ONLY) */

    if (FALSE_) {
	s_wsle(&io___224);
	for (m = 1; m <= 9; ++m) {
	    do_lio(&c__4, &c__1, (char *)&fill[m - 1], (ftnlen)sizeof(real));
	}
	e_wsle();
    }

/* 	------------------------------------------------------- */
/* 	SEND RUN PARAMETERS TO FILE */

    if (FALSE_) {
	s_wsle(&io___225);
	do_lio(&c__3, &c__1, (char *)&c__214, (ftnlen)sizeof(integer));
	do_lio(&c__3, &c__1, (char *)&c__9, (ftnlen)sizeof(integer));
	do_lio(&c__3, &c__1, (char *)&c__1, (ftnlen)sizeof(integer));
	do_lio(&c__3, &c__1, (char *)&c__6, (ftnlen)sizeof(integer));
	do_lio(&c__3, &c__1, (char *)&c__500, (ftnlen)sizeof(integer));
	do_lio(&c__3, &c__1, (char *)&c__0, (ftnlen)sizeof(integer));
	do_lio(&c__3, &c__1, (char *)&c__0, (ftnlen)sizeof(integer));
	do_lio(&c__4, &c__1, (char *)&c_b113, (ftnlen)sizeof(real));
	do_lio(&c__3, &c__1, (char *)&c__429, (ftnlen)sizeof(integer));
	r__1 = errtr * 100;
	do_lio(&c__4, &c__1, (char *)&r__1, (ftnlen)sizeof(real));
	e_wsle();

/* 		type in comments up to 500 characters long */
/* 		between the ' ' in the line below. */

	s_wsle(&io___226);
	do_lio(&c__9, &c__1, "this is a test run to verify that my \t\tdescr"
		"iptive output works.", (ftnlen)64);
	e_wsle();
	cl__1.cerr = 0;
	cl__1.cunit = 2;
	cl__1.csta = 0;
	f_clos(&cl__1);
    }

/* 	------------------------------------------------------- */
/* 	END OF USUAL RUN */


/* 	------------------------------------------------------- */
/* 	READ RUN PARAMETERS AND PRINT TO SCREEN */

L888:
    if (FALSE_) {
	s_rsle(&io___227);
	do_lio(&c__3, &c__1, (char *)&n0, (ftnlen)sizeof(integer));
	do_lio(&c__3, &c__1, (char *)&n1, (ftnlen)sizeof(integer));
	do_lio(&c__3, &c__1, (char *)&n2, (ftnlen)sizeof(integer));
	do_lio(&c__3, &c__1, (char *)&n3, (ftnlen)sizeof(integer));
	do_lio(&c__3, &c__1, (char *)&n4, (ftnlen)sizeof(integer));
	do_lio(&c__3, &c__1, (char *)&n5, (ftnlen)sizeof(integer));
	do_lio(&c__3, &c__1, (char *)&n6, (ftnlen)sizeof(integer));
	do_lio(&c__3, &c__1, (char *)&n7, (ftnlen)sizeof(integer));
	do_lio(&c__4, &c__1, (char *)&er, (ftnlen)sizeof(real));
	e_rsle();
	s_wsle(&io___237);
	do_lio(&c__9, &c__1, "parameters", (ftnlen)10);
	e_wsle();
	s_wsle(&io___238);
	do_lio(&c__9, &c__1, "nsample=", (ftnlen)8);
	do_lio(&c__3, &c__1, (char *)&n0, (ftnlen)sizeof(integer));
	e_wsle();
	s_wsle(&io___239);
	do_lio(&c__9, &c__1, "mdim= ", (ftnlen)6);
	do_lio(&c__3, &c__1, (char *)&n1, (ftnlen)sizeof(integer));
	e_wsle();
	s_wsle(&io___240);
	do_lio(&c__9, &c__1, "maxcat=", (ftnlen)7);
	do_lio(&c__3, &c__1, (char *)&n2, (ftnlen)sizeof(integer));
	e_wsle();
	s_wsle(&io___241);
	do_lio(&c__9, &c__1, "nclass=", (ftnlen)7);
	do_lio(&c__3, &c__1, (char *)&n3, (ftnlen)sizeof(integer));
	e_wsle();
	s_wsle(&io___242);
	do_lio(&c__9, &c__1, "jbt=  ", (ftnlen)6);
	do_lio(&c__3, &c__1, (char *)&n4, (ftnlen)sizeof(integer));
	e_wsle();
	s_wsle(&io___243);
	do_lio(&c__9, &c__1, "jclasswt=", (ftnlen)9);
	do_lio(&c__3, &c__1, (char *)&n5, (ftnlen)sizeof(integer));
	e_wsle();
	s_wsle(&io___244);
	do_lio(&c__9, &c__1, "code=", (ftnlen)5);
	do_lio(&c__3, &c__1, (char *)&n6, (ftnlen)sizeof(integer));
	e_wsle();
	s_wsle(&io___245);
	do_lio(&c__9, &c__1, "nrnodes=", (ftnlen)8);
	do_lio(&c__3, &c__1, (char *)&n7, (ftnlen)sizeof(integer));
	e_wsle();
	s_wsle(&io___246);
	e_wsle();
	s_wsle(&io___247);
	do_lio(&c__9, &c__1, "out-of-bag error=", (ftnlen)17);
	do_lio(&c__4, &c__1, (char *)&er, (ftnlen)sizeof(real));
	do_lio(&c__9, &c__1, "%", (ftnlen)1);
	e_wsle();
	s_wsle(&io___248);
	e_wsle();
	s_rsfe(&io___249);
	do_fio(&c__1, text, (ftnlen)500);
	e_rsfe();
	s_wsle(&io___251);
	do_lio(&c__9, &c__1, text, (ftnlen)500);
	e_wsle();

	s_stop("", (ftnlen)0);

    }

/* 	------------------------------------------------------- */
/* 	RERUN OLD RANDOM FOREST */

L999:
    if (FALSE_) {
	runforest_(&c__9, &c__0, &c__6, &c__1, &c__429, &c__0, &c__500, clts, 
		xts, xbestsplit, qts, treemap, nbestcat, nodestatus, cat, 
		nodeclass, jts, jests, bestvar, tmissts, ncts, fill, &c__0, &
		c_b113, &errts, tnodewt, outts, &c__0, imax, &c__100, &c__1, 
		nodexts, &c__1, mtab);
    }

/* 	======================================================= */
/* 	**************  END MAIN ****************************** */
/* 	======================================================= */

    return 0;
} /* MAIN__ */


/* 	======================================================= */
/* 	**************  SUBROUTINES AND FUNCTIONS  ************ */
/* 	======================================================= */

/* 	------------------------------------------------------- */
/* Subroutine */ int runforest_(integer *mdim, integer *ntest, integer *
	nclass, integer *maxcat, integer *nrnodes, integer *labelts, integer *
	jbt, integer *clts, real *xts, real *xbestsplit, real *qts, integer *
	treemap, integer *nbestcat, integer *nodestatus, integer *cat, 
	integer *nodeclass, integer *jts, integer *jests, integer *bestvar, 
	real *tmissts, integer *ncts, real *fill, integer *missfill, real *
	code, real *errts, real *tnodewt, real *outts, integer *idataout, 
	integer *imax, integer *look, integer *lookcls, integer *nodexts, 
	integer *isumout, integer *mtab)
{
    /* System generated locals */
    integer xts_dim1, xts_offset, qts_dim1, qts_offset, nbestcat_dim1, 
	    nbestcat_offset, mtab_dim1, mtab_offset, i__1, i__2, i__3;
    real r__1, r__2;
    cllist cl__1;

    /* Builtin functions */
    integer s_rsle(cilist *), do_lio(integer *, integer *, char *, ftnlen), 
	    e_rsle(void), s_wsfe(cilist *), do_fio(integer *, char *, ftnlen),
	     e_wsfe(void), f_clos(cllist *), s_wsle(cilist *), e_wsle(void);

    /* Local variables */
    static integer j, m, n, ndbigtree;
    extern /* Subroutine */ int comperrts_(real *, integer *, integer *, 
	    integer *, real *, real *, integer *, integer *, integer *);
    static integer jb;
    extern /* Subroutine */ int testreelite_(real *, integer *, integer *, 
	    integer *, integer *, real *, integer *, integer *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, integer *),
	     zerm_(integer *, integer *, integer *), xfill_(real *, integer *,
	     integer *, real *, real *), zermr_(real *, integer *, integer *);
    static integer idummy;

    /* Fortran I/O blocks */
    static cilist io___254 = { 0, 1, 0, 0, 0 };
    static cilist io___256 = { 0, 1, 0, 0, 0 };
    static cilist io___259 = { 0, 1, 0, 0, 0 };
    static cilist io___261 = { 0, 1, 0, 0, 0 };
    static cilist io___264 = { 0, 6, 0, "(i8,100f10.2)", 0 };
    static cilist io___265 = { 0, 6, 0, "(i8,2f10.2)", 0 };
    static cilist io___266 = { 0, 7, 0, "(3i5,1000f10.3)", 0 };
    static cilist io___267 = { 0, 7, 0, "(3i5,1000f10.3)", 0 };
    static cilist io___268 = { 0, 6, 0, 0, 0 };
    static cilist io___269 = { 0, 6, 0, 0, 0 };
    static cilist io___270 = { 0, 6, 0, 0, 0 };
    static cilist io___271 = { 0, 6, 0, 0, 0 };
    static cilist io___272 = { 0, 6, 0, "(20i6)", 0 };
    static cilist io___273 = { 0, 6, 0, 0, 0 };
    static cilist io___274 = { 0, 6, 0, "(20i6)", 0 };
    static cilist io___275 = { 0, 6, 0, 0, 0 };



/* 	reads a forest file and runs new data through it */



    /* Parameter adjustments */
    --fill;
    --cat;
    --imax;
    --outts;
    --jests;
    --jts;
    xts_dim1 = *mdim;
    xts_offset = 1 + xts_dim1;
    xts -= xts_offset;
    --clts;
    mtab_dim1 = *nclass;
    mtab_offset = 1 + mtab_dim1;
    mtab -= mtab_offset;
    --ncts;
    --tmissts;
    qts_dim1 = *nclass;
    qts_offset = 1 + qts_dim1;
    qts -= qts_offset;
    --nodexts;
    --tnodewt;
    --bestvar;
    --nodeclass;
    --nodestatus;
    nbestcat_dim1 = *maxcat;
    nbestcat_offset = 1 + nbestcat_dim1;
    nbestcat -= nbestcat_offset;
    treemap -= 3;
    --xbestsplit;

    /* Function Body */
    zermr_(&qts[qts_offset], nclass, ntest);

    s_rsle(&io___254);
    i__1 = *mdim;
    for (m = 1; m <= i__1; ++m) {
	do_lio(&c__3, &c__1, (char *)&cat[m], (ftnlen)sizeof(integer));
    }
    e_rsle();

    if (*missfill == 1) {
	s_rsle(&io___256);
	i__1 = *mdim;
	for (m = 1; m <= i__1; ++m) {
	    do_lio(&c__4, &c__1, (char *)&fill[m], (ftnlen)sizeof(real));
	}
	e_rsle();
/* 		fast fix on the test data - */
	xfill_(&xts[xts_offset], ntest, mdim, &fill[1], code);
    }

    if (*labelts == 1) {
	i__1 = *ntest;
	for (n = 1; n <= i__1; ++n) {
	    ++ncts[clts[n]];
	}
    }

/* 	START DOWN FOREST */

    i__1 = *jbt;
    for (jb = 1; jb <= i__1; ++jb) {
	s_rsle(&io___259);
	do_lio(&c__3, &c__1, (char *)&ndbigtree, (ftnlen)sizeof(integer));
	e_rsle();
	i__2 = ndbigtree;
	for (n = 1; n <= i__2; ++n) {
	    s_rsle(&io___261);
	    do_lio(&c__3, &c__1, (char *)&idummy, (ftnlen)sizeof(integer));
	    do_lio(&c__3, &c__1, (char *)&nodestatus[n], (ftnlen)sizeof(
		    integer));
	    do_lio(&c__3, &c__1, (char *)&bestvar[n], (ftnlen)sizeof(integer))
		    ;
	    do_lio(&c__3, &c__1, (char *)&treemap[(n << 1) + 1], (ftnlen)
		    sizeof(integer));
	    do_lio(&c__3, &c__1, (char *)&treemap[(n << 1) + 2], (ftnlen)
		    sizeof(integer));
	    do_lio(&c__3, &c__1, (char *)&nodeclass[n], (ftnlen)sizeof(
		    integer));
	    do_lio(&c__4, &c__1, (char *)&xbestsplit[n], (ftnlen)sizeof(real))
		    ;
	    do_lio(&c__4, &c__1, (char *)&tnodewt[n], (ftnlen)sizeof(real));
	    i__3 = *maxcat;
	    for (j = 1; j <= i__3; ++j) {
		do_lio(&c__3, &c__1, (char *)&nbestcat[j + n * nbestcat_dim1],
			 (ftnlen)sizeof(integer));
	    }
	    e_rsle();
	}
	testreelite_(&xts[xts_offset], ntest, mdim, &treemap[3], &nodestatus[
		1], &xbestsplit[1], &bestvar[1], &nodeclass[1], nrnodes, &
		ndbigtree, &cat[1], &jts[1], maxcat, &nbestcat[
		nbestcat_offset], &nodexts[1]);
	i__2 = *ntest;
	for (n = 1; n <= i__2; ++n) {
	    qts[jts[n] + n * qts_dim1] += tnodewt[nodexts[n]];
	}
	if (*labelts == 1) {
	    if (jb % *look == 0 && jb <= *jbt) {
		comperrts_(&qts[qts_offset], &clts[1], ntest, nclass, errts, &
			tmissts[1], &ncts[1], &jests[1], labelts);
		if (*lookcls == 1) {
		    s_wsfe(&io___264);
		    do_fio(&c__1, (char *)&jb, (ftnlen)sizeof(integer));
		    r__1 = *errts * 100;
		    do_fio(&c__1, (char *)&r__1, (ftnlen)sizeof(real));
		    i__2 = *nclass;
		    for (j = 1; j <= i__2; ++j) {
			r__2 = tmissts[j] * 100;
			do_fio(&c__1, (char *)&r__2, (ftnlen)sizeof(real));
		    }
		    e_wsfe();
		} else {
		    s_wsfe(&io___265);
		    do_fio(&c__1, (char *)&jb, (ftnlen)sizeof(integer));
		    r__1 = *errts * 100;
		    do_fio(&c__1, (char *)&r__1, (ftnlen)sizeof(real));
		    e_wsfe();
		}
	    }
	}

    }

/* jb */
    if (*idataout == 2) {
	if (*labelts == 1) {
	    i__1 = *ntest;
	    for (n = 1; n <= i__1; ++n) {
		s_wsfe(&io___266);
		do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
		do_fio(&c__1, (char *)&clts[n], (ftnlen)sizeof(integer));
		do_fio(&c__1, (char *)&jests[n], (ftnlen)sizeof(integer));
		i__2 = *nclass;
		for (j = 1; j <= i__2; ++j) {
		    do_fio(&c__1, (char *)&qts[j + n * qts_dim1], (ftnlen)
			    sizeof(real));
		}
		i__3 = *mdim;
		for (m = 1; m <= i__3; ++m) {
		    do_fio(&c__1, (char *)&xts[m + n * xts_dim1], (ftnlen)
			    sizeof(real));
		}
		e_wsfe();
	    }
	} else {
	    i__1 = *ntest;
	    for (n = 1; n <= i__1; ++n) {
		s_wsfe(&io___267);
		do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
		do_fio(&c__1, (char *)&jests[n], (ftnlen)sizeof(integer));
		i__2 = *nclass;
		for (j = 1; j <= i__2; ++j) {
		    do_fio(&c__1, (char *)&qts[j + n * qts_dim1], (ftnlen)
			    sizeof(real));
		}
		i__3 = *mdim;
		for (m = 1; m <= i__3; ++m) {
		    do_fio(&c__1, (char *)&xts[m + n * xts_dim1], (ftnlen)
			    sizeof(real));
		}
		e_wsfe();
	    }
	}
    }
    cl__1.cerr = 0;
    cl__1.cunit = 7;
    cl__1.csta = 0;
    f_clos(&cl__1);
    if (*isumout == 1) {
	if (*labelts == 1) {
	    s_wsle(&io___268);
	    do_lio(&c__9, &c__1, "final error test %    ", (ftnlen)22);
	    r__1 = *errts * 100;
	    do_lio(&c__4, &c__1, (char *)&r__1, (ftnlen)sizeof(real));
	    e_wsle();
	    zerm_(&mtab[mtab_offset], nclass, nclass);
	    i__1 = *ntest;
	    for (n = 1; n <= i__1; ++n) {
		++mtab[clts[n] + jests[n] * mtab_dim1];
	    }
	    s_wsle(&io___269);
	    do_lio(&c__9, &c__1, "Test set confusion matrix:", (ftnlen)26);
	    e_wsle();
	    s_wsle(&io___270);
	    do_lio(&c__9, &c__1, "\t    true class ", (ftnlen)16);
	    e_wsle();
	    s_wsle(&io___271);
	    e_wsle();
	    s_wsfe(&io___272);
	    i__1 = *nclass;
	    for (j = 1; j <= i__1; ++j) {
		do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
	    }
	    e_wsfe();
	    s_wsle(&io___273);
	    e_wsle();
	    i__1 = *nclass;
	    for (n = 1; n <= i__1; ++n) {
		s_wsfe(&io___274);
		do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
		i__2 = *nclass;
		for (j = 1; j <= i__2; ++j) {
		    do_fio(&c__1, (char *)&mtab[j + n * mtab_dim1], (ftnlen)
			    sizeof(integer));
		}
		e_wsfe();
	    }
	    s_wsle(&io___275);
	    e_wsle();
	}
    }
    return 0;
} /* runforest_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int makea_(real *x, integer *mdim, integer *nsample, integer 
	*cat, integer *isort, real *v, integer *asave, integer *b, integer *
	mdimt, integer *msm, real *v5, real *v95, integer *maxcat)
{
    /* System generated locals */
    integer x_dim1, x_offset, asave_dim1, asave_offset, b_dim1, b_offset, 
	    i__1, i__2;
    real r__1;

    /* Builtin functions */
    integer i_nint(real *);

    /* Local variables */
    static integer k, n, n1, n2;
    extern /* Subroutine */ int quicksort_(real *, integer *, integer *, 
	    integer *, integer *);
    static integer jj, ncat, mvar;



/* 	submakea constructs the mdim x nsample integer array a. */
/* 	If there are less than 32,000 cases, this can be declared */
/* 	integer*2,otherwise integer*4. For each numerical variable */
/* 	with values x(m,n),n=1,...,nsample, the x-values are sorted */
/* 	from lowest to highest. Denote these by xs(m,n). */
/* 	Then asave(m,n) is the case  number in which */
/* 	xs(m,n) occurs. The b matrix is also constructed here. If the mth */
/* 	variable is categorical, then asave(m,n) is the category of the nth */
/* 	case number. */

/* 	input: x,cat */
/* 	output: a,b */
/* 	work: v,isort */

    /* Parameter adjustments */
    --v95;
    --v5;
    --msm;
    --cat;
    b_dim1 = *mdim;
    b_offset = 1 + b_dim1;
    b -= b_offset;
    asave_dim1 = *mdim;
    asave_offset = 1 + asave_dim1;
    asave -= asave_offset;
    --v;
    --isort;
    x_dim1 = *mdim;
    x_offset = 1 + x_dim1;
    x -= x_offset;

    /* Function Body */
    i__1 = *mdimt;
    for (k = 1; k <= i__1; ++k) {
	mvar = msm[k];
	if (cat[mvar] == 1) {
	    i__2 = *nsample;
	    for (n = 1; n <= i__2; ++n) {
		v[n] = x[mvar + n * x_dim1];
		isort[n] = n;
	    }
	    quicksort_(&v[1], &isort[1], &c__1, nsample, nsample);
/* 		this sorts the v(n) in ascending order. isort(n) is the */
/* 		case number of that v(n) nth from the lowest (assume */
/* 		the original case numbers are 1,2,...). */
	    r__1 = *nsample * .05f;
	    n1 = i_nint(&r__1);
	    if (n1 < 1) {
		n1 = 1;
	    }
	    v5[mvar] = v[n1];
	    r__1 = *nsample * .95f;
	    n2 = i_nint(&r__1);
	    if (n2 > *nsample) {
		n2 = *nsample;
	    }
	    v95[mvar] = v[n2];
	    i__2 = *nsample - 1;
	    for (n = 1; n <= i__2; ++n) {
		n1 = isort[n];
		n2 = isort[n + 1];
		asave[mvar + n * asave_dim1] = n1;
		if (n == 1) {
		    b[mvar + n1 * b_dim1] = 1;
		}
		if (v[n] < v[n + 1]) {
		    b[mvar + n2 * b_dim1] = b[mvar + n1 * b_dim1] + 1;
		} else {
		    b[mvar + n2 * b_dim1] = b[mvar + n1 * b_dim1];
		}
	    }
	    asave[mvar + *nsample * asave_dim1] = isort[*nsample];
	} else {
	    i__2 = *nsample;
	    for (ncat = 1; ncat <= i__2; ++ncat) {
		jj = i_nint(&x[mvar + ncat * x_dim1]);
		asave[mvar + ncat * asave_dim1] = jj;
	    }
	}
    }

    return 0;
} /* makea_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int moda_(integer *asave, integer *a, integer *nuse, integer 
	*nsample, integer *mdim, integer *cat, integer *maxcat, integer *
	ncase, integer *jin, integer *mdimt, integer *msm)
{
    /* System generated locals */
    integer asave_dim1, asave_offset, a_dim1, a_offset, i__1, i__2, i__3;

    /* Local variables */
    static integer j, k, m, n, jj, nt;



/* 	copy rows msm(1),...,msm(mdimt) of asave into the same */
/* 	rows of a */

    /* Parameter adjustments */
    --jin;
    --ncase;
    --msm;
    --cat;
    a_dim1 = *mdim;
    a_offset = 1 + a_dim1;
    a -= a_offset;
    asave_dim1 = *mdim;
    asave_offset = 1 + asave_dim1;
    asave -= asave_offset;

    /* Function Body */
    *nuse = 0;
    i__1 = *nsample;
    for (n = 1; n <= i__1; ++n) {
	i__2 = *mdimt;
	for (k = 1; k <= i__2; ++k) {
	    m = msm[k];
	    a[m + n * a_dim1] = asave[m + n * asave_dim1];
	}
	if (jin[n] >= 1) {
	    ++(*nuse);
	}
    }
    i__1 = *mdimt;
    for (jj = 1; jj <= i__1; ++jj) {
	m = msm[jj];
	k = 1;
	nt = 1;
	if (cat[m] == 1) {
	    i__2 = *nsample;
	    for (n = 1; n <= i__2; ++n) {
		if (k > *nsample) {
		    goto L37;
		}
		if (jin[a[m + k * a_dim1]] >= 1) {
		    a[m + nt * a_dim1] = a[m + k * a_dim1];
		    ++k;
		} else {
		    i__3 = *nsample - k;
		    for (j = 1; j <= i__3; ++j) {
			if (jin[a[m + (k + j) * a_dim1]] >= 1) {
			    a[m + nt * a_dim1] = a[m + (k + j) * a_dim1];
			    k = k + j + 1;
			    goto L28;
			}
		    }
		}
L28:
		++nt;
		if (nt > *nuse) {
		    goto L37;
		}
	    }
L37:
	    ;
	}
    }
    if (*maxcat > 1) {
	k = 1;
	nt = 1;
	i__1 = *nsample;
	for (n = 1; n <= i__1; ++n) {
	    if (jin[k] >= 1) {
		ncase[nt] = k;
		++k;
	    } else {
		i__2 = *nsample - k;
		for (jj = 1; jj <= i__2; ++jj) {
		    if (jin[k + jj] >= 1) {
			ncase[nt] = k + jj;
			k = k + jj + 1;
			goto L58;
		    }
		}
	    }
L58:
	    ++nt;
	    if (nt > *nuse) {
		goto L85;
	    }
	}
L85:
	;
    }
    return 0;
} /* moda_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int buildtree_(integer *a, integer *b, integer *cl, integer *
	cat, integer *mdim, integer *nsample, integer *nclass, integer *
	treemap, integer *bestvar, integer *bestsplit, integer *bestsplitnext,
	 real *dgini, integer *nodestatus, integer *nodepop, integer *
	nodestart, real *classpop, real *tclasspop, real *tclasscat, integer *
	ta, integer *nrnodes, integer *idmove, integer *ndsize, integer *
	ncase, integer *parent, integer *mtry, integer *nodeclass, integer *
	ndbigtree, real *win, real *wr, real *wl, integer *nuse, integer *
	kcat, integer *ncatsplit, real *xc, real *dn, real *cp, real *cm, 
	integer *maxcat, integer *nbestcat, integer *msm, integer *mdimt, 
	integer *iseed, integer *ncsplit, integer *ncmax)
{
    /* System generated locals */
    integer a_dim1, a_offset, b_dim1, b_offset, classpop_dim1, 
	    classpop_offset, tclasscat_dim1, tclasscat_offset, nbestcat_dim1, 
	    nbestcat_offset, i__1, i__2;
    real r__1;

    /* Local variables */
    extern /* Subroutine */ int movedata_(integer *, integer *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, integer *, 
	    integer *);
    static real decsplit;
    static integer i__, j, k, n, nc, kn;
    static real pp;
    static integer lcat, ncur;
    extern /* Subroutine */ int zerm_(integer *, integer *, integer *), zerv_(
	    integer *, integer *);
    static real popt1, popt2;
    static integer ndend, nbest, jstat;
    extern /* Subroutine */ int zermr_(real *, integer *, integer *), 
	    findbestsplit_(integer *, integer *, integer *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, real *, 
	    real *, integer *, real *, integer *, integer *, integer *, 
	    integer *, real *, real *, real *, integer *, integer *, real *, 
	    real *, real *, real *, integer *, integer *, integer *, integer *
	    , integer *, integer *);
    static integer ndendl, kbuild, msplit, ndstart;


/* 	Buildtree consists of repeated calls to findbestsplit and movedata. */
/* 	Findbestsplit does just that--it finds the best split of the current */
/* 	node. Movedata moves the data in the split node right and left so */
/* 	that the data corresponding to each child node is contiguous. */

/* 	The buildtree bookkeeping is different from that in Friedman's */
/* 	original CART program: */
/* 		ncur is the total number of nodes to date */
/* 		nodestatus(k)=1 if the kth node has been split. */
/* 		nodestatus(k)=2 if the node exists but has not yet been split */
/* 			  and=-1 of the node is terminal. */
/* 	A node is terminal if its size is below a threshold value, or if it */
/* 	is all one class,or if all the x-values are equal. If the current */
/* 	node k is split,then its children are numbered ncur+1 (left), and */
/* 	ncur+2(right),ncur increases to ncur+2 and the next node to be split */
/* 	is numbered k+1. When no more nodes can be split,buildtree */
/* 	returns to the main program. */


    /* Parameter adjustments */
    --msm;
    --cat;
    --win;
    --ncase;
    --idmove;
    --ta;
    --cl;
    b_dim1 = *mdim;
    b_offset = 1 + b_dim1;
    b -= b_offset;
    a_dim1 = *mdim;
    a_offset = 1 + a_dim1;
    a -= a_offset;
    --wl;
    --wr;
    --tclasspop;
    --nodeclass;
    --parent;
    classpop_dim1 = *nclass;
    classpop_offset = 1 + classpop_dim1;
    classpop -= classpop_offset;
    --nodestart;
    --nodepop;
    --nodestatus;
    --dgini;
    --bestsplitnext;
    --bestsplit;
    --bestvar;
    treemap -= 3;
    nbestcat_dim1 = *maxcat;
    nbestcat_offset = 1 + nbestcat_dim1;
    nbestcat -= nbestcat_offset;
    --cm;
    --cp;
    --dn;
    --xc;
    --ncatsplit;
    --kcat;
    tclasscat_dim1 = *nclass;
    tclasscat_offset = 1 + tclasscat_dim1;
    tclasscat -= tclasscat_offset;

    /* Function Body */
    zerv_(&nodestatus[1], nrnodes);
    zerv_(&nodestart[1], nrnodes);
    zerv_(&nodepop[1], nrnodes);
    zermr_(&classpop[classpop_offset], nclass, nrnodes);
    zerm_(&treemap[3], &c__2, nrnodes);
    zerm_(&nbestcat[nbestcat_offset], maxcat, nrnodes);
    i__1 = *nclass;
    for (j = 1; j <= i__1; ++j) {
	classpop[j + classpop_dim1] = tclasspop[j];
    }

    ncur = 1;
    nodestart[1] = 1;
    nodepop[1] = *nuse;
    nodestatus[1] = 2;
/* 	start main loop */

    i__1 = *nrnodes;
    for (kbuild = 1; kbuild <= i__1; ++kbuild) {
	if (kbuild > ncur) {
	    goto L50;
	}
	if (nodestatus[kbuild] != 2) {
	    goto L30;
	}
/* 		initialize for next call to findbestsplit */

	ndstart = nodestart[kbuild];
	ndend = ndstart + nodepop[kbuild] - 1;
	i__2 = *nclass;
	for (j = 1; j <= i__2; ++j) {
	    tclasspop[j] = classpop[j + kbuild * classpop_dim1];
	}
	jstat = 0;

	findbestsplit_(&a[a_offset], &b[b_offset], &cl[1], mdim, nsample, 
		nclass, &cat[1], &ndstart, &ndend, &tclasspop[1], &tclasscat[
		tclasscat_offset], &msplit, &decsplit, &nbest, &ncase[1], &
		jstat, mtry, &win[1], &wr[1], &wl[1], &kcat[1], &ncatsplit[1],
		 &xc[1], &dn[1], &cp[1], &cm[1], maxcat, &msm[1], mdimt, 
		iseed, ncsplit, ncmax);

	if (jstat == 1) {
	    nodestatus[kbuild] = -1;
	    goto L30;
	} else {
	    bestvar[kbuild] = msplit;
	    dgini[kbuild] = decsplit;

	    if (cat[msplit] == 1) {
/* 				continuous */
		bestsplit[kbuild] = a[msplit + nbest * a_dim1];
		bestsplitnext[kbuild] = a[msplit + (nbest + 1) * a_dim1];
	    } else {
/* 				categorical */
		lcat = cat[msplit];
		i__2 = lcat;
		for (i__ = 1; i__ <= i__2; ++i__) {
		    nbestcat[i__ + kbuild * nbestcat_dim1] = ncatsplit[i__];
		}
	    }
	}
	movedata_(&a[a_offset], &ta[1], mdim, nsample, &ndstart, &ndend, &
		idmove[1], &ncase[1], &msplit, &cat[1], &nbest, &ndendl, &
		ncatsplit[1], maxcat, mdimt, &msm[1]);

/* 		leftnode no.=ncur+1,rightnode no.=ncur+2. */

	nodepop[ncur + 1] = ndendl - ndstart + 1;
	nodepop[ncur + 2] = ndend - ndendl;
	nodestart[ncur + 1] = ndstart;
	nodestart[ncur + 2] = ndendl + 1;


/* 		find class populations in both nodes */
	i__2 = ndendl;
	for (n = ndstart; n <= i__2; ++n) {
	    nc = ncase[n];
	    j = cl[nc];
	    classpop[j + (ncur + 1) * classpop_dim1] += win[nc];
	}
	i__2 = ndend;
	for (n = ndendl + 1; n <= i__2; ++n) {
	    nc = ncase[n];
	    j = cl[nc];
	    classpop[j + (ncur + 2) * classpop_dim1] += win[nc];
	}

/* 		check on nodestatus */

	nodestatus[ncur + 1] = 2;
	nodestatus[ncur + 2] = 2;
	if (nodepop[ncur + 1] <= *ndsize) {
	    nodestatus[ncur + 1] = -1;
	}
	if (nodepop[ncur + 2] <= *ndsize) {
	    nodestatus[ncur + 2] = -1;
	}
	popt1 = 0.f;
	popt2 = 0.f;
	i__2 = *nclass;
	for (j = 1; j <= i__2; ++j) {
	    popt1 += classpop[j + (ncur + 1) * classpop_dim1];
	    popt2 += classpop[j + (ncur + 2) * classpop_dim1];
	}
	i__2 = *nclass;
	for (j = 1; j <= i__2; ++j) {
	    if ((r__1 = classpop[j + (ncur + 1) * classpop_dim1] - popt1, 
		    dabs(r__1)) < 8.232e-11) {
		nodestatus[ncur + 1] = -1;
	    }
	    if ((r__1 = classpop[j + (ncur + 2) * classpop_dim1] - popt2, 
		    dabs(r__1)) < 8.232e-11) {
		nodestatus[ncur + 2] = -1;
	    }
	}
	treemap[(kbuild << 1) + 1] = ncur + 1;
	treemap[(kbuild << 1) + 2] = ncur + 2;
	parent[ncur + 1] = kbuild;
	parent[ncur + 2] = kbuild;
	nodestatus[kbuild] = 1;
	ncur += 2;
	if (ncur >= *nrnodes) {
	    goto L50;
	}
L30:
	;
    }
L50:
    *ndbigtree = *nrnodes;
    for (k = *nrnodes; k >= 1; --k) {
	if (nodestatus[k] == 0) {
	    --(*ndbigtree);
	}
	if (nodestatus[k] == 2) {
	    nodestatus[k] = -1;
	}
    }
    i__1 = *ndbigtree;
    for (kn = 1; kn <= i__1; ++kn) {
	if (nodestatus[kn] == -1) {
	    pp = 0.f;
	    i__2 = *nclass;
	    for (j = 1; j <= i__2; ++j) {
		if (classpop[j + kn * classpop_dim1] > pp) {
		    nodeclass[kn] = j;
		    pp = classpop[j + kn * classpop_dim1];
		}
	    }
	}
    }
    return 0;
} /* buildtree_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int findbestsplit_(integer *a, integer *b, integer *cl, 
	integer *mdim, integer *nsample, integer *nclass, integer *cat, 
	integer *ndstart, integer *ndend, real *tclasspop, real *tclasscat, 
	integer *msplit, real *decsplit, integer *nbest, integer *ncase, 
	integer *jstat, integer *mtry, real *win, real *wr, real *wl, integer 
	*kcat, integer *ncatsplit, real *xc, real *dn, real *cp, real *cm, 
	integer *maxcat, integer *msm, integer *mdimt, integer *iseed, 
	integer *ncsplit, integer *ncmax)
{
    /* System generated locals */
    integer a_dim1, a_offset, b_dim1, b_offset, tclasscat_dim1, 
	    tclasscat_offset, i__1, i__2, i__3;

    /* Local variables */
    static integer i__, j, k;
    static real u;
    static integer nc, mv;
    static real su, rld, pdo, rrd, rln, pno;
    static integer nsp;
    static real rrn;
    static integer nnz, icat[32], lcat;
    static real crit;
    static integer nhit, mvar;
    extern /* Subroutine */ int zerv_(integer *, integer *);
    static real crit0;
    extern /* Subroutine */ int zermr_(real *, integer *, integer *), zervr_(
	    real *, integer *), catmax_(real *, real *, real *, integer *, 
	    integer *, integer *, real *, integer *, integer *), unpack_(
	    integer *, integer *, integer *);
    static integer ncatsp;
    extern /* Subroutine */ int catmaxr_(integer *, real *, real *, integer *,
	     integer *, integer *, integer *, integer *, real *, real *, 
	    integer *, integer *);
    extern doublereal randomu_(void);
    static real critmax;


/* 	For the best split,msplit is the variable split on. decsplit is the dec. in impurity. */
/* 	If msplit is numerical,nsplit is the case number of value of msplit split on, */
/* 	and nsplitnext is the case number of the next larger value of msplit.  If msplit is */
/* 	categorical,then nsplit is the coding into an integer of the categories going left. */








/* 	compute initial values of numerator and denominator of Gini */
    /* Parameter adjustments */
    --msm;
    --cat;
    --win;
    --ncase;
    --cl;
    b_dim1 = *mdim;
    b_offset = 1 + b_dim1;
    b -= b_offset;
    a_dim1 = *mdim;
    a_offset = 1 + a_dim1;
    a -= a_offset;
    --wl;
    --wr;
    --tclasspop;
    --cm;
    --cp;
    --dn;
    --xc;
    --ncatsplit;
    --kcat;
    tclasscat_dim1 = *nclass;
    tclasscat_offset = 1 + tclasscat_dim1;
    tclasscat -= tclasscat_offset;

    /* Function Body */
    pno = 0.f;
    pdo = 0.f;
    i__1 = *nclass;
    for (j = 1; j <= i__1; ++j) {
	pno += tclasspop[j] * tclasspop[j];
	pdo += tclasspop[j];
    }
    crit0 = pno / pdo;
    *jstat = 0;
/* 	start main loop through variables to find best split */
    critmax = -1e20f;

    i__1 = *mtry;
    for (mv = 1; mv <= i__1; ++mv) {
	k = (integer) (*mdimt * randomu_()) + 1;
	mvar = msm[k];
	if (cat[mvar] == 1) {
/* 			it's not a categorical variable: */
	    rrn = pno;
	    rrd = pdo;
	    rln = 0.f;
	    rld = 0.f;
	    zervr_(&wl[1], nclass);
	    i__2 = *nclass;
	    for (j = 1; j <= i__2; ++j) {
		wr[j] = tclasspop[j];
	    }
	    i__2 = *ndend - 1;
	    for (nsp = *ndstart; nsp <= i__2; ++nsp) {
		nc = a[mvar + nsp * a_dim1];
		u = win[nc];
		k = cl[nc];
		rln += u * (wl[k] * 2 + u);
		rrn += u * (wr[k] * -2 + u);
		rld += u;
		rrd -= u;
		wl[k] += u;
		wr[k] -= u;
		if (b[mvar + nc * b_dim1] < b[mvar + a[mvar + (nsp + 1) * 
			a_dim1] * b_dim1]) {
		    if (dmin(rrd,rld) > 1e-5f) {
			crit = rln / rld + rrn / rrd;
			if (crit > critmax) {
			    *nbest = nsp;
			    critmax = crit;
			    *msplit = mvar;
			}
		    }
		}
	    }
	} else {
/* 			it's a categorical variable: */
/* 			compute the decrease in impurity given by categorical splits */
	    lcat = cat[mvar];
	    zermr_(&tclasscat[tclasscat_offset], nclass, maxcat);
	    i__2 = *ndend;
	    for (nsp = *ndstart; nsp <= i__2; ++nsp) {
		nc = ncase[nsp];
		k = a[mvar + ncase[nsp] * a_dim1];
		tclasscat[cl[nc] + k * tclasscat_dim1] += win[nc];
	    }
	    nnz = 0;
	    i__2 = lcat;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		su = 0.f;
		i__3 = *nclass;
		for (j = 1; j <= i__3; ++j) {
		    su += tclasscat[j + i__ * tclasscat_dim1];
		}
		dn[i__] = su;
		++nnz;
	    }
	    if (nnz == 1) {
		critmax = -1e25f;
		goto L20;
	    }
	    if (lcat < *ncmax) {
		catmax_(&pdo, &tclasscat[tclasscat_offset], &tclasspop[1], 
			nclass, &lcat, &ncatsp, &critmax, &nhit, maxcat);
		if (nhit == 1) {
		    *msplit = mvar;
		    unpack_(&lcat, &ncatsp, icat);
		    zerv_(&ncatsplit[1], maxcat);
		    i__2 = lcat;
		    for (k = 1; k <= i__2; ++k) {
			ncatsplit[k] = icat[k - 1];
		    }
		}
	    } else {
		catmaxr_(ncsplit, &tclasscat[tclasscat_offset], &tclasspop[1],
			 icat, nclass, &lcat, maxcat, &ncatsplit[1], &critmax,
			 &pdo, &nhit, iseed);
		if (nhit == 1) {
		    *msplit = mvar;
		}
	    }
	}
/* cat */
L20:
	;
    }
/* L25: */
    *decsplit = critmax - crit0;
    if (critmax < -1e10f) {
	*jstat = 1;
    }
    return 0;
} /* findbestsplit_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int catmaxr_(integer *ncsplit, real *tclasscat, real *
	tclasspop, integer *icat, integer *nclass, integer *lcat, integer *
	maxcat, integer *ncatsplit, real *critmax, real *pdo, integer *nhit, 
	integer *iseed)
{
    /* System generated locals */
    integer tclasscat_dim1, tclasscat_offset, i__1, i__2, i__3;

    /* Local variables */
    static real tmpclass[100];
    static integer i__, j, k, n;
    static real pld, pln, prn, tdec;
    extern integer irbit_(integer *);


/* 	this routine takes the best of ncsplit random splits */



    /* Parameter adjustments */
    --icat;
    --tclasspop;
    --ncatsplit;
    tclasscat_dim1 = *nclass;
    tclasscat_offset = 1 + tclasscat_dim1;
    tclasscat -= tclasscat_offset;

    /* Function Body */
    *nhit = 0;
    i__1 = *ncsplit;
    for (n = 1; n <= i__1; ++n) {
/* 		generate random split */
	i__2 = *lcat;
	for (k = 1; k <= i__2; ++k) {
	    icat[k] = irbit_(iseed);
/* icat(k) is bernouilli */
	}
	i__2 = *nclass;
	for (j = 1; j <= i__2; ++j) {
	    tmpclass[j - 1] = 0.f;
	    i__3 = *lcat;
	    for (k = 1; k <= i__3; ++k) {
		if (icat[k] == 1) {
		    tmpclass[j - 1] += tclasscat[j + k * tclasscat_dim1];
		}
	    }
	}
	pln = 0.f;
	pld = 0.f;
	i__2 = *nclass;
	for (j = 1; j <= i__2; ++j) {
	    pln += tmpclass[j - 1] * tmpclass[j - 1];
	    pld += tmpclass[j - 1];
	}
	prn = 0.f;
	i__2 = *nclass;
	for (j = 1; j <= i__2; ++j) {
	    tmpclass[j - 1] = tclasspop[j] - tmpclass[j - 1];
	    prn += tmpclass[j - 1] * tmpclass[j - 1];
	}
	tdec = pln / pld + prn / (*pdo - pld);
	if (tdec > *critmax) {
	    *critmax = tdec;
	    *nhit = 1;
	    i__2 = *lcat;
	    for (k = 1; k <= i__2; ++k) {
		ncatsplit[k] = icat[i__];
	    }
	}
    }
    return 0;
} /* catmaxr_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int catmax_(real *pdo, real *tclasscat, real *tclasspop, 
	integer *nclass, integer *lcat, integer *ncatsp, real *critmax, 
	integer *nhit, integer *maxcat)
{
    /* System generated locals */
    integer tclasscat_dim1, tclasscat_offset, i__1, i__2, i__3;

    /* Builtin functions */
    integer pow_ii(integer *, integer *);

    /* Local variables */
    static real tmpclass[100];
    static integer j, l, n;
    static real pld, pln, prn, tdec;
    static integer icat[32];
    extern /* Subroutine */ int unpack_(integer *, integer *, integer *);


/* 	this finds the best split of a categorical variable */
/* 	with lcat categories and nclass classes, where */
/* 	tclasscat(j,k) is the number of cases in */
/* 	class j with category value k. The method uses an */
/* 	exhaustive search over all partitions of the category */
/* 	values. For the two class problem,there is a faster */
/* 	exact algorithm. If lcat.ge.10,the exhaustive search */
/* 	gets slow and there is a faster iterative algorithm. */

    /* Parameter adjustments */
    --tclasspop;
    tclasscat_dim1 = *nclass;
    tclasscat_offset = 1 + tclasscat_dim1;
    tclasscat -= tclasscat_offset;

    /* Function Body */
    *nhit = 0;
    i__2 = *lcat - 1;
    i__1 = pow_ii(&c__2, &i__2) - 1;
    for (n = 1; n <= i__1; ++n) {
	unpack_(lcat, &n, icat);
	i__2 = *nclass;
	for (j = 1; j <= i__2; ++j) {
	    tmpclass[j - 1] = 0.f;
	    i__3 = *lcat;
	    for (l = 1; l <= i__3; ++l) {
		if (icat[l - 1] == 1) {
		    tmpclass[j - 1] += tclasscat[j + l * tclasscat_dim1];
		}
	    }
	}
	pln = 0.f;
	pld = 0.f;
	i__2 = *nclass;
	for (j = 1; j <= i__2; ++j) {
	    pln += tmpclass[j - 1] * tmpclass[j - 1];
	    pld += tmpclass[j - 1];
	}
	prn = 0.f;
	i__2 = *nclass;
	for (j = 1; j <= i__2; ++j) {
	    tmpclass[j - 1] = tclasspop[j] - tmpclass[j - 1];
	    prn += tmpclass[j - 1] * tmpclass[j - 1];
	}
	tdec = pln / pld + prn / (*pdo - pld);
	if (tdec > *critmax) {
	    *critmax = tdec;
	    *ncatsp = n;
	    *nhit = 1;
	}
    }
    return 0;
} /* catmax_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int movedata_(integer *a, integer *ta, integer *mdim, 
	integer *nsample, integer *ndstart, integer *ndend, integer *idmove, 
	integer *ncase, integer *msplit, integer *cat, integer *nbest, 
	integer *ndendl, integer *ncatsplit, integer *maxcat, integer *mdimt, 
	integer *msm)
{
    /* System generated locals */
    integer a_dim1, a_offset, i__1, i__2;

    /* Local variables */
    static integer k, n, nc, ih, ms, msh, nsp;


/* 	movedata is the heart of the buildtree construction. */
/* 	Based on the best split the data corresponding to the */
/* 	current node is moved to the left if it belongs to the */
/* 	left child and right if it belongs to the right child. */
/* 	compute idmove=indicator of case nos. going left */

    /* Parameter adjustments */
    --cat;
    --idmove;
    --ta;
    a_dim1 = *mdim;
    a_offset = 1 + a_dim1;
    a -= a_offset;
    --ncase;
    --ncatsplit;
    --msm;

    /* Function Body */
    if (cat[*msplit] == 1) {
	i__1 = *nbest;
	for (nsp = *ndstart; nsp <= i__1; ++nsp) {
	    nc = a[*msplit + nsp * a_dim1];
	    idmove[nc] = 1;
	}
	i__1 = *ndend;
	for (nsp = *nbest + 1; nsp <= i__1; ++nsp) {
	    nc = a[*msplit + nsp * a_dim1];
	    idmove[nc] = 0;
	}
	*ndendl = *nbest;
    } else {
	*ndendl = *ndstart - 1;
	i__1 = *ndend;
	for (nsp = *ndstart; nsp <= i__1; ++nsp) {
	    nc = ncase[nsp];
	    if (ncatsplit[a[*msplit + nc * a_dim1]] == 1) {
		idmove[nc] = 1;
		++(*ndendl);
	    } else {
		idmove[nc] = 0;
	    }
	}
    }
/* 	 shift case. nos. right and left for numerical variables. */
    i__1 = *mdimt;
    for (ms = 1; ms <= i__1; ++ms) {
	msh = msm[ms];
	if (cat[msh] == 1) {
	    k = *ndstart - 1;
	    i__2 = *ndend;
	    for (n = *ndstart; n <= i__2; ++n) {
		ih = a[msh + n * a_dim1];
		if (idmove[ih] == 1) {
		    ++k;
		    ta[k] = a[msh + n * a_dim1];
		}
	    }
	    i__2 = *ndend;
	    for (n = *ndstart; n <= i__2; ++n) {
		ih = a[msh + n * a_dim1];
		if (idmove[ih] == 0) {
		    ++k;
		    ta[k] = a[msh + n * a_dim1];
		}
	    }
	    i__2 = *ndend;
	    for (k = *ndstart; k <= i__2; ++k) {
		a[msh + k * a_dim1] = ta[k];
	    }
	}
    }
/* 	 compute case nos. for right and left nodes. */
    if (cat[*msplit] == 1) {
	i__1 = *ndend;
	for (n = *ndstart; n <= i__1; ++n) {
	    ncase[n] = a[*msplit + n * a_dim1];
	}
    } else {
	k = *ndstart - 1;
	i__1 = *ndend;
	for (n = *ndstart; n <= i__1; ++n) {
	    if (idmove[ncase[n]] == 1) {
		++k;
		ta[k] = ncase[n];
	    }
	}
	i__1 = *ndend;
	for (n = *ndstart; n <= i__1; ++n) {
	    if (idmove[ncase[n]] == 0) {
		++k;
		ta[k] = ncase[n];
	    }
	}
	i__1 = *ndend;
	for (k = *ndstart; k <= i__1; ++k) {
	    ncase[k] = ta[k];
	}
    }
    return 0;
} /* movedata_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int xtranslate_(real *x, integer *mdim, integer *nrnodes, 
	integer *nsample, integer *bestvar, integer *bestsplit, integer *
	bestsplitnext, real *xbestsplit, integer *nodestatus, integer *cat, 
	integer *ndbigtree)
{
    /* System generated locals */
    integer x_dim1, x_offset, i__1;

    /* Local variables */
    static integer k, m;


/* 	xtranslate takes the splits on numerical variables and translates them */
/* 	back into x-values.  It also unpacks each categorical split into a 32- */
/* 	dimensional vector with components of zero or one--a one indicates */
/* 	that the corresponding category goes left in the split. */


    /* Parameter adjustments */
    --cat;
    --nodestatus;
    --xbestsplit;
    --bestsplitnext;
    --bestsplit;
    --bestvar;
    x_dim1 = *mdim;
    x_offset = 1 + x_dim1;
    x -= x_offset;

    /* Function Body */
    i__1 = *ndbigtree;
    for (k = 1; k <= i__1; ++k) {
	if (nodestatus[k] == 1) {
	    m = bestvar[k];
	    if (cat[m] == 1) {
		xbestsplit[k] = (x[m + bestsplit[k] * x_dim1] + x[m + 
			bestsplitnext[k] * x_dim1]) / 2;
	    } else {
		xbestsplit[k] = (real) bestsplit[k];
	    }
	}
    }
    return 0;
} /* xtranslate_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int getweights_(real *x, integer *nsample, integer *mdim, 
	integer *treemap, integer *nodestatus, real *xbestsplit, integer *
	bestvar, integer *nrnodes, integer *ndbigtree, integer *cat, integer *
	maxcat, integer *nbestcat, integer *jin, real *win, real *tw, real *
	tn, real *tnodewt)
{
    /* System generated locals */
    integer x_dim1, x_offset, nbestcat_dim1, nbestcat_offset, i__1, i__2;

    /* Builtin functions */
    integer i_nint(real *);

    /* Local variables */
    static integer k, m, n, kt, jcat;
    extern /* Subroutine */ int zervr_(real *, integer *);



    /* Parameter adjustments */
    --win;
    --jin;
    --cat;
    x_dim1 = *mdim;
    x_offset = 1 + x_dim1;
    x -= x_offset;
    --bestvar;
    --xbestsplit;
    --nodestatus;
    treemap -= 3;
    --tnodewt;
    --tn;
    --tw;
    nbestcat_dim1 = *maxcat;
    nbestcat_offset = 1 + nbestcat_dim1;
    nbestcat -= nbestcat_offset;

    /* Function Body */
    zervr_(&tw[1], ndbigtree);
    zervr_(&tn[1], ndbigtree);
    i__1 = *nsample;
    for (n = 1; n <= i__1; ++n) {
	if (jin[n] >= 1) {
	    kt = 1;
	    i__2 = *ndbigtree;
	    for (k = 1; k <= i__2; ++k) {
		if (nodestatus[kt] == -1) {
		    tw[kt] += win[n];
		    tn[kt] += jin[n];
		    goto L100;
		}
		m = bestvar[kt];
		if (cat[m] == 1) {
		    if (x[m + n * x_dim1] <= xbestsplit[kt]) {
			kt = treemap[(kt << 1) + 1];
		    } else {
			kt = treemap[(kt << 1) + 2];
		    }
		} else {
		    jcat = i_nint(&x[m + n * x_dim1]);
		    if (nbestcat[jcat + kt * nbestcat_dim1] == 1) {
			kt = treemap[(kt << 1) + 1];
		    } else {
			kt = treemap[(kt << 1) + 2];
		    }
		}
	    }
L100:
	    ;
	}
    }
    i__1 = *ndbigtree;
    for (n = 1; n <= i__1; ++n) {
	if (nodestatus[n] == -1) {
	    tnodewt[n] = tw[n] / tn[n];
	}
    }
    return 0;
} /* getweights_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int testreebag_(real *x, integer *nsample, integer *mdim, 
	integer *treemap, integer *nodestatus, real *xbestsplit, integer *
	bestvar, integer *nodeclass, integer *nrnodes, integer *ndbigtree, 
	integer *kpop, integer *cat, integer *jtr, integer *nodextr, integer *
	maxcat, integer *nbestcat, real *rpop, real *dgini, real *tgini, 
	integer *jin, real *wtx)
{
    /* System generated locals */
    integer x_dim1, x_offset, nbestcat_dim1, nbestcat_offset, i__1;

    /* Builtin functions */
    integer i_nint(real *);

    /* Local variables */
    static integer k, m, n, kt, jcat;
    extern /* Subroutine */ int zerv_(integer *, integer *), zervr_(real *, 
	    integer *);


/* 	predicts the class of all objects in x */

/* 	input: */


/* 	output: */

/* 	local */

    /* Parameter adjustments */
    --wtx;
    --jin;
    --nodextr;
    --jtr;
    --tgini;
    --cat;
    x_dim1 = *mdim;
    x_offset = 1 + x_dim1;
    x -= x_offset;
    --dgini;
    --rpop;
    --kpop;
    --nodeclass;
    --bestvar;
    --xbestsplit;
    --nodestatus;
    treemap -= 3;
    nbestcat_dim1 = *maxcat;
    nbestcat_offset = 1 + nbestcat_dim1;
    nbestcat -= nbestcat_offset;

    /* Function Body */
    zerv_(&jtr[1], nsample);
    zerv_(&nodextr[1], nsample);
    zervr_(&tgini[1], mdim);
    zervr_(&rpop[1], nrnodes);
    zerv_(&kpop[1], nrnodes);

    n = 1;
L903:
    kt = 1;
    i__1 = *ndbigtree;
    for (k = 1; k <= i__1; ++k) {
	if (nodestatus[kt] == -1) {
	    jtr[n] = nodeclass[kt];
	    nodextr[n] = kt;
	    if (jin[n] > 0) {
		rpop[kt] += jin[n];
		++kpop[kt];
	    }
	    goto L100;
	}
	m = bestvar[kt];
	tgini[m] += dgini[kt];
	if (cat[m] == 1) {
	    if (x[m + n * x_dim1] <= xbestsplit[kt]) {
		kt = treemap[(kt << 1) + 1];
	    } else {
		kt = treemap[(kt << 1) + 2];
	    }
	}
	if (cat[m] > 1) {
	    jcat = i_nint(&x[m + n * x_dim1]);
	    if (nbestcat[jcat + kt * nbestcat_dim1] == 1) {
		kt = treemap[(kt << 1) + 1];
	    } else {
		kt = treemap[(kt << 1) + 2];
	    }
	}
    }
/* k */
L100:
    ++n;
    if (n <= *nsample) {
	goto L903;
    }
    i__1 = *mdim;
    for (m = 1; m <= i__1; ++m) {
	tgini[m] /= *nsample;
    }
    return 0;
} /* testreebag_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int testreelite_(real *xts, integer *ntest, integer *mdim, 
	integer *treemap, integer *nodestatus, real *xbestsplit, integer *
	bestvar, integer *nodeclass, integer *nrnodes, integer *ndbigtree, 
	integer *cat, integer *jts, integer *maxcat, integer *nbestcat, 
	integer *nodexts)
{
    /* System generated locals */
    integer xts_dim1, xts_offset, nbestcat_dim1, nbestcat_offset, i__1;

    /* Builtin functions */
    integer i_nint(real *);

    /* Local variables */
    static integer k, m, n, kt, jcat;


/* 	predicts the class of all objects in xts */

/* 	input: */

/* 	output: */


    /* Parameter adjustments */
    --nodexts;
    --jts;
    --cat;
    xts_dim1 = *mdim;
    xts_offset = 1 + xts_dim1;
    xts -= xts_offset;
    --nodeclass;
    --bestvar;
    --xbestsplit;
    --nodestatus;
    treemap -= 3;
    nbestcat_dim1 = *maxcat;
    nbestcat_offset = 1 + nbestcat_dim1;
    nbestcat -= nbestcat_offset;

    /* Function Body */
    n = 1;
L903:
    kt = 1;
    i__1 = *ndbigtree;
    for (k = 1; k <= i__1; ++k) {
	if (nodestatus[kt] == -1) {
	    jts[n] = nodeclass[kt];
	    nodexts[n] = kt;
	    goto L100;
	}
	m = bestvar[kt];
	if (cat[m] == 1) {
	    if (xts[m + n * xts_dim1] <= xbestsplit[kt]) {
		kt = treemap[(kt << 1) + 1];
	    } else {
		kt = treemap[(kt << 1) + 2];
	    }
	}
	if (cat[m] > 1) {
	    jcat = i_nint(&xts[m + n * xts_dim1]);
	    if (nbestcat[jcat + kt * nbestcat_dim1] == 1) {
		kt = treemap[(kt << 1) + 1];
	    } else {
		kt = treemap[(kt << 1) + 2];
	    }
	}
    }
/* k */
L100:
    ++n;
    if (n <= *ntest) {
	goto L903;
    }
    return 0;
} /* testreelite_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int testreeimp_(real *x, integer *nsample, integer *mdim, 
	integer *joob, integer *pjoob, integer *nout, integer *mr, integer *
	treemap, integer *nodestatus, real *xbestsplit, integer *bestvar, 
	integer *nodeclass, integer *nrnodes, integer *ndbigtree, integer *
	cat, integer *jvr, integer *nodexvr, integer *maxcat, integer *
	nbestcat)
{
    /* System generated locals */
    integer x_dim1, x_offset, nbestcat_dim1, nbestcat_offset, i__1;

    /* Builtin functions */
    integer i_nint(real *);

    /* Local variables */
    extern /* Subroutine */ int permobmr_(integer *, integer *, integer *);
    static integer k, m, n, kt;
    static real xmn;
    static integer jcat;


/* 	predicts the class of out-of-bag-cases for variable importance */
/* 	also computes nodexvr */

/* 	input: */

/* 	output: */


    /* Parameter adjustments */
    --cat;
    x_dim1 = *mdim;
    x_offset = 1 + x_dim1;
    x -= x_offset;
    --nodexvr;
    --jvr;
    --pjoob;
    --joob;
    --nodeclass;
    --bestvar;
    --xbestsplit;
    --nodestatus;
    treemap -= 3;
    nbestcat_dim1 = *maxcat;
    nbestcat_offset = 1 + nbestcat_dim1;
    nbestcat -= nbestcat_offset;

    /* Function Body */
    permobmr_(&joob[1], &pjoob[1], nout);
    n = 1;
L904:
    kt = 1;
    i__1 = *ndbigtree;
    for (k = 1; k <= i__1; ++k) {
	if (nodestatus[kt] == -1) {
	    jvr[n] = nodeclass[kt];
	    nodexvr[n] = kt;
	    goto L100;
	}
	m = bestvar[kt];
	if (m == *mr) {
	    xmn = x[m + pjoob[n] * x_dim1];
/* permuted value */
	} else {
	    xmn = x[m + joob[n] * x_dim1];
	}
	if (cat[m] == 1) {
	    if (xmn <= xbestsplit[kt]) {
		kt = treemap[(kt << 1) + 1];
	    } else {
		kt = treemap[(kt << 1) + 2];
	    }
	}
	if (cat[m] > 1) {
	    jcat = i_nint(&xmn);
	    if (nbestcat[jcat + kt * nbestcat_dim1] == 1) {
		kt = treemap[(kt << 1) + 1];
	    } else {
		kt = treemap[(kt << 1) + 2];
	    }
	}
    }
/* k */
L100:
    ++n;
    if (n <= *nout) {
	goto L904;
    }
    return 0;
} /* testreeimp_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int permobmr_(integer *joob, integer *pjoob, integer *nout)
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer j, k, jt;
    static real rnd;
    extern doublereal randomu_(void);


/* 	randomly permute the elements of joob and put them in pjoob */

/* 	input: */
/* 	output: */
/* 	local: */

    /* Parameter adjustments */
    --pjoob;
    --joob;

    /* Function Body */
    i__1 = *nout;
    for (j = 1; j <= i__1; ++j) {
	pjoob[j] = joob[j];
    }
    j = *nout;
L11:
    rnd = randomu_();
    k = (integer) (j * rnd);
    if (k < j) {
	++k;
    }
/* 	switch j and k */
    jt = pjoob[j];
    pjoob[j] = pjoob[k];
    pjoob[k] = jt;
    --j;
    if (j > 1) {
	goto L11;
    }
    return 0;
} /* permobmr_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int comperrtr_(real *q, integer *cl, integer *nsample, 
	integer *nclass, real *errtr, real *tmiss, integer *nc, integer *jest,
	 integer *out)
{
    /* System generated locals */
    integer q_dim1, q_offset, i__1, i__2;

    /* Local variables */
    static integer j, n;
    static real cmax;
    static integer jmax;
    static real ctemp;
    extern /* Subroutine */ int zervr_(real *, integer *);


    /* Parameter adjustments */
    --out;
    --jest;
    --cl;
    --nc;
    --tmiss;
    q_dim1 = *nclass;
    q_offset = 1 + q_dim1;
    q -= q_offset;

    /* Function Body */
    zervr_(&tmiss[1], nclass);
    *errtr = 0.f;
    i__1 = *nsample;
    for (n = 1; n <= i__1; ++n) {
	cmax = 0.f;
	if (out[n] > 0) {
	    i__2 = *nclass;
	    for (j = 1; j <= i__2; ++j) {
		ctemp = q[j + n * q_dim1] / out[n];
		if (ctemp > cmax) {
		    jmax = j;
		    cmax = ctemp;
		}
	    }
	} else {
	    jmax = 1;
	}
	jest[n] = jmax;
	if (jmax != cl[n]) {
	    ++tmiss[cl[n]];
	    *errtr += 1;
	}
    }
    *errtr /= *nsample;
    i__1 = *nclass;
    for (j = 1; j <= i__1; ++j) {
	tmiss[j] /= nc[j];
    }
    return 0;
} /* comperrtr_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int comperrts_(real *qts, integer *clts, integer *ntest, 
	integer *nclass, real *errts, real *tmissts, integer *ncts, integer *
	jests, integer *labelts)
{
    /* System generated locals */
    integer qts_dim1, qts_offset, i__1, i__2;

    /* Local variables */
    static integer j, n;
    static real cmax;
    static integer jmax;
    extern /* Subroutine */ int zervr_(real *, integer *);



    /* Parameter adjustments */
    --jests;
    --clts;
    --ncts;
    --tmissts;
    qts_dim1 = *nclass;
    qts_offset = 1 + qts_dim1;
    qts -= qts_offset;

    /* Function Body */
    zervr_(&tmissts[1], nclass);
    *errts = 0.f;
    i__1 = *ntest;
    for (n = 1; n <= i__1; ++n) {
	cmax = 0.f;
	i__2 = *nclass;
	for (j = 1; j <= i__2; ++j) {
	    if (qts[j + n * qts_dim1] > cmax) {
		jmax = j;
		cmax = qts[j + n * qts_dim1];
	    }
	}
	jests[n] = jmax;
	if (*labelts == 1) {
	    if (jmax != clts[n]) {
		++tmissts[clts[n]];
		*errts += 1;
	    }
	}
    }
    if (*labelts == 1) {
	*errts /= *ntest;
	i__1 = *nclass;
	for (j = 1; j <= i__1; ++j) {
	    tmissts[j] /= ncts[j];
	}
    }
    return 0;
} /* comperrts_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int createclass_(real *x, integer *cl, integer *ns, integer *
	nsample, integer *mdim)
{
    /* System generated locals */
    integer x_dim1, x_offset, i__1, i__2;

    /* Local variables */
    static integer k, m, n;
    extern doublereal randomu_(void);



    /* Parameter adjustments */
    --cl;
    x_dim1 = *mdim;
    x_offset = 1 + x_dim1;
    x -= x_offset;

    /* Function Body */
    i__1 = *ns;
    for (n = 1; n <= i__1; ++n) {
	cl[n] = 1;
    }
    i__1 = *nsample;
    for (n = *ns + 1; n <= i__1; ++n) {
	cl[n] = 2;
    }
    i__1 = *nsample;
    for (n = *ns + 1; n <= i__1; ++n) {
	i__2 = *mdim;
	for (m = 1; m <= i__2; ++m) {
	    k = (integer) (randomu_() * *ns);
	    if (k < *ns) {
		++k;
	    }
	    x[m + n * x_dim1] = x[m + k * x_dim1];
	}
    }
    return 0;
} /* createclass_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int varimp_(real *x, integer *nsample, integer *mdim, 
	integer *cl, integer *nclass, integer *jin, integer *jtr, integer *
	impn, integer *interact, integer *msm, integer *mdimt, real *qimp, 
	real *qimpm, real *avimp, real *sqsd, integer *treemap, integer *
	nodestatus, real *xbestsplit, integer *bestvar, integer *nodeclass, 
	integer *nrnodes, integer *ndbigtree, integer *cat, integer *jvr, 
	integer *nodexvr, integer *maxcat, integer *nbestcat, real *tnodewt, 
	integer *nodextr, integer *joob, integer *pjoob, integer *iv)
{
    /* System generated locals */
    integer x_dim1, x_offset, qimpm_dim1, qimpm_offset, nbestcat_dim1, 
	    nbestcat_offset, i__1, i__2;
    real r__1;

    /* Local variables */
    static real rightimp;
    static integer k, n, jj, nn, mr;
    extern /* Subroutine */ int testreeimp_(real *, integer *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, integer *, 
	    real *, integer *, integer *, integer *, integer *, integer *, 
	    integer *, integer *, integer *, integer *);
    static integer nout;
    extern /* Subroutine */ int zerv_(integer *, integer *);
    static real right;



    /* Parameter adjustments */
    --pjoob;
    --joob;
    --nodextr;
    --nodexvr;
    --jvr;
    --qimp;
    --jtr;
    --jin;
    --cl;
    --iv;
    --cat;
    --sqsd;
    --avimp;
    qimpm_dim1 = *nsample;
    qimpm_offset = 1 + qimpm_dim1;
    qimpm -= qimpm_offset;
    x_dim1 = *mdim;
    x_offset = 1 + x_dim1;
    x -= x_offset;
    --msm;
    --tnodewt;
    --nodeclass;
    --bestvar;
    --xbestsplit;
    --nodestatus;
    treemap -= 3;
    nbestcat_dim1 = *maxcat;
    nbestcat_offset = 1 + nbestcat_dim1;
    nbestcat -= nbestcat_offset;

    /* Function Body */
    nout = 0;
    right = 0.f;
    i__1 = *nsample;
    for (n = 1; n <= i__1; ++n) {
	if (jin[n] == 0) {
/* 		this case is out-of-bag */
/* 		update count of correct oob classifications */
/* 		(jtr(n)=cl(n) if case n is correctly classified) */
	    if (jtr[n] == cl[n]) {
		right += tnodewt[nodextr[n]];
	    }
/* 		nout=number of obs out-of-bag for THIS tree */
	    ++nout;
	    joob[nout] = n;
	}
    }
    if (*impn == 1) {
	i__1 = nout;
	for (n = 1; n <= i__1; ++n) {
	    nn = joob[n];
	    if (jtr[nn] == cl[nn]) {
		qimp[nn] += tnodewt[nodextr[nn]] / nout;
	    }
	}
    }
    zerv_(&iv[1], mdim);
    i__1 = *ndbigtree;
    for (jj = 1; jj <= i__1; ++jj) {
/* 		iv(j)=1 if variable j was used to split on */
	if (nodestatus[jj] != -1) {
	    iv[bestvar[jj]] = 1;
	}
    }
    i__1 = *mdimt;
    for (k = 1; k <= i__1; ++k) {
	mr = msm[k];
/* 		choose only those that used a split on variable mr */
	if (iv[mr] == 1) {
	    testreeimp_(&x[x_offset], nsample, mdim, &joob[1], &pjoob[1], &
		    nout, &mr, &treemap[3], &nodestatus[1], &xbestsplit[1], &
		    bestvar[1], &nodeclass[1], nrnodes, ndbigtree, &cat[1], &
		    jvr[1], &nodexvr[1], maxcat, &nbestcat[nbestcat_offset]);
	    rightimp = 0.f;
	    i__2 = nout;
	    for (n = 1; n <= i__2; ++n) {
/* 				the nth out-of-bag case is the nnth original case */
		nn = joob[n];
		if (*impn == 1) {
		    if (jvr[n] == cl[nn]) {
			qimpm[nn + mr * qimpm_dim1] += tnodewt[nodexvr[n]] / 
				nout;
		    }
		}
		if (jvr[n] == cl[nn]) {
		    rightimp += tnodewt[nodexvr[n]];
		}
	    }
	    avimp[mr] += (right - rightimp) / nout;
/* Computing 2nd power */
	    r__1 = right - rightimp;
/* Computing 2nd power */
	    i__2 = nout;
	    sqsd[mr] += r__1 * r__1 / (i__2 * i__2);
	} else {
	    i__2 = nout;
	    for (n = 1; n <= i__2; ++n) {
/* 				the nth out-of-bag case is */
/* 				the nnth original case */
		nn = joob[n];
		if (*impn == 1) {
		    if (jtr[nn] == cl[nn]) {
			qimpm[nn + mr * qimpm_dim1] += tnodewt[nodextr[nn]] / 
				nout;
		    }
		}
	    }
	}
    }
/* k */
    return 0;
} /* varimp_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int finishimp_(integer *mdim, real *sqsd, real *avimp, real *
	signif, real *zscore, integer *jbt, integer *mdimt, integer *msm)
{
    /* System generated locals */
    integer i__1;

    /* Builtin functions */
    double sqrt(doublereal);

    /* Local variables */
    static integer k;
    static real v;
    static integer m1;
    static real av, se;
    extern doublereal erfcc_(real *);


    /* Parameter adjustments */
    --msm;
    --zscore;
    --signif;
    --avimp;
    --sqsd;

    /* Function Body */
    i__1 = *mdimt;
    for (k = 1; k <= i__1; ++k) {
	m1 = msm[k];
	avimp[m1] /= *jbt;
	av = avimp[m1];
	se = sqsd[m1] / *jbt - av * av;
	se = sqrt(se / *jbt);
	if (se > 0.f) {
	    zscore[m1] = avimp[m1] / se;
	    v = zscore[m1];
	    signif[m1] = erfcc_(&v);
	} else {
	    zscore[m1] = -5.f;
	    signif[m1] = 1.f;
	}
    }
    return 0;
} /* finishimp_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int compinteract_(real *votes, real *effect, integer *msm, 
	integer *mdim, integer *mdimt, integer *jbt, real *g, integer *iv, 
	integer *irnk, real *hist, real *teffect)
{
    /* System generated locals */
    integer votes_dim1, votes_offset, effect_dim1, effect_offset, hist_dim1, 
	    hist_offset, teffect_dim1, teffect_offset, irnk_dim1, irnk_offset,
	     i__1, i__2, i__3, i__4, i__5;
    real r__1;

    /* Local variables */
    static integer i__, j, k, m, jb, ii, ij, jj, nt, irk;
    static real gmin;
    static integer mmin;
    static real rcor;
    extern /* Subroutine */ int zerv_(integer *, integer *), zermr_(real *, 
	    integer *, integer *);


    /* Parameter adjustments */
    teffect_dim1 = *mdim;
    teffect_offset = 1 + teffect_dim1;
    teffect -= teffect_offset;
    hist_dim1 = *mdim - 0 + 1;
    hist_offset = 0 + hist_dim1;
    hist -= hist_offset;
    --iv;
    --g;
    effect_dim1 = *mdim;
    effect_offset = 1 + effect_dim1;
    effect -= effect_offset;
    --msm;
    irnk_dim1 = *mdim;
    irnk_offset = 1 + irnk_dim1;
    irnk -= irnk_offset;
    votes_dim1 = *mdim;
    votes_offset = 1 + votes_dim1;
    votes -= votes_offset;

    /* Function Body */
    i__1 = *jbt;
    for (jb = 1; jb <= i__1; ++jb) {
	nt = 0;
	zerv_(&iv[1], mdim);
	i__2 = *mdimt;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    m = msm[i__];
	    g[m] = votes[m + jb * votes_dim1];
	    if ((r__1 = g[m], dabs(r__1)) < 8.232e-11) {
		irnk[m + jb * irnk_dim1] = 0;
		iv[m] = 1;
		++nt;
	    }
	}
	irk = 0;
	for (j = 1; j <= 8000; ++j) {
	    gmin = 1e4f;
	    i__2 = *mdimt;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		m = msm[i__];
		if (iv[m] == 0 && g[m] < gmin) {
		    gmin = g[m];
		    mmin = m;
		}
	    }
	    iv[mmin] = 1;
	    ++irk;
	    irnk[mmin + jb * irnk_dim1] = irk;
	    ++nt;
	    if (nt >= *mdimt) {
		goto L79;
	    }
	}
/* j */
L79:
	;
    }
/* jb */
    i__1 = *mdimt;
    for (j = 0; j <= i__1; ++j) {
	i__2 = *mdimt;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    m = msm[i__];
	    hist[j + m * hist_dim1] = 0.f;
	}
    }
    i__1 = *mdimt;
    for (i__ = 1; i__ <= i__1; ++i__) {
	m = msm[i__];
	i__2 = *jbt;
	for (jb = 1; jb <= i__2; ++jb) {
	    ++hist[irnk[m + jb * irnk_dim1] + m * hist_dim1];
	}
	i__2 = *mdimt;
	for (j = 0; j <= i__2; ++j) {
	    hist[j + m * hist_dim1] /= *jbt;
	}
    }
/* m */
    zermr_(&effect[effect_offset], mdim, mdim);
    i__1 = *mdimt;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i__2 = *mdimt;
	for (j = 1; j <= i__2; ++j) {
	    m = msm[i__];
	    k = msm[j];
	    i__3 = *jbt;
	    for (jb = 1; jb <= i__3; ++jb) {
		effect[m + k * effect_dim1] += (i__4 = irnk[m + jb * 
			irnk_dim1] - irnk[k + jb * irnk_dim1], abs(i__4));
	    }
	    effect[m + k * effect_dim1] /= *jbt;
	}
    }
    zermr_(&teffect[teffect_offset], mdim, mdim);
    i__1 = *mdimt;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i__2 = *mdimt;
	for (j = 1; j <= i__2; ++j) {
	    m = msm[i__];
	    k = msm[j];
	    i__3 = *mdimt;
	    for (ii = 0; ii <= i__3; ++ii) {
		i__4 = *mdimt;
		for (jj = 0; jj <= i__4; ++jj) {
		    teffect[m + k * teffect_dim1] += (i__5 = ii - jj, abs(
			    i__5)) * hist[jj + m * hist_dim1] * hist[ii + k * 
			    hist_dim1];
		}
	    }
	    rcor = 0.f;
	    i__3 = *mdimt;
	    for (ij = 1; ij <= i__3; ++ij) {
		rcor += hist[ij + m * hist_dim1] * hist[ij + k * hist_dim1];
	    }
	    teffect[m + k * teffect_dim1] /= 1 - rcor;
	}
    }
    i__1 = *mdimt;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i__2 = *mdimt;
	for (j = 1; j <= i__2; ++j) {
	    m = msm[i__];
	    k = msm[j];
	    effect[m + k * effect_dim1] = (effect[m + k * effect_dim1] - 
		    teffect[m + k * teffect_dim1]) * 100;
	}
    }
    return 0;
} /* compinteract_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int compprot_(integer *loz, integer *nrnn, integer *ns, 
	integer *mdim, integer *its, integer *jest, real *wc, integer *nclass,
	 real *x, integer *mdimt, integer *msm, real *temp, integer *cat, 
	integer *maxcat, integer *jpur, integer *inear, integer *nprot, real *
	protlow, real *prothigh, real *prot, real *protfreq, real *protvlow, 
	real *protvhigh, real *protv, real *popclass, integer *npend, real *
	freq, real *v5, real *v95)
{
    /* System generated locals */
    integer loz_dim1, loz_offset, prot_dim1, prot_dim2, prot_offset, 
	    protlow_dim1, protlow_dim2, protlow_offset, prothigh_dim1, 
	    prothigh_dim2, prothigh_offset, protfreq_dim1, protfreq_dim2, 
	    protfreq_dim3, protfreq_offset, protvlow_dim1, protvlow_dim2, 
	    protvlow_offset, protvhigh_dim1, protvhigh_dim2, protvhigh_offset,
	     x_dim1, x_offset, protv_dim1, protv_dim2, protv_offset, 
	    popclass_dim1, popclass_offset, i__1, i__2, i__3, i__4;

    /* Builtin functions */
    integer i_nint(real *);

    /* Local variables */
    static integer i__, k, m, n;
    extern /* Subroutine */ int quicksort_(real *, integer *, integer *, 
	    integer *, integer *);
    static integer ii, jj, ll;
    static real dt;
    static integer jp, mm, nn, npu;
    static real fmax;
    static integer jmax;
    extern /* Subroutine */ int zerv_(integer *, integer *), zervr_(real *, 
	    integer *);
    static integer nclose;


    /* Parameter adjustments */
    --inear;
    --jpur;
    --temp;
    --wc;
    --jest;
    --its;
    loz_dim1 = *ns;
    loz_offset = 1 + loz_dim1;
    loz -= loz_offset;
    --v95;
    --v5;
    --cat;
    --msm;
    x_dim1 = *mdim;
    x_offset = 1 + x_dim1;
    x -= x_offset;
    --npend;
    --freq;
    popclass_dim1 = *nprot;
    popclass_offset = 1 + popclass_dim1;
    popclass -= popclass_offset;
    protv_dim1 = *mdim;
    protv_dim2 = *nprot;
    protv_offset = 1 + protv_dim1 * (1 + protv_dim2);
    protv -= protv_offset;
    protvhigh_dim1 = *mdim;
    protvhigh_dim2 = *nprot;
    protvhigh_offset = 1 + protvhigh_dim1 * (1 + protvhigh_dim2);
    protvhigh -= protvhigh_offset;
    protvlow_dim1 = *mdim;
    protvlow_dim2 = *nprot;
    protvlow_offset = 1 + protvlow_dim1 * (1 + protvlow_dim2);
    protvlow -= protvlow_offset;
    protfreq_dim1 = *mdim;
    protfreq_dim2 = *nprot;
    protfreq_dim3 = *nclass;
    protfreq_offset = 1 + protfreq_dim1 * (1 + protfreq_dim2 * (1 + 
	    protfreq_dim3));
    protfreq -= protfreq_offset;
    prot_dim1 = *mdim;
    prot_dim2 = *nprot;
    prot_offset = 1 + prot_dim1 * (1 + prot_dim2);
    prot -= prot_offset;
    prothigh_dim1 = *mdim;
    prothigh_dim2 = *nprot;
    prothigh_offset = 1 + prothigh_dim1 * (1 + prothigh_dim2);
    prothigh -= prothigh_offset;
    protlow_dim1 = *mdim;
    protlow_dim2 = *nprot;
    protlow_offset = 1 + protlow_dim1 * (1 + protlow_dim2);
    protlow -= protlow_offset;

    /* Function Body */
    i__1 = *nclass;
    for (jp = 1; jp <= i__1; ++jp) {
	zerv_(&its[1], ns);
/* 		we try to find nprot prototypes for this class: */
	npend[jp] = *nprot;
	i__2 = *nprot;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    zervr_(&wc[1], ns);
	    i__3 = *ns;
	    for (n = 1; n <= i__3; ++n) {
		if (its[n] == 0) {
/* 					wc(n) is the number of unseen neighbors */
/* 					of case n that are predicted to be */
/* 					in class jp */
/* 					loz(n,1),...,loz(n,nrnn) point to */
/* 					the nrnn nearest neighbors of */
/* 					case n */
		    i__4 = *nrnn;
		    for (k = 1; k <= i__4; ++k) {
			nn = loz[n + k * loz_dim1];
			if (its[nn] == 0) {
			    ii = jest[nn];
			    if (ii == jp) {
				++wc[n];
			    }
			}
		    }
		}
	    }
/* 			find the unseen case with the largest number */
/* 			of unseen predicted-class-jp neighbors */
	    nclose = 0;
	    npu = 0;
	    i__3 = *ns;
	    for (n = 1; n <= i__3; ++n) {
		if (wc[n] >= (real) nclose && its[n] == 0) {
		    npu = n;
		    nclose = wc[n];
		}
	    }
/* 			if nclose=0,no case has any unseen predicted-class-jp neighbors */
/* 			can't find another prototype for this class - reduce npend by 1 and */
/* 			start finding prototypes for the next class */
	    if (nclose == 0) {
		npend[jp] = i__ - 1;
		goto L93;
	    }
/* 			case npu has the largest number */
/* 			of unseen predicted-class-jp neighbors */
/* 			put these neighbors in a list of length nclose */
	    ii = 0;
	    i__3 = *nrnn;
	    for (k = 1; k <= i__3; ++k) {
		nn = loz[npu + k * loz_dim1];
		if (its[nn] == 0 && jest[nn] == jp) {
		    ++ii;
		    inear[ii] = nn;
		}
	    }
/* 			popclass is a measure of the size of the cluster around */
/* 			this prototype */
	    popclass[i__ + jp * popclass_dim1] = (real) nclose;
	    i__3 = *mdimt;
	    for (mm = 1; mm <= i__3; ++mm) {
/* 				m is the index of the mmth variable */
		m = msm[mm];
		if (cat[m] == 1) {
		    dt = v95[m] - v5[m];
		    i__4 = nclose;
		    for (ii = 1; ii <= i__4; ++ii) {
/* 						put the value of the mmth variable into the list */
			temp[ii] = x[m + inear[ii] * x_dim1];
		    }
/* 					sort the list */
/* ii */
		    quicksort_(&temp[1], &jpur[1], &c__1, &nclose, &nclose);
		    ii = nclose / 4;
		    if (ii == 0) {
			ii = 1;
		    }
/* 					find the 25th percentile */
		    protvlow[m + (i__ + jp * protvlow_dim2) * protvlow_dim1] =
			     temp[ii];
		    protlow[m + (i__ + jp * protlow_dim2) * protlow_dim1] = (
			    temp[ii] - v5[m]) / dt;
		    ii = nclose / 4;
		    ii = nclose * 3 / 4;
		    if (ii == 0) {
			ii = 1;
		    }
/* 					find the 75th percentile */
		    protvhigh[m + (i__ + jp * protvhigh_dim2) * 
			    protvhigh_dim1] = temp[ii];
		    prothigh[m + (i__ + jp * prothigh_dim2) * prothigh_dim1] =
			     (temp[ii] - v5[m]) / dt;
		    ii = nclose / 2;
		    if (ii == 0) {
			ii = 1;
		    }
/* 					find the median */
		    protv[m + (i__ + jp * protv_dim2) * protv_dim1] = temp[ii]
			    ;
		    prot[m + (i__ + jp * prot_dim2) * prot_dim1] = (temp[ii] 
			    - v5[m]) / dt;
		}
		if (cat[m] >= 2) {
/* 					for categorical variables,choose the most frequent class */
		    zervr_(&freq[1], maxcat);
		    i__4 = nclose;
		    for (k = 1; k <= i__4; ++k) {
			jj = i_nint(&x[m + loz[npu + k * loz_dim1] * x_dim1]);
			++freq[jj];
		    }
		    jmax = 1;
		    fmax = freq[1];
		    i__4 = cat[m];
		    for (ll = 2; ll <= i__4; ++ll) {
			if (freq[ll] > fmax) {
			    jmax = ll;
			    fmax = freq[ll];
			}
		    }
		    protv[m + (i__ + jp * protv_dim2) * protv_dim1] = (real) 
			    jmax;
		    protvlow[m + (i__ + jp * protvlow_dim2) * protvlow_dim1] =
			     (real) jmax;
		    protvhigh[m + (i__ + jp * protvhigh_dim2) * 
			    protvhigh_dim1] = (real) jmax;
		    i__4 = cat[m];
		    for (ll = 1; ll <= i__4; ++ll) {
			protfreq[m + (i__ + (jp + ll * protfreq_dim3) * 
				protfreq_dim2) * protfreq_dim1] = freq[ll];
		    }
		}
	    }
/* 			record that npu and it's neighbors have been 'seen' */
/* m */
	    its[npu] = 1;
	    i__3 = nclose;
	    for (k = 1; k <= i__3; ++k) {
		nn = loz[npu + k * loz_dim1];
		its[nn] = 1;
	    }
	}
/* nprot */
L93:
	;
    }
/* jp */
    return 0;
} /* compprot_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int preprox_(integer *near__, integer *nrnodes, integer *jbt,
	 integer *nodestatus, integer *ncount, integer *jb, integer *nod, 
	integer *nodextr, integer *nodexb, integer *jin, integer *jinb, 
	integer *ncn, integer *ndbegin, integer *kpop, real *rinpop, integer *
	npcase, real *rpop, integer *nsample)
{
    /* System generated locals */
    integer ncount_dim1, ncount_offset, nodexb_dim1, nodexb_offset, jinb_dim1,
	     jinb_offset, npcase_dim1, npcase_offset, ndbegin_dim1, 
	    ndbegin_offset, rinpop_dim1, rinpop_offset, i__1;

    /* Local variables */
    static integer k, n, kn, ntt, nterm;


    /* Parameter adjustments */
    --rpop;
    --kpop;
    --ncn;
    --nodextr;
    --nod;
    --nodestatus;
    npcase_dim1 = *near__;
    npcase_offset = 1 + npcase_dim1;
    npcase -= npcase_offset;
    rinpop_dim1 = *near__;
    rinpop_offset = 1 + rinpop_dim1;
    rinpop -= rinpop_offset;
    ndbegin_dim1 = *near__;
    ndbegin_offset = 1 + ndbegin_dim1;
    ndbegin -= ndbegin_offset;
    jinb_dim1 = *near__;
    jinb_offset = 1 + jinb_dim1;
    jinb -= jinb_offset;
    nodexb_dim1 = *near__;
    nodexb_offset = 1 + nodexb_dim1;
    nodexb -= nodexb_offset;
    ncount_dim1 = *near__;
    ncount_offset = 1 + ncount_dim1;
    ncount -= ncount_offset;
    --jin;

    /* Function Body */
    i__1 = *near__;
    for (n = 1; n <= i__1; ++n) {
	ncount[n + *jb * ncount_dim1] = 0;
	ndbegin[n + *jb * ndbegin_dim1] = 0;
    }
    ntt = 0;
    i__1 = *nrnodes;
    for (k = 1; k <= i__1; ++k) {
	if (nodestatus[k] == -1) {
	    ++ntt;
	    nod[k] = ntt;
	}
    }
    nterm = ntt;
    i__1 = *near__;
    for (n = 1; n <= i__1; ++n) {
	rinpop[n + *jb * rinpop_dim1] = rpop[nodextr[n]];
	nodexb[n + *jb * nodexb_dim1] = nod[nodextr[n]];
	jinb[n + *jb * jinb_dim1] = jin[n];
	k = nodexb[n + *jb * nodexb_dim1];
	++ncount[k + *jb * ncount_dim1];
	ncn[n] = ncount[k + *jb * ncount_dim1];
    }
    ndbegin[*jb * ndbegin_dim1 + 1] = 1;
    i__1 = nterm + 1;
    for (k = 2; k <= i__1; ++k) {
	ndbegin[k + *jb * ndbegin_dim1] = ndbegin[k - 1 + *jb * ndbegin_dim1] 
		+ ncount[k - 1 + *jb * ncount_dim1];
    }
    i__1 = *near__;
    for (n = 1; n <= i__1; ++n) {
	kn = ndbegin[nodexb[n + *jb * nodexb_dim1] + *jb * ndbegin_dim1] + 
		ncn[n] - 1;
	npcase[kn + *jb * npcase_dim1] = n;
    }
    return 0;
} /* preprox_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int comprox_(doublereal *prox, integer *nodexb, integer *
	jinb, integer *ndbegin, integer *npcase, doublereal *ppr, real *
	rinpop, integer *near__, integer *jbt, integer *noutlier, real *outtr,
	 integer *cl, integer *loz, integer *nrnn, real *wtx, integer *
	nsample, integer *iwork, integer *ibest)
{
    /* System generated locals */
    integer prox_dim1, prox_offset, rinpop_dim1, rinpop_offset, nodexb_dim1, 
	    nodexb_offset, jinb_dim1, jinb_offset, ndbegin_dim1, 
	    ndbegin_offset, npcase_dim1, npcase_offset, loz_dim1, loz_offset, 
	    i__1, i__2, i__3;

    /* Local variables */
    static integer j, k, n, jb, kk;
    static real rsq;
    extern /* Subroutine */ int zervd_(doublereal *, integer *), biggest_(
	    doublereal *, integer *, integer *, integer *, integer *);



    /* Parameter adjustments */
    --iwork;
    --outtr;
    --ppr;
    rinpop_dim1 = *near__;
    rinpop_offset = 1 + rinpop_dim1;
    rinpop -= rinpop_offset;
    npcase_dim1 = *near__;
    npcase_offset = 1 + npcase_dim1;
    npcase -= npcase_offset;
    ndbegin_dim1 = *near__;
    ndbegin_offset = 1 + ndbegin_dim1;
    ndbegin -= ndbegin_offset;
    jinb_dim1 = *near__;
    jinb_offset = 1 + jinb_dim1;
    jinb -= jinb_offset;
    nodexb_dim1 = *near__;
    nodexb_offset = 1 + nodexb_dim1;
    nodexb -= nodexb_offset;
    --ibest;
    loz_dim1 = *near__;
    loz_offset = 1 + loz_dim1;
    loz -= loz_offset;
    prox_dim1 = *near__;
    prox_offset = 1 + prox_dim1;
    prox -= prox_offset;
    --wtx;
    --cl;

    /* Function Body */
    i__1 = *near__;
    for (n = 1; n <= i__1; ++n) {
	zervd_(&ppr[1], near__);
	i__2 = *jbt;
	for (jb = 1; jb <= i__2; ++jb) {
	    k = nodexb[n + jb * nodexb_dim1];
	    if (jinb[n + jb * jinb_dim1] > 0) {
		i__3 = ndbegin[k + 1 + jb * ndbegin_dim1] - 1;
		for (j = ndbegin[k + jb * ndbegin_dim1]; j <= i__3; ++j) {
		    kk = npcase[j + jb * npcase_dim1];
		    if (jinb[kk + jb * jinb_dim1] == 0) {
			ppr[kk] += wtx[n] / rinpop[n + jb * rinpop_dim1];
		    }
		}
	    }
	    if (jinb[n + jb * jinb_dim1] == 0) {
		i__3 = ndbegin[k + 1 + jb * ndbegin_dim1] - 1;
		for (j = ndbegin[k + jb * ndbegin_dim1]; j <= i__3; ++j) {
		    kk = npcase[j + jb * npcase_dim1];
		    if (jinb[kk + jb * jinb_dim1] > 0) {
			ppr[kk] += wtx[kk] / rinpop[kk + jb * rinpop_dim1];
		    }
		}
	    }
	}
/* jbt */
	if (*noutlier == 1) {
	    rsq = 0.f;
	    i__2 = *near__;
	    for (k = 1; k <= i__2; ++k) {
		if (ppr[k] > 0. && cl[k] == cl[n]) {
		    rsq += ppr[k] * ppr[k];
		}
	    }
	    if (rsq == 0.f) {
		rsq = 1.f;
	    }
	    outtr[n] = *near__ / rsq;
	}
	if (*nrnn == *near__) {
	    i__2 = *near__;
	    for (k = 1; k <= i__2; ++k) {
		prox[n + k * prox_dim1] = ppr[k];
		loz[n + k * loz_dim1] = k;
	    }
	} else {
	    biggest_(&ppr[1], near__, nrnn, &ibest[1], &iwork[1]);
	    i__2 = *nrnn;
	    for (k = 1; k <= i__2; ++k) {
		prox[n + k * prox_dim1] = ppr[ibest[k]];
		loz[n + k * loz_dim1] = ibest[k];
	    }
	}
    }
/* n */
    return 0;
} /* comprox_ */


/* 	------------------------------------------------------ */
/* Subroutine */ int biggest_(doublereal *x, integer *n, integer *nrnn, 
	integer *ibest, integer *iwork)
{
    /* System generated locals */
    integer i__1, i__2;

    /* Local variables */
    static integer i__, j;
    extern /* Subroutine */ int sift_(doublereal *, integer *, integer *, 
	    integer *, integer *);
    static integer jsave, ihalfn;



/* 	finds the nrnn largest values in the vector x and */
/* 	returns their positions in the vector ibest(1),...,ibest(nrnn): */
/* 		x(ibest(1)) is the largest */
/* 		... */
/* 		x(ibest(nrnn)) is the nrnn-th-largest */
/* 	the vector x is not disturbed */
/* 	the vector iwork is used as workspace */

    /* Parameter adjustments */
    --iwork;
    --x;
    --ibest;

    /* Function Body */
    ihalfn = *n / 2;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	iwork[i__] = i__;
    }
    i__1 = ihalfn;
    for (j = 1; j <= i__1; ++j) {
	i__ = ihalfn + 1 - j;
	sift_(&x[1], &iwork[1], n, n, &i__);
    }
    i__1 = *nrnn - 1;
    for (j = 1; j <= i__1; ++j) {
	i__ = *n - j + 1;
	ibest[j] = iwork[1];
	jsave = iwork[i__];
	iwork[i__] = iwork[1];
	iwork[1] = jsave;
	i__2 = *n - j;
	sift_(&x[1], &iwork[1], n, &i__2, &c__1);
    }
    ibest[*nrnn] = iwork[1];
    return 0;
} /* biggest_ */


/* 	------------------------------------------------------ */
/* Subroutine */ int sift_(doublereal *x, integer *iwork, integer *n, integer 
	*m, integer *i__)
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer j, k, jsave, ksave;
    static real xsave;



/* 	used by subroutine biggest,to bring the largest element to the */
/* 	top of the heap */

    /* Parameter adjustments */
    --x;
    --iwork;

    /* Function Body */
    xsave = x[iwork[*i__]];
    ksave = iwork[*i__];
    jsave = *i__;
    j = *i__ + *i__;
    i__1 = *m;
    for (k = 1; k <= i__1; ++k) {
	if (j > *m) {
	    goto L10;
	}
	if (j < *m) {
	    if (x[iwork[j]] < x[iwork[j + 1]]) {
		++j;
	    }
	}
	if (xsave >= x[iwork[j]]) {
	    goto L10;
	}
	iwork[jsave] = iwork[j];
	jsave = j;
	j += j;
    }
L10:
    iwork[jsave] = ksave;
    return 0;
} /* sift_ */


/* 	------------------------------------------------------ */
/* Subroutine */ int locateout_(integer *cl, real *tout, real *outtr, integer 
	*ncp, integer *isort, real *devout, integer *near__, integer *nsample,
	 integer *nclass, real *rmedout)
{
    /* System generated locals */
    integer i__1, i__2;
    real r__1, r__2, r__3;

    /* Local variables */
    static integer i__, n;
    extern /* Subroutine */ int quicksort_(real *, integer *, integer *, 
	    integer *, integer *);
    static integer jp, nt;
    static real dev, rmed;


    /* Parameter adjustments */
    --ncp;
    --outtr;
    --tout;
    --isort;
    --cl;
    --rmedout;
    --devout;

    /* Function Body */
    i__1 = *nclass;
    for (jp = 1; jp <= i__1; ++jp) {
	nt = 0;
	i__2 = *near__;
	for (n = 1; n <= i__2; ++n) {
	    if (cl[n] == jp) {
		++nt;
		tout[nt] = outtr[n];
		ncp[nt] = n;
	    }
	}
	quicksort_(&tout[1], &isort[1], &c__1, &nt, nsample);
	rmed = tout[(nt + 1) / 2];
	dev = 0.f;
	i__2 = nt;
	for (i__ = 1; i__ <= i__2; ++i__) {
/* Computing MIN */
	    r__2 = (r__1 = tout[i__] - rmed, dabs(r__1)), r__3 = rmed * 5;
	    dev += dmin(r__2,r__3);
	}
	dev /= nt;
	devout[jp] = dev;
	rmedout[jp] = rmed;
	i__2 = nt;
	for (i__ = 1; i__ <= i__2; ++i__) {
/* Computing MIN */
	    r__1 = (outtr[ncp[i__]] - rmed) / dev;
	    outtr[ncp[i__]] = dmin(r__1,20.f);
	}
    }
/* jp */
    return 0;
} /* locateout_ */

/* 	------------------------------------------------------- */
/* Subroutine */ int myscale_(integer *loz, doublereal *prox, doublereal *xsc,
	 doublereal *y, doublereal *u, integer *near__, integer *nscale, 
	doublereal *red, integer *nrnn, doublereal *ee, doublereal *ev, 
	doublereal *dl)
{
    /* System generated locals */
    integer prox_dim1, prox_offset, xsc_dim1, xsc_offset, ev_dim1, ev_offset, 
	    loz_dim1, loz_offset, i__1, i__2, i__3;
    doublereal d__1;

    /* Builtin functions */
    double sqrt(doublereal);

    /* Local variables */
    static integer i__, j, k, n;
    static doublereal y2, bl[10], ra, sa, eu;
    static integer it;
    static doublereal ru;
    static integer jit;
    extern doublereal dotd_(doublereal *, doublereal *, integer *);
    static doublereal sred, ynorm;



    /* Parameter adjustments */
    --ee;
    --red;
    --u;
    --y;
    --dl;
    ev_dim1 = *near__;
    ev_offset = 1 + ev_dim1;
    ev -= ev_offset;
    xsc_dim1 = *near__;
    xsc_offset = 1 + xsc_dim1;
    xsc -= xsc_offset;
    prox_dim1 = *near__;
    prox_offset = 1 + prox_dim1;
    prox -= prox_offset;
    loz_dim1 = *near__;
    loz_offset = 1 + loz_dim1;
    loz -= loz_offset;

    /* Function Body */
    i__1 = *near__;
    for (j = 1; j <= i__1; ++j) {
	ee[j] = 1.;
    }

    i__1 = *near__;
    for (j = 1; j <= i__1; ++j) {
	red[j] = 0.;
	i__2 = *nrnn;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    red[j] += prox[j + i__ * prox_dim1];
	}
	red[j] /= *near__;
    }
    sred = dotd_(&ee[1], &red[1], near__);
    sred /= *near__;
    i__1 = *nscale;
    for (it = 1; it <= i__1; ++it) {
	i__2 = *near__;
	for (n = 1; n <= i__2; ++n) {
	    if (n % 2 == 0) {
		y[n] = 1.;
	    } else {
		y[n] = -1.;
	    }
	}
	for (jit = 1; jit <= 1000; ++jit) {
	    y2 = dotd_(&y[1], &y[1], near__);
	    y2 = sqrt(y2);
	    i__2 = *near__;
	    for (n = 1; n <= i__2; ++n) {
		u[n] = y[n] / y2;
	    }
	    i__2 = *near__;
	    for (n = 1; n <= i__2; ++n) {
		y[n] = 0.;
		i__3 = *nrnn;
		for (k = 1; k <= i__3; ++k) {
		    y[n] += prox[n + k * prox_dim1] * u[loz[n + k * loz_dim1]]
			    ;
		}
	    }
	    eu = dotd_(&ee[1], &u[1], near__);
	    ru = dotd_(&red[1], &u[1], near__);
	    i__2 = *near__;
	    for (n = 1; n <= i__2; ++n) {
		y[n] = y[n] - (red[n] - sred) * eu - ru;
		y[n] *= .5f;
	    }
	    if (it > 1) {
		i__2 = it - 1;
		for (j = 1; j <= i__2; ++j) {
		    bl[j - 1] = 0.;
		    i__3 = *near__;
		    for (n = 1; n <= i__3; ++n) {
			bl[j - 1] += ev[n + j * ev_dim1] * u[n];
		    }
		    i__3 = *near__;
		    for (n = 1; n <= i__3; ++n) {
			y[n] -= bl[j - 1] * dl[j] * ev[n + j * ev_dim1];
		    }
		}
	    }
	    ra = dotd_(&y[1], &u[1], near__);
	    ynorm = 0.;
	    i__2 = *near__;
	    for (n = 1; n <= i__2; ++n) {
/* Computing 2nd power */
		d__1 = y[n] - ra * u[n];
		ynorm += d__1 * d__1;
	    }
	    sa = abs(ra);
	    if (ynorm < sa * 1e-7f) {
		i__2 = *near__;
		for (n = 1; n <= i__2; ++n) {
		    xsc[n + it * xsc_dim1] = sqrt(sa) * u[n];
		    ev[n + it * ev_dim1] = u[n];
		}
		dl[it] = ra;
		goto L101;
	    }
	}
L101:
	;
    }
/* nn */
    return 0;
} /* myscale_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int xfill_(real *x, integer *nsample, integer *mdim, real *
	fill, real *code)
{
    /* System generated locals */
    integer x_dim1, x_offset, i__1, i__2;
    real r__1;

    /* Local variables */
    static integer m, n;


/* 	input: */
/* 	output: */
/* 	local: */
    /* Parameter adjustments */
    --fill;
    x_dim1 = *mdim;
    x_offset = 1 + x_dim1;
    x -= x_offset;

    /* Function Body */
    i__1 = *nsample;
    for (n = 1; n <= i__1; ++n) {
	i__2 = *mdim;
	for (m = 1; m <= i__2; ++m) {
	    if ((r__1 = x[m + n * x_dim1] - *code, dabs(r__1)) < 8.232e-11) {
		x[m + n * x_dim1] = fill[m];
	    }
	}
/* m */
    }
    return 0;
} /* xfill_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int roughfix_(real *x, real *v, integer *ncase, integer *
	mdim, integer *nsample, integer *cat, real *code, integer *nrcat, 
	integer *maxcat, real *fill)
{
    /* System generated locals */
    integer x_dim1, x_offset, i__1, i__2;
    real r__1;

    /* Builtin functions */
    integer i_nint(real *);

    /* Local variables */
    static integer j, m, n;
    extern /* Subroutine */ int quicksort_(real *, integer *, integer *, 
	    integer *, integer *);
    static integer nt, lcat;
    static real rmed;
    static integer jmax, nmax;
    extern /* Subroutine */ int zerv_(integer *, integer *);



    /* Parameter adjustments */
    --fill;
    --cat;
    --ncase;
    --v;
    x_dim1 = *mdim;
    x_offset = 1 + x_dim1;
    x -= x_offset;
    --nrcat;

    /* Function Body */
    i__1 = *mdim;
    for (m = 1; m <= i__1; ++m) {
	if (cat[m] == 1) {
/* 			continuous variable */
	    nt = 0;
	    i__2 = *nsample;
	    for (n = 1; n <= i__2; ++n) {
		if ((r__1 = x[m + n * x_dim1] - *code, dabs(r__1)) >= 
			8.232e-11) {
		    ++nt;
		    v[nt] = x[m + n * x_dim1];
		}
	    }
	    quicksort_(&v[1], &ncase[1], &c__1, &nt, nsample);
	    if (nt > 0) {
		rmed = v[(nt + 1) / 2];
	    } else {
		rmed = 0.f;
	    }
	    fill[m] = rmed;
	} else {
/* 			categorical variable */
	    lcat = cat[m];
	    zerv_(&nrcat[1], maxcat);
	    i__2 = *nsample;
	    for (n = 1; n <= i__2; ++n) {
		if ((r__1 = x[m + n * x_dim1] - *code, dabs(r__1)) >= 
			8.232e-11) {
		    j = i_nint(&x[m + n * x_dim1]);
		    ++nrcat[j];
		}
	    }
	    nmax = 0;
	    jmax = 1;
	    i__2 = lcat;
	    for (j = 1; j <= i__2; ++j) {
		if (nrcat[j] > nmax) {
		    nmax = nrcat[j];
		    jmax = j;
		}
	    }
	    fill[m] = (real) jmax;
	}
    }
/* m */
    i__1 = *nsample;
    for (n = 1; n <= i__1; ++n) {
	i__2 = *mdim;
	for (m = 1; m <= i__2; ++m) {
	    if ((r__1 = x[m + n * x_dim1] - *code, dabs(r__1)) < 8.232e-11) {
		x[m + n * x_dim1] = fill[m];
	    }
	}
    }
    return 0;
} /* roughfix_ */

/* 	------------------------------------------------------- */
/* Subroutine */ int impute_(real *x, doublereal *prox, integer *near__, 
	integer *mdim, integer *maxcat, real *votecat, integer *cat, integer *
	nrnn, integer *loz, integer *missing)
{
    /* System generated locals */
    integer x_dim1, x_offset, prox_dim1, prox_offset, loz_dim1, loz_offset, 
	    missing_dim1, missing_offset, i__1, i__2, i__3;

    /* Builtin functions */
    integer i_nint(real *);

    /* Local variables */
    static integer i__, j, k, m, n;
    static real dt, sx;
    static integer jmax;
    static real rmax;
    extern /* Subroutine */ int zervr_(real *, integer *);



    /* Parameter adjustments */
    missing_dim1 = *mdim;
    missing_offset = 1 + missing_dim1;
    missing -= missing_offset;
    --cat;
    x_dim1 = *mdim;
    x_offset = 1 + x_dim1;
    x -= x_offset;
    --votecat;
    loz_dim1 = *near__;
    loz_offset = 1 + loz_dim1;
    loz -= loz_offset;
    prox_dim1 = *near__;
    prox_offset = 1 + prox_dim1;
    prox -= prox_offset;

    /* Function Body */
    i__1 = *mdim;
    for (m = 1; m <= i__1; ++m) {
	if (cat[m] == 1) {
	    i__2 = *near__;
	    for (n = 1; n <= i__2; ++n) {
		if (missing[m + n * missing_dim1] == 1) {
		    sx = 0.f;
		    dt = 0.f;
		    i__3 = *nrnn;
		    for (k = 1; k <= i__3; ++k) {
			if (missing[m + loz[n + k * loz_dim1] * missing_dim1] 
				!= 1) {
			    sx += (real) prox[n + k * prox_dim1] * x[m + loz[
				    n + k * loz_dim1] * x_dim1];
			    dt += (real) prox[n + k * prox_dim1];
			}
		    }
		    if (dt > 0.f) {
			x[m + n * x_dim1] = sx / dt;
		    }
		}
	    }
/* n */
	}
    }
/* m */
    i__1 = *mdim;
    for (m = 1; m <= i__1; ++m) {
	if (cat[m] > 1) {
	    i__2 = *near__;
	    for (n = 1; n <= i__2; ++n) {
		if (missing[m + n * missing_dim1] == 1) {
		    zervr_(&votecat[1], maxcat);
		    i__3 = *nrnn;
		    for (k = 1; k <= i__3; ++k) {
			if (missing[m + loz[n + k * loz_dim1] * missing_dim1] 
				!= 1) {
			    j = i_nint(&x[m + loz[n + k * loz_dim1] * x_dim1])
				    ;
			    votecat[j] += (real) prox[n + k * prox_dim1];
			}
		    }
/* k */
		    rmax = -1.f;
		    i__3 = cat[m];
		    for (i__ = 1; i__ <= i__3; ++i__) {
			if (votecat[i__] > rmax) {
			    rmax = votecat[i__];
			    jmax = i__;
			}
		    }
		    x[m + n * x_dim1] = (real) jmax;
		}
	    }
/* n */
	}
    }
/* m */
    return 0;
} /* impute_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int checkin_(integer *labelts, integer *labeltr, integer *
	nclass, integer *lookcls, integer *jclasswt, integer *mselect, 
	integer *mdim2nd, integer *mdim, integer *imp, integer *impn, integer 
	*interact, integer *nprox, integer *nrnn, integer *nsample, integer *
	noutlier, integer *nscale, integer *nprot, integer *missfill, integer 
	*iviz, integer *isaverf, integer *irunrf, integer *isavepar, integer *
	ireadpar, integer *isavefill, integer *ireadfill, integer *isaveprox, 
	integer *ireadprox, integer *isumout, integer *idataout, integer *
	impfastout, integer *impout, integer *interout, integer *iprotout, 
	integer *iproxout, integer *iscaleout, integer *ioutlierout, integer *
	cat, integer *maxcat, integer *cl)
{
    /* System generated locals */
    integer i__1;

    /* Builtin functions */
    integer s_wsle(cilist *), do_lio(integer *, integer *, char *, ftnlen), 
	    e_wsle(void);
    /* Subroutine */ int s_stop(char *, ftnlen);

    /* Local variables */
    static integer m, n;

    /* Fortran I/O blocks */
    static cilist io___495 = { 0, 6, 0, 0, 0 };
    static cilist io___496 = { 0, 6, 0, 0, 0 };
    static cilist io___497 = { 0, 6, 0, 0, 0 };
    static cilist io___498 = { 0, 6, 0, 0, 0 };
    static cilist io___499 = { 0, 6, 0, 0, 0 };
    static cilist io___500 = { 0, 6, 0, 0, 0 };
    static cilist io___501 = { 0, 6, 0, 0, 0 };
    static cilist io___502 = { 0, 6, 0, 0, 0 };
    static cilist io___503 = { 0, 6, 0, 0, 0 };
    static cilist io___504 = { 0, 6, 0, 0, 0 };
    static cilist io___505 = { 0, 6, 0, 0, 0 };
    static cilist io___506 = { 0, 6, 0, 0, 0 };
    static cilist io___507 = { 0, 6, 0, 0, 0 };
    static cilist io___508 = { 0, 6, 0, 0, 0 };
    static cilist io___509 = { 0, 6, 0, 0, 0 };
    static cilist io___510 = { 0, 6, 0, 0, 0 };
    static cilist io___511 = { 0, 6, 0, 0, 0 };
    static cilist io___512 = { 0, 6, 0, 0, 0 };
    static cilist io___513 = { 0, 6, 0, 0, 0 };
    static cilist io___514 = { 0, 6, 0, 0, 0 };
    static cilist io___515 = { 0, 6, 0, 0, 0 };
    static cilist io___516 = { 0, 6, 0, 0, 0 };
    static cilist io___517 = { 0, 6, 0, 0, 0 };
    static cilist io___518 = { 0, 6, 0, 0, 0 };
    static cilist io___519 = { 0, 6, 0, 0, 0 };
    static cilist io___520 = { 0, 6, 0, 0, 0 };
    static cilist io___521 = { 0, 6, 0, 0, 0 };
    static cilist io___522 = { 0, 6, 0, 0, 0 };
    static cilist io___523 = { 0, 6, 0, 0, 0 };
    static cilist io___524 = { 0, 6, 0, 0, 0 };
    static cilist io___525 = { 0, 6, 0, 0, 0 };
    static cilist io___526 = { 0, 6, 0, 0, 0 };
    static cilist io___527 = { 0, 6, 0, 0, 0 };
    static cilist io___528 = { 0, 6, 0, 0, 0 };
    static cilist io___529 = { 0, 6, 0, 0, 0 };
    static cilist io___530 = { 0, 6, 0, 0, 0 };
    static cilist io___531 = { 0, 6, 0, 0, 0 };
    static cilist io___532 = { 0, 6, 0, 0, 0 };
    static cilist io___533 = { 0, 6, 0, 0, 0 };
    static cilist io___534 = { 0, 6, 0, 0, 0 };
    static cilist io___535 = { 0, 6, 0, 0, 0 };
    static cilist io___536 = { 0, 6, 0, 0, 0 };
    static cilist io___537 = { 0, 6, 0, 0, 0 };
    static cilist io___538 = { 0, 6, 0, 0, 0 };
    static cilist io___540 = { 0, 6, 0, 0, 0 };
    static cilist io___542 = { 0, 6, 0, 0, 0 };





    /* Parameter adjustments */
    --cat;
    --cl;

    /* Function Body */
    if (*labelts != 0 && *labelts != 1) {
	s_wsle(&io___495);
	do_lio(&c__9, &c__1, "error labelts", (ftnlen)13);
	do_lio(&c__3, &c__1, (char *)&(*labelts), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*labeltr != 0 && *labeltr != 1) {
	s_wsle(&io___496);
	do_lio(&c__9, &c__1, "error labeltr", (ftnlen)13);
	do_lio(&c__3, &c__1, (char *)&(*labeltr), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*labeltr == 0 && *nclass != 2) {
	s_wsle(&io___497);
	do_lio(&c__9, &c__1, "error,nclass should be 2 if labeltr=0", (ftnlen)
		37);
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*lookcls != 0 && *lookcls != 1) {
	s_wsle(&io___498);
	do_lio(&c__9, &c__1, "error lookcls", (ftnlen)13);
	do_lio(&c__3, &c__1, (char *)&(*lookcls), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*jclasswt != 0 && *jclasswt != 1) {
	s_wsle(&io___499);
	do_lio(&c__9, &c__1, "error jclasswt", (ftnlen)14);
	do_lio(&c__3, &c__1, (char *)&(*jclasswt), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*mselect != 0 && *mselect != 1) {
	s_wsle(&io___500);
	do_lio(&c__9, &c__1, "error mselect", (ftnlen)13);
	do_lio(&c__3, &c__1, (char *)&(*mselect), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*mdim2nd < 0 || *mdim2nd > *mdim) {
	s_wsle(&io___501);
	do_lio(&c__9, &c__1, "error mdim2nd", (ftnlen)13);
	do_lio(&c__3, &c__1, (char *)&(*mdim2nd), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*imp != 0 && *imp != 1) {
	s_wsle(&io___502);
	do_lio(&c__9, &c__1, "error imp", (ftnlen)9);
	do_lio(&c__3, &c__1, (char *)&(*imp), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*impn != 0 && *impn != 1) {
	s_wsle(&io___503);
	do_lio(&c__9, &c__1, "error impn", (ftnlen)10);
	do_lio(&c__3, &c__1, (char *)&(*impn), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*interact != 0 && *interact != 1) {
	s_wsle(&io___504);
	do_lio(&c__9, &c__1, "error interact", (ftnlen)14);
	do_lio(&c__3, &c__1, (char *)&(*interact), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*nprox < 0 || *nprox > 1) {
	s_wsle(&io___505);
	do_lio(&c__9, &c__1, "error nprox", (ftnlen)11);
	do_lio(&c__3, &c__1, (char *)&(*nprox), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*nrnn < 0 || *nrnn > *nsample) {
	s_wsle(&io___506);
	do_lio(&c__9, &c__1, "error - nrnn", (ftnlen)12);
	do_lio(&c__3, &c__1, (char *)&(*nrnn), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*noutlier < 0 || *noutlier > 2) {
	s_wsle(&io___507);
	do_lio(&c__9, &c__1, "error - noutlier", (ftnlen)16);
	do_lio(&c__3, &c__1, (char *)&(*noutlier), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*nscale < 0 || *nscale > *mdim) {
	s_wsle(&io___508);
	do_lio(&c__9, &c__1, "error - nscale", (ftnlen)14);
	do_lio(&c__3, &c__1, (char *)&(*nscale), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*nprot < 0 || *nprot > *nsample) {
	s_wsle(&io___509);
	do_lio(&c__9, &c__1, "error - nprot", (ftnlen)13);
	do_lio(&c__3, &c__1, (char *)&(*nprot), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*missfill < 0 || *missfill > 2) {
	s_wsle(&io___510);
	do_lio(&c__9, &c__1, "error missfill", (ftnlen)14);
	do_lio(&c__3, &c__1, (char *)&(*missfill), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*iviz != 0 && *iviz != 1) {
	s_wsle(&io___511);
	do_lio(&c__9, &c__1, "error iviz", (ftnlen)10);
	do_lio(&c__3, &c__1, (char *)&(*iviz), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*iviz == 1 && *impn != 1) {
	s_wsle(&io___512);
	do_lio(&c__9, &c__1, "error iviz=1 and impn=", (ftnlen)22);
	do_lio(&c__3, &c__1, (char *)&(*impn), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*iviz == 1 && *imp != 1) {
	s_wsle(&io___513);
	do_lio(&c__9, &c__1, "error iviz=1 and imp=", (ftnlen)21);
	do_lio(&c__3, &c__1, (char *)&(*imp), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*iviz == 1 && *nprox != 1) {
	s_wsle(&io___514);
	do_lio(&c__9, &c__1, "error iviz=1 and nprox=", (ftnlen)23);
	do_lio(&c__3, &c__1, (char *)&(*nprox), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*iviz == 1 && *nscale != 3) {
	s_wsle(&io___515);
	do_lio(&c__9, &c__1, "error iviz=1 and nscale=", (ftnlen)24);
	do_lio(&c__3, &c__1, (char *)&(*nscale), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*isaverf != 0 && *isaverf != 1) {
	s_wsle(&io___516);
	do_lio(&c__9, &c__1, "error isaverf", (ftnlen)13);
	do_lio(&c__3, &c__1, (char *)&(*isaverf), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*isaverf == 1 && *missfill == 2) {
	s_wsle(&io___517);
	do_lio(&c__9, &c__1, "error - only rough fix can be saved", (ftnlen)
		35);
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*irunrf != 0 && *irunrf != 1) {
	s_wsle(&io___518);
	do_lio(&c__9, &c__1, "error irunrf", (ftnlen)12);
	do_lio(&c__3, &c__1, (char *)&(*irunrf), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*isavepar != 0 && *isavepar != 1) {
	s_wsle(&io___519);
	do_lio(&c__9, &c__1, "error isavepar", (ftnlen)14);
	do_lio(&c__3, &c__1, (char *)&(*isavepar), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*ireadpar != 0 && *ireadpar != 1) {
	s_wsle(&io___520);
	do_lio(&c__9, &c__1, "error ireadpar", (ftnlen)14);
	do_lio(&c__3, &c__1, (char *)&(*ireadpar), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*isavefill != 0 && *isavefill != 1) {
	s_wsle(&io___521);
	do_lio(&c__9, &c__1, "error isavefill", (ftnlen)15);
	do_lio(&c__3, &c__1, (char *)&(*isavefill), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*ireadfill != 0 && *ireadfill != 1) {
	s_wsle(&io___522);
	do_lio(&c__9, &c__1, "error ireadfill", (ftnlen)15);
	do_lio(&c__3, &c__1, (char *)&(*ireadfill), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*isaveprox != 0 && *isaveprox != 1) {
	s_wsle(&io___523);
	do_lio(&c__9, &c__1, "error isaveprox", (ftnlen)15);
	do_lio(&c__3, &c__1, (char *)&(*isaveprox), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*ireadprox != 0 && *ireadprox != 1) {
	s_wsle(&io___524);
	do_lio(&c__9, &c__1, "error ireadprox", (ftnlen)15);
	do_lio(&c__3, &c__1, (char *)&(*ireadprox), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*isumout < 0 || *isumout > 1) {
	s_wsle(&io___525);
	do_lio(&c__9, &c__1, "error isumout", (ftnlen)13);
	do_lio(&c__3, &c__1, (char *)&(*isumout), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*idataout < 0 || *idataout > 2) {
	s_wsle(&io___526);
	do_lio(&c__9, &c__1, "error idataout", (ftnlen)14);
	do_lio(&c__3, &c__1, (char *)&(*idataout), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*impfastout < 0 || *impfastout > 1) {
	s_wsle(&io___527);
	do_lio(&c__9, &c__1, "error impfastout", (ftnlen)16);
	do_lio(&c__3, &c__1, (char *)&(*impfastout), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*impout < 0 || *impout > 2) {
	s_wsle(&io___528);
	do_lio(&c__9, &c__1, "error impout", (ftnlen)12);
	do_lio(&c__3, &c__1, (char *)&(*impout), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*interout < 0 || *interout > 2) {
	s_wsle(&io___529);
	do_lio(&c__9, &c__1, "error interout", (ftnlen)14);
	do_lio(&c__3, &c__1, (char *)&(*interout), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*iprotout < 0 || *iprotout > 2) {
	s_wsle(&io___530);
	do_lio(&c__9, &c__1, "error iprotout", (ftnlen)14);
	do_lio(&c__3, &c__1, (char *)&(*iprotout), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*iproxout < 0 || *iproxout > 2) {
	s_wsle(&io___531);
	do_lio(&c__9, &c__1, "error iproxout", (ftnlen)14);
	do_lio(&c__3, &c__1, (char *)&(*iproxout), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*iscaleout < 0 || *iscaleout > 1) {
	s_wsle(&io___532);
	do_lio(&c__9, &c__1, "error iscaleout", (ftnlen)15);
	do_lio(&c__3, &c__1, (char *)&(*iscaleout), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*ioutlierout < 0 || *ioutlierout > 2) {
	s_wsle(&io___533);
	do_lio(&c__9, &c__1, "error ioutlierout", (ftnlen)17);
	do_lio(&c__3, &c__1, (char *)&(*ioutlierout), (ftnlen)sizeof(integer))
		;
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*noutlier > 0 && *nprox == 0) {
	s_wsle(&io___534);
	do_lio(&c__9, &c__1, "error - noutlier>0 and nprox=0", (ftnlen)30);
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*nscale > 0 && *nprox == 0) {
	s_wsle(&io___535);
	do_lio(&c__9, &c__1, "error - nscale>0 and nprox=0", (ftnlen)28);
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*nprot > 0 && *nprox == 0) {
	s_wsle(&io___536);
	do_lio(&c__9, &c__1, "error - nprot>0 and nprox=0", (ftnlen)27);
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*mdim2nd > 0 && *imp == 0) {
	s_wsle(&io___537);
	do_lio(&c__9, &c__1, "error - mdim2nd>0 and imp=0", (ftnlen)27);
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    if (*impn > 0 && *imp == 0) {
	s_wsle(&io___538);
	do_lio(&c__9, &c__1, "error - impn>0 and imp=0", (ftnlen)24);
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    i__1 = *mdim;
    for (m = 1; m <= i__1; ++m) {
	if (cat[m] > *maxcat) {
	    s_wsle(&io___540);
	    do_lio(&c__9, &c__1, "error in cat", (ftnlen)12);
	    do_lio(&c__3, &c__1, (char *)&m, (ftnlen)sizeof(integer));
	    do_lio(&c__3, &c__1, (char *)&cat[m], (ftnlen)sizeof(integer));
	    e_wsle();
	    s_stop("", (ftnlen)0);
	}
    }
    if (*labeltr == 1) {
	i__1 = *nsample;
	for (n = 1; n <= i__1; ++n) {
	    if (cl[n] < 1 || cl[n] > *nclass) {
		s_wsle(&io___542);
		do_lio(&c__9, &c__1, "error in class label", (ftnlen)20);
		do_lio(&c__3, &c__1, (char *)&n, (ftnlen)sizeof(integer));
		do_lio(&c__3, &c__1, (char *)&cl[n], (ftnlen)sizeof(integer));
		e_wsle();
		s_stop("", (ftnlen)0);
	    }
	}
    }
    return 0;
} /* checkin_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int quicksort_(real *v, integer *iperm, integer *ii, integer 
	*jj, integer *kk)
{
    static integer i__, j, k, l, m, t, ij, il[32], iu[32], tt;
    static real vt, vtt;


/* 	puts into iperm the permutation vector which sorts v into */
/* 	increasing order.  only elementest from ii to jj are considered. */
/* 	array iu(k) and array il(k) permit sorting up to 2**(k+1)-1 elements */

/* 	this is a modification of acm algorithm #347 by r. c. singleton, */
/* 	which is a modified hoare quicksort. */


    /* Parameter adjustments */
    --iperm;
    --v;

    /* Function Body */
    m = 1;
    i__ = *ii;
    j = *jj;
L10:
    if (i__ >= j) {
	goto L80;
    }
L20:
    k = i__;
    ij = (j + i__) / 2;
    t = iperm[ij];
    vt = v[ij];
    if (v[i__] <= vt) {
	goto L30;
    }
    iperm[ij] = iperm[i__];
    iperm[i__] = t;
    t = iperm[ij];
    v[ij] = v[i__];
    v[i__] = vt;
    vt = v[ij];
L30:
    l = j;
    if (v[j] >= vt) {
	goto L50;
    }
    iperm[ij] = iperm[j];
    iperm[j] = t;
    t = iperm[ij];
    v[ij] = v[j];
    v[j] = vt;
    vt = v[ij];
    if (v[i__] <= vt) {
	goto L50;
    }
    iperm[ij] = iperm[i__];
    iperm[i__] = t;
    t = iperm[ij];
    v[ij] = v[i__];
    v[i__] = vt;
    vt = v[ij];
    goto L50;
L40:
    iperm[l] = iperm[k];
    iperm[k] = tt;
    v[l] = v[k];
    v[k] = vtt;
L50:
    --l;
    if (v[l] > vt) {
	goto L50;
    }
    tt = iperm[l];
    vtt = v[l];
L60:
    ++k;
    if (v[k] < vt) {
	goto L60;
    }
    if (k <= l) {
	goto L40;
    }
    if (l - i__ <= j - k) {
	goto L70;
    }
    il[m - 1] = i__;
    iu[m - 1] = l;
    i__ = k;
    ++m;
    goto L90;
L70:
    il[m - 1] = k;
    iu[m - 1] = j;
    j = l;
    ++m;
    goto L90;
L80:
    --m;
    if (m == 0) {
	return 0;
    }
    i__ = il[m - 1];
    j = iu[m - 1];
L90:
    if (j - i__ > 10) {
	goto L20;
    }
    if (i__ == *ii) {
	goto L10;
    }
    --i__;
L100:
    ++i__;
    if (i__ == j) {
	goto L80;
    }
    t = iperm[i__ + 1];
    vt = v[i__ + 1];
    if (v[i__] <= vt) {
	goto L100;
    }
    k = i__;
L110:
    iperm[k + 1] = iperm[k];
    v[k + 1] = v[k];
    --k;
    if (vt < v[k]) {
	goto L110;
    }
    iperm[k + 1] = t;
    v[k + 1] = vt;
    goto L100;
} /* quicksort_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int unpack_(integer *l, integer *npack, integer *icat)
{
    /* System generated locals */
    integer i__1;

    /* Builtin functions */
    integer s_wsle(cilist *), do_lio(integer *, integer *, char *, ftnlen), 
	    e_wsle(void);
    /* Subroutine */ int s_stop(char *, ftnlen);

    /* Local variables */
    static integer j, k, n;

    /* Fortran I/O blocks */
    static cilist io___555 = { 0, 6, 0, 0, 0 };



    /* Parameter adjustments */
    --icat;

    /* Function Body */
    if (*l > 32) {
	s_wsle(&io___555);
	do_lio(&c__9, &c__1, "error in unpack,l=", (ftnlen)18);
	do_lio(&c__3, &c__1, (char *)&(*l), (ftnlen)sizeof(integer));
	e_wsle();
	s_stop("", (ftnlen)0);
    }
    for (j = 1; j <= 32; ++j) {
	icat[j] = 0;
    }
    n = *npack;
    icat[1] = n % 2;
    i__1 = *l;
    for (k = 2; k <= i__1; ++k) {
	n = (n - icat[k - 1]) / 2;
	icat[k] = n % 2;
    }
    return 0;
} /* unpack_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int zerv_(integer *ix, integer *m1)
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer n;


    /* Parameter adjustments */
    --ix;

    /* Function Body */
    i__1 = *m1;
    for (n = 1; n <= i__1; ++n) {
	ix[n] = 0;
    }
    return 0;
} /* zerv_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int zervr_(real *rx, integer *m1)
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer n;


    /* Parameter adjustments */
    --rx;

    /* Function Body */
    i__1 = *m1;
    for (n = 1; n <= i__1; ++n) {
	rx[n] = 0.f;
    }
    return 0;
} /* zervr_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int zervd_(doublereal *rx, integer *m1)
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer n;


    /* Parameter adjustments */
    --rx;

    /* Function Body */
    i__1 = *m1;
    for (n = 1; n <= i__1; ++n) {
	rx[n] = 0.;
    }
    return 0;
} /* zervd_ */


/* 	________________________________________________________ */
/* Subroutine */ int zerm_(integer *mx, integer *m1, integer *m2)
{
    /* System generated locals */
    integer mx_dim1, mx_offset, i__1, i__2;

    /* Local variables */
    static integer i__, j;


    /* Parameter adjustments */
    mx_dim1 = *m1;
    mx_offset = 1 + mx_dim1;
    mx -= mx_offset;

    /* Function Body */
    i__1 = *m2;
    for (j = 1; j <= i__1; ++j) {
	i__2 = *m1;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    mx[i__ + j * mx_dim1] = 0;
	}
    }
    return 0;
} /* zerm_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int zermr_(real *rx, integer *m1, integer *m2)
{
    /* System generated locals */
    integer rx_dim1, rx_offset, i__1, i__2;

    /* Local variables */
    static integer i__, j;


    /* Parameter adjustments */
    rx_dim1 = *m1;
    rx_offset = 1 + rx_dim1;
    rx -= rx_offset;

    /* Function Body */
    i__1 = *m2;
    for (j = 1; j <= i__1; ++j) {
	i__2 = *m1;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    rx[i__ + j * rx_dim1] = 0.f;
	}
    }
    return 0;
} /* zermr_ */


/* 	------------------------------------------------------- */
/* Subroutine */ int zermd_(doublereal *rx, integer *m1, integer *m2)
{
    /* System generated locals */
    integer rx_dim1, rx_offset, i__1, i__2;

    /* Local variables */
    static integer i__, j;


    /* Parameter adjustments */
    rx_dim1 = *m1;
    rx_offset = 1 + rx_dim1;
    rx -= rx_offset;

    /* Function Body */
    i__1 = *m2;
    for (j = 1; j <= i__1; ++j) {
	i__2 = *m1;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    rx[i__ + j * rx_dim1] = 0.;
	}
    }
    return 0;
} /* zermd_ */


/* 	------------------------------------------------------- */
doublereal erfcc_(real *x)
{
    /* System generated locals */
    real ret_val;

    /* Builtin functions */
    double exp(doublereal);

    /* Local variables */
    static real t, z__;


    z__ = dabs(*x) / 1.41421356f;
    t = 1.f / (z__ * .5f + 1.f);
    ret_val = t * exp(-z__ * z__ - 1.26551223f + t * (t * (t * (t * (t * (t * 
	    (t * (t * (t * .17087277f - .82215223f) + 1.48851587f) - 
	    1.13520398f) + .27886807f) - .18628806f) + .09678418f) + 
	    .37409196f) + 1.00002368f));
    ret_val /= 2;
    if (*x < 0.f) {
	ret_val = 2.f - ret_val;
    }
    return ret_val;
} /* erfcc_ */


/* 	------------------------------------------------------- */
integer irbit_(integer *iseed)
{
    /* System generated locals */
    integer ret_val;


    if ((*iseed & 131072) != 0) {
	*iseed = (*iseed ^ 19) << 1 | 1;
	ret_val = 1;
    } else {
	*iseed = *iseed << 1 & -2;
	ret_val = 0;
    }
    return ret_val;
} /* irbit_ */


/* 	------------------------------------------------------- */
doublereal randomu_(void)
{
    /* System generated locals */
    real ret_val;

    /* Local variables */
    static doublereal u;
    extern doublereal grnd_(void);


    u = grnd_();
    ret_val = (real) u;
    return ret_val;
} /* randomu_ */


/* 	------------------------------------------------------- */
doublereal rnorm_(integer *i__)
{
    /* System generated locals */
    real ret_val;

    /* Builtin functions */
    double log(doublereal), sqrt(doublereal), cos(doublereal);

    /* Local variables */
    extern doublereal randomu_(void);


    ret_val = sqrt(log(randomu_()) * -2) * cos(randomu_() * 6.283185f);
    return ret_val;
} /* rnorm_ */


/* 	------------------------------------------------------- */
doublereal dotd_(doublereal *u, doublereal *v, integer *ns)
{
    /* System generated locals */
    integer i__1;
    doublereal ret_val;

    /* Local variables */
    static integer n;


/* 	computes the inner product */
/* 	input: */
/* 	local: */
    /* Parameter adjustments */
    --v;
    --u;

    /* Function Body */
    ret_val = 0.;
    i__1 = *ns;
    for (n = 1; n <= i__1; ++n) {
	ret_val += u[n] * v[n];
    }
    return ret_val;
} /* dotd_ */

/* ************************************************************************** */
/* A C-program for MT19937: Real number version */
/*   genrand() generates one pseudorandom real number (double) */
/* which is uniformly distributed on [0,1]-interval,for each */
/* call. sgenrand(seed) set initial values to the working area */
/* of 624 words. Before genrand(),sgenrand(seed) must be */
/* called once. (seed is any 32-bit integer except for 0). */
/* Integer generator is obtained by modifying two lines. */
/*   Coded by Takuji Nishimura,considering the suggestions by */
/* Topher Cooper and Marc Rieffel in July-Aug. 1997. */

/* This library is free software; you can redistribute it and/or */
/* modify it under the terms of the GNU Library General Public */
/* License as published by the Free Software Foundation; either */
/* version 2 of the License,or (at your option) any later */
/* version. */
/* This library is distributed in the hope that it will be useful, */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. */
/* See the GNU Library General Public License for more details. */
/* You should have received a copy of the GNU Library General */
/* Public License along with this library; if not,write to the */
/* Free Foundation,Inc.,59 Temple Place,Suite 330,Boston,MA */
/* 02111-1307  USA */

/* Copyright (C) 1997 Makoto Matsumoto and Takuji Nishimura. */
/* When you use this,send an email to: matumoto@math.keio.ac.jp */
/* with an appropriate reference to your work. */

/* Fortran translation by Hiroshi Takano.  Jan. 13,1999. */
/* *********************************************************************** */
/* This program uses the following non-standard intrinsics. */
/*   ishft(i,n): If n>0,shifts bits in i by n positions to left. */
/* 		   If n<0,shifts bits in i by n positions to right. */
/*   iand (i,j): Performs logical AND on corresponding bits of i and j. */
/*   ior  (i,j): Performs inclusive OR on corresponding bits of i and j. */
/*   ieor (i,j): Performs exclusive OR on corresponding bits of i and j. */

/* *********************************************************************** */
/* Subroutine */ int sgrnd_(integer *seed)
{


/* 	Period parameters */

/* 			   the array for the state vector */

/* 	setting initial seeds to mt[n] using */
/* 	the generator Line 25 of Table 1 in */
/* 	[KNUTH 1981,The Art of Computer Programming */
/* 	   Vol. 2 (2nd Ed.),pp102] */

    block_1.mt[0] = *seed & -1;
    for (block_1.mti = 1; block_1.mti <= 623; ++block_1.mti) {
	block_1.mt[block_1.mti] = block_1.mt[block_1.mti - 1] * 69069 & -1;
/* L1000: */
    }

    return 0;
} /* sgrnd_ */

/* *********************************************************************** */
doublereal grnd_(void)
{
    /* Initialized data */

    static integer mag01[2] = { 0,-1727483681 };

    /* System generated locals */
    doublereal ret_val;

    /* Builtin functions */
    integer lbit_shift(integer, integer);

    /* Local variables */
    static integer y, kk;
    extern /* Subroutine */ int sgrnd_(integer *);



/* 	Period parameters */
/* 						constant vector a */
/* 						most significant w-r bits */
/* 						least significant r bits */
/* Tempering parameters */

/* 			   the array for the state vector */
/* 	data   mti/n1/ */
/* 			   mti==n+1 means mt[n] is not initialized */

/* 				mag01(x)=x * mata for x=0,1 */


    if (block_1.mti >= 624) {
/* 			     generate n words at one time */
	if (block_1.mti == 625) {
/* 				    if sgrnd() has not been called, */
	    sgrnd_(&c__4357);
/* 					a default initial seed is used */
	}

	for (kk = 0; kk <= 226; ++kk) {
	    y = block_1.mt[kk] & -2147483648 | block_1.mt[kk + 1] & 
		    2147483647;
	    block_1.mt[kk] = block_1.mt[kk + 397] ^ lbit_shift(y, (ftnlen)-1) 
		    ^ mag01[y & 1];
/* L1000: */
	}
	for (kk = 227; kk <= 622; ++kk) {
	    y = block_1.mt[kk] & -2147483648 | block_1.mt[kk + 1] & 
		    2147483647;
	    block_1.mt[kk] = block_1.mt[kk - 227] ^ lbit_shift(y, (ftnlen)-1) 
		    ^ mag01[y & 1];
/* L1100: */
	}
	y = block_1.mt[623] & -2147483648 | block_1.mt[0] & 2147483647;
	block_1.mt[623] = block_1.mt[396] ^ lbit_shift(y, (ftnlen)-1) ^ mag01[
		y & 1];
	block_1.mti = 0;
    }

    y = block_1.mt[block_1.mti];
    ++block_1.mti;
    y ^= lbit_shift(y, (ftnlen)-11);
    y ^= y << 7 & -1658038656;
    y ^= y << 15 & -272236544;
    y ^= lbit_shift(y, (ftnlen)-18);

    if (y < 0) {
	ret_val = ((doublereal) y + 4294967296.) / 4294967295.;
    } else {
	ret_val = (doublereal) y / 4294967295.;
    }

    return ret_val;
} /* grnd_ */

/* Main program alias */ int rf5new_ () { MAIN__ (); return 0; }
