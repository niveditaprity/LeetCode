class Solution {
public:
    bool squareIsWhite(string c) {
      if(c[0]=='b'&&(c[1]-'0')%2==1||c[0]=='d'&&(c[1]-'0')%2==1|| c[0]=='f'&&(c[1]-'0')%2==1|| c[0]=='h'&&(c[1]-'0')%2==1)
      {
          return true;
      }
        if(c[0]=='a'&&(c[1]-'0')%2==0||c[0]=='c'&&(c[1]-'0')%2==0|| c[0]=='e'&&(c[1]-'0')%2==0|| c[0]=='g'&&(c[1]-'0')%2==0)
      {
          return true;
      }
      return false;  

    }
};
