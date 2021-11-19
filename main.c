#include <stdio.h>

int main() {
    int shape;
    char m_m;
    int a;
    int b;
    printf("code shekl ra vared konid: ");
    scanf("%d",&shape);
    printf("cod mohit ya masahat ra vared konid: ");
    scanf(" %c",&m_m);
    switch (shape) {
        case 1:
            switch (m_m) {
                case 'm' :
                    printf("zel ra vared konid: ");
                    scanf(" %d",&a);
                    int mohit=a*4;
                  printf("mohit : %d",mohit);
                  break;
                case 'n':
                    printf("zel ra vared konid: ");
                    scanf("%d",&a);
                    int masahat=a*a;
                    printf("masahat: %d",masahat);
                    break;
                default:
                    printf("worng charecter!!!");
                    break;
            }
            break;
        case 2:
            switch (m_m) {
                case 'n':{
                    printf("zel 1 ra vared konid: ");
                    scanf("%d",&a);
                    printf("zel 2 ra vared konid: ");
                    scanf("%d",&b);
                    int mohitM=(a+b)*2;
                    printf("mohit : %d",mohitM);
                    break;}
                case 'm':
                    printf("zel 1 ra vared konid: ");
                    scanf("%d",&a);
                    printf("zel 2 ra vared konid: ");
                    scanf("%d",&b);
                    int masahatM=a*b;
                    printf("masahat: %d",masahatM);
                    break;
                default:
                    printf("worng charecter!!!");
                    break;

            }
            break;
                case 3:
                    switch (m_m) {
                        case 'n':
                            printf("shoaa ra vared konid: ");
                            scanf("%d",&a);
                          int mohitD=a*a*3.14;
                          printf("mohit dayere : %d",mohitD);
                            break;
                        case 'm':
                            printf("ghotr ra vared konid:  ");
                            scanf("%d",&a);
                            int masahatD=a*3.14;
                            printf("masaht dayere mosvi : %d",masahatD);
                            break;
                        default:
                            printf("worng charecter!!!");
                            break;


                    }
                    break;
        default:
            printf("worng charecter!!!");
            break;



    }
}
