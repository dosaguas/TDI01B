using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace la_calculatrice
{
    public partial class Form1 : Form
    {
        double mem;
        string op;
        bool mode;
        double memory = 0;

        public Form1()
        {
            InitializeComponent();
        }

        private void comma_Click(object sender, EventArgs e)
        {
            Button b = (Button)sender;
            if (ecran.Text.IndexOf(',') == -1)
            {
                ecran.Text += b.Text;
                mode = false;
            }
        }

        private void button_Click(object sender, EventArgs e)
        {
            Button b = (Button)sender;

            if (mode == true)
            {
                ecran.Clear();
            }

            ecran.Text += b.Text;
            mode = false;

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            mode = true;
        }

        private void bop_Click(object sender, EventArgs e)
        {
            Button b = (Button)sender;

            mem = Convert.ToDouble(ecran.Text);
            op = b.Text;
            mode = true;
        }

        private void begale_Click(object sender, EventArgs e)
        {
            switch (op)
            {
                case "/":
                    {
                        ecran.Text = ((mem) / (Convert.ToDouble(ecran.Text))).ToString();
                        break;
                    }
                case "+":
                    {
                        ecran.Text = ((mem) + (Convert.ToDouble(ecran.Text))).ToString();
                        break;
                    }
                case "-":
                    {
                        ecran.Text = ((mem) - (Convert.ToDouble(ecran.Text))).ToString();
                        break;
                    }
                case "*":
                    {
                        ecran.Text = ((mem) * (Convert.ToDouble(ecran.Text))).ToString();
                        break;
                    }


            }
        }

        private void btmemory_Click(object sender, EventArgs e)
        {
            Button b = (Button)sender;

            switch (b.Text)
            {
                case "M+":
                    {
                        memory += Convert.ToDouble(ecran.Text);
                        break;
                    }
                case "M-":
                    {
                        memory -= Convert.ToDouble(ecran.Text);
                        break;
                    }
                case "MR":
                    {
                        ecran.Text = memory.ToString();
                        break;
                    }
                case "MS":
                    {
                        memory = Convert.ToDouble(ecran.Text);
                        break;
                    }
                case "MC":
                    {
                        memory = 0;
                        break;
                    }

            }
        }

        private void bopself_Click(object sender, EventArgs e)
        {
            Button b = (Button)sender;

            switch (b.Text)
            {
                case "1/x":
                    {
                        ecran.Text = (1/Convert.ToDouble(ecran.Text)).ToString();
                        break;
                    }
                case "%":
                    {
                        ecran.Text = (Convert.ToDouble(ecran.Text)*mem/100).ToString();
                        break;
                    }
                case "√":
                    {
                        ecran.Text = (Math.Sqrt(Convert.ToDouble(ecran.Text))).ToString();
                        break;
                    }
                case "±":
                    {
                         ecran.Text = ((Convert.ToDouble(ecran.Text)*(-1))).ToString();
                        break;
                    }

            }

        }

        private void becran_Click(object sender, EventArgs e)
        {
            Button b = (Button)sender;

            switch (b.Text)
            {
                case "C":
                    {
                        mem = 0;
                        ecran.Text = "0";
                        mode = true;
                        break;
                    }
                case "CE":
                    {
                        ecran.Text = "0";
                        mode = true;
                        break;
                    }
                case "←":
                    {
                        ecran.Text = ecran.Text.Remove(ecran.TextLength-1);
                        mode = false;
                        break;
                    }

            }
        }
    }
}
