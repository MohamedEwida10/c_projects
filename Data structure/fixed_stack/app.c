#include <stdio.h>
#include <stdlib.h>

#include "stack_ds.h"

stack_ds_t stack1;
uint32 ret_pop_val = zero;

int main() {
return_state_t ret = R_NOK;
ret=Stack_INTI(&stack1);
if(R_NOK == ret)
    {
        printf("error !! ,tack failed to initiolize \n");
    }
else{}
ret=Stack_PUSH(&stack1,11);
ret=Stack_PUSH(&stack1,22);
ret=Stack_PUSH(&stack1,33);
ret=Stack_PUSH(&stack1,44);
ret=Stack_PUSH(&stack1,55);
ret=Stack_PUSH(&stack1,66);
ret=Stack_PUSH(&stack1,77);

ret = Stack_TOP(&stack1,&ret_pop_val); 
ret = Stack_POP(&stack1,&ret_pop_val);
ret = Stack_POP(&stack1,&ret_pop_val);
ret = Stack_DISP(&stack1);
ret = Stack_POP(&stack1,&ret_pop_val);
ret = Stack_SIZE(&stack1,&ret_pop_val);
ret = Stack_POP(&stack1,&ret_pop_val);
ret = Stack_POP(&stack1,&ret_pop_val);
ret = Stack_POP(&stack1,&ret_pop_val);
ret = Stack_POP(&stack1,&ret_pop_val);



    
    
    
    
    
 return 0;
  }