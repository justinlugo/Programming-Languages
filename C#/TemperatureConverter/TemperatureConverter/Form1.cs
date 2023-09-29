namespace TemperatureConverter
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void comboBox2_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                string typeTemp;
                if (comboBox1.SelectedItem == null)
                {
                    typeTemp = String.Empty;
                }
                else
                {
                    typeTemp = comboBox1.SelectedItem.ToString();  
                }
                double temp = double.Parse(textBox1.Text);
                string convertTemp;
                if (comboBox2.SelectedItem == null)
                {
                    convertTemp = String.Empty;
                }
                else
                {
                    convertTemp = comboBox2.SelectedItem.ToString();
                }
                double newTemp = 0;
                if (typeTemp == "Fahrenheit" && convertTemp == "Fahrenheit")
                {
                    newTemp = temp;
                    tempLabel.Text = temp.ToString("0.00") + "°F = " + newTemp.ToString("0.00") + "°F";
                }
                else if (typeTemp == "Fahrenheit" && convertTemp == "Celsius")
                {
                    newTemp = (temp - 32) / 1.8;
                    tempLabel.Text = temp.ToString("0.00") + "°F = " + newTemp.ToString("0.00") + "°C";
                }
                else if (typeTemp == "Fahrenheit" && convertTemp == "Kelvin")
                {
                    newTemp = ((temp - 32) / 1.8) + 273.15;
                    tempLabel.Text = temp.ToString("0.00") + "°F = " + newTemp.ToString("0.00") + "°C";
                }
                else if (typeTemp == "Celsius" && convertTemp == "Celsius")
                {
                    newTemp = temp;
                    tempLabel.Text = temp.ToString("0.00") + "°C = " + newTemp.ToString("0.00") + "°C";
                }
                else if (typeTemp == "Celsius" && convertTemp == "Fahrenheit")
                {
                    newTemp = (temp * 1.8) + 32;
                    tempLabel.Text = temp.ToString("0.00") + "°C = " + newTemp.ToString("0.00") + "°F";
                }
                else if (typeTemp == "Celsius" && convertTemp == "Kelvin")
                {
                    newTemp = temp + 273.15;
                    tempLabel.Text = temp.ToString("0.00") + "°C = " + newTemp.ToString("0.00") + "°K";
                }
                else if (typeTemp == "Kelvin" && convertTemp == "Kelvin")
                {
                    newTemp = temp;
                    tempLabel.Text = temp.ToString("0.00") + "°K = " + newTemp.ToString("0.00") + "°K";
                }
                else if (typeTemp == "Kelvin" && convertTemp == "Fahrenheit")
                {
                    newTemp = ((temp - 273.15) * 1.8) + 32;
                    tempLabel.Text = temp.ToString("0.00") + "°K = " + newTemp.ToString("0.00") + "°F";
                }
                else if (typeTemp == "Kelvin" && convertTemp == "Celsius")
                {
                    newTemp = temp - 273.15;
                    tempLabel.Text = temp.ToString("0.00") + "°K = " + newTemp.ToString("0.00") + "°C";
                }
                else
                {
                    tempLabel.Text = "Please use proper conversion units.";
                }
            }
            catch
            {
                if (textBox1.Text == "")
                {
                    tempLabel.Text = "Please enter a valid temperature";
                }
            }

        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void tempLabel_Click(object sender, EventArgs e)
        {

        }
    }
}