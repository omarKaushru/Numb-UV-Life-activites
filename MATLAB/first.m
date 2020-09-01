imshow('rice.png');
I=imread('cameraman.tif');
 imshow(I),figure
%J=imhist(I);
%histeq(I);
B = imsharpen(I);
imshow(B),figure8
%m=J(100); 
%H=fspecial('average',15);
H=fspecial('laplacian');
G=fspecial('Gaussian');
L=I+H;
imshow(L),figure7
Y=filter2(H,I);
imshow(Y/255),figure2
imwrite(Y,'test.tif');

j=imread('test.tif');
imshow(j),figure5
