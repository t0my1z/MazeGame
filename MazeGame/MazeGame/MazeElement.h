#pragma once

//Father class for all MazeElements - Used to force its child classes to implement a Enter Method. 
//Since we use inheritance we need a virtual Destructor
class MazeElement
{
protected: 
	char* visual;

public:
	virtual void Enter() const = 0;
	virtual ~MazeElement() {}
	
	const char* GetVisual() const { return visual; }
	void SetVisual(char* newVisual) { visual = newVisual; }
};

