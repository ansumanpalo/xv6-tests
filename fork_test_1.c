#include "types.h"
#include "stat.h"
#include "user.h"
#include "spinlock.h"

//struct lock l1;

int main (int argc, char *argv[])
{
    printf(1, "Starting process...\n");
    int pid = fork();
	int i;
    if(pid==0){
        // Inside Child
//        acquire(&l1);
        for(i=0; i<10; i++)
        {
            printf(1, "Inside Child: %d\n", i);

        }
//        release(&l1);
        exit();
    }

    else if(pid>0){
       //Inside Parent
        for(i=0; i<10; i++) printf(1, "Inside Parent: %d\n", 20-i);
        wait();
        printf(1, "Exitted Child");
    }
    exit();
}

//
//main(int argc, char *argv[])
//{
//
//    int i;
//  if(argc < 1){
//    exit();
//  }
//  printf(1, "Hello ");
//  for(i = 1; i<argc; i++){
//    printf(1, argv[i]);
//  }
//  printf(1, "\n");
//  exit();
//}
//
