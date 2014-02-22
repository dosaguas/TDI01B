using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace Exercice_ListeBox
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            textBox1.Focus();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string s = textBox1.Text.Trim().ToUpper();

            if (s != "" && !listBox1.Items.Contains(s))
            {
                listBox1.Items.Add(s);
            }

            textBox1.SelectionStart = 0;
            textBox1.SelectionLength = textBox1.Text.Length;
            textBox1.Focus();

        }

        private void button2_Click(object sender, EventArgs e)
        {
            MessageBox.Show(listBox1.Items.Count.ToString());
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (listBox1.SelectedIndex != -1)
            {
                MessageBox.Show(listBox1.SelectedItem.ToString());
            }
            else MessageBox.Show("Aucun");
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (listBox1.SelectedIndex != -1)
            {
                MessageBox.Show((listBox1.SelectedIndex + 1).ToString());
            }
            else MessageBox.Show("Aucun");
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (listBox1.SelectedIndex != -1)
            {
                listBox1.Items.Remove(listBox1.SelectedItem);
            }
        }

        private void button6_Click(object sender, EventArgs e)
        {
            listBox1.Items.Clear();
        }
    }
}
