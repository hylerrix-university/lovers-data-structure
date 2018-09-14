/*合并两个线性表A,B
A并B等于A
*/
void union(List *La, ListLb) {
    int La_len,Lb_len.i;
    ElemType e;
    La_len = ListLength (*La);
    Lb_len = ListLength (Lb);
    for(i = 1; i<=Lb_len;i++) {
        GetElem(Lb,i,&e);//将B里面与A不同的元素添加入A
        if(!LocateElem(*La,e)) {
            ListInsert(La,++La_len,e);
        }
    }
}