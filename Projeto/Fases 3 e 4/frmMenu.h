#pragma once

#include <msclr\marshal_cppstd.h>

#include "Estoque.hpp"

namespace ProjetoAED1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para frmMenu
	/// </summary>

	Estoque estoque;

	public ref class frmMenu : public System::Windows::Forms::Form
	{

	public:
		frmMenu(void)
		{
			InitializeComponent();

			pnlAdicionar->Hide();
			pnlAlterarQuantidade->Hide();
			pnlRemover->Hide();
			pnlExibirProduto->Hide();
			gpbExibirProduto->Visible = false;
			pnlExibirEstoque->Hide();
			dgvEstoque->Visible = false;
			cria(&estoque);
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~frmMenu()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::Label^ lblEstoque;
	private: System::Windows::Forms::Button^ btnAdicionar;
	private: System::Windows::Forms::Button^ btnAlterarQuantidade;
	private: System::Windows::Forms::Button^ btnRemover;
	private: System::Windows::Forms::Button^ btnExibirProduto;
	private: System::Windows::Forms::Button^ btnExibirEstoque;
	private: System::Windows::Forms::Button^ btnSair;
	private: System::Windows::Forms::Panel^ pnlAdicionar;

	private: System::Windows::Forms::Button^ btnAdicionarSair;

	private: System::Windows::Forms::Panel^ pnlAlterarQuantidade;
	private: System::Windows::Forms::Button^ btnAlterarQuantidadeSair;
	private: System::Windows::Forms::Label^ lblNome;
	private: System::Windows::Forms::Button^ btnAdicionarPanel;
	private: System::Windows::Forms::Label^ lblAdicionar;



	private: System::Windows::Forms::TextBox^ txtQuantidade;
	private: System::Windows::Forms::TextBox^ txtPreco;
	private: System::Windows::Forms::TextBox^ txtNome;
	private: System::Windows::Forms::Label^ lblPreco;
	private: System::Windows::Forms::Label^ lblQuantidade;
	private: System::Windows::Forms::TextBox^ txtNomeAlterar;
	private: System::Windows::Forms::TextBox^ txtQuantidadeAlterar;


	private: System::Windows::Forms::Label^ lblQuantidadeAlterar;
	private: System::Windows::Forms::Label^ lblNomeAlterar;
	private: System::Windows::Forms::Button^ btnAlterarPanel;
	private: System::Windows::Forms::Label^ lblAlterarQuantidade;
	private: System::Windows::Forms::Panel^ pnlRemover;
	private: System::Windows::Forms::TextBox^ txtNomeRemover;
	private: System::Windows::Forms::Label^ lblRemoverNome;
	private: System::Windows::Forms::Button^ btnRemoverPanel;
	private: System::Windows::Forms::Label^ lblRemover;
	private: System::Windows::Forms::Button^ btnRemoverSair;
	private: System::Windows::Forms::Panel^ pnlExibirProduto;
	private: System::Windows::Forms::GroupBox^ gpbExibirProduto;
	private: System::Windows::Forms::Label^ lblExibeQuantidade;
	private: System::Windows::Forms::Label^ lblExibePreco;
	private: System::Windows::Forms::Label^ lblExibeNome;
	private: System::Windows::Forms::Label^ lblQuantidadeGPBProduto;
	private: System::Windows::Forms::Label^ lblPrecoGPBProduto;
	private: System::Windows::Forms::Label^ lblNomeGPBProduto;
	private: System::Windows::Forms::TextBox^ txtNomeExibirProduto;
	private: System::Windows::Forms::Label^ lblNomeExibirProduto;
	private: System::Windows::Forms::Button^ btnExibirProdutoPanel;
	private: System::Windows::Forms::Label^ lblExibirProduto;
	private: System::Windows::Forms::Button^ btnExibirProdutoSair;
	private: System::Windows::Forms::Panel^ pnlExibirEstoque;



	private: System::Windows::Forms::Label^ lblExibirEstoque;
	private: System::Windows::Forms::Button^ btnExibeEstoqueSair;
	private: System::Windows::Forms::DataGridView^ dgvEstoque;
	private: System::Windows::Forms::Label^ lblResultado;
	private: System::Windows::Forms::Label^ lblResultadoQuantidade;
	private: System::Windows::Forms::Label^ lblResultadoRemover;
	private: System::Windows::Forms::Label^ lblResultadoProduto;
	private: System::Windows::Forms::Label^ lblEstoqueVazio;








	protected:

	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblEstoque = (gcnew System::Windows::Forms::Label());
			this->btnAdicionar = (gcnew System::Windows::Forms::Button());
			this->btnAlterarQuantidade = (gcnew System::Windows::Forms::Button());
			this->btnRemover = (gcnew System::Windows::Forms::Button());
			this->btnExibirProduto = (gcnew System::Windows::Forms::Button());
			this->btnExibirEstoque = (gcnew System::Windows::Forms::Button());
			this->btnSair = (gcnew System::Windows::Forms::Button());
			this->pnlAdicionar = (gcnew System::Windows::Forms::Panel());
			this->lblResultado = (gcnew System::Windows::Forms::Label());
			this->txtQuantidade = (gcnew System::Windows::Forms::TextBox());
			this->txtPreco = (gcnew System::Windows::Forms::TextBox());
			this->txtNome = (gcnew System::Windows::Forms::TextBox());
			this->lblPreco = (gcnew System::Windows::Forms::Label());
			this->lblQuantidade = (gcnew System::Windows::Forms::Label());
			this->lblNome = (gcnew System::Windows::Forms::Label());
			this->btnAdicionarPanel = (gcnew System::Windows::Forms::Button());
			this->lblAdicionar = (gcnew System::Windows::Forms::Label());
			this->btnAdicionarSair = (gcnew System::Windows::Forms::Button());
			this->pnlAlterarQuantidade = (gcnew System::Windows::Forms::Panel());
			this->lblResultadoQuantidade = (gcnew System::Windows::Forms::Label());
			this->txtNomeAlterar = (gcnew System::Windows::Forms::TextBox());
			this->txtQuantidadeAlterar = (gcnew System::Windows::Forms::TextBox());
			this->lblQuantidadeAlterar = (gcnew System::Windows::Forms::Label());
			this->lblNomeAlterar = (gcnew System::Windows::Forms::Label());
			this->btnAlterarPanel = (gcnew System::Windows::Forms::Button());
			this->lblAlterarQuantidade = (gcnew System::Windows::Forms::Label());
			this->btnAlterarQuantidadeSair = (gcnew System::Windows::Forms::Button());
			this->pnlRemover = (gcnew System::Windows::Forms::Panel());
			this->lblResultadoRemover = (gcnew System::Windows::Forms::Label());
			this->txtNomeRemover = (gcnew System::Windows::Forms::TextBox());
			this->lblRemoverNome = (gcnew System::Windows::Forms::Label());
			this->btnRemoverPanel = (gcnew System::Windows::Forms::Button());
			this->lblRemover = (gcnew System::Windows::Forms::Label());
			this->btnRemoverSair = (gcnew System::Windows::Forms::Button());
			this->pnlExibirProduto = (gcnew System::Windows::Forms::Panel());
			this->lblResultadoProduto = (gcnew System::Windows::Forms::Label());
			this->gpbExibirProduto = (gcnew System::Windows::Forms::GroupBox());
			this->lblExibeQuantidade = (gcnew System::Windows::Forms::Label());
			this->lblExibePreco = (gcnew System::Windows::Forms::Label());
			this->lblExibeNome = (gcnew System::Windows::Forms::Label());
			this->lblQuantidadeGPBProduto = (gcnew System::Windows::Forms::Label());
			this->lblPrecoGPBProduto = (gcnew System::Windows::Forms::Label());
			this->lblNomeGPBProduto = (gcnew System::Windows::Forms::Label());
			this->txtNomeExibirProduto = (gcnew System::Windows::Forms::TextBox());
			this->lblNomeExibirProduto = (gcnew System::Windows::Forms::Label());
			this->btnExibirProdutoPanel = (gcnew System::Windows::Forms::Button());
			this->lblExibirProduto = (gcnew System::Windows::Forms::Label());
			this->btnExibirProdutoSair = (gcnew System::Windows::Forms::Button());
			this->pnlExibirEstoque = (gcnew System::Windows::Forms::Panel());
			this->dgvEstoque = (gcnew System::Windows::Forms::DataGridView());
			this->lblExibirEstoque = (gcnew System::Windows::Forms::Label());
			this->btnExibeEstoqueSair = (gcnew System::Windows::Forms::Button());
			this->lblEstoqueVazio = (gcnew System::Windows::Forms::Label());
			this->pnlAdicionar->SuspendLayout();
			this->pnlAlterarQuantidade->SuspendLayout();
			this->pnlRemover->SuspendLayout();
			this->pnlExibirProduto->SuspendLayout();
			this->gpbExibirProduto->SuspendLayout();
			this->pnlExibirEstoque->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEstoque))->BeginInit();
			this->SuspendLayout();
			// 
			// lblEstoque
			// 
			this->lblEstoque->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEstoque->Location = System::Drawing::Point(251, 40);
			this->lblEstoque->Name = L"lblEstoque";
			this->lblEstoque->Size = System::Drawing::Size(372, 29);
			this->lblEstoque->TabIndex = 0;
			this->lblEstoque->Text = L"Controle de Estoque - Supermercado";
			// 
			// btnAdicionar
			// 
			this->btnAdicionar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdicionar->Location = System::Drawing::Point(285, 103);
			this->btnAdicionar->Name = L"btnAdicionar";
			this->btnAdicionar->Size = System::Drawing::Size(307, 53);
			this->btnAdicionar->TabIndex = 1;
			this->btnAdicionar->Text = L"Adicionar produto";
			this->btnAdicionar->UseVisualStyleBackColor = true;
			this->btnAdicionar->Click += gcnew System::EventHandler(this, &frmMenu::btnAdicionar_Click);
			// 
			// btnAlterarQuantidade
			// 
			this->btnAlterarQuantidade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnAlterarQuantidade->Location = System::Drawing::Point(285, 162);
			this->btnAlterarQuantidade->Name = L"btnAlterarQuantidade";
			this->btnAlterarQuantidade->Size = System::Drawing::Size(307, 53);
			this->btnAlterarQuantidade->TabIndex = 2;
			this->btnAlterarQuantidade->Text = L"Alterar quantidade de um produto";
			this->btnAlterarQuantidade->UseVisualStyleBackColor = true;
			this->btnAlterarQuantidade->Click += gcnew System::EventHandler(this, &frmMenu::btnAlterarQuantidade_Click);
			// 
			// btnRemover
			// 
			this->btnRemover->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRemover->Location = System::Drawing::Point(285, 221);
			this->btnRemover->Name = L"btnRemover";
			this->btnRemover->Size = System::Drawing::Size(307, 53);
			this->btnRemover->TabIndex = 3;
			this->btnRemover->Text = L"Remover produto";
			this->btnRemover->UseVisualStyleBackColor = true;
			this->btnRemover->Click += gcnew System::EventHandler(this, &frmMenu::btnRemover_Click);
			// 
			// btnExibirProduto
			// 
			this->btnExibirProduto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExibirProduto->Location = System::Drawing::Point(285, 280);
			this->btnExibirProduto->Name = L"btnExibirProduto";
			this->btnExibirProduto->Size = System::Drawing::Size(307, 53);
			this->btnExibirProduto->TabIndex = 4;
			this->btnExibirProduto->Text = L"Exibir produto";
			this->btnExibirProduto->UseVisualStyleBackColor = true;
			this->btnExibirProduto->Click += gcnew System::EventHandler(this, &frmMenu::btnExibirProduto_Click);
			// 
			// btnExibirEstoque
			// 
			this->btnExibirEstoque->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExibirEstoque->Location = System::Drawing::Point(285, 339);
			this->btnExibirEstoque->Name = L"btnExibirEstoque";
			this->btnExibirEstoque->Size = System::Drawing::Size(307, 53);
			this->btnExibirEstoque->TabIndex = 5;
			this->btnExibirEstoque->Text = L"Exibir estoque";
			this->btnExibirEstoque->UseVisualStyleBackColor = true;
			this->btnExibirEstoque->Click += gcnew System::EventHandler(this, &frmMenu::btnExibirEstoque_Click);
			// 
			// btnSair
			// 
			this->btnSair->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSair->Location = System::Drawing::Point(285, 398);
			this->btnSair->Name = L"btnSair";
			this->btnSair->Size = System::Drawing::Size(307, 53);
			this->btnSair->TabIndex = 6;
			this->btnSair->Text = L"Sair";
			this->btnSair->UseVisualStyleBackColor = true;
			this->btnSair->Click += gcnew System::EventHandler(this, &frmMenu::btnSair_Click);
			// 
			// pnlAdicionar
			// 
			this->pnlAdicionar->Controls->Add(this->lblResultado);
			this->pnlAdicionar->Controls->Add(this->txtQuantidade);
			this->pnlAdicionar->Controls->Add(this->txtPreco);
			this->pnlAdicionar->Controls->Add(this->txtNome);
			this->pnlAdicionar->Controls->Add(this->lblPreco);
			this->pnlAdicionar->Controls->Add(this->lblQuantidade);
			this->pnlAdicionar->Controls->Add(this->lblNome);
			this->pnlAdicionar->Controls->Add(this->btnAdicionarPanel);
			this->pnlAdicionar->Controls->Add(this->lblAdicionar);
			this->pnlAdicionar->Controls->Add(this->btnAdicionarSair);
			this->pnlAdicionar->Location = System::Drawing::Point(24, 66);
			this->pnlAdicionar->Name = L"pnlAdicionar";
			this->pnlAdicionar->Size = System::Drawing::Size(133, 75);
			this->pnlAdicionar->TabIndex = 16;
			// 
			// lblResultado
			// 
			this->lblResultado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblResultado->Location = System::Drawing::Point(218, 359);
			this->lblResultado->Name = L"lblResultado";
			this->lblResultado->Size = System::Drawing::Size(442, 36);
			this->lblResultado->TabIndex = 25;
			this->lblResultado->Text = L"Resultado";
			this->lblResultado->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblResultado->Visible = false;
			// 
			// txtQuantidade
			// 
			this->txtQuantidade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtQuantidade->Location = System::Drawing::Point(337, 220);
			this->txtQuantidade->Name = L"txtQuantidade";
			this->txtQuantidade->Size = System::Drawing::Size(223, 29);
			this->txtQuantidade->TabIndex = 9;
			// 
			// txtPreco
			// 
			this->txtPreco->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPreco->Location = System::Drawing::Point(337, 174);
			this->txtPreco->Name = L"txtPreco";
			this->txtPreco->Size = System::Drawing::Size(223, 29);
			this->txtPreco->TabIndex = 8;
			// 
			// txtNome
			// 
			this->txtNome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNome->Location = System::Drawing::Point(337, 127);
			this->txtNome->Name = L"txtNome";
			this->txtNome->Size = System::Drawing::Size(223, 29);
			this->txtNome->TabIndex = 7;
			// 
			// lblPreco
			// 
			this->lblPreco->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPreco->Location = System::Drawing::Point(252, 174);
			this->lblPreco->Name = L"lblPreco";
			this->lblPreco->Size = System::Drawing::Size(79, 29);
			this->lblPreco->TabIndex = 21;
			this->lblPreco->Text = L"Preço:";
			this->lblPreco->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblQuantidade
			// 
			this->lblQuantidade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuantidade->Location = System::Drawing::Point(214, 221);
			this->lblQuantidade->Name = L"lblQuantidade";
			this->lblQuantidade->Size = System::Drawing::Size(117, 29);
			this->lblQuantidade->TabIndex = 20;
			this->lblQuantidade->Text = L"Quantidade:";
			this->lblQuantidade->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblNome
			// 
			this->lblNome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNome->Location = System::Drawing::Point(252, 127);
			this->lblNome->Name = L"lblNome";
			this->lblNome->Size = System::Drawing::Size(79, 29);
			this->lblNome->TabIndex = 19;
			this->lblNome->Text = L"Nome:";
			this->lblNome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnAdicionarPanel
			// 
			this->btnAdicionarPanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdicionarPanel->Location = System::Drawing::Point(346, 280);
			this->btnAdicionarPanel->Name = L"btnAdicionarPanel";
			this->btnAdicionarPanel->Size = System::Drawing::Size(199, 40);
			this->btnAdicionarPanel->TabIndex = 10;
			this->btnAdicionarPanel->Text = L"Adicionar produto";
			this->btnAdicionarPanel->UseVisualStyleBackColor = true;
			this->btnAdicionarPanel->Click += gcnew System::EventHandler(this, &frmMenu::btnAdicionarPanel_Click);
			// 
			// lblAdicionar
			// 
			this->lblAdicionar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAdicionar->Location = System::Drawing::Point(251, 40);
			this->lblAdicionar->Name = L"lblAdicionar";
			this->lblAdicionar->Size = System::Drawing::Size(372, 29);
			this->lblAdicionar->TabIndex = 17;
			this->lblAdicionar->Text = L"Adicionar produto";
			this->lblAdicionar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnAdicionarSair
			// 
			this->btnAdicionarSair->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdicionarSair->Location = System::Drawing::Point(749, 463);
			this->btnAdicionarSair->Name = L"btnAdicionarSair";
			this->btnAdicionarSair->Size = System::Drawing::Size(91, 37);
			this->btnAdicionarSair->TabIndex = 11;
			this->btnAdicionarSair->Text = L"Voltar";
			this->btnAdicionarSair->UseVisualStyleBackColor = true;
			this->btnAdicionarSair->Click += gcnew System::EventHandler(this, &frmMenu::btnAdicionarSair_Click);
			// 
			// pnlAlterarQuantidade
			// 
			this->pnlAlterarQuantidade->Controls->Add(this->lblResultadoQuantidade);
			this->pnlAlterarQuantidade->Controls->Add(this->txtNomeAlterar);
			this->pnlAlterarQuantidade->Controls->Add(this->txtQuantidadeAlterar);
			this->pnlAlterarQuantidade->Controls->Add(this->lblQuantidadeAlterar);
			this->pnlAlterarQuantidade->Controls->Add(this->lblNomeAlterar);
			this->pnlAlterarQuantidade->Controls->Add(this->btnAlterarPanel);
			this->pnlAlterarQuantidade->Controls->Add(this->lblAlterarQuantidade);
			this->pnlAlterarQuantidade->Controls->Add(this->btnAlterarQuantidadeSair);
			this->pnlAlterarQuantidade->Location = System::Drawing::Point(24, 147);
			this->pnlAlterarQuantidade->Name = L"pnlAlterarQuantidade";
			this->pnlAlterarQuantidade->Size = System::Drawing::Size(133, 75);
			this->pnlAlterarQuantidade->TabIndex = 17;
			// 
			// lblResultadoQuantidade
			// 
			this->lblResultadoQuantidade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblResultadoQuantidade->Location = System::Drawing::Point(251, 295);
			this->lblResultadoQuantidade->Name = L"lblResultadoQuantidade";
			this->lblResultadoQuantidade->Size = System::Drawing::Size(401, 29);
			this->lblResultadoQuantidade->TabIndex = 29;
			this->lblResultadoQuantidade->Text = L"Resultado";
			this->lblResultadoQuantidade->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblResultadoQuantidade->Visible = false;
			// 
			// txtNomeAlterar
			// 
			this->txtNomeAlterar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNomeAlterar->Location = System::Drawing::Point(337, 110);
			this->txtNomeAlterar->Name = L"txtNomeAlterar";
			this->txtNomeAlterar->Size = System::Drawing::Size(231, 29);
			this->txtNomeAlterar->TabIndex = 12;
			// 
			// txtQuantidadeAlterar
			// 
			this->txtQuantidadeAlterar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtQuantidadeAlterar->Location = System::Drawing::Point(337, 153);
			this->txtQuantidadeAlterar->Name = L"txtQuantidadeAlterar";
			this->txtQuantidadeAlterar->Size = System::Drawing::Size(231, 29);
			this->txtQuantidadeAlterar->TabIndex = 13;
			// 
			// lblQuantidadeAlterar
			// 
			this->lblQuantidadeAlterar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblQuantidadeAlterar->Location = System::Drawing::Point(165, 153);
			this->lblQuantidadeAlterar->Name = L"lblQuantidadeAlterar";
			this->lblQuantidadeAlterar->Size = System::Drawing::Size(166, 29);
			this->lblQuantidadeAlterar->TabIndex = 28;
			this->lblQuantidadeAlterar->Text = L"Nova quantidade:";
			this->lblQuantidadeAlterar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblNomeAlterar
			// 
			this->lblNomeAlterar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNomeAlterar->Location = System::Drawing::Point(252, 110);
			this->lblNomeAlterar->Name = L"lblNomeAlterar";
			this->lblNomeAlterar->Size = System::Drawing::Size(79, 29);
			this->lblNomeAlterar->TabIndex = 27;
			this->lblNomeAlterar->Text = L"Nome:";
			this->lblNomeAlterar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnAlterarPanel
			// 
			this->btnAlterarPanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAlterarPanel->Location = System::Drawing::Point(358, 209);
			this->btnAlterarPanel->Name = L"btnAlterarPanel";
			this->btnAlterarPanel->Size = System::Drawing::Size(199, 40);
			this->btnAlterarPanel->TabIndex = 14;
			this->btnAlterarPanel->Text = L"Alterar quantidade";
			this->btnAlterarPanel->UseVisualStyleBackColor = true;
			this->btnAlterarPanel->Click += gcnew System::EventHandler(this, &frmMenu::btnAlterarPanel_Click);
			// 
			// lblAlterarQuantidade
			// 
			this->lblAlterarQuantidade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblAlterarQuantidade->Location = System::Drawing::Point(259, 38);
			this->lblAlterarQuantidade->Name = L"lblAlterarQuantidade";
			this->lblAlterarQuantidade->Size = System::Drawing::Size(372, 29);
			this->lblAlterarQuantidade->TabIndex = 25;
			this->lblAlterarQuantidade->Text = L"Alterar quantidade";
			this->lblAlterarQuantidade->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnAlterarQuantidadeSair
			// 
			this->btnAlterarQuantidadeSair->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnAlterarQuantidadeSair->Location = System::Drawing::Point(749, 463);
			this->btnAlterarQuantidadeSair->Name = L"btnAlterarQuantidadeSair";
			this->btnAlterarQuantidadeSair->Size = System::Drawing::Size(91, 37);
			this->btnAlterarQuantidadeSair->TabIndex = 15;
			this->btnAlterarQuantidadeSair->Text = L"Voltar";
			this->btnAlterarQuantidadeSair->UseVisualStyleBackColor = true;
			this->btnAlterarQuantidadeSair->Click += gcnew System::EventHandler(this, &frmMenu::btnAlterarQuantidadeSair_Click);
			// 
			// pnlRemover
			// 
			this->pnlRemover->Controls->Add(this->lblResultadoRemover);
			this->pnlRemover->Controls->Add(this->txtNomeRemover);
			this->pnlRemover->Controls->Add(this->lblRemoverNome);
			this->pnlRemover->Controls->Add(this->btnRemoverPanel);
			this->pnlRemover->Controls->Add(this->lblRemover);
			this->pnlRemover->Controls->Add(this->btnRemoverSair);
			this->pnlRemover->Location = System::Drawing::Point(24, 228);
			this->pnlRemover->Name = L"pnlRemover";
			this->pnlRemover->Size = System::Drawing::Size(133, 75);
			this->pnlRemover->TabIndex = 18;
			// 
			// lblResultadoRemover
			// 
			this->lblResultadoRemover->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblResultadoRemover->Location = System::Drawing::Point(240, 242);
			this->lblResultadoRemover->Name = L"lblResultadoRemover";
			this->lblResultadoRemover->Size = System::Drawing::Size(372, 29);
			this->lblResultadoRemover->TabIndex = 37;
			this->lblResultadoRemover->Text = L"Resultado";
			this->lblResultadoRemover->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblResultadoRemover->Visible = false;
			// 
			// txtNomeRemover
			// 
			this->txtNomeRemover->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNomeRemover->Location = System::Drawing::Point(356, 103);
			this->txtNomeRemover->Name = L"txtNomeRemover";
			this->txtNomeRemover->Size = System::Drawing::Size(223, 29);
			this->txtNomeRemover->TabIndex = 16;
			// 
			// lblRemoverNome
			// 
			this->lblRemoverNome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRemoverNome->Location = System::Drawing::Point(271, 103);
			this->lblRemoverNome->Name = L"lblRemoverNome";
			this->lblRemoverNome->Size = System::Drawing::Size(79, 29);
			this->lblRemoverNome->TabIndex = 36;
			this->lblRemoverNome->Text = L"Nome:";
			this->lblRemoverNome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnRemoverPanel
			// 
			this->btnRemoverPanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRemoverPanel->Location = System::Drawing::Point(365, 162);
			this->btnRemoverPanel->Name = L"btnRemoverPanel";
			this->btnRemoverPanel->Size = System::Drawing::Size(199, 40);
			this->btnRemoverPanel->TabIndex = 17;
			this->btnRemoverPanel->Text = L"Remover produto";
			this->btnRemoverPanel->UseVisualStyleBackColor = true;
			this->btnRemoverPanel->Click += gcnew System::EventHandler(this, &frmMenu::btnRemoverPanel_Click);
			// 
			// lblRemover
			// 
			this->lblRemover->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRemover->Location = System::Drawing::Point(251, 40);
			this->lblRemover->Name = L"lblRemover";
			this->lblRemover->Size = System::Drawing::Size(372, 29);
			this->lblRemover->TabIndex = 34;
			this->lblRemover->Text = L"Remover produto";
			this->lblRemover->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnRemoverSair
			// 
			this->btnRemoverSair->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRemoverSair->Location = System::Drawing::Point(749, 463);
			this->btnRemoverSair->Name = L"btnRemoverSair";
			this->btnRemoverSair->Size = System::Drawing::Size(91, 37);
			this->btnRemoverSair->TabIndex = 18;
			this->btnRemoverSair->Text = L"Voltar";
			this->btnRemoverSair->UseVisualStyleBackColor = true;
			this->btnRemoverSair->Click += gcnew System::EventHandler(this, &frmMenu::btnRemoverSair_Click);
			// 
			// pnlExibirProduto
			// 
			this->pnlExibirProduto->Controls->Add(this->lblResultadoProduto);
			this->pnlExibirProduto->Controls->Add(this->gpbExibirProduto);
			this->pnlExibirProduto->Controls->Add(this->txtNomeExibirProduto);
			this->pnlExibirProduto->Controls->Add(this->lblNomeExibirProduto);
			this->pnlExibirProduto->Controls->Add(this->btnExibirProdutoPanel);
			this->pnlExibirProduto->Controls->Add(this->lblExibirProduto);
			this->pnlExibirProduto->Controls->Add(this->btnExibirProdutoSair);
			this->pnlExibirProduto->Location = System::Drawing::Point(24, 309);
			this->pnlExibirProduto->Name = L"pnlExibirProduto";
			this->pnlExibirProduto->Size = System::Drawing::Size(133, 75);
			this->pnlExibirProduto->TabIndex = 39;
			// 
			// lblResultadoProduto
			// 
			this->lblResultadoProduto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblResultadoProduto->Location = System::Drawing::Point(242, 221);
			this->lblResultadoProduto->Name = L"lblResultadoProduto";
			this->lblResultadoProduto->Size = System::Drawing::Size(372, 29);
			this->lblResultadoProduto->TabIndex = 37;
			this->lblResultadoProduto->Text = L"Resultado";
			this->lblResultadoProduto->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblResultadoProduto->Visible = false;
			// 
			// gpbExibirProduto
			// 
			this->gpbExibirProduto->BackColor = System::Drawing::SystemColors::ControlLight;
			this->gpbExibirProduto->Controls->Add(this->lblExibeQuantidade);
			this->gpbExibirProduto->Controls->Add(this->lblExibePreco);
			this->gpbExibirProduto->Controls->Add(this->lblExibeNome);
			this->gpbExibirProduto->Controls->Add(this->lblQuantidadeGPBProduto);
			this->gpbExibirProduto->Controls->Add(this->lblPrecoGPBProduto);
			this->gpbExibirProduto->Controls->Add(this->lblNomeGPBProduto);
			this->gpbExibirProduto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gpbExibirProduto->Location = System::Drawing::Point(242, 268);
			this->gpbExibirProduto->Name = L"gpbExibirProduto";
			this->gpbExibirProduto->Size = System::Drawing::Size(400, 191);
			this->gpbExibirProduto->TabIndex = 21;
			this->gpbExibirProduto->TabStop = false;
			this->gpbExibirProduto->Text = L"Dados do produto";
			// 
			// lblExibeQuantidade
			// 
			this->lblExibeQuantidade->AutoSize = true;
			this->lblExibeQuantidade->Location = System::Drawing::Point(126, 129);
			this->lblExibeQuantidade->Name = L"lblExibeQuantidade";
			this->lblExibeQuantidade->Size = System::Drawing::Size(104, 24);
			this->lblExibeQuantidade->TabIndex = 5;
			this->lblExibeQuantidade->Text = L"quantidade";
			// 
			// lblExibePreco
			// 
			this->lblExibePreco->AutoSize = true;
			this->lblExibePreco->Location = System::Drawing::Point(126, 89);
			this->lblExibePreco->Name = L"lblExibePreco";
			this->lblExibePreco->Size = System::Drawing::Size(59, 24);
			this->lblExibePreco->TabIndex = 4;
			this->lblExibePreco->Text = L"preço";
			// 
			// lblExibeNome
			// 
			this->lblExibeNome->AutoSize = true;
			this->lblExibeNome->Location = System::Drawing::Point(126, 45);
			this->lblExibeNome->Name = L"lblExibeNome";
			this->lblExibeNome->Size = System::Drawing::Size(59, 24);
			this->lblExibeNome->TabIndex = 3;
			this->lblExibeNome->Text = L"nome";
			// 
			// lblQuantidadeGPBProduto
			// 
			this->lblQuantidadeGPBProduto->AutoSize = true;
			this->lblQuantidadeGPBProduto->Location = System::Drawing::Point(7, 129);
			this->lblQuantidadeGPBProduto->Name = L"lblQuantidadeGPBProduto";
			this->lblQuantidadeGPBProduto->Size = System::Drawing::Size(113, 24);
			this->lblQuantidadeGPBProduto->TabIndex = 2;
			this->lblQuantidadeGPBProduto->Text = L"Quantidade:";
			// 
			// lblPrecoGPBProduto
			// 
			this->lblPrecoGPBProduto->AutoSize = true;
			this->lblPrecoGPBProduto->Location = System::Drawing::Point(55, 88);
			this->lblPrecoGPBProduto->Name = L"lblPrecoGPBProduto";
			this->lblPrecoGPBProduto->Size = System::Drawing::Size(65, 24);
			this->lblPrecoGPBProduto->TabIndex = 1;
			this->lblPrecoGPBProduto->Text = L"Preço:";
			// 
			// lblNomeGPBProduto
			// 
			this->lblNomeGPBProduto->AutoSize = true;
			this->lblNomeGPBProduto->Location = System::Drawing::Point(53, 45);
			this->lblNomeGPBProduto->Name = L"lblNomeGPBProduto";
			this->lblNomeGPBProduto->Size = System::Drawing::Size(67, 24);
			this->lblNomeGPBProduto->TabIndex = 0;
			this->lblNomeGPBProduto->Text = L"Nome:";
			// 
			// txtNomeExibirProduto
			// 
			this->txtNomeExibirProduto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtNomeExibirProduto->Location = System::Drawing::Point(347, 93);
			this->txtNomeExibirProduto->Name = L"txtNomeExibirProduto";
			this->txtNomeExibirProduto->Size = System::Drawing::Size(223, 29);
			this->txtNomeExibirProduto->TabIndex = 19;
			// 
			// lblNomeExibirProduto
			// 
			this->lblNomeExibirProduto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblNomeExibirProduto->Location = System::Drawing::Point(262, 93);
			this->lblNomeExibirProduto->Name = L"lblNomeExibirProduto";
			this->lblNomeExibirProduto->Size = System::Drawing::Size(79, 29);
			this->lblNomeExibirProduto->TabIndex = 36;
			this->lblNomeExibirProduto->Text = L"Nome:";
			this->lblNomeExibirProduto->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnExibirProdutoPanel
			// 
			this->btnExibirProdutoPanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnExibirProdutoPanel->Location = System::Drawing::Point(356, 152);
			this->btnExibirProdutoPanel->Name = L"btnExibirProdutoPanel";
			this->btnExibirProdutoPanel->Size = System::Drawing::Size(199, 40);
			this->btnExibirProdutoPanel->TabIndex = 20;
			this->btnExibirProdutoPanel->Text = L"Exibir produto";
			this->btnExibirProdutoPanel->UseVisualStyleBackColor = true;
			this->btnExibirProdutoPanel->Click += gcnew System::EventHandler(this, &frmMenu::btnExibirProdutoPanel_Click);
			// 
			// lblExibirProduto
			// 
			this->lblExibirProduto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblExibirProduto->Location = System::Drawing::Point(242, 30);
			this->lblExibirProduto->Name = L"lblExibirProduto";
			this->lblExibirProduto->Size = System::Drawing::Size(372, 29);
			this->lblExibirProduto->TabIndex = 34;
			this->lblExibirProduto->Text = L"Exibir produto";
			this->lblExibirProduto->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnExibirProdutoSair
			// 
			this->btnExibirProdutoSair->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnExibirProdutoSair->Location = System::Drawing::Point(749, 463);
			this->btnExibirProdutoSair->Name = L"btnExibirProdutoSair";
			this->btnExibirProdutoSair->Size = System::Drawing::Size(91, 37);
			this->btnExibirProdutoSair->TabIndex = 22;
			this->btnExibirProdutoSair->Text = L"Voltar";
			this->btnExibirProdutoSair->UseVisualStyleBackColor = true;
			this->btnExibirProdutoSair->Click += gcnew System::EventHandler(this, &frmMenu::btnExibirProdutoSair_Click);
			// 
			// pnlExibirEstoque
			// 
			this->pnlExibirEstoque->Controls->Add(this->dgvEstoque);
			this->pnlExibirEstoque->Controls->Add(this->lblExibirEstoque);
			this->pnlExibirEstoque->Controls->Add(this->btnExibeEstoqueSair);
			this->pnlExibirEstoque->Controls->Add(this->lblEstoqueVazio);
			this->pnlExibirEstoque->Location = System::Drawing::Point(24, 390);
			this->pnlExibirEstoque->Name = L"pnlExibirEstoque";
			this->pnlExibirEstoque->Size = System::Drawing::Size(133, 75);
			this->pnlExibirEstoque->TabIndex = 40;
			// 
			// dgvEstoque
			// 
			this->dgvEstoque->AllowUserToAddRows = false;
			this->dgvEstoque->AllowUserToDeleteRows = false;
			this->dgvEstoque->AllowUserToResizeColumns = false;
			this->dgvEstoque->AllowUserToResizeRows = false;
			this->dgvEstoque->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvEstoque->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEstoque->Location = System::Drawing::Point(130, 84);
			this->dgvEstoque->Name = L"dgvEstoque";
			this->dgvEstoque->ReadOnly = true;
			this->dgvEstoque->Size = System::Drawing::Size(604, 346);
			this->dgvEstoque->TabIndex = 23;
			// 
			// lblExibirEstoque
			// 
			this->lblExibirEstoque->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblExibirEstoque->Location = System::Drawing::Point(251, 40);
			this->lblExibirEstoque->Name = L"lblExibirEstoque";
			this->lblExibirEstoque->Size = System::Drawing::Size(372, 29);
			this->lblExibirEstoque->TabIndex = 34;
			this->lblExibirEstoque->Text = L"Exibir estoque";
			this->lblExibirEstoque->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnExibeEstoqueSair
			// 
			this->btnExibeEstoqueSair->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnExibeEstoqueSair->Location = System::Drawing::Point(749, 463);
			this->btnExibeEstoqueSair->Name = L"btnExibeEstoqueSair";
			this->btnExibeEstoqueSair->Size = System::Drawing::Size(91, 37);
			this->btnExibeEstoqueSair->TabIndex = 24;
			this->btnExibeEstoqueSair->Text = L"Voltar";
			this->btnExibeEstoqueSair->UseVisualStyleBackColor = true;
			this->btnExibeEstoqueSair->Click += gcnew System::EventHandler(this, &frmMenu::btnExibeEstoqueSair_Click);
			// 
			// lblEstoqueVazio
			// 
			this->lblEstoqueVazio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEstoqueVazio->ForeColor = System::Drawing::Color::Red;
			this->lblEstoqueVazio->Location = System::Drawing::Point(251, 245);
			this->lblEstoqueVazio->Name = L"lblEstoqueVazio";
			this->lblEstoqueVazio->Size = System::Drawing::Size(372, 29);
			this->lblEstoqueVazio->TabIndex = 35;
			this->lblEstoqueVazio->Text = L"Estoque vazio!";
			this->lblEstoqueVazio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblEstoqueVazio->Visible = false;
			// 
			// frmMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(852, 512);
			this->Controls->Add(this->pnlExibirEstoque);
			this->Controls->Add(this->pnlRemover);
			this->Controls->Add(this->pnlAlterarQuantidade);
			this->Controls->Add(this->pnlAdicionar);
			this->Controls->Add(this->pnlExibirProduto);
			this->Controls->Add(this->btnExibirProduto);
			this->Controls->Add(this->btnRemover);
			this->Controls->Add(this->btnAlterarQuantidade);
			this->Controls->Add(this->btnAdicionar);
			this->Controls->Add(this->lblEstoque);
			this->Controls->Add(this->btnSair);
			this->Controls->Add(this->btnExibirEstoque);
			this->Name = L"frmMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Controle de Estoque - Supermercado";
			this->Load += gcnew System::EventHandler(this, &frmMenu::frmMenu_Load);
			this->pnlAdicionar->ResumeLayout(false);
			this->pnlAdicionar->PerformLayout();
			this->pnlAlterarQuantidade->ResumeLayout(false);
			this->pnlAlterarQuantidade->PerformLayout();
			this->pnlRemover->ResumeLayout(false);
			this->pnlRemover->PerformLayout();
			this->pnlExibirProduto->ResumeLayout(false);
			this->pnlExibirProduto->PerformLayout();
			this->gpbExibirProduto->ResumeLayout(false);
			this->gpbExibirProduto->PerformLayout();
			this->pnlExibirEstoque->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEstoque))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void frmMenu_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void btnAdicionar_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlAdicionar->Dock = DockStyle::Fill;
		pnlAdicionar->Show();
	}

	private: System::Void btnAdicionarPanel_Click(System::Object^ sender, System::EventArgs^ e) {
		Produto produto;
		bool ok;

		msclr::interop::marshal_context context;
		produto.nome = context.marshal_as<std::string>(txtNome->Text);
		produto.preco = Convert::ToDouble(txtPreco->Text);
		produto.quantidade = Convert::ToInt32(txtQuantidade->Text);
		insere(&estoque, produto, &ok);

		lblResultado->Visible = true;

		if (ok) {
			lblResultado->ForeColor = System::Drawing::Color::Green;
			lblResultado->Text = "Produto adicionado com sucesso!";;
		} else {
			lblResultado->ForeColor= System::Drawing::Color::Red;
			lblResultado->Text = "Falha ao adicionar o produto";
		}
	}

	private: System::Void btnAdicionarSair_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlAdicionar->Hide();
		
		txtNome->Text = "";
		txtPreco->Text = "";
		txtQuantidade->Text = "";
		lblResultado->Visible = false;

		this->Show();
	}

	private: System::Void btnAlterarQuantidade_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlAlterarQuantidade->Dock = DockStyle::Fill;
		pnlAlterarQuantidade->Show();
	}

	private: System::Void btnAlterarPanel_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string nome = context.marshal_as<std::string>(txtNomeAlterar->Text);
		int quantidade = Convert::ToInt32(txtQuantidadeAlterar->Text);
		bool ok;

		altera_quantidade(&estoque, nome, quantidade, &ok);

		lblResultadoQuantidade->Visible = true;

		if (ok) {
			lblResultadoQuantidade->ForeColor = System::Drawing::Color::Green;
			lblResultadoQuantidade->Text = "Quantidade alterada com sucesso!";;
		}
		else {
			lblResultadoQuantidade->ForeColor = System::Drawing::Color::Red;
			lblResultadoQuantidade->Text = "Falha ao alterar a quantidade";
		}
	}

	private: System::Void btnAlterarQuantidadeSair_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlAlterarQuantidade->Hide();

		txtNomeAlterar->Text = "";
		txtQuantidadeAlterar->Text = "";
		lblResultadoQuantidade->Visible = false;

		this->Show();
	}

	private: System::Void btnRemover_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlRemover->Dock = DockStyle::Fill;
		pnlRemover->Show();
	}

	private: System::Void btnRemoverPanel_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string nome = context.marshal_as<std::string>(txtNomeRemover->Text);
		bool ok;

		retira(&estoque, nome, &ok);

		lblResultadoRemover->Visible = true;

		if (ok) {
			lblResultadoRemover->ForeColor = System::Drawing::Color::Green;
			lblResultadoRemover->Text = "Produto removido com sucesso!";;
		}
		else {
			lblResultadoRemover->ForeColor = System::Drawing::Color::Red;
			lblResultadoRemover->Text = "Falha ao remover o produto";
		}
	}

	private: System::Void btnRemoverSair_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlRemover->Hide();

		txtNomeRemover->Text = "";
		lblResultadoRemover->Visible = false;

		this->Show();
	}

	private: System::Void btnExibirProduto_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlExibirProduto->Dock = DockStyle::Fill;
		pnlExibirProduto->Show();
	}

	private: System::Void btnExibirProdutoPanel_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string nome = context.marshal_as<std::string>(txtNomeExibirProduto->Text);
		bool ok;

		ProdutoPtr produto = retorna_produto(&estoque, nome, &ok);

		lblResultadoProduto->Visible = true;

		if (ok) {
			gpbExibirProduto->Visible = true;
			lblResultadoProduto->ForeColor = System::Drawing::Color::Green;
			lblResultadoProduto->Text = "Produto econtrado no estoque!";

			lblExibeNome->Text = gcnew String(produto->nome.c_str());
			lblExibePreco->Text = Convert::ToString(produto->preco);
			lblExibeQuantidade->Text = Convert::ToString(produto->quantidade);
		} else {
			lblResultadoProduto->ForeColor = System::Drawing::Color::Red;
			lblResultadoProduto->Text = "Produto não econtrado no estoque";
		}
	}

	private: System::Void btnExibirProdutoSair_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlExibirProduto->Hide();

		txtNomeExibirProduto->Text = "";
		lblExibeNome->Text = "";
		lblExibePreco->Text = "";
		lblExibeQuantidade->Text = "";
		lblResultadoProduto->Visible = false;
		gpbExibirProduto->Visible = false;

		this->Show();
	}

	private: System::Void btnExibirEstoque_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlExibirEstoque->Dock = DockStyle::Fill;
		pnlExibirEstoque->Show();

		if (vazio(&estoque)) {
			dgvEstoque->Visible = false;
			lblEstoqueVazio->Visible = true;
		} else {
			dgvEstoque->Visible = true;

			DataTable^ tabela = gcnew DataTable();
			tabela->Columns->Add("Nome");
			tabela->Columns->Add("Preço");
			tabela->Columns->Add("Quantidade");

			ProdutoPtr p_aux = estoque.primeiro;

			do {
				String^ nome = gcnew String(p_aux->nome.c_str());
				double preco = p_aux->preco;
				int quantidade = p_aux->quantidade;

				tabela->Rows->Add(nome, preco, quantidade);

				p_aux = p_aux->proximo;
			} while (p_aux != NULL);

			dgvEstoque->DataSource = tabela;
		}
	}

	private: System::Void btnExibeEstoqueSair_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlExibirEstoque->Hide();
		this->Show();
	}

	private: System::Void btnSair_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Tem certeza que quer finalizar o programa?", "Sair", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			this->Close();
			Application::Exit();
		}
	}
};
}
