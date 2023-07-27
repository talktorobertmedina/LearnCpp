#pragma once

class Singleton
{
public:
	Singleton();
	~Singleton();
	Singleton getInstance();
protected:
private:
	Singleton* m_instance;
};

