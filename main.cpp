//
//  main.cpp
//  pointer
//
//  Created by 20141105054 on 15/12/2.
//  Copyright © 2015年 宋志远. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int a,*p;
    a=100;
    p=&a;
    printf("a=%x,&a=%x,&p=%x,p=%x,*p=%x",a,&a,&p,p,*p);
    
    return 0;
}
