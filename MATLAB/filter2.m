I=imread('cameraman.tif');
E=edge(I,'canny');
imshow(E);
c=double(I);
[px,py] = gradient(I);