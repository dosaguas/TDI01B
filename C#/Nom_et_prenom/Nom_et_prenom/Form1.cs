using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace Nom_et_prenom
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btn_ajout_Click(object sender, EventArgs e)
        {
            int pos = txtsaisi.Text.IndexOf(" ");
            string nom, prenom;

            if (pos == -1)
            {
                nom = txtsaisi.Text;
                prenom = " ";
            }
            else
            {
                nom = txtsaisi.Text.Substring(0, pos);
                prenom = txtsaisi.Text.Substring(pos + 1);
            }

            lstNOM.Items.Add(nom);
            lstPRENOM.Items.Add(prenom);
        }

        private void txtsaisi_TextChanged(object sender, EventArgs e)
        {

        }

        private void lstNOM_SelectedIndexChanged(object sender, EventArgs e)
        {
            lstPRENOM.SelectedIndex = lstNOM.SelectedIndex;
        }

        private void lstPRENOM_SelectedIndexChanged(object sender, EventArgs e)
        {
            lstNOM.SelectedIndex = lstPRENOM.SelectedIndex;
        }

        private void btn_supp_Click(object sender, EventArgs e)
        {
            int s;
            s = lstNOM.SelectedIndex;
            if (s != -1)
            {
                lstNOM.Items.RemoveAt(s);
                lstPRENOM.Items.RemoveAt(s);
            }
        }
    }
}
