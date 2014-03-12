using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace GestionTableaux
{
    public partial class Form1 : Form
    {
        int[] t = new int[10];

        public Form1()
        {
            InitializeComponent();
        }

        public void lire()
        {
            for (int i = 0; i < 10; i++)
            {
                t[i] = Convert.ToInt32(this.Controls["t" + i].Text);
            }
        }

        public void ecrire()
        {
            for (int i = 0; i < 10; i++)
            {
                this.Controls["t" + i].Text = t[i].ToString();
            }
        }

        public void trisel()
        {
            for (int i = 0; i < 9; i++)
            {
                for (int j = i + 1; j < 10; j++)
                {
                    if (t[i] > t[j])
                    {
                        int tmp = t[i];
                        t[i] = t[j];
                        t[j] = tmp;
                    }
                }
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            lire();

            trisel();

            ecrire();

        }
    }
}
