using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace _2_ListeBox
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            listBox2.Items.Clear();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            listBox1.Items.Clear();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string s = textBox1.Text.Trim().ToUpper();
            if (s != "" && !listBox1.Items.Contains(s))
            {
                listBox1.Items.Add(s);
                textBox1.SelectionStart = 0;
                textBox1.SelectionLength = textBox1.Text.Length;
                textBox1.Focus();
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            textBox1.Focus();
        }

        private void button6_Click(object sender, EventArgs e)
        {
            if (listBox1.SelectedIndex != -1)
            {
                if (!listBox2.Items.Contains(listBox1.SelectedItem))
                {
                    listBox2.Items.Add(listBox1.SelectedItem);
                    listBox1.Items.Remove(listBox1.SelectedItem);
                }
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (listBox2.SelectedIndex != -1)
            {
                if (!listBox1.Items.Contains(listBox2.SelectedItem))
                {
                    listBox1.Items.Add(listBox2.SelectedItem);
                    listBox2.Items.Remove(listBox2.SelectedItem);
                }
            }
        }

        private void button7_Click(object sender, EventArgs e)
        {
            listBox2.Items.AddRange(listBox1.Items);
            listBox1.Items.Clear();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            listBox1.Items.AddRange(listBox2.Items);
            listBox2.Items.Clear();
        }
    }
}
