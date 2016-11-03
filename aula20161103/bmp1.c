#include <stdio.h>
#include <math.h>

struct Pixel{
    unsigned char B;
    unsigned char G;
    unsigned char R;

};

int main()
{
    struct Pixel pixel;
    int WPX, HPX, BPP, PAL, i, j, AUX, NCP;
    FILE * imagem;
    unsigned char byte; //1 byte
    unsigned short word; //2 bytes
    unsigned int dword; // 4 bytes;
    imagem = fopen("arquivo.bmp", "rb");
    if(imagem == NULL) {
        fprintf(stderr,"Arquivo nao encontrado!\n");
        return 1;
    }
    // 2 butes 0-1 se for Windows, 'B' e 'M'
    fread(&byte, sizeof(byte), 1, imagem);
    printf("%c", byte);
    fread(&byte, sizeof(byte), 1, imagem);
    printf("%c\n", byte);
    // dword 2-5 Tamanho do arquivo (bytes)
    fread(&dword, sizeof(dword), 1, imagem);
    printf("\nTamanho do arquivo (bytes): %u\n", dword);
    //word	6-7	Informação reservada
    //word	8-9	Informação reservada
    fseek(imagem, 2*sizeof(word), SEEK_CUR); //pulando 4
    //dword	10-13	Offset, onde dados da imagem começam
    fread(&dword, sizeof(dword), 1, imagem);
    printf("\nOffset (bytes): %u\n", dword);
    //dword	14-17	Tamanho do cabeçalho, a partir daqui
    fread(&dword, sizeof(dword), 1, imagem);
    printf("\nTamanho do cabeçalho (bytes): %u\n", dword);
    //dword	18-21	Largura da imagem (pixels), WPX
    fread(&dword, sizeof(dword), 1, imagem);
    WPX = dword;
    printf("\nLargura da Imagem (pixels): %u\n", WPX);
    //dword	22-25	Altura da imagem (pixels), HPX
    fread(&dword, sizeof(dword), 1, imagem);
    HPX = dword;
    printf("\nAltura da Imagem (pixels): %u\n", HPX);
    //word	26-27	Qtde de planos de cores
    fread(&word, sizeof(word), 1, imagem);
    printf("\nQuantidade de Planos de Cores: %u\n", word);
    //word	28-29	Bits por pixel, BPP
    fread(&word, sizeof(word), 1, imagem);
    BPP = word;
    printf("\nBits por pixel: %u\n", BPP);
    //dword	30-33	Método de compressão
    fread(&dword, sizeof(dword), 1, imagem);
    printf("\nMétodo de compressao: %u\n", dword);
    //dword	34-37	Tamanho da imagem
    fread(&dword, sizeof(dword), 1, imagem);
    printf("\nTamanho da imagem (bytes): %u\n", dword);
    //dword	38-41	Resolução horizontal
    fread(&dword, sizeof(dword), 1, imagem);
    printf("\nResolucao horizontal: %u\n", dword);
    //dword	42-45	Resolução vertical
    fread(&dword, sizeof(dword), 1, imagem);
    printf("\nResolucao vertical: %u\n", dword);
    //dword	46-49	Número de cores na paleta, NCP
    fread(&dword, sizeof(dword), 1, imagem);
    NCP = (dword == 0) ? 1 << BPP : dword; // pow(2,BPP)
    printf("\nNumero de cores na paleta: %u\n", NCP);
    //dword	50-53	Número de cores importantes, NIC
    fread(&dword, sizeof(dword), 1, imagem);
    printf("\nNumero de cores importantes: %u\n", (dword == 0) ? NCP : dword);
    // Tamanho da linha da array de pixels (bytes)
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    printf("\nTamanho da linha da array de pixels (bytes): %u\n\n", PAL);
    //Leitura de pixel a pixel
    AUX = PAL - WPX*3;  //diferença em bytes entre a largura e a linha da array
    for(j = 0; j < HPX; j++) {//a cada linha da imagem
    for(i = 0; i < WPX; i++){//a cada coluna da mesma linha
        fread(&pixel, sizeof(pixel), 1, imagem);//canais B, G e R, nesta ordem
        printf("R: %u, G: %u, B: %u\n", pixel.R, pixel.G, pixel.B);
    }
    if (AUX > 0) {
        fseek(imagem, AUX, SEEK_CUR); //sem informação útil
    }
    }
    fclose(imagem);
    return 0;
}
