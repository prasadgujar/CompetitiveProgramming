#include <iostream>
#include <algorithm>
#include <unistd.h>
#include <fstream>
#include <queue>
#include <cassert>

using namespace std;

void skap(string message)
{
    cout << "Wrong answer: " << message << "\n";
    exit(1);
}

vector< vector<bool> > board;
int dx[] = {-1,1,0,0},dy[] = {0,0,-1,1};

int neighbours(int x,int y,int r,int c)
{

    int res = 0;

    for(int i=0;i<4;++i)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx<0||ny<0||nx>=r||ny>=c) continue;

        res += board[nx][ny];
    }

    return res;
}

void simulate(int r,int c)
{
    queue< pair<int,int> > newly_flooded;

    for(int i=0;i<r;++i)
        for(int k=0;k<c;++k)
            if(!board[i][k] && neighbours(i,k,r,c)>=2 )
            {
                board[i][k] = true;
                newly_flooded.push({i,k});
            }

    while(!newly_flooded.empty())
    {
        int x = newly_flooded.front().first, y = newly_flooded.front().second;
		newly_flooded.pop();	

        for(int i=0;i<4;++i)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx<0||ny<0||nx>=r||ny>=c||board[nx][ny]) continue;

            if(neighbours(nx,ny,r,c)>=2)
            {
                board[nx][ny] = true;
                newly_flooded.push({nx,ny});
            }
        }

    }

}

int readint(ifstream& usr) {
    int r;
    if (!(usr >> r)) {
        skap(usr.eof() ? "Output file ended too early." :
            "Couldn't read the next number. "
            "Make sure your output file only contains integers, and "
            "remember to submit the output file, not your source code.");
    }
    return r;
}

int main (int argc, char* argv[]) {
    string user_out = argv[3], task_in = argv [1];
    ifstream usr (user_out, ifstream::in);
    ifstream task (task_in, ifstream::in);

    int t;
    assert(task >> t);

    while(t--)
    {
        int r,c;
        assert(task >> r >> c);

        int n = readint(usr);

        if(n != (r+c+1)/2) skap("Incorrect number of clicks.");

        board.clear();
        board.resize(r,vector<bool>(c,false));

        while(n--)
        {
            int x = readint(usr);
            int y = readint(usr);

            if(x<0||y<0||x>=r||y>=c) skap("Invalid click coordinates.");

            board[x][y] = true;
        }

        simulate(r,c);

        for(int i=0;i<r;++i)
            for(int k=0;k<c;++k)
                if(board[i][k]==false) skap("Failed to flood all cells.");

    }

    return 0;
}
