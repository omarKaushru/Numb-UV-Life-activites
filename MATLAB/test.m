%A=[1 225 3; 102 3 4; 4 67 143];

A = imread('cat.png');
figure, imshow(A), title('before')
%A(1,1)=10;
for R = 1:556
     for C = 1:736
         if A(R,C)>=128
         A(R,C) = 1;
         else if A(R,C)<128
             A(R,C)=0;
             end
         end
     end
end
figure, imshow(A), title('recovered')