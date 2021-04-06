//om sri sai ram
#include <allegro.h>
#include<time.h>
#include<alfont.h>
#include<stdlib.h>

BITMAP *g,*r,*w,*b,*y,*yy,*gc1,*rc1,*bc1,*yc1,*g1,*y1,*b1,*w1,*r1,*home,*d1,*d2,*d3,*d4,*d5,*d6,*d66,*dice,*t1,*t2,*t3,*t4,*comp,*play1,*play2,*play3,*play4,*comp1,*play11,*play22,*play33,*play44,*options,*options1,*options2,*back,*down,*intro,*win;
PALETTE q;
ALFONT_FONT *f1;

int ::m=0;

//BITMAP *temp=create_bitmap(90,90);
int option=1,dc=0,ma=0,aa=0,option1=1,ca=0,da=0,ea=0;
void init();

void deinit();
/////////////////////////////random function////////////////////////////////////////
time_t t;
unsigned int seedval;
//seedval = (unsigned)time(&t);
//srand(seedval);

int random(int r1,int r2)
      {
               
            if(r2<=r1);
            else
               {
                    int r3;
                    r3=r2-r1;
                    int a=(rand()%r3)+r1;
                    return a;                       
                           
                       
                       
               }              
             
       }
////////////////////////////////delay function//////////////////////////
void delay()
{
    for (int i=0;i<6000;i++)
    for(int j=0;j<10000;j++){}    
     
     
}
///////////////////////////////////////////////////////////////////////

////////////////////////////////delay1 function//////////////////////////
void delay1()
{
    for (int i=0;i<100000;i++)
    for(int j=0;j<10000;j++){}    
     
     
}
///////////////////////////////////////////////////////////////////////

           
void checkprint(int u,int v);           
////////////////////////////////////function blit back////////////////////////////////
void blitback(int i,int j)
              {
         
         
                  int grid[17][17]={
    
                     6,6,6,6,6,6,6,5,5,5,7,7,7,7,7,7,7,
                     6,0,0,0,0,0,6,5,2,2,7,0,0,0,0,0,7,
                     6,0,1,0,1,0,6,5,2,5,7,0,2,0,2,0,7,
                     6,0,0,0,0,0,6,5,2,5,7,0,0,0,0,0,7,
                     6,0,1,0,1,0,6,5,2,5,7,0,2,0,2,0,7,
                     6,0,0,0,0,0,6,5,2,5,7,0,0,0,0,0,7,    
                     6,6,6,6,6,6,6,5,2,5,7,7,7,7,7,7,7,
                     5,1,5,5,5,5,5,11,12,12,5,5,5,5,5,5,5,
                     5,1,1,1,1,1,1,12,12,12,4,4,4,4,4,4,5,
                     5,5,5,5,5,5,5,12,12,12,5,5,5,5,5,4,5,
                     8,8,8,8,8,8,8,5,3,5,9,9,9,9,9,9,9,
                     8,0,0,0,0,0,8,5,3,5,9,0,0,0,0,0,9,
                     8,0,3,0,3,0,8,5,3,5,9,0,4,0,4,0,9,
                     8,0,0,0,0,0,8,5,3,5,9,0,0,0,0,0,9,
                     8,0,3,0,3,0,8,5,3,5,9,0,4,0,4,0,9,
                     8,0,0,0,0,0,8,3,3,5,9,0,0,0,0,0,9,
                     8,8,8,8,8,8,8,5,5,5,9,9,9,9,9,9,9
    
    
                         };
                         
                  if(i==17)
                     i=16;         
                  if(grid[j][i]==5)
                     blit(w,screen,0,0,i*40,j*40,40,40);
          
                  if(grid[j][i]==2)
                     blit(r,screen,0,0,i*40,j*40,40,40);   
         
                  if(grid[j][i]==4)
                     blit(g,screen,0,0,i*40,j*40,40,40);
         
                  if(grid[j][i]==1)
                     blit(b,screen,0,0,i*40,j*40,40,40);
         
                  if(grid[j][i]==3)
                     blit(yy,screen,0,0,i*40,j*40,40,40);
                     
                  if(grid[j][i]==11)
                    { blit(home,screen,0,0,7*40,7*40,120,120);
                      checkprint(8,7);
                      checkprint(7,8);
                      checkprint(8,9);
                      checkprint(9,8);
                    }
                  if(grid[j][i]==12)
                     {blit(home,screen,0,0,7*40,7*40,120,120);
                      checkprint(8,7);
                      checkprint(7,8);
                      checkprint(8,9);
                      checkprint(9,8);      
                     }
                  if(i==0&&j==10)
                     blitback(1,9);
                     
                  if(i==-1&&j==7)
                     blitback(0,8);   
                       
                  if(i==7&&j==7)
                     blitback(6,7);              
         
                  if(i==6&&j==0)
                     blitback(7,1);
                     
                  if(i==9&&j==-1)
                     blitback(8,0);
                     
                  if(i==9&&j==7)
                     blitback(9,6);      
                     
                  if(i==16&&j==6)
                     blitback(15,7);   
                     
                  if(i==16&&j==8)
                     blitback(16,7);   
                     
                  if(i==9&&j==9)
                     blitback(10,9);   
                     
                  if(i==10&&j==16)
                     blitback(9,15);   
                     
                  if(i==7&&j==17)
                     blitback(8,16);
                           
                  if(i==7&&j==9)
                     blitback(7,10);
                     
                  if(i==1&&j==7)
                     blitback(0,8);
                   
                  if(i==16&&j==9)
                     blitback(16,8);
                     
                  if(i==8&&j==17)
                     blitback(9,16);
                     
                  if(i==8&&j==-1)
                     blitback(7,0);
                  
                  if(i==-1&&j==8)
                     blitback(0,9);         
                     
                        
         
           }
///////////////////////////////////function ends///////////////////////////////////

//////////class gcoin///////////////////
class gcoin
      {   
          int x,y,c[13],reach,check,n,m,t,u,v;
          public:
        
          ///////////////////constructor/////////////////////
          gcoin()
          {
               for(int i=0;i<13;i++)
               c[i]=1;
               t=0;              
               reach=0;    
                             
                 
                 
                 
          }
           ////////////////////////////////////////////////////// 
           void movement(int a); 
           
           void reset(int d)
           { x=9;y=15;
             for(int i=0;i<13;i++)
               c[i]=1;
             t=0;
              switch(d)
              {
                 case 0: m=12;     
                         n=12;
                         break;
                 case 1: m=14;     
                         n=12;
                         break;
                 case 2: m=12;     
                         n=14;
                         break;
                 case 3: m=14;     
                         n=14;
                         break;
              } 
              masked_blit(gc1,screen,0,0,m*40,n*40,gc1->w,gc1->h);
               
           }
           int n1()
            {return n;}
           int m1()
            {return m;}
           int t1()
            {return t;}
           int u1()
            {return u;}
           int v1()
            {return v;}
                    
      }gcoin[4];
        
      


       
////////////////////////////////////////////////////////////////////////////////class ycoin//////////////////
class ycoin
      {
          int x,y,c[13],reach,check,n,m,t,u,v;
           public:
                  
          ///////////////////constructor/////////////////////
          ycoin()
          {
               for(int i=0;i<13;i++)
               c[i]=1;
               t=0;                   
               reach=0;  
                 
                 
                 
          }
          
          //////////////////////////////////////////////////////
           
           void movement(int a); 
           void reset(int d)
           { x=15;y=7;t=0;
             for(int i=0;i<13;i++)
               c[i]=1;
             
             switch(d)
              {
                 case 0: m=2;     
                         n=12;
                         break;
                 case 1: m=4;     
                         n=12;
                         break;
                 case 2: m=2;     
                         n=14;
                         break;
                 case 3: m=4;     
                         n=14;
                         break;
              }
              masked_blit(yc1,screen,0,0,m*40,n*40,gc1->w,gc1->h);
           }
           
           
           int n1()
            {return n;}
           int m1()
            {return m;}
           int t1()
            {return t;}
           int u1()
            {return u;}
           int v1()
            {return v;}           
     
      }ycoin[4];
      


                       
      
//////////////////class rcoin/////////////////
class rcoin
      {
           
           int x,y,c[13],check,reach,n,m,t,u,v;
           
           public:
          ///////////////////constructor/////////////////////
          rcoin()
          {
               for(int i=0;i<13;i++)
               c[i]=1;
               t=0;
               reach=0;                   
                 
                 
                 
                 
          }  
          //////////////////////////////////////////// 
         void movement(int a);   
         void reset(int d)
         {x=1;y=9;t=0;
         for(int i=0;i<13;i++)
               c[i]=1;
               
               switch(d)
              {
                 case 0: m=12;     
                         n=2;
                         break;
                 case 1: m=14;     
                         n=2;
                         break;
                 case 2: m=12;     
                         n=4;
                         break;
                 case 3: m=14;     
                         n=4;
                         break;
              }
              masked_blit(rc1,screen,0,0,m*40,n*40,gc1->w,gc1->h);
           }
           
           
           int n1()
            {return n;}
           int m1()
            {return m;}
           int t1()
            {return t;}
           int u1()
            {return u;}
           int v1()
            {return v;}
         
           
      }rcoin[4];
      





