#ifndef __Snake__
#define __Snake__

//방향 종류
enum class Direction{
    UP,
    RIGHT,
    LEFT,
    DOWN
};

//위치 값
struct Position{
    int x;
    int y;
};

//헤드
struct DPosition{
    Direction Dir;
    Position Pos;
};

class Snake{
public:
    Snake() = default;
    ~Snake() = default;

public:
    //초기화
    void Init();
    //키 입력받아 다음 방향 결정하는 함수
    DPosition NextSnakePos(Direction nextDir);
    void UpdateSnakePos(DPosition& dPos);

    void Die(){isLive = false;}

    Direction GetCurDirection(){return head.Dir;}
    bool IsAlive(){return isLive;}
    
public:
    DPosition head;
    int length = 3; //뱀의 초기 길이
    bool isLive = true; //뱀이 죽었는지 살았는지 체크
};

#endif 
