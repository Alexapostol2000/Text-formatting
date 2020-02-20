#include <stdio.h>
#include <string.h>

/////////////////el_spatii////////////////////
 void el_spatii(int original_line_count,char matrice[1000][1000]){
 int contor,i,ok = 0;
for(i=0;i<original_line_count;i++){
  if(matrice[i][strlen(matrice[i])-1] == '\n'){
    contor=strlen(matrice[i])-2;
    ok = 1;
  }
  else
    contor=strlen(matrice[i])-1;
  while((matrice[i][contor] == ' ' || matrice[i][contor] == 9) && contor >= 0 ){
    matrice[i][contor]='\0';
    contor--;
  }
  if(ok){
    matrice[i][contor + 1] = '\n';
     matrice[i][contor + 2] = '\0';
  }
}

}
        //////////////////////
/////////////liste //////////////////////////
void list(int original_line_count,char type, char caracter,int linie_inceput,int linie_sfarsit,char matrice[1000][1000]){
  linie_inceput--;
  linie_sfarsit++;
  int i,j,poz=1,l=0,w=1;
  if(type == 'n'){
    char contor[]="0123456789";
    for(i=linie_inceput;i<=linie_sfarsit;i++){
      
      int nr=0;
      
      while(1){
        if(matrice[i][nr] == '\0'){
          nr++;
          break;} 
        nr++;
        }
        
    if(nr>2){
      for(j=nr;j>=0;j--)
        matrice[i][j+1]=matrice[i][j];
      for(j=nr;j>=0;j--)
        matrice[i][j+1]=matrice[i][j];
      for(j=nr;j>=0;j--)
        matrice[i][j+1]=matrice[i][j];
      nr=nr+3;
      
      if(poz>9){      
      for(j=nr;j>=0;j--)
        matrice[i][j+1]=matrice[i][j];
      matrice[i][0]=contor[w];
      matrice [i][1]=contor[l];
      matrice [i][2]=caracter;
      matrice [i][3]=' ';
      l++;
      if(l>9){
        l=0;
        w++;
      }
      }
      else{
      matrice[i][0]=contor[poz];
      matrice [i][1]=caracter;
      matrice [i][2]=' ';
      poz++;

      }
      
      }
  }
  }

  if(type == 'b'){
      for(i=linie_inceput;i<=linie_sfarsit;i++){
      int nr=0;
      
      nr=strlen(matrice[i]);
    if(nr>3){
      for(j=nr;j>=0;j--)
        matrice[i][j+1]=matrice[i][j];
      for(j=nr;j>=0;j--)
        matrice[i][j+1]=matrice[i][j];
      
      nr=nr+2;
    
      matrice[i][0]=caracter;
      matrice [i][1]=' ';
      }
  
  }
  
  }   
  
if(type == 'a'){
    char contor='a';
    for(i=linie_inceput;i<=linie_sfarsit-1;i++){
      
      int nr=0;
      
      while(1){
        if(matrice[i][nr] == '\0'){
          nr++;
          break;} 
        nr++;
        }
        
    if(nr>3){
      for(j=nr;j>=0;j--)
        matrice[i][j+1]=matrice[i][j];
      for(j=nr;j>=0;j--)
        matrice[i][j+1]=matrice[i][j];
      for(j=nr;j>=0;j--)
        matrice[i][j+1]=matrice[i][j];
      nr=nr+3;
    
      matrice[i][0]=contor;
      matrice [i][1]=caracter;
      matrice [i][2]=' ';
      contor++;
      }
  }
  
  }

if(type == 'A'){
    char contor='A';
    for(i=linie_inceput;i<=linie_sfarsit;i++){
      
      int nr=0;
      
      while(1){
        if(matrice[i][nr] == '\0'){
          nr++;
          break;} 
        nr++;
        }
        
    if(nr>3){
      for(j=nr;j>=0;j--)
        matrice[i][j+1]=matrice[i][j];
      for(j=nr;j>=0;j--)
        matrice[i][j+1]=matrice[i][j];
      for(j=nr;j>=0;j--)
        matrice[i][j+1]=matrice[i][j];
      nr=nr+3;
    
      matrice[i][0]=contor;
      matrice [i][1]=caracter;
      matrice [i][2]=' ';
      contor++;
      }
  }
  
  }
  
  el_spatii(original_line_count,matrice);



  }

///////////////////////////////////////////////////////////////////////////////////

