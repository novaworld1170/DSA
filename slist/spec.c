#include<assert.h>
#include "slist.h"
#include "sslist.c"
#include<stdio.h>

void test_slist()
{
    int look;
    List *list=slist_new();
    assert(list->length==0);

    list=slist_add_head(list,10);
    list=slist_add_head(list,20); /*3rd del*/
    list=slist_add_head(list,30); /*2nd del*/
    list=slist_add_head(list,40); /*1st del*/

    assert(list->length==4);

    list=slist_add_tail(list,50);
    list=slist_add_tail(list,60);
    list=slist_add_tail(list,70);
    list=slist_add_tail(list,80); 

    assert(list->length==8);


    list=slist_delete_head(list);
    list=slist_delete_head(list);
    list=slist_delete_head(list);
  


    assert(list->length==5);

    list=slist_delete_tail(list);
    list=slist_delete_tail(list);
    list=slist_delete_tail(list); 
    

    assert(list->length==2);

    look=slist_lookup(list,80);
    assert(look==1);

/*
    list=slist_add_tail(list,30);

    assert(list->length==3);


    list=slist_delete_tail(list);

    assert(list->length==2);



    list=slist_add_head(list,20);
    list=slist_add_head(list,30);
    list=slist_add_head(list,40);


    list=slist_add_on_datakey(list,40,20);

    assert(list->length==6);

    list=slist_delete_on_data(list,20);

    assert(list->length==5);



    look=slist_lookup(list,20);

    assert(look==1);
//printf("%d %p %p %d",list->length,list->head,list->tail,look);
    assert(slist_length(list)==4);

   list=slist_free(list);
 assert(list->head==NULL && list->tail==NULL);

 */
}

int main()

 {
    test_slist();
    printf("\n executed successfully\n");
    return 0;
 }
