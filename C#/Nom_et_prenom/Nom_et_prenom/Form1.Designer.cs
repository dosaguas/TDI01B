namespace Nom_et_prenom
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.lstNOM = new System.Windows.Forms.ListBox();
            this.lstPRENOM = new System.Windows.Forms.ListBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.txtsaisi = new System.Windows.Forms.TextBox();
            this.btn_ajout = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.btn_supp = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // lstNOM
            // 
            this.lstNOM.FormattingEnabled = true;
            this.lstNOM.Location = new System.Drawing.Point(29, 103);
            this.lstNOM.Name = "lstNOM";
            this.lstNOM.Size = new System.Drawing.Size(166, 225);
            this.lstNOM.TabIndex = 0;
            this.lstNOM.SelectedIndexChanged += new System.EventHandler(this.lstNOM_SelectedIndexChanged);
            // 
            // lstPRENOM
            // 
            this.lstPRENOM.FormattingEnabled = true;
            this.lstPRENOM.Location = new System.Drawing.Point(318, 103);
            this.lstPRENOM.Name = "lstPRENOM";
            this.lstPRENOM.Size = new System.Drawing.Size(166, 225);
            this.lstPRENOM.TabIndex = 1;
            this.lstPRENOM.SelectedIndexChanged += new System.EventHandler(this.lstPRENOM_SelectedIndexChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(29, 84);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(29, 13);
            this.label1.TabIndex = 2;
            this.label1.Text = "Nom";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(315, 84);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(43, 13);
            this.label2.TabIndex = 3;
            this.label2.Text = "Prénom";
            // 
            // txtsaisi
            // 
            this.txtsaisi.Location = new System.Drawing.Point(94, 35);
            this.txtsaisi.Name = "txtsaisi";
            this.txtsaisi.Size = new System.Drawing.Size(220, 20);
            this.txtsaisi.TabIndex = 4;
            this.txtsaisi.TextChanged += new System.EventHandler(this.txtsaisi_TextChanged);
            // 
            // btn_ajout
            // 
            this.btn_ajout.Location = new System.Drawing.Point(357, 35);
            this.btn_ajout.Name = "btn_ajout";
            this.btn_ajout.Size = new System.Drawing.Size(75, 20);
            this.btn_ajout.TabIndex = 5;
            this.btn_ajout.Text = "Ajouter";
            this.btn_ajout.UseVisualStyleBackColor = true;
            this.btn_ajout.Click += new System.EventHandler(this.btn_ajout_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(91, 19);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(132, 13);
            this.label3.TabIndex = 6;
            this.label3.Text = "Tapez le nom et le prénom";
            // 
            // btn_supp
            // 
            this.btn_supp.Location = new System.Drawing.Point(409, 355);
            this.btn_supp.Name = "btn_supp";
            this.btn_supp.Size = new System.Drawing.Size(75, 23);
            this.btn_supp.TabIndex = 7;
            this.btn_supp.Text = "Supprimer";
            this.btn_supp.UseVisualStyleBackColor = true;
            this.btn_supp.Click += new System.EventHandler(this.btn_supp_Click);
            // 
            // Form1
            // 
            this.AcceptButton = this.btn_ajout;
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(530, 390);
            this.Controls.Add(this.btn_supp);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.btn_ajout);
            this.Controls.Add(this.txtsaisi);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.lstPRENOM);
            this.Controls.Add(this.lstNOM);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ListBox lstNOM;
        private System.Windows.Forms.ListBox lstPRENOM;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox txtsaisi;
        private System.Windows.Forms.Button btn_ajout;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Button btn_supp;
    }
}