/////////////////////order list/////////////////////////////////////////////////
  void order_list(int original_line_count,char type, char caracter,char order,int linie_inceput,int linie_sfarsit,char mat[1000][1000]){
    linie_inceput--;
    //linie_sfarsit--;
    if(strlen(mat[linie_inceput])<2)
      linie_inceput++;

    int i,j;
    if(order == 'z'){
      for(i=linie_inceput;i<linie_sfarsit;i++){
        for(j=i+1;j < linie_sfarsit+1;j++)
              if(strcmp(mat[i],mat[j])<0){
                char aux[1000];
                strcpy(aux,mat[i]);
                strcpy(mat[i],mat[j]);
                strcpy(mat[j],aux);
                    }
                    
                      
                        }
     
    }
    
    if(order == 'a'){
        if(type == 'a'){
                linie_inceput--;
        for(i=linie_inceput;i<linie_sfarsit;i++){
        for(j=i+1;j < linie_sfarsit+1;j++){
             if(strcmp(mat[i],mat[j])>0){
            char aux[1000];
            strcpy(aux,mat[i]);
            strcpy(mat[i],mat[j]);
            strcpy(mat[j],aux);
          }
             }
              }
            }
          
              
      for(i=linie_inceput;i < linie_sfarsit;i++){
        for(j=i+1;j < linie_sfarsit;j++)
          if(strcmp(mat[i],mat[j])>0){
            char aux[1000];
            strcpy(aux,mat[i]);
            strcpy(mat[i],mat[j]);
            strcpy(mat[j],aux);
          }
      }     
    }
int poz=1,l=0,w=1;
  if(type == 'n'){
    char contor[]="0123456789";
    for(i=linie_inceput;i<linie_sfarsit;i++)
      //printf("%s",mat[i]); 
    for(i=linie_inceput;i<linie_sfarsit;i++){
      
      int nr=0;
      
      while(1){
        if(mat[i][nr] == '\0'){
          nr++;
          break;} 
        nr++;
        }
        nr++;
    if(nr>2){
      for(j=nr;j>=0;j--)
        mat[i][j+1]=mat[i][j];
      for(j=nr;j>=0;j--)
        mat[i][j+1]=mat[i][j];
      for(j=nr;j>=0;j--)
        mat[i][j+1]=mat[i][j];
      nr=nr+3;
      
      if(poz>9){      
      for(j=nr;j>=0;j--)
        mat[i][j+1]=mat[i][j];
      mat[i][0]=contor[w];
      mat[i][1]=contor[l];
      mat[i][2]=caracter;
      mat[i][3]=' ';
      l++;
      if(l>9){
        l=0;
        w++;
      }
      }
      else{
      mat[i][0]=contor[poz];
      mat[i][1]=caracter;
      mat[i][2]=' ';
      poz++;

      }
      
      }
  }
  }

  if(type == 'b'){
      for(i=linie_inceput;i<=linie_sfarsit;i++){
      int nr=0;
      
      while(1){
        if(mat[i][nr] == '\0'){
          nr++;
          break;} 
        nr++;
        }
    if(nr>3){
      for(j=nr;j>=0;j--)
        mat[i][j+1]=mat[i][j];
      for(j=nr;j>=0;j--)
        mat[i][j+1]=mat[i][j];
      
      nr=nr+2;
    
      mat[i][0]=caracter;
      mat [i][1]=' ';
      }
  
  }
  
  }
  
if(type == 'a'){
    char contor='a';
    for(i=linie_inceput;i<=linie_sfarsit;i++){
      
      int nr=0;
      
      while(1){
        if(mat[i][nr] == '\0'){
          nr++;
          break;} 
        nr++;
        }
        nr++;
    if(nr>3){
      for(j=nr;j>=0;j--)
        mat[i][j+1]=mat[i][j];
      for(j=nr;j>=0;j--)
        mat[i][j+1]=mat[i][j];
      for(j=nr;j>=0;j--)
        mat[i][j+1]=mat[i][j];
      nr=nr+3;
    
      mat[i][0]=contor;
      mat[i][1]=caracter;
      mat[i][2]=' ';
      contor++;
      }
  }
  
  }

if(type == 'A'){
    char contor='A';
    for(i=linie_inceput;i<linie_sfarsit;i++){
      
      int nr=0;
      
      while(1){
        if(mat[i][nr] == '\0'){
          nr++;
          break;} 
        nr++;
        }
        nr++;
    if(nr>3){
      for(j=nr;j>=0;j--)
        mat[i][j+1]=mat[i][j];
      for(j=nr;j>=0;j--)
        mat[i][j+1]=mat[i][j];
      for(j=nr;j>=0;j--)
        mat[i][j+1]=mat[i][j];
      nr=nr+3;
    
      mat[i][0]=contor;
      mat[i][1]=caracter;
      mat[i][2]=' ';
      contor++;
      }
  }
  
  }
  el_spatii(original_line_count,mat);
  }


  /////////////////////////align_left/////////////////////////////
