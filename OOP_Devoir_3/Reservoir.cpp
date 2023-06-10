#include<iostream>
#include"Reservoir.h"
#include<iterator>
#include<fstream>

Reservoir::Reservoir() {
	_name = "niente";
	_larg = 0;
	_lung = 0;
	_profond = 0;
}
Reservoir::Reservoir(std::string name, int larg, int lung, int profond):_name(name),_larg(larg),_lung(lung),_profond(profond){}

Reservoir::Reservoir(const Reservoir& res) {
	_name = res._name;
	_larg = res._larg;
	_lung = res._lung;
	_profond = res._profond;
}
Reservoir::~Reservoir() {
	std::cout << "Водоём удалён\n";
}
void Reservoir::Mostrare() {
	std::cout << "Тип водоёма : " << _name << "\n";
	std::cout << "Ширина водоёма : " << _larg << '\n';
	std::cout << "Длина водоёма : " << _lung << '\n';
	std::cout << "Глубина водоёма :" << _profond << '\n';
}
void Reservoir::SetName(std::string name) {
	_name=name;
}
std::string Reservoir::GetName() {
	return _name;
}

int Reservoir::GetLarg() {
	return _larg;
}
void Reservoir::SetLarg(int larg) {
	_larg = larg;
}
int Reservoir::GetLung() {
	return _lung;
}
void Reservoir::SetLung(int lung) {
	_lung = lung;
}
int Reservoir::GetProfond() {
	return _profond;
}
void Reservoir::SetProfond(int profond) {
	_profond = profond;
}
int Reservoir::Volume() {
	return (_larg * _lung * _profond);
}
int Reservoir::Area() {
	return (_larg * _lung);
}
void Reser::Tipo(std::string name) {
	Reser vec1;
	for (const auto& it : _vec) {
		if (it->GetName() != name) {
			std::cout << "Разные типы водоёмов.\n";
			return;
		}
		else
			vec1.App(it);
	}
	std::cout << "Одинаковые типы водоёмов.\n";
}
void Reser::ConfrontareArea() {
	std::vector<Reservoir*>::const_iterator it2;
	std::vector<Reservoir*>::const_iterator it = _vec.begin();
	for (it2 = _vec.begin(); it2 < _vec.end()-1; ++it2)
		if ((*it)->Area() > (*it2++)->Area()) {
			it = it2;
		}
	std::cout << "Самый большой объём : \n";
	(*it)->Volume();
}
void Reser::Record() {
	std::fstream str("text.txt");
	for (const auto& it : _vec) {
		str << it->GetName() << it->GetLarg() << it->GetLung() << it->GetProfond();
		str << '\n';
	}
}
void Reser::App(Reservoir* res) {
	_vec.push_back(res);
}
void Reser::Mostra() {
	for (const auto& it : _vec) {
		it->Mostrare();
	}
}
