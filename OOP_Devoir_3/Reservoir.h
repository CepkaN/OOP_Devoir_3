#pragma once
#include<string>
#include<vector>

class Reservoir {
private:
	std::string _name;
	int _larg;
	int _lung;
	int _profond;
public:
	Reservoir();
	explicit Reservoir(std::string name, int larg, int lung, int profond);
	Reservoir(const Reservoir& res);
	~Reservoir();
	void Mostrare();
	int Volume();
	int Area();
	std::string GetName();
	void SetName(std::string name);
	int GetLarg();
	void SetLarg(int larg);
	int GetLung();
	void SetLung(int lung);
	int GetProfond();
	void SetProfond(int profond);
};
class Reser {
private:
	std::vector<Reservoir*>_vec;
public:
	void Tipo(std::string name);
	void ConfrontareArea();
	void Record();
	void App(Reservoir* res);
	void Mostra();
};
