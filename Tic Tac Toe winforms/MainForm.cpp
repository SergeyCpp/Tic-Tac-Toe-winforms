#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);


    TicTacToewinforms::MainForm form;
    Application::Run(% form);
}

bool TicTacToewinforms::MainForm::CheckWinner()
{
    //horizontal
    if ((A1->Text == A2->Text) && (A2->Text == A3->Text) && (!A1->Enabled))               winner = true;
    else if ((B1->Text == B2->Text) && (B2->Text == B3->Text) && (!B1->Enabled))          winner = true;
    else if ((C1->Text == C2->Text) && (C2->Text == C3->Text) && (!C1->Enabled))          winner = true;

    //vertical
    else if ((A1->Text == B1->Text) && (B1->Text == C1->Text) && (!A1->Enabled))          winner = true;
    else if ((A2->Text == B2->Text) && (B2->Text == C2->Text) && (!A2->Enabled))          winner = true;
    else if ((A3->Text == B3->Text) && (B3->Text == C3->Text) && (!A3->Enabled))          winner = true;

    //diagonal
    else if ((A1->Text == B2->Text) && (B2->Text == C3->Text) && (!A1->Enabled))          winner = true;
    else if ((A3->Text == B2->Text) && (B2->Text == C1->Text) && (!C1->Enabled))          winner = true;
    
    return winner;
}


System::Void TicTacToewinforms::MainForm::button_click(System::Object^ sender, System::EventArgs^ e)
{
    Button^ b = (Button^)sender;

    turn_count++;

    if (turn)
    {
        TurnLabel->Text = "O";
        b->Text = "X";
    }
    else
    {
        TurnLabel->Text = "X";
        b->Text = "O";
    }

    turn = !turn;
    b->Enabled = false;

    if (CheckWinner() && !turn)
    {
        panel1->Enabled = false;
        MessageBox::Show("Ïîáåäèë X");
    }

    else if (CheckWinner() && turn)
    {
        panel1->Enabled = false;
        MessageBox::Show("Ïîáåäèë O");
    }

    else if (turn_count == 9)
    {
        panel1->Enabled = false;
        MessageBox::Show("Íè÷üÿ");
    }

}

System::Void TicTacToewinforms::MainForm::âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void TicTacToewinforms::MainForm::íîâàÿÈãðàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    turn = true;
    turn_count = 0;
    A1->Enabled = true; A1->Text = "";
    A2->Enabled = true; A2->Text = "";
    A3->Enabled = true; A3->Text = "";
    B1->Enabled = true; B1->Text = "";
    B2->Enabled = true; B2->Text = "";
    B3->Enabled = true; B3->Text = "";
    C1->Enabled = true; C1->Text = "";
    C2->Enabled = true; C2->Text = "";
    C3->Enabled = true; C3->Text = "";
    panel1->Enabled = true;
}
