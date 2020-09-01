H=fspecial('prewitt');
%j is equal to the transpose of H

J=H';
K=fspecial('sobel');
L=fspecial('gaussian');
M=fspecial('log');
N=fspecial('Laplacian');
a=[1 0; 0 -1;];
I=imread('cameraman.tif');
Y=filter2(H,I);
z=uint8(Y);
imshow(z),figure1;