void aling_left(int lineoriginal,int lineinceput,int linefarsit,char matrice[1000][1000]){
   int i,j,l;
   

   if(lineinceput == 1)
    lineinceput--;

   
   for(i = lineinceput ; i <= linefarsit ; i++){
      int nr=0,ok=0;
      nr=strlen(matrice[i]);
        for(j = 0 ; j < nr ; j++){
          while(ok != 1){
          if(matrice[i][j] != ' '){
            ok=1;
            break;
          }
          if(matrice[i][j] == ' ' && ok==0){
            int l;
            for(l = j ; l < nr ; l++)
              matrice[i][l] = matrice[i][l+1];  
              nr--;
              } 
          else
            ok=1;
                                  }
                    }
                                        }

el_spatii(lineoriginal,matrice);

}
//////////////////////////////////////////////////////////////////////////

/////////////////////////alin_right///////////////////////////////////////
void align_right(int original_line_count,int linie_inceput,int linie_sfarsit,char original[1000][1000]){
 int max=0,poz,k,i,j;
 linie_inceput--;
 linie_sfarsit++;
  for(i = linie_inceput ; i  <= linie_sfarsit ; i++){
  int nr=0;
      nr=strlen(original[i]);
      if(nr > max){
        max = nr;
        poz = i;
      }
    
    }
  max++;
  for(i = linie_inceput ;i < linie_sfarsit ; i++){
    int nr=0;
    nr=strlen(original[i]);
      int cn=nr;
      nr++;
  if(i != poz && nr > 2){
    while(nr<max){
    for(j = nr ;j >= 0 ; j--){
      original[i][j+1]=original[i][j];
    }
    nr++;
    }
  }       
  
  cn=max-cn;
  cn--;
if(nr>2)
for(j = 0 ; j < cn; j++)
  original[i][j]=' ';
  
  }
}


///////////////////////////////////////////////////////////////////////////

////////////////////////////center////////////////////////////////////////
void center(int original_line_count,int ls,int ld,char original[1000][1000]){
	int i,max=0,poz,nr,spatii,numara,j;
	for(i=ls;i<=ld;i++){
		if(strlen(original[i])>max){
			max=strlen(original[i]);
			poz=i;
		}
	}


	for(i=ls;i<=ld;i++){
			nr=strlen(original[i]);
		if(nr > 2){
			if(nr %2 == 0)
				spatii=(max-nr+1)/2;
			else
				spatii=((max-nr)/2);
			numara=spatii;
			while(spatii != 0){
				for(j=nr;j>=0;j--)
					original[i][j+1]=original[i][j];
				nr++;
				spatii--;
			}
		for(j=0;j<numara;j++)
			original[i][j]=' ';
		}
	}

}

//////////////////////////////////////////////////

////////////paragraph/////////////////////////
   void paraghraph( int indent , int linie_start , int linie_final ,char original[1000][1000]){
  int i,nr,aux,j,ok=0;
  linie_start--;
  for(i=linie_start;i<=linie_final;i++){
    if(i==0){
      nr=strlen(original[i]);
      aux=0;
      while(aux<indent){
      for(j=nr-1;j>=0;j--)
        original[i][j+1]=original[i][j];
      nr++;
      aux++;
      }
    for(j=0;j<indent;j++)
      original[i][j]=' ';
    ok=0;
    }
    
    if(strlen(original[i])<3 && ok == 0){
    ok=1;
    }
    
  if(ok==1 && strlen(original[i]) > 2){
    nr=strlen(original[i]);
      aux=0;
      while(aux<indent){
      for(j=nr-1;j>=0;j--)
        original[i][j+1]=original[i][j];
      nr++;
      aux++;
      }
    for(j=0;j<indent;j++)
      original[i][j]=' ';
  ok=0;
  }
  
  }
}


   /////////////////////////////


