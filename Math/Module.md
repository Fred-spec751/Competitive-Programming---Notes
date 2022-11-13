<h1>Module</h1>
The module operation is the residue of division.

    2/10:
           5
          ---
      2 | 10
            0 -> module
1. So, we can use this operation to check the parity of a number:
     
     if(x%2==0) return true; // even
     return false             // odd

2. It's possible limited a number using module operation: Suppose we have the following case
    
    int dayOfWeek;
    
    /*
      0: monday
      1: tuesday
      2: wednesday
      3: thursday
      4: friday
      5: saturday
      6: sunday
      
      If we have 10, we can know the day of week with the module:
           1
          ---
      7 | 10
           3 -> module
    */
    
    cout<<"day of the week "<<days[dayOfWee%7]<<endl;
    
    
