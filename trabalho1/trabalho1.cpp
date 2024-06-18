// trabalho1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>
#include <vector>
#include "usuario.hpp"

void Cadastro(std::vector<Usuario*>& usuarios) {
	std::string nome, telefone, email, senha;
	std::cout << "Qual o seu nome? "; std::cin >> nome;
	std::cout << "Qual o seu telefone? "; std::cin >> telefone;
	std::cout << "Digite um email: "; std::cin >> email;
	std::cout << "Digite uma senha: "; std::cin >> senha;
	Usuario* user = new Usuario;
	user->setCadastroinfos(senha, email, telefone, nome);
	usuarios.push_back(user);
}

void Login(std::vector<Usuario*>& usuarios) {
	std::string senha, email;
	std::cout << "Digite o seu email: "; std::cin >> email;
	std::cout << "Digite a sua senha: "; std::cin >> senha;

	for (int i = 0; i < usuarios.size(); i++) {
		if (email == usuarios[i]->getEmail() && senha == usuarios[i]->getSenha()) {

		}
	}
}

int main()
{
    std::vector<Usuario*> usuarios;
	Cadastro(usuarios);
	Login(usuarios);
    std::cout << "Hello World!\n";
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