//////////////////////////class bcoin/////////////////////////////
class bcoin
      {
           int x,y,c[13],check,reach,n,m,t,u,v;
           
           public: 
          ///////////////////constructor/////////////////////
          bcoin()
          {
               for(int i=0;i<13;i++)
               c[i]=1;
               t=0;                   
               reach=0;  
                 
                 
                 
          }
           /////////////////////////////
           void movement(int a);    
                 
           void reset(int d)
           { x=7;y=1;t=0;
             for(int i=0;i<13;i++)
               c[i]=1;
               
             switch(d)
              {
                 case 0: m=2;     
                         n=2;
                         break;
                 case 1: m=4;     
                         n=2;
                         break;
                 case 2: m=2;     
                         n=4;
                         break;
                 case 3: m=4;     
                         n=4;
                         break;
              }
              masked_blit(bc1,screen,0,0,m*40,n*40,gc1->w,gc1->h);
           }
           
           
           int n1()
            {return n;}
           int m1()
            {return m;}
           int t1()
            {return t;}
           int u1()
            {return u;}
           int v1()
            {return v;}
           
           
      }bcoin[4];
      

//////////////////////////////////class allblue/////////////////////////////////
class allblue
      {
           public:
           allblue()
              {
                 for(int i=0;i<4;i++)
                     bcoin[i].reset(i);     
              }                     
              
           void movecoin(int b,int a)
             {   int c,h;
                 while(b==1)
                      {    int d=0;
                           int g=0;
                            
                            for(int i=0;i<4&&b==1;i++)
                            {    if((bcoin[i].m1()==1&&bcoin[i].n1()==7))     
                                   masked_blit(bc1,screen,0,0,1*40,7*40,gc1->w,gc1->h); 
                                   
                                 if(bcoin[i].t1()==0)
                                    if(a!=1&&a!=6)
                                       d=d+1;
                                       
                                       
                                       
                                 if((a>7-(bcoin[i].m1())&&bcoin[i].n1()==8)&&bcoin[i].m1()<8)
                                    {
                                       g=g+1;
                                    }
                                 if(g+d==4)
                                    {b=0;delay1();}     
                                   
                                 if(mouse_x>bcoin[i].m1()*40 && mouse_y>bcoin[i].n1()*40 && mouse_x<bcoin[i].m1()*40+(40) && mouse_y<bcoin[i].n1()*40+(40)&&mouse_b & 1 && (bcoin[i].t1()==1||a==1||a==6)) 
                                 {
                                     c=bcoin[i].m1();
                                     h=bcoin[i].n1(); 
                                     bcoin[i].movement(a);
                                     if(bcoin[i].m1()!=c||bcoin[i].n1()!=h)
                                        b=0;
                                 }
                                 
                                 
                                    
                            }
                                        
                      }
                 check();         
             }   
              
       void check()
       {     int x;
             for(int i=0;i<4;i++)
                    {
                         for(int j=0;j<4;j++)
                         {
                                 if(i!=j&&bcoin[i].m1()==bcoin[j].m1()&&bcoin[i].n1()==bcoin[j].n1())
                                 {  
                                    for (int i=0;i<4;i++)
                                      blitback(bcoin[i].m1(),bcoin[i].n1());
                                    for (int i=0;i<4;i++)  
                                      {
                                         switch(i)
                                         { case 0: x=0;break;
                                           case 1: x=4;break;
                                           case 2: x=8;break;
                                           case 3: x=12;break;
                                         }    
                                         masked_blit(bc1,screen,0,0,(bcoin[i].m1()*40)+x,(bcoin[i].n1()*40),gc1->w,gc1->h);                          
                                      }
                                                     
                                                                                   
                                 }
                                                                  
                                 if(bcoin[i].m1()==rcoin[j].m1()&&bcoin[i].n1()==rcoin[j].n1()) 
                                 {  blitback(rcoin[j].m1(),rcoin[j].n1());
                                    masked_blit(bc1,screen,0,0,bcoin[i].m1()*40,bcoin[i].n1()*40,bc1->w,bc1->h);
                                    rcoin[j].reset(j);        
                                    masked_blit(rc1,screen,0,0,rcoin[j].m1()*40,rcoin[j].n1()*40,gc1->w,gc1->h);         
                                  } 
                                  
                                  if(bcoin[i].m1()==ycoin[j].m1()&&bcoin[i].n1()==ycoin[j].n1()) 
                                 {  blitback(ycoin[j].m1(),ycoin[j].n1());
                                    masked_blit(bc1,screen,0,0,bcoin[i].m1()*40,bcoin[i].n1()*40,bc1->w,bc1->h);
                                    ycoin[j].reset(j);        
                                    masked_blit(yc1,screen,0,0,ycoin[j].m1()*40,ycoin[j].n1()*40,gc1->w,gc1->h);         
                                  } 
                                   
                                  if(bcoin[i].m1()==gcoin[j].m1()&&bcoin[i].n1()==gcoin[j].n1()) 
                                 {  blitback(gcoin[j].m1(),gcoin[j].n1());
                                    masked_blit(bc1,screen,0,0,bcoin[i].m1()*40,bcoin[i].n1()*40,bc1->w,bc1->h);
                                    gcoin[j].reset(j);        
                                    masked_blit(gc1,screen,0,0,gcoin[j].m1()*40,gcoin[j].n1()*40,gc1->w,gc1->h);         
                                  } 
                                          
                                  
                                 
                                 
                         }
                         
                    }
              
       }       
              
      };
/////////////////////////////////////////////////////class ends//////////////////////////////////////////////////////////////////// 



//////////////////////////////////class allgreen/////////////////////////////////
class allgreen
      {
           public:
           allgreen()
              {
                for(int i=0;i<4;i++)
                     gcoin[i].reset(i);    
                            
              }                     
              
           void movecoin(int b,int a)
             {   int c,h;
                 while(b==1)
                      {   int d=0;
                          int g=0;
                          for(int i=0;i<4&&b==1;i++)
                            {    if((gcoin[i].m1()==15&&gcoin[i].n1()==9))     
                                   masked_blit(gc1,screen,0,0,15*40,9*40,gc1->w,gc1->h); 
                                   
                                 if(gcoin[i].t1()==0)
                                    if(a!=1&&a!=6)
                                       d=d+1;
                                       
                                    
                                 if(a>(gcoin[i].m1()-9)&&gcoin[i].n1()==8&&gcoin[i].m1()>9)
                                    {  
                                       g=g+1;
                                    }
                                   
                                 if(g+d==4)
                                    {b=0;delay1();}  
                                    
                                 
                                 if(mouse_x>gcoin[i].m1()*40 && mouse_y>gcoin[i].n1()*40 && mouse_x<gcoin[i].m1()*40+(40) && mouse_y<gcoin[i].n1()*40+(40)&&mouse_b & 1 && (gcoin[i].t1()==1||a==1||a==6)) 
                                 {   c=gcoin[i].m1();
                                     h=gcoin[i].n1(); 
                                     gcoin[i].movement(a);
                                     if(gcoin[i].m1()!=c||gcoin[i].n1()!=h)
                                        b=0;
                                     
                                        
                                 }
                                 
                                    
                                    
                            }
                                      
                      }
                check();             
             }   
          /////////////////////////////function ends/////////////////////////////////////
      void check()
       {    int x;
            for(int i=0;i<4;i++)
                    {
                         for(int j=0;j<4;j++)
                         {
                                 if(i!=j&&gcoin[i].m1()==gcoin[j].m1()&&gcoin[i].n1()==gcoin[j].n1() )
                                 {  
                                    
                                    for (int i=0;i<4;i++)
                                      blitback(gcoin[i].m1(),gcoin[i].n1());
                                    for (int i=0;i<4;i++)  
                                      {
                                         switch(i)
                                         { case 0: x=0;break;
                                           case 1: x=4;break;
                                           case 2: x=8;break;
                                           case 3: x=12;break;
                                         }    
                                         masked_blit(gc1,screen,0,0,(gcoin[i].m1()*40)+x,(gcoin[i].n1()*40),gc1->w,gc1->h);                          
                                      }                                            
                                 }
                                 
                                 if(gcoin[i].m1()==rcoin[j].m1()&&gcoin[i].n1()==rcoin[j].n1()) 
                                 {  blitback(rcoin[j].m1(),rcoin[j].n1());
                                    masked_blit(gc1,screen,0,0,gcoin[i].m1()*40,gcoin[i].n1()*40,bc1->w,bc1->h);
                                    rcoin[j].reset(j);        
                                    masked_blit(rc1,screen,0,0,rcoin[j].m1()*40,rcoin[j].n1()*40,gc1->w,gc1->h);         
                                  }
                                  
                                 if(gcoin[i].m1()==ycoin[j].m1()&&gcoin[i].n1()==ycoin[j].n1()) 
                                 {  blitback(ycoin[j].m1(),ycoin[j].n1());
                                    masked_blit(gc1,screen,0,0,gcoin[i].m1()*40,gcoin[i].n1()*40,bc1->w,bc1->h);
                                    ycoin[j].reset(j);        
                                    masked_blit(yc1,screen,0,0,ycoin[j].m1()*40,ycoin[j].n1()*40,gc1->w,gc1->h);         
                                  } 
                                  
                                  if(gcoin[i].m1()==bcoin[j].m1()&&gcoin[i].n1()==bcoin[j].n1()) 
                                 {  blitback(bcoin[j].m1(),bcoin[j].n1());
                                    masked_blit(gc1,screen,0,0,gcoin[i].m1()*40,gcoin[i].n1()*40,bc1->w,bc1->h);
                                    bcoin[j].reset(j);        
                                    masked_blit(bc1,screen,0,0,bcoin[j].m1()*40,bcoin[j].n1()*40,gc1->w,gc1->h);         
                                  }   
                                 
                                 
                         }
                         
                    }
              
       }                         
              
      };
