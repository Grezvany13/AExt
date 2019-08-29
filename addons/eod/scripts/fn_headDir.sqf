_unit = player;

onEachFrame
{
    _beg = ASLToAGL eyePos _unit;
    _endE = (_beg vectorAdd (eyeDirection _unit vectorMultiply 100));
    drawLine3D [ _beg, _endE, [0,1,0,1]]; 
};
