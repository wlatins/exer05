#ifndef USUARIO_HPP
#define USUARIO_HPP
#include <iostream>
#include <string>
#include <vector>

class Usuario {
public:
	Usuario();
	~Usuario();

	void setCadastroinfos(std::string _senha, std::string _email, std::string _telefone, std::string _nome) {
		senha = _senha;
		email = _email;
		telefone = _telefone;
		nome = _nome;
	}
	void setMulta(float _multa) {
		multa = _multa;
	}
	void setStatus(bool _status) {
		status = _status;
	}
	void setDiasdeAtraso(int _diasdeAtraso) {
		diasdeAtraso = _diasdeAtraso;
	}
	void setLogin(std::string _senha, std::string _email) {
		senha = _senha;
		email = _email;
	}
	std::string getSenha() {
		return senha;
	}
	std::string getEmail() {
		return email;
	}



protected:
	std::string email, senha, telefone, nome;
	int diasdeAtraso;
	float multa;
	bool status;
};
#endif