/////////////////////////////////////////////////////class ends/////////////////////////////////     



//////////////////////////////////class allred/////////////////////////////////
class allred
      {
           public:
           allred()
              {
                  for(int i=0;i<4;i++)
                     rcoin[i].reset(i);
                     
                     
              }                     
              
           void movecoin(int b,int a)
             {   int c,h;
                 while(b==1)
                      {     int d=0;
                            int g=0;
                            for(int i=0;i<4&&b==1;i++)
                            {    if((rcoin[i].m1()==9&&rcoin[i].n1()==1))     
                                   masked_blit(rc1,screen,0,0,9*40,1*40,gc1->w,gc1->h);
                                   
                                 if(rcoin[i].t1()==0)
                                    if(a!=1&&a!=6)
                                       d=d+1;
                                       
                                 if((a>7-rcoin[i].n1()&&rcoin[i].m1()==8)&&rcoin[i].n1()<8)  
                                    g=g+1;
                                    
                                 if(g+d==4)
                                    {b=0;delay1();}
                                    
                                 if(mouse_x>rcoin[i].m1()*40 && mouse_y>rcoin[i].n1()*40 && mouse_x<rcoin[i].m1()*40+(40) && mouse_y<rcoin[i].n1()*40+(40)&&mouse_b & 1 && (rcoin[i].t1()==1||a==1||a==6)) 
                                 {   
                                     c=rcoin[i].m1();
                                     h=rcoin[i].n1(); 
                                     rcoin[i].movement(a);
                                     if(rcoin[i].m1()!=c||rcoin[i].n1()!=h)
                                        b=0;
                                 }   
                                 
                                    
                                 if((a>8-(rcoin[i].n1()+1)&&rcoin[i].m1()==8)||rcoin[i].t1()==0)  
                                    g=g+1;
                                    if(g==4)
                                       b=0;    
                            }
                            
                            
                                      
                    } 
                    check(); 
           }             
        
        void check()
       {
                int x;
                for(int i=0;i<4;i++)
                    {
                         for(int j=0;j<4;j++)
                         {
                                 if(i!=j&&rcoin[i].m1()==rcoin[j].m1()&&rcoin[i].n1()==rcoin[j].n1() )
                                 {  
                                    for (int i=0;i<4;i++)
                                      blitback(rcoin[i].m1(),rcoin[i].n1());
                                    for (int i=0;i<4;i++)  
                                      {
                                         switch(i)
                                         { case 0: x=0;break;
                                           case 1: x=4;break;
                                           case 2: x=8;break;
                                           case 3: x=12;break;
                                         }    
                                         masked_blit(rc1,screen,0,0,(rcoin[i].m1()*40)+x,(rcoin[i].n1()*40),gc1->w,gc1->h);                          
                                      }
                                                      
                                                                                   
                                 }
                                 
                                 if(rcoin[i].m1()==bcoin[j].m1()&&rcoin[i].n1()==bcoin[j].n1()) 
                                 {  blitback(bcoin[j].m1(),bcoin[j].n1());
                                    masked_blit(rc1,screen,0,0,rcoin[i].m1()*40,rcoin[i].n1()*40,bc1->w,bc1->h);
                                    bcoin[j].reset(j);        
                                    masked_blit(bc1,screen,0,0,bcoin[j].m1()*40,bcoin[j].n1()*40,gc1->w,gc1->h);         
                                  }
                                  
                                  if(rcoin[i].m1()==gcoin[j].m1()&&rcoin[i].n1()==gcoin[j].n1()) 
                                 {  blitback(gcoin[j].m1(),gcoin[j].n1());
                                    masked_blit(rc1,screen,0,0,rcoin[i].m1()*40,rcoin[i].n1()*40,bc1->w,bc1->h);
                                    gcoin[j].reset(j);        
                                    masked_blit(gc1,screen,0,0,gcoin[j].m1()*40,gcoin[j].n1()*40,gc1->w,gc1->h);         
                                  } 
                                  
                                  if(rcoin[i].m1()==ycoin[j].m1()&&rcoin[i].n1()==ycoin[j].n1()) 
                                 {  blitback(ycoin[j].m1(),ycoin[j].n1());
                                    masked_blit(rc1,screen,0,0,rcoin[i].m1()*40,rcoin[i].n1()*40,bc1->w,bc1->h);
                                    ycoin[j].reset(j);        
                                    masked_blit(yc1,screen,0,0,ycoin[j].m1()*40,ycoin[j].n1()*40,gc1->w,gc1->h);         
                                  }  
                                  
                                  
                                 
                                 }  
                         }
                         
        }                            
               
              
              
      };
/////////////////////////////////////////////////////class ends/////////////////////////////////         
      
  


//////////////////////////////////class allyellow/////////////////////////////////
class allyellow
      {
           public:
           allyellow()
              {
                for(int i=0;i<4;i++)
                     ycoin[i].reset(i);
                     
              }                     
              
           void movecoin(int b,int a)
             {   int c,h;
                 while(b==1)
                      {     int d=0;
                            int g=0;    
                            for(int i=0;i<4&&b==1;i++)
                            {    if((ycoin[i].m1()==7&&ycoin[i].n1()==15))     
                                   masked_blit(yc1,screen,0,0,7*40,15*40,gc1->w,gc1->h);
                                   
                                 if(ycoin[i].t1()==0)
                                    if(a!=1&&a!=6)
                                       d=d+1;
                                       
                                 
                                 if((a>(ycoin[i].n1()-9)&&ycoin[i].m1()==8)&&ycoin[i].n1()>8)  
                                    g=g+1;
                                    
                                 if(g+d==4)
                                    {b=0;delay1();} 
                                    
                                 if(mouse_x>ycoin[i].m1()*40 && mouse_y>ycoin[i].n1()*40 && mouse_x<ycoin[i].m1()*40+(40) && mouse_y<ycoin[i].n1()*40+(40)&&mouse_b & 1 && (ycoin[i].t1()==1||a==1||a==6)) 
                                 {
                                    c=ycoin[i].m1();
                                    h=ycoin[i].n1(); 
                                    ycoin[i].movement(a);
                                    if(ycoin[i].m1()!=c||ycoin[i].n1()!=h)
                                        b=0;
                                 }
                                 
                                   
                                    
                            }
                                         
                      }
                  check();        
             }   
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////
       void check()
       {       int x;
               for(int i=0;i<4;i++)
                    {
                         for(int j=0;j<4;j++)
                         {
                                 if(i!=j&&ycoin[i].m1()==ycoin[j].m1()&&ycoin[i].n1()==ycoin[j].n1() )
                                 {  
                                    for (int i=0;i<4;i++)
                                      blitback(ycoin[i].m1(),ycoin[i].n1());
                                    for (int i=0;i<4;i++)  
                                      {
                                         switch(i)
                                         { case 0: x=0;break;
                                           case 1: x=4;break;
                                           case 2: x=8;break;
                                           case 3: x=12;break;
                                         }    
                                         masked_blit(yc1,screen,0,0,(ycoin[i].m1()*40)+x,(ycoin[i].n1()*40),gc1->w,gc1->h);                          
                                      }
                                                      
                                                                                   
                                 }
                                 
                                 if(ycoin[i].m1()==gcoin[j].m1()&&ycoin[i].n1()==gcoin[j].n1()) 
                                 {  blitback(gcoin[j].m1(),gcoin[j].n1());
                                    masked_blit(yc1,screen,0,0,ycoin[i].m1()*40,ycoin[i].n1()*40,bc1->w,bc1->h);
                                    gcoin[j].reset(j);        
                                    masked_blit(gc1,screen,0,0,gcoin[j].m1()*40,gcoin[j].n1()*40,gc1->w,gc1->h);         
                                  }
                                  
                                  if(ycoin[i].m1()==bcoin[j].m1()&&ycoin[i].n1()==bcoin[j].n1()) 
                                 {  blitback(bcoin[j].m1(),bcoin[j].n1());
                                    masked_blit(yc1,screen,0,0,ycoin[i].m1()*40,ycoin[i].n1()*40,bc1->w,bc1->h);
                                    bcoin[j].reset(j);        
                                    masked_blit(bc1,screen,0,0,bcoin[j].m1()*40,bcoin[j].n1()*40,gc1->w,gc1->h);         
                                  } 
                                  
                                  if(ycoin[i].m1()==rcoin[j].m1()&&ycoin[i].n1()==rcoin[j].n1()) 
                                 {  blitback(rcoin[j].m1(),rcoin[j].n1());
                                    masked_blit(yc1,screen,0,0,ycoin[i].m1()*40,ycoin[i].n1()*40,bc1->w,bc1->h);
                                    rcoin[j].reset(j);        
                                    masked_blit(rc1,screen,0,0,rcoin[j].m1()*40,rcoin[j].n1()*40,gc1->w,gc1->h);         
                                  }   
                                 
                                 
                         }
                         
                    }
              
       }
                         
              
      };  
              
              
              
