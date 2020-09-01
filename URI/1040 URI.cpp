#include <bits/stdc++.h>
using namespace std;

int main()
{
     double n1, b, c, d, e, m;
     while(cin>>n1>>b>>c>>d)
     {
         m = (n1 * 2 + b * 3 + c * 4 + d) / 10;
        printf("Media: %.1f\n", m);
        if (m >= 7.0)
        printf("Aluno aprovado.\n");
        else if (m >= 5.0)
        {
            cout<<"Aluno em exame.\n";
            cin>>e;
            printf("Nota do exame: %.1f\n", e);
            if (e + m / 2.0 > 5.0)
            cout<<"Aluno aprovado.\n";
            else
            cout<<"Aluno reprovado.\n";
            printf("Media final: %.1f\n",(e + m)/2.0);
        }
        else
        cout<<"Aluno reprovado.\n";
     }
}
