/*
  Bu program, kullanicidan alinan boyutlarda rastgele iki dizi olusturur,
  bunlari tek bir dizide birlestirir ve Bubble Sort algoritmasi ile siralar.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void birlestirVeSirala(int dizi1[], int dizi2[], int diziSon[], int boyut1, int boyut2)
{
    int i, sayac = 0;
    for(i = 0; i < boyut1; i++)
    {
        diziSon[i] = dizi1[i];
    }
    for(int j = boyut1; j < boyut1 + boyut2; j++)
    {
        diziSon[j] = dizi2[sayac++];
    }
    int bos;
    int toplamBoyut = boyut1 + boyut2;
    
    for(int a = 0; a < toplamBoyut; a++)
    {
        for(int b = a + 1; b < toplamBoyut; b++)
        {
            if(diziSon[a] > diziSon[b])
            {
                bos = diziSon[a];
                diziSon[a] = diziSon[b];
                diziSon[b] = bos;
            }               
        }
    }
}

int main(){
    srand(time(NULL));
    int n, m;
    
    printf("1. Dizinin boyutu (n) ve 2. Dizinin boyutu (m) giriniz:\n");
    scanf("%d%d", &n, &m);
  
    int dizi1[n], dizi2[m];
    int diziSon[n + m];
    
    int sayac = 0;
    
    while(sayac < n)
    {
        dizi1[sayac++] = rand() % 20;
    }
    
    sayac = 0;
    while(sayac < m)
    {
        dizi2[sayac++] = rand() % 20;
    }
  
    birlestirVeSirala(dizi1, dizi2, diziSon, n, m);

    printf("Sirali ve Birlestirilmis Dizi:\n");
    for(int i = 0; i < n + m; i++) 
    {
        printf("%d ", diziSon[i]);
    }
    return 0;
}