/////////////////////////////////////////////////////class ends///////////////////////////////// 
      

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void checkprint(int u,int v)
{  int x;  
     for(int i=0;i<4;i++)
      {   switch(i)
         { case 0: x=0;break;
           case 1: x=4;break;
           case 2: x=8;break;
           case 3: x=12;break;
         }
         if(u==ycoin[i].n1() && v==ycoin[i].m1())
                  {masked_blit(yc1,screen,0,0,(ycoin[i].m1()*40)+x,ycoin[i].n1()*40,yc1->w,yc1->h);}
                  
         
         if(u==bcoin[i].n1() && v==bcoin[i].m1())
                  {masked_blit(bc1,screen,0,0,(bcoin[i].m1()*40)+x,bcoin[i].n1()*40,yc1->w,yc1->h);}
         
         if(u==gcoin[i].n1() && v==gcoin[i].m1())
                  {masked_blit(gc1,screen,0,0,(gcoin[i].m1()*40)+x,gcoin[i].n1()*40,yc1->w,yc1->h);}         
         
         if(u==rcoin[i].n1() && v==rcoin[i].m1())
                  {masked_blit(rc1,screen,0,0,(rcoin[i].m1()*40)+x,rcoin[i].n1()*40,yc1->w,yc1->h);}
                  
                            
      }
      
      if(u==9&& v==9)
            checkprint(9,10);
      if(u==16&& v==10)
            checkprint(15,9);
      if(u==17&& v==7)
            checkprint(16,8);
      if(u==9&& v==7)
            checkprint(10,7);
      if(u==10&& v==0)
            checkprint(9,1);
      if(u==7&& v==-1)
            checkprint(8,0);
      if(u==7&& v==7)
            checkprint(7,6);
      if(u==0&& v==6)
            checkprint(1,7);
      if(u==-1&& v==9)
            checkprint(0,8);
      if(u==7&& v==9)
            checkprint(6,9);
      if(u==6&& v==16)
            checkprint(7,15);
      if(u==9&& v==17)
            checkprint(8,16);
      if(u==9&& v==17)
            checkprint(8,16);
             
      
}
////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////greencoin movement//////////////////////////////
void gcoin::movement(int a)
             { BITMAP *temp1=create_bitmap(40,40);
               check=0;
               /////////////////while begins///////////////////////////
               while(a>0&&reach==0&&check==0)
                {if((a==1||a==6)&&t==0)
                    {blitback(m,n);y=15;x=9;t=1;c[0]=0;}
                 else if(t==0)
                      break;                
                 while(y==7&&x>=0&&x<=6&&c[7]==0&&a>0)
                    {  blitback(y,x+1);
                       masked_blit(gc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                       delay();
                       n=x;
                       m=y;
                       u=x+1;
                       v=y;
                       checkprint(u,v);
                       x=x-1;
                       a=a-1;
                       if(x==0)
                       {c[7]=1;c[8]=0;y=7;x=0;}
                       
                      
                          
                    }    
                 while(y==7&&x<=16&&x>=10&&c[3]==0&&a>0)
                    {  
                       blitback(y,x+1);
                       masked_blit(gc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                       delay();
                       n=x;
                       m=y;
                       u=x+1;
                       v=y;
                       checkprint(u,v);
                       x=x-1;
                       a=a-1;
                       if(x==9)
                       {c[3]=1;c[4]=0;y=6;x=9;}
                       
                      
                    }        
                 while(y==9&&x>=0&&x<=6&&c[9]==0&&a>0)
                    {  blitback(y,x-1);
                       masked_blit(gc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                       delay();
                       n=x;
                       m=y;
                       u=x-1;
                       v=y;
                       checkprint(u,v);
                       x=x+1;
                       a=a-1;
                       if(x==7)
                       {c[9]=1;c[10]=0;y=10;x=7;}
                       
                        
                    }    
                 while(y==9&&x<=16&&x>=10&&c[1]==0&&a>0)
                    {  
                       blitback(y,x-1);
                       masked_blit(gc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                       delay();
                       n=x;
                       m=y;
                       u=x-1;
                       v=y;
                       checkprint(u,v);
                       x=x+1;
                       a=a-1;
                       if(x==16)
                       {c[1]=1;c[2]=0;y=9;x=16;}
                       
                       
                    }        
                 while(x==7&&y>=0&&y<=6&&c[6]==0&&a>0)
                     {  blitback(y-1,x);
                        masked_blit(gc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        u=x;
                        v=y-1;
                        checkprint(u,v);
                        y=y+1;
                        a=a-1;
                        if(y==7)
                        {c[6]=1;c[7]=0;y=7;x=6;}
                        
                
                     }        
                 while(x==7&&y<=16&&y>=10&&c[10]==0&&a>0)
                     {   blitback(y-1,x);
                         masked_blit(gc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                         delay();
                         n=x;
                         m=y;
                         u=x;
                         v=y-1;
                         checkprint(u,v);
                         y=y+1;
                         a=a-1;
                         if(y==16)
                         {c[10]=1;c[11]=0;y=16;x=7;}
                         
                     
                     }        
                 while(x==9&&y>=0&&y<=6&&c[4]==0&&a>0)
                     {  
                        blitback(y+1,x);
                        masked_blit(gc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        u=x;
                        v=y+1;
                        checkprint(u,v);
                        y=y-1;
                        a=a-1;
                        if(y==0)
                        {c[4]=1;c[5]=0;y=0;x=9;}
                        
                      
                     }        
                 while(x==9&&y<=16&&y>=10&&c[0]==0&&a>0)
                     {  blitback(y+1,x);                  
                        masked_blit(gc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        u=x;
                        v=y+1;
                        checkprint(u,v);
                        y=y-1;
                        a=a-1;
                        if(y==9)
                        {c[0]=1;c[1]=0;y=9;x=10;}
                        
                       
                     }        
                 while(x==0&&y>=7&&y<=9&&c[8]==0&&a>0)
                     {  blitback(y-1,x);
                        masked_blit(gc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        u=x;
                        v=y-1;
                        checkprint(u,v);
                        y=y+1;
                        a=a-1;
                        if(y==9)
                        {c[8]=1;c[9]=0;y=9;x=0;}
                        
                     
                     }       
                 while(x==16&&y>=7&&y<=9&&c[2]==0&&a>0)
                     {  
                        blitback(y+1,x);
                        masked_blit(gc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        u=x;
                        v=y+1;
                        checkprint(u,v);
                        y=y-1;
                        a=a-1;
                        if(y==7)
                        {c[2]=1;c[3]=0;y=7;x=16;}
                        
                      
                     }
                 while(y==0&&x>=7&&x<=9&&c[5]==0&&a>0)
                      {  blitback(y,x+1);
                         masked_blit(gc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                         delay();
                         n=x;
                         m=y;
                         u=x+1;
                         v=y;
                         checkprint(u,v);
                         x=x-1;
                         a=a-1;
                         if(x==7)
                         {c[5]=1;c[6]=0;y=0;x=7;}
                         
                       
                      }            
                 while(y==16&&x>=7&&x<=9&&c[11]==0&&a>0)
                      {  blitback(y,x-1);
                         masked_blit(gc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                         delay();
                         n=x;
                         m=y;
                         u=x-1;
                         v=y;
                         checkprint(u,v);
                         x=x+1;
                         a=a-1;
                         if(x==8)
                         {c[11]=1;c[12]=0;y=16;x=8;}
                         

                      } 
                 if(c[12]==0&&a>(y-8))
                 {check=1;}     
                 while(x==8&&y>=8&&y<=16&&c[12]==0&&a>0&&check==0)
                      {  blitback(y+1,x);
                         masked_blit(gc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                         delay();
                         n=x;
                         m=y;
                         u=x;
                         v=y+1;
                         checkprint(u,v);
                         y=y-1;
                         a=a-1;
                         if(y==8)
                         {reach=1;c[12]=1;blitback(10,8);m=9;n=8;masked_blit(gc1,screen,0,0,m*40,x*40,gc1->w,gc1->h);}
                         
                      }            
                 }         
              //////////////////////////while ends////////////////////////////////////////   
             }
      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////ycoin movement////////////////////////////////////////////////  
void ycoin::movement(int a)
             { check=0;
               /////////////////while begins///////////////////////////
               while(a>0&&reach==0&&check==0)
                {if((a==1||a==6)&&t==0)
                    {blitback(m,n);y=7;x=15;t=1;c[0]=0;}
                 else if(t==0)
                      break;                
                 while(y==7&&x>=0&&x<=6&&c[4]==0&&a>0)
                    {  blitback(y,x+1);
                       masked_blit(yc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                       delay();
                       n=x;
                       m=y;
                       u=x+1;
                       v=y;
                       checkprint(u,v);
                       x=x-1;
                       a=a-1;
                       if(x==0)
                          {c[4]=1;c[5]=0;y=7;x=0;}   
                    }    
                 while(y==7&&x<=16&&x>=10&&c[0]==0&&a>0)
                    {  blitback(y,x+1);
                       masked_blit(yc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                       delay();
                       n=x;
                       m=y;
                       u=x+1;
                       v=y;
                       checkprint(u,v);
                       x=x-1;
                       a=a-1;
                       if(x==9)
                       {c[0]=1;c[1]=0;y=6;x=9;}
                    }        
                 while(y==9&&x>=0&&x<=6&&c[6]==0&&a>0)
                    {  blitback(y,x-1);
                       masked_blit(yc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                       delay();
                       n=x;
                       m=y;
                       u=x-1;
                       v=y;
                       checkprint(u,v);
                       x=x+1;
                       a=a-1;
                       if(x==7)
                       {c[6]=1;c[7]=0;y=10;x=7;}   
                    }    
                 while(y==9&&x<=16&&x>=10&&c[10]==0&&a>0)
                    {  blitback(y,x-1);
                       masked_blit(yc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                       delay();
                       n=x;
                       m=y;
                       u=x-1;
                       v=y;
                       checkprint(u,v);
                       x=x+1;
                       a=a-1;
                       if(x==16)
                       {c[10]=1;c[11]=0;y=9;x=16;}
                    }        
                 while(x==7&&y>=0&&y<=6&&c[3]==0&&a>0)
                     {  blitback(y-1,x);
                        masked_blit(yc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        u=x;
                        v=y-1;
                        checkprint(u,v);
                        y=y+1;
                        a=a-1;
                        if(y==7)
                        {c[3]=1;c[4]=0;y=7;x=6;}
                     }        
                 while(x==7&&y<=16&&y>=10&&c[7]==0&&a>0)
                     {   blitback(y-1,x);
                         masked_blit(yc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                         delay();
                         n=x;
                         m=y;
                         u=x;
                         v=y-1;
                         checkprint(u,v);
                         y=y+1;
                         a=a-1;
                         if(y==16)
                         {c[7]=1;c[8]=0;y=16;x=7;}
                     }        
                 while(x==9&&y>=0&&y<=6&&c[1]==0&&a>0)
                     {  blitback(y+1,x);
                        masked_blit(yc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        u=x;
                        v=y+1;
                        checkprint(u,v);
                        y=y-1;
                        a=a-1;
                        if(y==0)
                        {c[1]=1;c[2]=0;y=0;x=9;}
                     }        
                 while(x==9&&y<=16&&y>=10&&c[9]==0&&a>0)
                     {  
                        blitback(y+1,x);
                        masked_blit(yc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        u=x;
                        v=y+1;
                        checkprint(u,v);
                        y=y-1;
                        a=a-1;
                        if(y==9)
                        {c[9]=1;c[10]=0;y=9;x=10;}
                     }        
                 while(x==0&&y>=7&&y<=9&&c[5]==0&&a>0)
                     {  blitback(y-1,x);
                        masked_blit(yc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        u=x;
                        v=y-1;
                        checkprint(u,v);
                        y=y+1;
                        a=a-1;
                        if(y==9)
                        {c[5]=1;c[6]=0;y=9;x=0;}
                     }       
                 while(x==16&&y>=7&&y<=9&&c[11]==0&&a>0)
                     {  
                        blitback(y+1,x);
                        masked_blit(yc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        u=x;
                        v=y+1;
                        checkprint(u,v);
                        y=y-1;
                        a=a-1;
                        if(y==8)
                        {c[11]=1;c[12]=0;y=8;x=16;}
                     }
                 while(y==0&&x>=7&&x<=9&&c[2]==0&&a>0)
                      {  blitback(y,x+1);
                         masked_blit(yc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                         delay();
                         n=x;
                         m=y;
                         u=x+1;
                         v=y;
                         checkprint(u,v);
                         x=x-1;
                         a=a-1;
                         if(x==7)
                         {c[2]=1;c[3]=0;y=0;x=7;}
                      }            
                 while(y==16&&x>=7&&x<=9&&c[8]==0&&a>0)
                      {  blitback(y,x-1);
                         masked_blit(yc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                         delay();
                         n=x;
                         m=y;
                         u=x-1;
                         v=y;
                         checkprint(u,v);
                         x=x+1;
                         a=a-1;
                         if(x==9)
                         {c[8]=1;c[9]=0;y=16;x=9;}
                      }
                      
                  if(c[12]==0&&a>(x-8))
                 {check=1;}     
                 while(y==8&&x>=8&&x<=16&&c[12]==0&&a>0&&check==0)
                      {  blitback(y,x+1);
                         masked_blit(yc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                         delay();
                         n=x;
                         m=y;
                         u=x+1;
                         v=y;
                         checkprint(u,v);
                         x=x-1;
                         a=a-1;
                         if(x==8)
                         {reach=1;c[12]=1;blitback(8,10);m=8;n=9;masked_blit(yc1,screen,0,0,m*40,n*40,gc1->w,gc1->h);}
                      }                
                 }         
              //////////////////////////while ends////////////////////////////////////////          
             }     
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 


/////////////////////////////////////////rcoinmovement//////////////////////////////////////
 void rcoin::movement(int a)
             { check=0;
               /////////////////while begins///////////////////////////
               while(a>0&&reach==0&&check==0)
                {if((a==1||a==6)&&t==0)
                    {blitback(m,n);y=9;x=1;t=1;c[0]=0;}
                 else if(t==0)
                      break;              
                 while(y==7&&x>=0&&x<=6&&c[10]==0&&a>0)
                    {  blitback(y,x+1);
                       masked_blit(rc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                       delay();
                       n=x;
                       m=y;
                       u=x+1;
                       v=y;
                       checkprint(u,v);
                       x=x-1;
                       a=a-1;
                       if(x==0)
                          {c[10]=1;c[11]=0;y=7;x=0;}   
                    }    
                 while(y==7&&x<=16&&x>=10&&c[6]==0&&a>0)
                    {  blitback(y,x+1);
                       masked_blit(rc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                       delay();
                       n=x;
                       m=y;
                       u=x+1;
                       v=y;
                       checkprint(u,v);
                       x=x-1;
                       a=a-1;
                       if(x==9)
                       {c[6]=1;c[7]=0;y=6;x=9;}
                    }        
                 while(y==9&x>=0&&x<=6&&c[0]==0&&a>0)
                    {  blitback(y,x-1);
                       masked_blit(rc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                       delay();
                       n=x;
                       m=y;
                       u=x-1;
                       v=y;
                       checkprint(u,v);
                       x=x+1;
                       a=a-1;
                       if(x==7)
                       {c[0]=1;c[1]=0;y=10;x=7;}   
                    }    
                 while(y==9&&x<=16&&x>=10&&c[4]==0&&a>0)
                    {  blitback(y,x-1);
                       masked_blit(rc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                       delay();
                       n=x;
                       m=y;
                       u=x-1;
                       v=y;
                       checkprint(u,v);
                       x=x+1;
                       a=a-1;
                       if(x==16)
                       {c[4]=1;c[5]=0;y=9;x=16;}
                    }        
                 while(x==7&&y>=0&&y<=6&&c[9]==0&&a>0)
                     {  blitback(y-1,x);
                        masked_blit(rc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        u=x;
                        v=y-1;
                        checkprint(u,v);
                        y=y+1;
                        a=a-1;
                        if(y==7)
                        {c[9]=1;c[10]=0;y=7;x=6;}
                     }        
                 while(x==7&&y<=16&&y>=10&&c[1]==0&&a>0)
                     {   blitback(y-1,x);
                         masked_blit(rc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                         delay();
                         n=x;
                         m=y;
                         u=x;
                         v=y-1;
                         checkprint(u,v);
                         y=y+1;
                         a=a-1;
                         if(y==16)
                         {c[1]=1;c[2]=0;y=16;x=7;}
                     }        
                 while(x==9&&y>=0&&y<=6&&c[7]==0&&a>0)
                     {  blitback(y+1,x);
                        masked_blit(rc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        u=x;
                        v=y+1;
                        checkprint(u,v);
                        y=y-1;
                        a=a-1;
                        if(y==0)
                        {c[7]=1;c[8]=0;y=0;x=9;}
                     }        
                 while(x==9&&y<=16&&y>=9&&c[3]==0&&a>0)
                     {  blitback(y+1,x);
                        masked_blit(rc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        u=x;
                        v=y+1;
                        checkprint(u,v);
                        y=y-1;
                        a=a-1;
                        if(y==9)
                        {c[3]=1;c[4]=0;y=9;x=10;}
                     }        
                 while(x==0&&y>=7&&y<=9&&c[11]==0&&a>0)
                     {  blitback(y-1,x);
                        masked_blit(rc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        u=x;
                        v=y-1;
                        checkprint(u,v);
                        y=y+1;
                        a=a-1;
                        if(y==8)
                        {c[11]=1;c[12]=0;y=8;x=0;}
                     }       
                 while(x==16&&y>=7&&y<=9&&c[5]==0&&a>0)
                     {  blitback(y+1,x);
                        masked_blit(rc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        u=x;
                        v=y+1;
                        checkprint(u,v);
                        y=y-1;
                        a=a-1;
                        if(y==7)
                        {c[5]=1;c[6]=0;y=7;x=16;}
                     }
                 while(y==0&&x>=7&&x<=9&&c[8]==0&&a>0)
                      {  blitback(y,x+1);
                         masked_blit(rc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                         delay();
                         n=x;
                         m=y;
                         u=x+1;
                         v=y;
                         checkprint(u,v);
                         x=x-1;
                         a=a-1;
                         if(x==7)
                         {c[8]=1;c[9]=0;y=0;x=7;}
                      }            
                 while(y==16&&x>=7&&x<=9&&c[2]==0&&a>0)
                      {  blitback(y,x-1);
                         masked_blit(rc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                         delay();
                         n=x;
                         m=y;
                         u=x-1;
                         v=y;
                         checkprint(u,v);
                         x=x+1;
                         a=a-1;
                         if(x==9)
                         {c[2]=1;c[3]=0;y=16;x=9;}
                      }
                      
                 if(c[12]==0&&a>(8-x))
                 {check=1;}     
                 while(y==8&&x>=0&&x<=8&&c[12]==0&&a>0&&check==0)
                      {  blitback(y,x-1);
                         masked_blit(rc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                         delay();
                         n=x;
                         m=y;
                         u=x-1;
                         v=y;
                         checkprint(u,v);
                         x=x+1;
                         a=a-1;
                         if(x==8)
                         {reach=1;c[12]=1;blitback(8,6);m=8;n=7;masked_blit(rc1,screen,0,0,m*40,n*40,gc1->w,gc1->h);}
                      }             
                 }         
              //////////////////////////while ends////////////////////////////////////////                                  
             }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////     

///////////////////////////////////////////////////bcoinmovement/////////////////////////////////////////////////////////////////

void bcoin::movement(int a)
             { check=0;
               
               /////////////////while begins///////////////////////////
               while(a>0&&check==0&&reach==0)
                {if((a==1||a==6)&&t==0)
                    {blitback(m,n);y=1;x=7;t=1;c[0]=0;}
                 else if(t==0)
                      break;               
                 while(y==7&&x>=0&&x<=6&&c[1]==0&&a>0)
                    {  blitback(y,x+1);
                       masked_blit(bc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                       delay();
                       n=x;
                       m=y;
                       u=x+1;
                       v=y;
                       checkprint(u,v);
                       x=x-1;
                       a=a-1;
                       if(x==0)
                          {c[1]=1;c[2]=0;y=7;x=0;}   
                    }    
                 while(y==7&&x<=16&&x>=10&&c[9]==0&&a>0)
                    {  blitback(y,x+1);
                       masked_blit(bc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                       delay();
                       n=x;
                       m=y;
                       u=x+1;
                       v=y;
                       checkprint(u,v);
                       x=x-1;
                       a=a-1;
                       if(x==9)
                       {c[9]=1;c[10]=0;y=6;x=9;}
                    }        
                 while(y==9&&x>=0&&x<=6&&c[3]==0&&a>0)
                    {  blitback(y,x-1);
                       masked_blit(bc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                       delay();
                       n=x;
                       m=y;
                       u=x-1;
                       v=y;
                       checkprint(u,v);
                       x=x+1;
                       a=a-1;
                       if(x==7)
                       {c[3]=1;c[4]=0;y=10;x=7;}   
                    }    
                 while(y==9&&x<=16&&x>=10&&c[7]==0&&a>0)
                    {  blitback(y,x-1);
                       masked_blit(bc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                       delay();
                       n=x;
                       m=y;
                       u=x-1;
                       v=y;
                       checkprint(u,v);
                       x=x+1;
                       a=a-1;
                       if(x==16)
                       {c[7]=1;c[8]=0;y=9;x=16;}
                    }        
                 while(x==7&&y>=0&&y<=6&&c[0]==0&&a>0)
                     {  blitback(y-1,x);
                        masked_blit(bc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        u=x;
                        v=y-1;
                        checkprint(u,v);
                        y=y+1;
                        a=a-1;
                        if(y==7)
                        {c[0]=1;c[1]=0;y=7;x=6;}
                     }        
                 while(x==7&&y<=16&&y>=10&&c[4]==0&&a>0)
                     {   blitback(y-1,x);
                         masked_blit(bc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                         delay();
                         n=x;
                         m=y;
                         u=x;
                         v=y-1;
                         checkprint(u,v);
                         y=y+1;
                         a=a-1;
                         if(y==16)
                         {c[4]=1;c[5]=0;y=16;x=7;}
                     }        
                 while(x==9&&y>=0&&y<=6&&c[10]==0&&a>0)
                     {  blitback(y+1,x);
                        masked_blit(bc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        u=x;
                        v=y+1;
                        checkprint(u,v);
                        y=y-1;
                        a=a-1;
                        if(y==0)
                        {c[10]=1;c[11]=0;y=0;x=9;}
                     }        
                 while(x==9&&y<=16&&y>=10&&c[6]==0&&a>0)
                     {  blitback(y+1,x);
                        masked_blit(bc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        u=x;
                        v=y+1;
                        checkprint(u,v);
                        y=y-1;
                        a=a-1;
                        if(y==9)
                        {c[6]=1;c[7]=0;y=9;x=10;}
                     }        
                 while(x==0&&y>=7&&y<=9&&c[2]==0&&a>0)
                     {  blitback(y-1,x);
                        masked_blit(bc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        u=x;
                        v=y-1;
                        checkprint(u,v);
                        y=y+1;
                        a=a-1;
                        if(y==9)
                        {c[2]=1;c[3]=0;y=9;x=0;}
                     }       
                 while(x==16&&y>=7&&y<=9&&c[8]==0&&a>0)
                     {  blitback(y+1,x);
                        masked_blit(bc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                        delay();
                        n=x;
                        m=y;
                        y=y-1;
                        a=a-1;
                        u=x;
                        v=y+1;
                        checkprint(u,v);
                        if(y==7)
                        {c[8]=1;c[9]=0;y=7;x=16;}
                     }
                 while(y==0&&x>=7&&x<=9&&c[11]==0&&a>0)
                      {  blitback(y,x+1);
                         masked_blit(bc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                         delay();
                         n=x;
                         m=y;
                         x=x-1;
                         a=a-1;
                         u=x+1;
                         v=y;
                         checkprint(u,v);
                         if(x==8)
                         {c[11]=1;c[12]=0;y=0;x=8;}
                      }            
                 while(y==16&&x>=7&&x<=9&&c[5]==0&&a>0)
                      {  blitback(y,x-1);
                         masked_blit(bc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                         delay();
                         n=x;
                         m=y;
                         u=x-1;
                         v=y;
                         checkprint(u,v);
                         x=x+1;
                         a=a-1;
                         if(x==9)
                         {c[5]=1;c[6]=0;y=16;x=9;}
                      }
                 if(c[12]==0&&a>(8-y))
                 {check=1;}     
                 while(x==8&&y>=0&&y<=8&&c[12]==0&&a>0&&check==0)
                      {  blitback(y-1,x);
                         masked_blit(bc1,screen,0,0,y*40,x*40,gc1->w,gc1->h);
                         delay();
                         n=x;
                         m=y;
                         u=x;
                         v=y-1;
                         checkprint(u,v);
                         y=y+1;
                         a=a-1;
                         if(y==8)
                         {reach=1;c[12]=1;blitback(6,8);m=7;n=8;masked_blit(bc1,screen,0,0,m*40,n*40,gc1->w,gc1->h);}
                      }            
                 }         
              //////////////////////////while ends////////////////////////////////////////                
             }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void gridludo()
{ 
     int grid[17][17]={
    
                     6,6,6,6,6,6,6,5,5,5,7,7,7,7,7,7,7,
                     6,0,0,0,0,0,6,5,2,2,7,0,0,0,0,0,7,
                     6,0,1,0,1,0,6,5,2,5,7,0,2,0,2,0,7,
                     6,0,0,0,0,0,6,5,2,5,7,0,0,0,0,0,7,
                     6,0,1,0,1,0,6,5,2,5,7,0,2,0,2,0,7,
                     6,0,0,0,0,0,6,5,2,5,7,0,0,0,0,0,7,    
                     6,6,6,6,6,6,6,5,2,5,7,7,7,7,7,7,7,
                     5,1,5,5,5,5,5,11,12,12,5,5,5,5,5,5,5,
                     5,1,1,1,1,1,1,12,12,12,4,4,4,4,4,4,5,
                     5,5,5,5,5,5,5,12,12,12,5,5,5,5,5,4,5,
                     8,8,8,8,8,8,8,5,3,5,9,9,9,9,9,9,9,
                     8,0,0,0,0,0,8,5,3,5,9,0,0,0,0,0,9,
                     8,0,3,0,3,0,8,5,3,5,9,0,4,0,4,0,9,
                     8,0,0,0,0,0,8,5,3,5,9,0,0,0,0,0,9,
                     8,0,3,0,3,0,8,5,3,5,9,0,4,0,4,0,9,
                     8,0,0,0,0,0,8,3,3,5,9,0,0,0,0,0,9,
                     8,8,8,8,8,8,8,5,5,5,9,9,9,9,9,9,9
    
    
                         };
     
     for(int i=0;i<17;i++)
     for(int j=0;j<17;j++)
        {   if(grid[i][j]==1)
                {
                 blit(b,screen,0,0,j*40,i*40,40,40);            
                 }
            
            if(grid[i][j]==2)
                {
                 blit(r,screen,0,0,j*40,i*40,40,40);            
                 }
            
            if(grid[i][j]==3)
                {
                 blit(y,screen,0,0,j*40,i*40,40,40);            
                 }
            
            
            if(grid[i][j]==4)
                {
                 blit(g,screen,0,0,j*40,i*40,40,40);            
                 }
            
            
            if(grid[i][j]==5)
                {
                 blit(w,screen,0,0,j*40,i*40,40,40);            
                 }
            
            if(grid[i][j]==6)
                {
                 blit(b1,screen,0,0,j*40,i*40,40,40);            
                 }
                 
           if(grid[i][j]==7)
                {
                 blit(r1,screen,0,0,j*40,i*40,40,40);            
                 }      
                 
           if(grid[i][j]==8)
                {
                 blit(y1,screen,0,0,j*40,i*40,40,40);            
                 }      
                 
           if(grid[i][j]==9)
                {
                 blit(g1,screen,0,0,j*40,i*40,40,40);            
                 }            
                 
                 
           if(grid[i][j]==11)
                {
                 blit(home,screen,0,0,j*40,i*40,120,120);            
                 }      
                 
           if(grid[i][j]==0)
                {
                 blit(w1,screen,0,0,j*40,i*40,40,40);            
                 }      
                 
                 
                 
                 
        }
     
     
}



                          
/////////////////////////////////////////////////////////////////////////computer play////////////////////////////////////////////
void twoplayer()
   {      show_mouse(screen); 
          int m=1,a,c;
          blit(back,screen,0,0,0,0,1280,720);
          blit(play1,screen,0,0,800,250,comp->w,comp->h);
          blit(play2,screen,0,0,800,350,comp->w,comp->h);
          blit(down,screen,0,0,0,680,down->w,down->h);
          gridludo();
          f1=alfont_load_font("font.ttf");
          alfont_set_font_size(f1,40);
          alfont_textprintf_ex(screen,f1,40,0,makecol(0,0,0),-1,"PLAYER 1");
          alfont_textprintf_ex(screen,f1,460,640,makecol(0,0,0),-1,"PLAYER 2");
          
          
          allgreen allgreen1;
          allblue allblue1;

          
          
          BITMAP *temp=create_bitmap(90,90);
          blit(screen,temp,1000,300,0,0,90,90);
          int i=0,b=0;
          ::m=0;
          //////////////////////////////////////////////game/////////////////////////////////////////
          while(!key[KEY_ESC])
               { b=0;
                
                 if(::m%2==0)
                      {  blit(play11,screen,0,0,800,250,comp1->w,comp1->h);
                         blit(play2,screen,0,0,800,350,comp1->w,comp1->h);
                         
                         if (mouse_x>1000 && mouse_y>300 && mouse_x<1090 && mouse_y<392&&mouse_b & 1)
                             i=1;
                      }
                 if(::m%2==1)
                       {   blit(play1,screen,0,0,800,250,comp1->w,comp1->h);
                           blit(play22,screen,0,0,800,350,comp1->w,comp1->h);
                           
                           if (mouse_x>1000 && mouse_y>300 && mouse_x<1090 && mouse_y<392&&mouse_b & 1)
                              i=1;
                       }
                                    
                 blit(dice,screen,0,0,1000,300,d1->w,d1->h);
            
                  if(i==1)
                      
                     {      b=1;
                            i=0;
                            blit(temp,screen,0,0,1000,300,90,90);
                            //rotating dice//////////
                             while(i<10)
                                   {i=i+1;                               
                                    
                                    blit(temp,screen,0,0,1000,300,90,90);
                                    for(int i=0;i<10000;i++)
                                    for(int j=0;j<1000;j++);
                                    masked_blit(d66,screen,0,0,1000,300,90,90);
                                    for(int i=0;i<10000;i++)
                                    for(int j=0;j<1000;j++);
                                    masked_blit(d6,screen,0,0,1000,300,90,90);
                                    for(int i=0;i<10000;i++)
                                    for(int j=0;j<1000;j++);
                                    blit(temp,screen,0,0,1000,300,90,90);
                                    for(int i=0;i<10000;i++)
                                    for(int j=0;j<1000;j++);
                                   } 
                           /////////////////////////////////////// 
                                                          
                            a=random(1,7); 
                            if(a==1)
                               masked_blit(d1,screen,0,0,1000,300,d1->w,d1->h);             
                            if(a==2)
                               masked_blit(d2,screen,0,0,1000,300,d1->w,d1->h);             
                            if(a==3)
                               masked_blit(d3,screen,0,0,1000,300,d1->w,d1->h);
                            if(a==4)
                               masked_blit(d4,screen,0,0,1000,300,d1->w,d1->h);
                            if(a==5)
                               masked_blit(d5,screen,0,0,1000,300,d1->w,d1->h);
                            if(a==6)
                               masked_blit(d6,screen,0,0,1000,300,d1->w,d1->h);     
                            ::m=::m+1;          
                                 
                     }        
                                     
          
                      
                    
                   if(::m%2==1&&b==1)
                       {  
                           allblue1.movecoin(b,a);
                           if(a==6||a==1)
                              { i=1;
                                ::m=::m-1;
                              }
                           b=0;
                           
                           int g=0;   
                           for(int i=0;i<4;i++)
                              { if(bcoin[i].m1()==7&&bcoin[i].n1()==8)
                                   g=g+1;
                              }
                           while(g==4&&!key[KEY_ESC])   
                              { blit(win,screen,0,0,0,0,1280,720);
                                alfont_textprintf_ex(screen,f1,10,350,makecol(0,0,0),-1,"THE WINNER IS PLAYER 1");
                              }   
                       }            
                   
                       
                  if(::m%2==0&&b==1)
                        {   
                           allgreen1.movecoin(b,a);
                           if(a==6||a==1)
                              { i=1;
                                ::m=::m-1;
                              }
                           b=0;
                           int g=0;   
                           for(int i=0;i<4;i++)
                              { if(gcoin[i].m1()==9&&gcoin[i].n1()==8)
                                   g=g+1;
                              }
                           while(g==4&&!key[KEY_ESC])   
                              { blit(win,screen,0,0,0,0,1280,720);
                                alfont_textprintf_ex(screen,f1,10,350,makecol(0,0,0),-1,"THE WINNER IS PLAYER 2");
                              }
                        }
               
               
               
               
               
                 }
                 
                 
          
                                                  //////////////////////while ends/////////////////////////
   }
                                     ///////////////////////////////////function ends/////////////////////////////////
                                     
   
////////////////////////////////////multiplayer////////////////////////////////////////////////////////////////////////
void multiplayer()
   {      show_mouse(screen); 
          int m=1,a,c;
          blit(back,screen,0,0,0,0,1280,720);
          
          blit(play1,screen,0,0,800,150,comp->w,comp->h);
          blit(play2,screen,0,0,800,250,comp->w,comp->h);
          blit(play3,screen,0,0,800,350,comp->w,comp->h);
          blit(play4,screen,0,0,800,450,comp->w,comp->h);
          
          blit(down,screen,0,0,0,680,down->w,down->h);
          gridludo();
          
          f1=alfont_load_font("font.ttf");
          alfont_set_font_size(f1,35);
          alfont_textprintf_ex(screen,f1,40,0,makecol(0,0,0),-1,"PLAYER 1");
          alfont_textprintf_ex(screen,f1,460,0,makecol(0,0,0),-1,"PLAYER 2");
          alfont_textprintf_ex(screen,f1,40,640,makecol(0,0,0),-1,"PLAYER 3");
          alfont_textprintf_ex(screen,f1,460,640,makecol(0,0,0),-1,"PLAYER 4");
      
          allgreen allgreen1;
          allyellow allyellow1;
          allblue allblue1;
          allred allred1;
          
          
          BITMAP *temp=create_bitmap(90,90);
          blit(screen,temp,1000,300,0,0,90,90);
          int i=0,b=0;
          ::m=0;
          //////////////////////////////////////////////game/////////////////////////////////////////
          while(!key[KEY_ESC])
               { b=0;
                
                 if(::m%4==0)
                      {  
                         blit(play11,screen,0,0,800,150,comp1->w,comp1->h);
                         blit(play2,screen,0,0,800,250,comp->w,comp->h);
                         blit(play3,screen,0,0,800,350,comp->w,comp->h);
                         blit(play4,screen,0,0,800,450,comp->w,comp->h);
                         if (mouse_x>1000 && mouse_y>300 && mouse_x<1090 && mouse_y<392&&mouse_b & 1)
                             i=1;
                      }
                 if(::m%4==1)
                      {  
                         blit(play1,screen,0,0,800,150,comp1->w,comp1->h);
                         blit(play22,screen,0,0,800,250,comp->w,comp->h);
                         blit(play3,screen,0,0,800,350,comp->w,comp->h);
                         blit(play4,screen,0,0,800,450,comp->w,comp->h);
                         if (mouse_x>1000 && mouse_y>300 && mouse_x<1090 && mouse_y<392&&mouse_b & 1)
                             i=1;
                      }
                 if(::m%4==2)
                      {  
                         blit(play1,screen,0,0,800,150,comp1->w,comp1->h);
                         blit(play2,screen,0,0,800,250,comp->w,comp->h);
                         blit(play33,screen,0,0,800,350,comp->w,comp->h);
                         blit(play4,screen,0,0,800,450,comp->w,comp->h);
                         if (mouse_x>1000 && mouse_y>300 && mouse_x<1090 && mouse_y<392&&mouse_b & 1)
                             i=1;
                      }
                 if(::m%4==3)
                      {  
                         blit(play1,screen,0,0,800,150,comp1->w,comp1->h);
                         blit(play2,screen,0,0,800,250,comp->w,comp->h);
                         blit(play3,screen,0,0,800,350,comp->w,comp->h);
                         blit(play44,screen,0,0,800,450,comp->w,comp->h);
                         if (mouse_x>1000 && mouse_y>300 && mouse_x<1090 && mouse_y<392&&mouse_b & 1)
                             i=1;
                      }                   
                                    
                 blit(dice,screen,0,0,1000,300,d1->w,d1->h);
            
                 if (i==1)
                      
                     {      b=1;
                            i=0;
                            blit(temp,screen,0,0,1000,300,90,90);
                            //rotating dice//////////
                             while(i<10)
                                   {i=i+1;                               
                                    
                                    blit(temp,screen,0,0,1000,300,90,90);
                                    for(int i=0;i<10000;i++)
                                    for(int j=0;j<1000;j++);
                                    masked_blit(d66,screen,0,0,1000,300,90,90);
                                    for(int i=0;i<10000;i++)
                                    for(int j=0;j<1000;j++);
                                    masked_blit(d6,screen,0,0,1000,300,90,90);
                                    for(int i=0;i<10000;i++)
                                    for(int j=0;j<1000;j++);
                                    blit(temp,screen,0,0,1000,300,90,90);
                                    for(int i=0;i<10000;i++)
                                    for(int j=0;j<1000;j++);
                                   } 
                           /////////////////////////////////////// 
                                                          
                            a=random(1,7); 
                            if(a==1)
                               masked_blit(d1,screen,0,0,1000,300,d1->w,d1->h);             
                            if(a==2)
                               masked_blit(d2,screen,0,0,1000,300,d1->w,d1->h);             
                            if(a==3)
                               masked_blit(d3,screen,0,0,1000,300,d1->w,d1->h);
                            if(a==4)
                               masked_blit(d4,screen,0,0,1000,300,d1->w,d1->h);
                            if(a==5)
                               masked_blit(d5,screen,0,0,1000,300,d1->w,d1->h);
                            if(a==6)
                               masked_blit(d6,screen,0,0,1000,300,d1->w,d1->h);     
                            ::m=::m+1;          
                                 
                     }        
                                     
                     if(::m%4==1&&b==1)
                       {  
                           allblue1.movecoin(b,a);
                           if(a==6||a==1)
                              { i=1;
                                ::m=::m-1;
                              }
                           b=0;
                           int g=0;   
                           for(int i=0;i<4;i++)
                              { if(bcoin[i].m1()==7&&bcoin[i].n1()==8)
                                   g=g+1;
                              }
                           while(g==4&&!key[KEY_ESC])   
                              { blit(win,screen,0,0,0,0,1280,720);
                                alfont_textprintf_ex(screen,f1,10,350,makecol(0,0,0),-1,"THE WINNER IS PLAYER 1");
                              }
                     
                       }            
                   
                       
                   if(::m%4==2&&b==1)
                        {   
                           allred1.movecoin(b,a);
                           if(a==6||a==1)
                              { i=1;
                                ::m=::m-1;
                              }
                           b=0;
                           int g=0;   
                           for(int i=0;i<4;i++)
                              { if(rcoin[i].m1()==9&&bcoin[i].n1()==8)
                                   g=g+1;
                              }
                           while(g==4&&!key[KEY_ESC])   
                              { blit(win,screen,0,0,0,0,1280,720);
                                alfont_textprintf_ex(screen,f1,10,350,makecol(0,0,0),-1,"THE WINNER IS PLAYER 2");
                              }
                        }
                      
                   if(::m%4==3&&b==1)
                       {  
                           allyellow1.movecoin(b,a);
                           if(a==6||a==1)
                              { i=1;
                                ::m=::m-1;
                              }
                           b=0;   
                           int g=0;   
                           for(int i=0;i<4;i++)
                              { if(ycoin[i].m1()==8&&ycoin[i].n1()==9)
                                   g=g+1;
                              }
                           while(g==4&&!key[KEY_ESC])   
                              { blit(win,screen,0,0,0,0,1280,720);
                                alfont_textprintf_ex(screen,f1,10,350,makecol(0,0,0),-1,"THE WINNER IS PLAYER 3");
                              }
                       }            
                   
                       
                   if(::m%4==0&&b==1)
                        {   
                           allgreen1.movecoin(b,a);
                           if(a==6||a==1)
                              { i=1;
                                ::m=::m-1;
                              }
                           b=0;
                           int g=0;   
                           for(int i=0;i<4;i++)
                              { if(rcoin[i].m1()==8&&rcoin[i].n1()==7)
                                   g=g+1;
                              }
                           while(g==4&&!key[KEY_ESC])   
                              { blit(win,screen,0,0,0,0,1280,720);
                                alfont_textprintf_ex(screen,f1,10,350,makecol(0,0,0),-1,"THE WINNER IS PLAYER 4");
                              }
                        }
                 
                 
               
               
               
               
                 }
                 
                 
          
                                                  //////////////////////while ends/////////////////////////
   }

      
      
/////////////////////////////////////////////////////////////////////////main begins////////////////////////////////////////////////////////////
int main() {
    
    
init();
alfont_init();
srand(time(0));

    
//////////////////////////////////////////////////////////////////////////loading bitmaps///////////////////////////////////
 g=load_bitmap("green.bmp",q);
 y=load_bitmap("yellow.bmp",q);
 yy=load_bitmap("yellow.bmp",q);
 r=load_bitmap("red.bmp",q);
 b=load_bitmap("blue.bmp",q);
 w=load_bitmap("white.bmp",q);
 gc1=load_bitmap("gcoin1.bmp",q);
 rc1=load_bitmap("rcoin1.bmp",q);
 bc1=load_bitmap("bcoin1.bmp",q);
 yc1=load_bitmap("ycoin1.bmp",q);            
 w1=load_bitmap("w1.bmp",q);
 g1=load_bitmap("g1.bmp",q);
 y1=load_bitmap("y1.bmp",q);
 r1=load_bitmap("r1.bmp",q);
 b1=load_bitmap("b1.bmp",q);
 home=load_bitmap("home.bmp",q);
 d1=load_bitmap("d1.bmp",q);
 d2=load_bitmap("d2.bmp",q);
 d3=load_bitmap("d3.bmp",q);
 d4=load_bitmap("d4.bmp",q);
 d5=load_bitmap("d5.bmp",q);
 d6=load_bitmap("d6.bmp",q);
 t1=load_bitmap("t1.bmp",q);
 t2=load_bitmap("t2.bmp",q);
 t3=load_bitmap("t3.bmp",q);
 t4=load_bitmap("t4.bmp",q);
 comp=load_bitmap("COMPUTER.bmp",q);
 comp1=load_bitmap("COMPUTER1.bmp",q);
 play1=load_bitmap("player1.bmp",q);
 play11=load_bitmap("player11.bmp",q);
 play2=load_bitmap("player2.bmp",q);
 play22=load_bitmap("player22.bmp",q);
 play3=load_bitmap("player3.bmp",q);
 play33=load_bitmap("player33.bmp",q);
 play4=load_bitmap("player4.bmp",q);
 play44=load_bitmap("player44.bmp",q);
 options=load_bitmap("options.bmp",q);
 options1=load_bitmap("options1.bmp",q);
 options2=load_bitmap("options2.bmp",q); 
 back=load_bitmap("back.bmp",q);
 down=load_bitmap("down.bmp",q);
 d66=load_bitmap("d66.bmp",q);
 dice=load_bitmap("dice.bmp",q);
 intro=load_bitmap("intro.bmp",q); 
 win=load_bitmap("win.bmp",q);
 BITMAP *tempo=create_bitmap(90,90);
 int i,j;
 
 
 
 
 
 
 
 
///////////////////////////////////////////////////////////////////////////////grid/////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////	

	while (aa==0) {
          
          option1=1;
          ma=0;
          if((key[KEY_RIGHT]||key[KEY_UP])&&dc==0&&option1<=5&&option1>=0)
            {  for(int eq=0;eq<100000;eq++)
                   for(int aq=0;aq<900;aq++);
               option++;
            }
          
          if((key[KEY_LEFT]||key[KEY_DOWN])&&dc==0&&option1<=5&&option1>=0)
             {  for(int eq=0;eq<100000;eq++)
                   for(int ja=0;ja<900;ja++);
                option--;
             }
              
          if(option==1) 
              blit(t1,screen,0,0,0,0,t1->w,t1->h);       
          if(option==2) 
              blit(t2,screen,0,0,0,0,t1->w,t1->h); 
          if(option==3) 
              blit(t3,screen,0,0,0,0,t1->w,t1->h); 
          if(option==4) 
              blit(t4,screen,0,0,0,0,t1->w,t1->h);
              
               
          if(option==2&&key[KEY_ENTER])
              ma=2;
              
          if(option==3&&key[KEY_ENTER])
              ma=3;
                            
          if(option==4&&key[KEY_ENTER])
              aa=1;
          
          
          while(ma==3&&!key[KEY_ESC])
              blit(intro,screen,0,0,0,0,1280,720);
          
                        
           while(ma==2&&!(key[KEY_ESC]))
             {    dc=1;
             
                  if((key[KEY_RIGHT]||key[KEY_DOWN])&&ca==0&&option1<=4&&option1>=0)
                      {  for(int eq=0;eq<100000;eq++)
                             for(int dq=0;dq<900;dq++);
                             option1++;
                       }
          
                   if((key[KEY_LEFT]||key[KEY_UP])&&ca==0&&option1>=0&&option1<=4)
                       {  for(int eq=0;eq<100000;eq++)
                             for(int dq=0;dq<900;dq++);
                             option1--;
                       }
                       
                       
                       
                          
                    if(option1==1&&ma==2) 
                          blit(options,screen,0,0,0,0,t1->w,t1->h); 
                    if(option1==2&&ma==2) 
                          blit(options1,screen,0,0,0,0,t1->w,t1->h); 
                    if(option1==3&&ma==2) 
                          blit(options2,screen,0,0,0,0,t1->w,t1->h);
                          
                          
                          
                          
                          
                    if(option1==2&&ma==2&&key[KEY_ENTER]) 
                                 {twoplayer();
                                  ma=2;
                                  for(int i=0;i<4;i++)
                                        {gcoin[i].reset(i);
                                         bcoin[i].reset(i);
                                            
                                        }
                                 }
                    
                    if(option1==3&&ma==2&&key[KEY_ENTER]) 
                                 {  multiplayer();
                                    ma=2;
                                    for(int i=0;i<4;i++)
                                        {gcoin[i].reset(i);
                                         ycoin[i].reset(i);
                                         rcoin[i].reset(i);
                                         bcoin[i].reset(i);
                                            
                                        }
                                 }
                                 
                   if(key[KEY_ESC])
                    { ma=0;dc=0;}
                    
                    
                       
                       
                       
                         
                    
          
             } 
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
		/* put your code here */
	                  }

	deinit();
	return 0;
}
END_OF_MAIN()

void init() {
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 1280, 720, 0, 0);
	if (res != 0) {
		allegro_message(allegro_error);
		exit(-1);
	}

	install_timer();
	install_keyboard();
	install_mouse();
	/* add other initializations here */
}

void deinit() {
	clear_keybuf();
	/* add other deinitializations here */
}
