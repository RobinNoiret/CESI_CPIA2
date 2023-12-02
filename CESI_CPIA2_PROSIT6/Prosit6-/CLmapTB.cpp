#include "pch.h"
#include "CLmapTB.h"

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT [id], [nom], [prenom] FROM [Prosit6].[dbo].[Client]";
}
/*
System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT [Prosit6].[dbo].[Adresses].[id], [nom], [prenom], [adresse], [ville], [cp] \
                FROM [Prosit6].[dbo].[Cient] \
                INNER JOIN [Prosit6].[dbo].[Adresses] \
                ON [Prosit6].[dbo].[Client].[id] = [Prosit6_DB].[dbo].[Adresses].[id]";
}*/


System::String^ NS_Comp_Mappage::CLmapTB::Insert(void)
{
	return "INSERT INTO Client (nom, prenom) VALUES('" + this->nom + "','" + this->prenom + "');";
}
System::String^ NS_Comp_Mappage::CLmapTB::Delete(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::CLmapTB::Update(void)
{
	return "";
}
void NS_Comp_Mappage::CLmapTB::setId(int Id)
{
	this->Id = Id;
}
void NS_Comp_Mappage::CLmapTB::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::CLmapTB::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
int NS_Comp_Mappage::CLmapTB::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLmapTB::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmapTB::getPrenom(void) { return this->prenom; }
