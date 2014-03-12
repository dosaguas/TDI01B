using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace Quiz
{
    public partial class Form1 : Form
    {
        int paneau = 0;
        int points = 0;

        public Form1()
        {
            InitializeComponent();
        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void cbf24_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            paneau++;

            switch (paneau)
            {
                case 1:
                    panel0.Visible = false;
                    panel1.Visible = true;
                    break;
                case 2:
                    if (rbc1.Checked == true)
                        points += 10;

                    panel1.Visible = false;
                    panel2.Visible = true;
                    break;
                case 3:
                    if (cbc21.Checked == true)
                        points += 5;
                    if (cbc23.Checked == true)
                        points += 5;

                    if (cbf22.Checked == true)
                        points -= 5;
                    if (cbf24.Checked == true)
                        points -= 5;

                    panel2.Visible = false;
                    panel3.Visible = true;
                    break;
                case 4:
                    if (rbc31.Checked == true)
                        points += 10;

                    panel3.Visible = false;
                    panel4.Visible = true;
                    break;
                case 5:
                    if (rbc44.Checked == true)
                        points += 10;

                    panel4.Visible = false;
                    panel5.Visible = true;
                    break;
                case 6: 
                    if (cbc52.Checked == true)
                        points += 5;
                    if (cbc53.Checked == true)
                        points += 5;

                    if (cbf51.Checked == true)
                        points -= 5;
                    if (cbf54.Checked == true)
                        points -= 5;

                    panel5.Visible = false;
                    panel6.Visible = true;
                    break;
                case 7:
                    if (rbc64.Checked == true)
                        points += 10;

                    panel6.Visible = false;
                    panel7.Visible = true;
                    break;
                case 8:
                    if (cbc71.Checked == true)
                        points += 4;
                    if (cbc73.Checked == true)
                        points += 2;
                    if (cbc74.Checked == true)
                        points += 4;

                    if (cbf72.Checked == true)
                        points -= 5;

                    panel7.Visible = false;
                    panel8.Visible = true;
                    break;
                case 9:
                    if (rbc82.Checked == true)
                        points += 10;

                    panel8.Visible = false;
                    panel9.Visible = true;
                    break;
                case 10:
                    if (rbc94.Checked == true)
                        points += 10;

                    panel9.Visible = false;
                    panel10.Visible = true;
                    break;
                case 11:
                    if (rbc103.Checked == true)
                        points += 10;

                    panel10.Visible = false;
                    panel11.Visible = true;
                    MessageBox.Show("Vous avez gagné " + points + " points!");
                    break;
                case 12:
                    panel11.Visible = false;
                    panel0.Visible = true;
                    paneau = 0;
                    points = 0;
                    break;
            }
            
        }

    }
}
