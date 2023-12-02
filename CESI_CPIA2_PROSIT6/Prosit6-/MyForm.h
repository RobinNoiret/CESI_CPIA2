#pragma once
#include "CLservice.h"

namespace Prosit6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r sum e de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis es.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ AffichageDonnées;
	private: System::Windows::Forms::Button^ BTN_Connexion;
	private: System::Windows::Forms::Button^ BTN_Inserer;
	private: System::Windows::Forms::Button^ BTN_Suppr;
	protected:

	protected:




	private: System::Windows::Forms::Button^ BTN_MiseAJour;
	private: System::Windows::Forms::TextBox^ Txt_Id;

	private: System::Windows::Forms::TextBox^ Txt_Nom;
	private: System::Windows::Forms::TextBox^ Txt_Prenom;







	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::TextBox^ Txt_Adresse;
	private: System::Windows::Forms::TextBox^ Txt_Ville;
	private: System::Windows::Forms::TextBox^ Txt_CP;




	private: System::Windows::Forms::Label^ Lab_ID;
	private: System::Windows::Forms::Label^ Lab_Nom;
	private: System::Windows::Forms::Label^ Lab_Prenom;
	private: System::Windows::Forms::Label^ Lab_Adresse;
	private: System::Windows::Forms::Label^ Lab_Ville;
	private: System::Windows::Forms::Label^ Lab_CP;






	protected:

	private:
		/// <summary>
		/// Variable n cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m thode avec l' diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->AffichageDonnées = (gcnew System::Windows::Forms::DataGridView());
			this->BTN_Connexion = (gcnew System::Windows::Forms::Button());
			this->BTN_Inserer = (gcnew System::Windows::Forms::Button());
			this->BTN_Suppr = (gcnew System::Windows::Forms::Button());
			this->BTN_MiseAJour = (gcnew System::Windows::Forms::Button());
			this->Txt_Id = (gcnew System::Windows::Forms::TextBox());
			this->Txt_Nom = (gcnew System::Windows::Forms::TextBox());
			this->Txt_Prenom = (gcnew System::Windows::Forms::TextBox());
			this->Txt_Adresse = (gcnew System::Windows::Forms::TextBox());
			this->Txt_Ville = (gcnew System::Windows::Forms::TextBox());
			this->Txt_CP = (gcnew System::Windows::Forms::TextBox());
			this->Lab_ID = (gcnew System::Windows::Forms::Label());
			this->Lab_Nom = (gcnew System::Windows::Forms::Label());
			this->Lab_Prenom = (gcnew System::Windows::Forms::Label());
			this->Lab_Adresse = (gcnew System::Windows::Forms::Label());
			this->Lab_Ville = (gcnew System::Windows::Forms::Label());
			this->Lab_CP = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AffichageDonnées))->BeginInit();
			this->SuspendLayout();
			// 
			// AffichageDonnées
			// 
			this->AffichageDonnées->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->AffichageDonnées->Location = System::Drawing::Point(16, 15);
			this->AffichageDonnées->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->AffichageDonnées->Name = L"AffichageDonnées";
			this->AffichageDonnées->RowHeadersWidth = 51;
			this->AffichageDonnées->Size = System::Drawing::Size(629, 185);
			this->AffichageDonnées->TabIndex = 0;
			// 
			// BTN_Connexion
			// 
			this->BTN_Connexion->Location = System::Drawing::Point(20, 225);
			this->BTN_Connexion->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->BTN_Connexion->Name = L"BTN_Connexion";
			this->BTN_Connexion->Size = System::Drawing::Size(100, 159);
			this->BTN_Connexion->TabIndex = 1;
			this->BTN_Connexion->Text = L"Connexion..";
			this->BTN_Connexion->UseVisualStyleBackColor = true;
			this->BTN_Connexion->Click += gcnew System::EventHandler(this, &MyForm::btn_load_Click);
			// 
			// BTN_Inserer
			// 
			this->BTN_Inserer->Location = System::Drawing::Point(128, 225);
			this->BTN_Inserer->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->BTN_Inserer->Name = L"BTN_Inserer";
			this->BTN_Inserer->Size = System::Drawing::Size(100, 46);
			this->BTN_Inserer->TabIndex = 2;
			this->BTN_Inserer->Text = L"Insérer";
			this->BTN_Inserer->UseVisualStyleBackColor = true;
			this->BTN_Inserer->Click += gcnew System::EventHandler(this, &MyForm::btn_insert_Click);
			// 
			// BTN_Suppr
			// 
			this->BTN_Suppr->Location = System::Drawing::Point(128, 338);
			this->BTN_Suppr->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->BTN_Suppr->Name = L"BTN_Suppr";
			this->BTN_Suppr->Size = System::Drawing::Size(100, 46);
			this->BTN_Suppr->TabIndex = 3;
			this->BTN_Suppr->Text = L"Supprimer";
			this->BTN_Suppr->UseVisualStyleBackColor = true;
			// 
			// BTN_MiseAJour
			// 
			this->BTN_MiseAJour->Location = System::Drawing::Point(128, 282);
			this->BTN_MiseAJour->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->BTN_MiseAJour->Name = L"BTN_MiseAJour";
			this->BTN_MiseAJour->Size = System::Drawing::Size(100, 46);
			this->BTN_MiseAJour->TabIndex = 4;
			this->BTN_MiseAJour->Text = L"Mise à jour";
			this->BTN_MiseAJour->UseVisualStyleBackColor = true;
			// 
			// Txt_Id
			// 
			this->Txt_Id->Location = System::Drawing::Point(337, 225);
			this->Txt_Id->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Txt_Id->Name = L"Txt_Id";
			this->Txt_Id->Size = System::Drawing::Size(307, 22);
			this->Txt_Id->TabIndex = 5;
			// 
			// Txt_Nom
			// 
			this->Txt_Nom->Location = System::Drawing::Point(337, 257);
			this->Txt_Nom->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Txt_Nom->Name = L"Txt_Nom";
			this->Txt_Nom->Size = System::Drawing::Size(307, 22);
			this->Txt_Nom->TabIndex = 6;
			// 
			// Txt_Prenom
			// 
			this->Txt_Prenom->Location = System::Drawing::Point(337, 293);
			this->Txt_Prenom->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Txt_Prenom->Name = L"Txt_Prenom";
			this->Txt_Prenom->Size = System::Drawing::Size(307, 22);
			this->Txt_Prenom->TabIndex = 7;
			// 
			// Txt_Adresse
			// 
			this->Txt_Adresse->Location = System::Drawing::Point(337, 327);
			this->Txt_Adresse->Margin = System::Windows::Forms::Padding(4);
			this->Txt_Adresse->Name = L"Txt_Adresse";
			this->Txt_Adresse->Size = System::Drawing::Size(308, 22);
			this->Txt_Adresse->TabIndex = 8;
			// 
			// Txt_Ville
			// 
			this->Txt_Ville->Location = System::Drawing::Point(337, 357);
			this->Txt_Ville->Margin = System::Windows::Forms::Padding(4);
			this->Txt_Ville->Name = L"Txt_Ville";
			this->Txt_Ville->Size = System::Drawing::Size(308, 22);
			this->Txt_Ville->TabIndex = 9;
			// 
			// Txt_CP
			// 
			this->Txt_CP->Location = System::Drawing::Point(337, 387);
			this->Txt_CP->Margin = System::Windows::Forms::Padding(4);
			this->Txt_CP->Name = L"Txt_CP";
			this->Txt_CP->Size = System::Drawing::Size(308, 22);
			this->Txt_CP->TabIndex = 10;
			// 
			// Lab_ID
			// 
			this->Lab_ID->AutoSize = true;
			this->Lab_ID->Location = System::Drawing::Point(237, 228);
			this->Lab_ID->Name = L"Lab_ID";
			this->Lab_ID->Size = System::Drawing::Size(29, 17);
			this->Lab_ID->TabIndex = 11;
			this->Lab_ID->Text = L"ID :";
			this->Lab_ID->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Lab_ID->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// Lab_Nom
			// 
			this->Lab_Nom->AutoSize = true;
			this->Lab_Nom->Location = System::Drawing::Point(237, 262);
			this->Lab_Nom->Name = L"Lab_Nom";
			this->Lab_Nom->Size = System::Drawing::Size(45, 17);
			this->Lab_Nom->TabIndex = 12;
			this->Lab_Nom->Text = L"Nom :";
			this->Lab_Nom->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// Lab_Prenom
			// 
			this->Lab_Prenom->AutoSize = true;
			this->Lab_Prenom->Location = System::Drawing::Point(236, 296);
			this->Lab_Prenom->Name = L"Lab_Prenom";
			this->Lab_Prenom->Size = System::Drawing::Size(65, 17);
			this->Lab_Prenom->TabIndex = 13;
			this->Lab_Prenom->Text = L"Prénom :";
			// 
			// Lab_Adresse
			// 
			this->Lab_Adresse->AutoSize = true;
			this->Lab_Adresse->Location = System::Drawing::Point(236, 327);
			this->Lab_Adresse->Name = L"Lab_Adresse";
			this->Lab_Adresse->Size = System::Drawing::Size(68, 17);
			this->Lab_Adresse->TabIndex = 14;
			this->Lab_Adresse->Text = L"Adresse :";
			// 
			// Lab_Ville
			// 
			this->Lab_Ville->AutoSize = true;
			this->Lab_Ville->Location = System::Drawing::Point(236, 357);
			this->Lab_Ville->Name = L"Lab_Ville";
			this->Lab_Ville->Size = System::Drawing::Size(42, 17);
			this->Lab_Ville->TabIndex = 15;
			this->Lab_Ville->Text = L"Ville :";
			// 
			// Lab_CP
			// 
			this->Lab_CP->AutoSize = true;
			this->Lab_CP->Location = System::Drawing::Point(239, 387);
			this->Lab_CP->Name = L"Lab_CP";
			this->Lab_CP->Size = System::Drawing::Size(91, 17);
			this->Lab_CP->TabIndex = 16;
			this->Lab_CP->Text = L"Code postal :";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(675, 430);
			this->Controls->Add(this->Lab_CP);
			this->Controls->Add(this->Lab_Ville);
			this->Controls->Add(this->Lab_Adresse);
			this->Controls->Add(this->Lab_Prenom);
			this->Controls->Add(this->Lab_Nom);
			this->Controls->Add(this->Lab_ID);
			this->Controls->Add(this->Txt_CP);
			this->Controls->Add(this->Txt_Ville);
			this->Controls->Add(this->Txt_Adresse);
			this->Controls->Add(this->Txt_Prenom);
			this->Controls->Add(this->Txt_Nom);
			this->Controls->Add(this->Txt_Id);
			this->Controls->Add(this->BTN_MiseAJour);
			this->Controls->Add(this->BTN_Suppr);
			this->Controls->Add(this->BTN_Inserer);
			this->Controls->Add(this->BTN_Connexion);
			this->Controls->Add(this->AffichageDonnées);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AffichageDonnées))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUnePersonne(this->txt_nom->Text, this->txt_prenom->Text);
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