int main(int argc, char *argv[]) {
  char buf[1000],               // buffer used for reading from the file
      original[1000][1000],     // original text, line by line
      result[1000][1000];       // text obtained after applying operations
  int original_line_count = 0,  // number of lines in the input file
      result_line_count = 0,    // number of lines in the output file
      i;

  if (argc != 4) {  // invalid number of arguments
    fprintf(stderr,
            "Usage: %s operations_string input_file output_file\n",
            argv[0]);
    return -1;
  }

  // Open input file for reading
  FILE *input_file = fopen(argv[2], "r");

  if (input_file == NULL) {
    fprintf(stderr, "File \"%s\" not found\n", argv[2]);
    return -2;
  }

  // Read data in file line by line
  while (fgets(buf, 1000, input_file)) {
    strcpy(original[original_line_count], buf);
    original_line_count++;
  }

  fclose(input_file);
  char *p,argumente[100][100],aux[1000];
  int contor=0,nr,j,ls=0,ld=0,n,putere,ok,k;
  p=strtok(argv[1],",");
  while(p != NULL){
    strcpy(argumente[contor],p);
    contor++;
    p=strtok(NULL,",");
    }
  
  for(i=0;i < contor ;i++){
    nr=strlen(argumente[i]);
    for(j=0;j<nr;j++){
      ///////////////////////list/////////////////////////////
      if(argumente[i][j] == 'I' || argumente[i][j] == 'i'){
          char ty,c;
          ls=0;
          ld=0;
          ok=0;
          for(k=j+1;k<nr;k++){
            if(ok == 0 && argumente[i][k] != ' '){
              ty=argumente[i][k];
              ok=1;
              k++;
            }
            if(ok == 1 && argumente[i][k] != ' '){
              c=argumente[i][k];
              ok=2;
              k++;
            }
         if(ok==2){
              while(argumente[i][k] != ' ' && argumente[i][k] != '\0'){
                n=(int)(argumente[i][k]-'0');
                ls=ls*10+n;
                k++;
                ok=3;
              }
              }
        if(ok==3){
          while(argumente[i][k] != ' ' && argumente[i][k] != '\0'){
                n=(int)(argumente[i][k]-'0');
                ld=ld*10+n;
                k++;
                ok=4;
              }
        }
          }
        if(ls==0 && ld==0)
         list(original_line_count,ty,c,1,original_line_count,original);
        if(ls==0 && ld != 0)
          list(original_line_count,ty,c,1,ld,original);
        if(ld==0 && ls != 0 )
          list(original_line_count,ty,c,ls,original_line_count,original);
        if(ls !=0 && ld !=0)
          list(original_line_count,ty,c,ls,ld,original);
        
          
        }
        //////////////////////////////////////////////////////
      
        ///////////////////order///////////////////////////////////

      if(argumente[i][j] == 'O' || argumente[i][j] == 'o'){
        char ty,c,ord;
          ls=0;
          ld=0;
          ok=0;
          for(k=j+1;k<nr;k++){
            if(ok == 0 && argumente[i][k] != ' '){
              ty=argumente[i][k];
              ok=1;
              k++;
            }
            if(ok == 1 && argumente[i][k] != ' '){
              c=argumente[i][k];
              ok=2;
              k++;
            }
      
            if(ok ==2 && argumente[i][k] != ' '){
              ord=argumente[i][k];
              ok=3;
              k++;

            }
            
            if(ok==3){
              while(argumente[i][k] != ' ' && argumente[i][k] != '\0'){
                n=(int)(argumente[i][k]-'0');
                ls=ls*10+n;
                k++;
                ok=4;
              }
              }
        if(ok==4){
          while(argumente[i][k] != ' ' && argumente[i][k] != '\0'){
                n=(int)(argumente[i][k]-'0');
                ld=ld*10+n;
                k++;
                ok=4;
              }
        }
      }
      if(ls==0 && ld==0)
         order_list(original_line_count,ty,c,ord,1,original_line_count,original);
        if(ls==0 && ld != 0)
          order_list(original_line_count,ty,c,ord,1,ld,original);
        if(ld==0 && ls != 0)
          order_list(original_line_count,ty,c,ord,ls,original_line_count,original);
        if(ls !=0 && ld !=0)
          order_list(original_line_count,ty,c,ord,ls,ld,original);
              
      }
             ////////////////////////////////////////////  
            //////////////////////left////////////////////////
        if(argumente[i][j] == 76 || argumente[i][j] == 108){
              ls=0;
              ld=0;
              ok=0;
          for(k=j+1;k < nr;k++){
          if(ok==0){
              while(argumente[i][k] != ' ' && argumente[i][k] != '\0'){
                n=(int)(argumente[i][k]-'0');
                ls=ls*10+n;
                k++;
                ok=1;
              }
              
              }
          if(ok==1){
              while(argumente[i][k] != ' ' && argumente[i][k] != '\0'){
                n=(int)(argumente[i][k]-'0');
                ld=ld*10+n;
                k++;
                ok=2;
              }
              }
          
          }
          if(ls == 0 && ld == 0)
            aling_left(original_line_count,1,original_line_count,original);
          if(ls ==0 && ld != 0)
            aling_left(original_line_count,1,ld,original);
          if(ld == 0 && ls != 0)
            aling_left(original_line_count,ls,original_line_count,original);
          if(ls !=0 && ld !=0 )
            aling_left(original_line_count,ls,ld,original);
          }
              //////////////////////////////////////////
          //////////////////right////////////////////////////////

            if(argumente[i][j] == 82 || argumente[i][j] == 114){
              ls=0;
              ld=0;
              ok=0;
          for(k=j+1;k < nr;k++){
          if(ok==0){
              while(argumente[i][k] != ' ' && argumente[i][k] != '\0'){
                n=(int)(argumente[i][k]-'0');
                ls=ls*10+n;
                k++;
                ok=1;
              }
              
              }
          if(ok==1){
              while(argumente[i][k] != ' ' && argumente[i][k] != '\0'){
                n=(int)(argumente[i][k]-'0');
                ld=ld*10+n;
                k++;
                ok=2;
              }
              }
          
          }
          
          if(ls == 0 && ld == 0){
            align_right(original_line_count,1,original_line_count,original);
          
          }
          if(ls ==0 && ld != 0){
            align_right(original_line_count,1,ld,original);
          
          }
          if(ld == 0 && ls != 0){
            align_right(original_line_count,ls,original_line_count,original);
          
          }
          if(ls !=0 && ld !=0 ){
            align_right(original_line_count,ls,ld,original);
            
          }
          }

          ///////////////////////////////////////////////////////
      
          ///////////////center/////////////////////////////////
          if(argumente[i][j] == 'C'){
              ls=-1;
              ld=-1;
              ok=0;
          for(k=j+1;k < nr;k++){
          if(ok==0){
              while(argumente[i][k] != ' ' && argumente[i][k] != '\0'){
                n=(int)(argumente[i][k]-'0');
                ls=ls*10+n;
                k++;
                ok=1;
              }
              
              }
          if(ok==1){
              while(argumente[i][k] != ' ' && argumente[i][k] != '\0'){
                n=(int)(argumente[i][k]-'0');
                ld=ld*10+n;
                k++;
                ok=2;
                
              }
              }
          
          }
          
          if(ls == 0 && ld ==0){
          	center(original_line_count,0,0,original);
          	
          }

          if(ls == -1 && ld == -1 ){
            center(original_line_count,0,original_line_count,original);
          
          }
          if(ls ==0 && ld != 0){
            center(original_line_count,0,ld,original);
          
          }
          if(ld == 0 && ls != 0){
            center(original_line_count,ls,original_line_count,original);
          
          }
          if(ls !=0 && ld !=0 ){
            center(original_line_count,ls,ld,original);
            
          }
          }

      				//////////////////////////////////////////////
      /////////////////////////paraghraph//////////////////////////////
          if(argumente[i][j] == 'P'){
              ls=0;
              ld=0;
              ok=0;
              int leght=0;
          for(k=j+1;k < nr;k++){
          if(ok==0){
              while(argumente[i][k] != ' ' && argumente[i][k] != '\0'){
                n=(int)(argumente[i][k]-'0');
                leght=leght*10+n;
                k++;
                ok=1;
              }
              
              }
          if(ok==1){
              while(argumente[i][k] != ' ' && argumente[i][k] != '\0'){
                n=(int)(argumente[i][k]-'0');
                ls=ls*10+n;
                k++;
                ok=2;
              }
              }
          
          if(ok==2){
              while(argumente[i][k] != ' ' && argumente[i][k] != '\0'){
                n=(int)(argumente[i][k]-'0');
                ld=ld*10+n;
                k++;
                ok=3;
              }
              }
          }
          
          if(ls == 0 && ld == 0){
            paraghraph(leght,0,original_line_count,original);
          
          }
          if(ls ==0 && ld != 0){
            paraghraph(leght,0,ld,original);
          
          }
          if(ld == 0 && ls != 0){
            paraghraph(leght,ls,original_line_count,original);
          
          }
          if(ls !=0 && ld !=0 ){
            paraghraph(leght,ls,ld,original);
            
          }
          }
          //////////////////////////////////////////////////////
      }
    
        


      }
  



  for (i = 0; i < original_line_count; i++) {
    strcpy(result[i], original[i]);
  }
  result_line_count = original_line_count;

  // Open output file for writing
  FILE *output_file = fopen(argv[3], "w");

  if (output_file == NULL) {
    fprintf(stderr, "Could not open or create file \"%s\"\n", argv[3]);
    return -2;
  }

  // Write result in output file
  for (i = 0; i < result_line_count; i++) {
    fputs(result[i], output_file);
  }

  fclose(output_file);
}