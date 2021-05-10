#include<bits/stdc++.h>

using namespace std;
//Implement the class Box 
//Implement the class Box 
class Box
{
private:
    //l,b,h are integers representing the dimensions of the box
    long long l,b,h;

public:

    // The class should have the following functions : 

    // Constructors: 
    // Box();
    Box(int length = 0, int breadth =0, int height =0){
        l = length;
        b = breadth;
        h = height;
    }
    
    Box(Box& B){
        l = B.l;
        b = B.b;
        h = B.h;
    }
    
    int getLength(){
        return l;
    } // Return box's length
    int getBreadth (){
        return b;
    } // Return box's breadth
    int getHeight (){
        return h;
    }  //Return box's height
    long long CalculateVolume(){
        return l*b*h;
    } // Return the volume of the box
    
    //Overload operator < as specified
    bool operator<(Box& bx){
        if(this->l < bx.l) return true;
        if(this->b < bx.b && this->l == bx.l) return true;
        if(this->h < bx.h && this->b == bx.b && this->l == bx.l){
            return true;
        }
        
        return false;
    }
    
    //Overload operator << as specified
    friend ostream& operator<<(ostream& out, Box& B){
        out << B.l << " " << B.b << " " << B.h;        
        return out; 
    }
}; 

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}