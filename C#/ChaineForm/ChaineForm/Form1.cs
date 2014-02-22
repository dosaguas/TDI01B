using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace ChaineForm
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            MessageBox.Show(textBox1.Text.Substring(3, 4));
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show("La longeur est: " + textBox1.Text.Length.ToString());
        }

        private void button2_Click(object sender, EventArgs e)
        {
            MessageBox.Show(textBox1.Text.Substring(0,4));
        }

        private void button4_Click(object sender, EventArgs e)
        {
            MessageBox.Show(textBox1.Text.Substring(3, textBox1.Text.Length-4));
        }

        private void button5_Click(object sender, EventArgs e)
        {
            MessageBox.Show(textBox1.Text.IndexOf("F").ToString());
        }

        private void button6_Click(object sender, EventArgs e)
        {
            MessageBox.Show(textBox1.Text.IndexOf("X").ToString());
        }

        private void button7_Click(object sender, EventArgs e)
        {
            int B = textBox1.Text.IndexOf("B");
            int E = textBox1.Text.IndexOf("E");

            if (B != -1 && E != -1)
            {
                if (B < E)
                {
                    MessageBox.Show(textBox1.Text.Substring(B+1,(E-1)-B));
                }
                else MessageBox.Show("E est placé avant de B");
            }
            else MessageBox.Show("Impossible");
        }
    }
}
