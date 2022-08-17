#include "ATM.h"


 
void writetofile(PERSON p[] , FILE* fp)
{
	fprintf(fp, "%10d ",p[0].PersonID );
	fprintf(fp, "%10d ",p[0].Password );
	fprintf(fp, " %6d\n", p[0].money);
}
