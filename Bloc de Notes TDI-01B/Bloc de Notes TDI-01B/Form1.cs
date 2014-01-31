using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Printing;
using System.Text;
using System.Windows.Forms;
using System.IO;
using Microsoft.VisualBasic;

namespace Bloc_de_Notes_TDI_01B
{
    public partial class Form1 : Form
    {
        string filename;
        bool flag = false;

        public Form1()
        {
            InitializeComponent();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            lbl_heure.Text = DateTime.Now.ToString();
        }

        private void toolbarToolStripMenuItem_Click(object sender, EventArgs e)
        {
            toolbarToolStripMenuItem.Checked = !toolbarToolStripMenuItem.Checked;
            toolStrip1.Visible = toolbarToolStripMenuItem.Checked;
        }

        private void statusbarToolStripMenuItem_Click(object sender, EventArgs e)
        {
            statusbarToolStripMenuItem.Checked = !statusbarToolStripMenuItem.Checked;
            statusStrip1.Visible = statusbarToolStripMenuItem.Checked;
        }

        private void openToolStripMenuItem_Click(object sender, EventArgs e)
        {

            openFileDialog1.Filter = "Text Files|*.txt";
            openFileDialog1.FileName = String.Empty;

            verifier();

            DialogResult result = openFileDialog1.ShowDialog();
            if (result == DialogResult.OK)
            {
                filename = openFileDialog1.FileName;
                StreamReader sr = new StreamReader(filename);
                //text.Text = File.ReadAllText(filename);
                text.Text = sr.ReadToEnd();
                sr.Close();
                sr = null;
            }


        }

        private void newToolStripMenuItem_Click(object sender, EventArgs e)
        {
            verifier();
            text.Clear();
            flag = false;
        }


        private void saveAsToolStripMenuItem_Click(object sender, EventArgs e)
        {
            saveFileDialog1.Filter = "Text Files|*.txt";
            saveFileDialog1.FileName = String.Empty;
            saveFileDialog1.OverwritePrompt = true;


            DialogResult result = saveFileDialog1.ShowDialog();

            if (result == DialogResult.OK)
            {
                filename = saveFileDialog1.FileName;
                enregistrer();
            }
        }

        private void saveToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (filename == null)
            {
                saveAsToolStripMenuItem_Click(null, null);
            }

            else enregistrer();

        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            verifier();
            Application.Exit();
        }


        private void cutToolStripButton_Click(object sender, EventArgs e)
        {
            text.Text = saveFileDialog1.FileName;
        }

        private void copyToolStripMenuItem_Click(object sender, EventArgs e)
        {
            text.Copy();
        }

        private void pasteToolStripMenuItem_Click(object sender, EventArgs e)
        {
            text.Paste();
        }

        private void cutToolStripMenuItem_Click(object sender, EventArgs e)
        {
            text.Cut();
        }

        private void undoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            text.Undo();
        }

        private void redoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            //text.Redo();
        }

        private void enregistrer()
        {
            StreamWriter sw = new StreamWriter(filename);
            //File.WriteAllText(saveFileDialog1.FileName, text.Text);
            sw.Write(text.Text);
            sw.Close();
            sw = null;
            flag = false;    
        }

        private void verifier()
        {
            if (flag)
            {
                DialogResult result = MessageBox.Show("Voulez-vous sauvegarder le ficher?", "Enregistrer", MessageBoxButtons.YesNo);
                if (result == DialogResult.Yes)
                {
                    saveToolStripMenuItem_Click(null, null);
                }
            }
        }

        private void text_TextChanged(object sender, EventArgs e)
        {
            flag = true;
        }

        private void helpToolStripButton1_Click(object sender, EventArgs e)
        {
            MessageBox.Show("by Issame Kastite","Bloc de Notes");
        }

        private void printToolStripButton1_Click(object sender, EventArgs e)
        {

        }

        private void selectAllToolStripMenuItem_Click(object sender, EventArgs e)
        {
            text.SelectAll();
        }

        private void customizeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            DialogResult result = fontDialog1.ShowDialog();

            if (result == DialogResult.OK)
            {
                text.Font = fontDialog1.Font;
            }
        }

        private void optionsToolStripMenuItem_Click(object sender, EventArgs e)
        {
            DialogResult result = colorDialog1.ShowDialog();

            if (result == DialogResult.OK)
            {
                text.ForeColor = colorDialog1.Color;
            }
        }

        private void rechercheStripMenuItem1_Click(object sender, EventArgs e)
        {
            int i;
            string mot;

            mot = Interaction.InputBox("Mot a rechercher", "Recherche", "");
            i = text.Text.ToUpper().IndexOf(mot.ToUpper(), text.SelectionStart + text.SelectionLength);

            if (i == -1)
            {
                MessageBox.Show("Mot introuvable");
            }

            else
            {

                text.SelectionStart = i;
                text.SelectionLength = mot.Length;
            }
        }

        private void printToolStripMenuItem_Click(object sender, EventArgs e)
        {
 
            if (printDialog1.ShowDialog() == DialogResult.OK)
            {
                printDocument1.PrinterSettings = printDialog1.PrinterSettings;
                printDocument1.Print();
            }
        }

        private void printDocument1_PrintPage(object sender, PrintPageEventArgs e)
        {

            Brush textcolor = new SolidBrush(text.ForeColor);

            e.Graphics.DrawString(text.Text, text.Font, textcolor, 100,100);
        }


    }
}
