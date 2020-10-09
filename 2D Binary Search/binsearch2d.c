// binary search in 2d array to find 0
void bins2d(int*asteriskRow_ptr,int*asteriskCol_ptr,int **arr,int rowstart, int rowend, int colstart, int colend, int* counter)
{
    (*counter)++;//count every time bins2d is called
    int midrow=(rowend-rowstart)/2 +rowstart,midcol=(colend-colstart)/2 +colstart; // center of the given array
    switch(arr[midrow][midcol]) //check the center of the given array
    {
            case 0:  //if it 0 then we found the asterisk
            *asteriskRow_ptr=midrow;
           *asteriskCol_ptr=midcol;
           break; //return
            case 1:      // its located in the southeast direction
                if(arr[midrow+1][midcol+1]==0) // is it the nearest element in that direction?
                {   //yes
                    *asteriskRow_ptr=midrow+1;
                    *asteriskCol_ptr=midcol+1;
                    break; // return
                }
                //no
                else
                //narrow the search based on the direction and then search
                rowstart=midrow+1;
                colstart=midcol+1;
                bins2d(asteriskRow_ptr,asteriskCol_ptr,arr,rowstart,rowend,colstart,colend, counter);
                break;
            case 2: // its located in the northeast direction
                 if(arr[midrow+1][midcol-1]==0) // is it the nearest element in that direction?
                {
                    //yes
                    *asteriskRow_ptr=midrow+1;
                    *asteriskCol_ptr=midcol-1;
                    break; //return
                }
                //no
                else
                //narrow the search based on the direction and then search
                colstart=midcol+1;
                rowend=midcol-1;
                bins2d(asteriskRow_ptr,asteriskCol_ptr,arr,rowstart,rowend,colstart,colend, counter);
                break;
            case 3: // its located in the east direction
                 if(arr[midrow][midcol+1]==0) // is it the nearest element in that direction?
                {
                    //yes
                    *asteriskRow_ptr=midrow;
                    *asteriskCol_ptr=midcol+1;
                    break;//return
                }
                //no
                else
                //narrow the search based on the direction and then search
                rowstart=rowend=midrow;
                colstart=midcol+1;
                bins2d(asteriskRow_ptr,asteriskCol_ptr,arr,rowstart,rowend,colstart,colend, counter);
                break;
            case 4:// its located in the west direction
                 if(arr[midrow][midcol-1]==0) // is it the nearest element in that direction?
                {
                    //yes
                    *asteriskRow_ptr=midrow+1;
                    *asteriskCol_ptr=midcol-1;
                    break;//return
                }
                //no
                else
                //narrow the search based on the direction and then search
                rowstart=rowend=midrow;
                colend=midcol-1;
                bins2d(asteriskRow_ptr,asteriskCol_ptr,arr,rowstart,rowend,colstart,colend, counter);
                 break;
            case 5:// its located in the north direction
                 if(arr[midrow-1][midcol]==0) // is it the nearest element in that direction?
                {
                    //yes
                    *asteriskRow_ptr=midrow-1;
                    *asteriskCol_ptr=midcol;
                    break;//return
                }
                //no
                else
                //narrow the search based on the direction and then search
                colstart=colend=midcol;
                rowend=midrow-1;
                bins2d(asteriskRow_ptr,asteriskCol_ptr,arr,rowstart,rowend,colstart,colend, counter);
                 break;
            case 6:// its located in the south direction
                 if(arr[midrow+1][midcol]==0) // is it the nearest element in that direction?
                {
                    //yes
                    *asteriskRow_ptr=midrow+1;
                    *asteriskCol_ptr=midcol;
                    break;//return
                }
                //no
                else
                //narrow the search based on the direction and then search
                colstart=colend=midcol;
                rowstart=midrow+1;
                bins2d(asteriskRow_ptr,asteriskCol_ptr,arr,rowstart,rowend,colstart,colend, counter);
                  break;
            case 7:// its located in the northwest direction
                 if(arr[midrow-1][midcol-1]==0) // is it the nearest element in that direction?
                {
                    //yes
                    *asteriskRow_ptr=midrow-1;
                    *asteriskCol_ptr=midcol-1;
                    break;//return
                }
                //no
                else
                //narrow the search based on the direction and then search
                rowend=midrow-1;
                colend=midcol-1;
                bins2d(asteriskRow_ptr,asteriskCol_ptr,arr,rowstart,rowend,colstart,colend, counter);
                break;
            case 8:// its located in the southwest direction
                 if(arr[midrow-1][midcol+1]==0) // is it the nearest element in that direction?
                {
                    //yes
                    *asteriskRow_ptr=midrow-1;
                    *asteriskCol_ptr=midcol+1;
                    break;//return
                }
                //no
                else
                //narrow the search based on the direction and then search
                colend=midcol-1;
                rowstart=midrow+1;
                bins2d(asteriskRow_ptr,asteriskCol_ptr,arr,rowstart,rowend,colstart,colend, counter);
                break;

            }
        }