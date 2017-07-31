/*************************************************************************
	> File Name: 2.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月05日 星期一 23时53分21秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stud_node {
     int    num;
     char   name[20];
     int    score;
     struct stud_node *next;
};

struct stud_node *createlist();
struct stud_node *deletelist( struct stud_node *head, int min_score );

int main()
{
    int min_score;
    struct stud_node *p, *head = NULL;

    head = createlist();
    scanf("%d", &min_score);
    head = deletelist(head, min_score);
    for ( p = head; p != NULL; p = p->next )
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}

struct stud_node *createlist()
{
    int icount=0;
    struct stud_node *pnew,*pend,*head=NULL;
    pnew=pend=(struct stud_node*)malloc(sizeof(struct stud_node));
    scanf("%d",&pnew->num);
    while(pnew->num!=0)
    {
        scanf("%s%d",pnew->name,&pnew->score);
        icount++;
        if(icount==1)
        {
            head=pnew;
            pnew->next=NULL;
            pend=pnew;
        }
        else
        {
            pend->next=pnew;
            pnew->next=NULL;
            pend=pnew;
        }
        pnew=(struct stud_node*)malloc(sizeof(struct stud_node));     
        scanf("%d",&pnew->num);
    }
    free(pnew);
    return head;
}

struct stud_node *deletelist( struct stud_node *head, int min_score )
{ 
    struct stud_node *p1,*p2,*temp;
    p1=p2=head;
    if(head!=NULL)
    {
        if(head->score<min_score)
        {
            head=head->next;
        }//删除第一个结点
        while(p1->next!=NULL)
        {
            while(p1->score>=min_score&&p1->next!=NULL)
            {
                p2=p1;
                p1=p1->next;
            }
            if(p1->next!=NULL)
            {
                if(p1->score<min_score)
                {
                    p2->next=p1->next;
                    temp=p1;
                    free(temp);
                    p1=p2->next;
                }
            }
        }//删除中间结点
        if(p1->score<min_score)
            {
                free(p1);
                p2->next=NULL;
            }//删除最后一个结点
    }
    return head;
}

