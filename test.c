#include <stdio.h>
int h,w;
char p[100][100];
int count=0;

int hoge(int x,int y,int v);
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    int i,j;
    int x,y;
    int ans;
    
    scanf("%d%d",&h,&w);
    for(i=0;i<w;i++){
            scanf("%s",&p[i][0]);
    }
    ans=hoge(0,0,p[0][0],3);

    printf("%d",count);
    return 0;
}
int hoge(int x,int y,int v){
    if (x>w||y>h){return 0;}
    if (p[x][y]=='_'){
        swich(v){
            case 1:
                count++;
                return hoge(x-1,y,1);
                break;
            case 2:
                count++;
                return hoge(x,y+1,2);
                break;
            case 3:
                count++;
                return hoge(x+1,y,3);
                break;
            case 4: w
                count++;
                return hoge(x,y-1,4);
                break;
        }
    }else if(p[x][y]=='//'){
        swich(v){
            case 1:
                count++;
                return hoge(x,y+1,2);
                break;
            case 2:
                count++;
                return hoge(x-1,y,1);
                break;
            case 3:
                count++;
                return hoge(x,y-1,4);
                break;
            case 4:
                count++;
                return hoge(x+1,y,3);
                break;
        }
    }else if(p[x][y]=='\\') {
        swich(v){
            case 1:
                count++;
                return hoge(x,y-1,4);
                break;
            case 2:
                count++;
                return hoge(x+1,y,3);
                break;
            case 3:
                count++;
                return hoge(x,y+1,2);
                break;
            case 4:
                count++;
                return hoge(x-1,y,1);
                break;
        }
    }
    
}