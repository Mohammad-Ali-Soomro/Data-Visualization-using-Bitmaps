#pragma once

#include<string>
#include <fstream>
#include <iostream> 
#include <cmath>
#include<vector>


using namespace std;


namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
		}

		String^ SelectFileAndRead() {
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
			openFileDialog1->InitialDirectory = "C:\\Users\PC\Downloads\Semester Project\OpenImage"; // Set initial directory
			openFileDialog1->Filter = "txt files (.txt)|.txt|All files (.)|."; // Filter for text files
			openFileDialog1->FilterIndex = 2; // Set filter index
			openFileDialog1->RestoreDirectory = true; // Restore current directory as default

			// Show the dialog to select a file
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				// Get the selected file path
				String^ file = openFileDialog1->FileName;
				return file;
			}
			return nullptr; // No file selected
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(66, 52);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 111);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Read";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(-3, 198);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(2215, 1058);
			this->textBox1->TabIndex = 1;
			this->textBox1->WordWrap = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Location = System::Drawing::Point(342, 52);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(222, 111);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Correlate";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Location = System::Drawing::Point(636, 52);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(222, 111);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Descretize";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Location = System::Drawing::Point(972, 33);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(225, 111);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Bitmap";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->pictureBox1->Location = System::Drawing::Point(-3, 198);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1944, 1026);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button5->Location = System::Drawing::Point(944, 154);
			this->button5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(112, 35);
			this->button5->TabIndex = 6;
			this->button5->Text = L"ZoomIn";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button6->Location = System::Drawing::Point(1098, 154);
			this->button6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(112, 35);
			this->button6->TabIndex = 7;
			this->button6->Text = L"ZoomOut";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->Location = System::Drawing::Point(1314, 52);
			this->button7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(232, 111);
			this->button7->TabIndex = 8;
			this->button7->Text = L"SimilarityBitmap";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button8->Location = System::Drawing::Point(1635, 52);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(198, 111);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Signature";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1924, 1050);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Form1";
			this->Text = L"Project";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		double calculateCorrelation(double* arr1, double* arr2, int size) {
			double sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0, sum_y2 = 0;

			for (int i = 0; i < size; ++i) {
				sum_x += arr1[i];
				sum_y += arr2[i];
				sum_xy += arr1[i] * arr2[i];
				sum_x2 += pow(arr1[i], 2);
				sum_y2 += pow(arr2[i], 2);
			}

			double numerator = size * sum_xy - sum_x * sum_y;
			double denominator = sqrt((size * sum_x2 - pow(sum_x, 2)) * (size * sum_y2 - pow(sum_y, 2)));

			// Check if denominator is zero to avoid division by zero
			if (denominator == 0)
				return 0; // correlation is undefined

			return numerator / denominator;
		}

		

#pragma endregion

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


		   ///////////////////////////////////////////////////////////   READ             //////////////////////////////////////////////////////
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Create an instance of OpenFileDialog
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
	openFileDialog1->InitialDirectory = "d:\\2023326_GUI_File(IO)_Assignment-6"; // Set initial directory
	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*"; // Filter for text files
	openFileDialog1->FilterIndex = 2; // Set filter index
	openFileDialog1->RestoreDirectory = true; // Restore current directory as default

	// Show the dialog to select a file
	openFileDialog1->ShowDialog();

	// Get the selected file path
	String^ file = openFileDialog1->FileName;

	// Convert the file path to a normal string
	const wchar_t* wstr = (const wchar_t*)(System::Runtime::InteropServices::Marshal::StringToHGlobalUni(file)).ToPointer();
	wstring wideString(wstr);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr((void*)wstr));
	string normalFile(wideString.begin(), wideString.end());

	// Read data from the file into a std::string
	ifstream inf(normalFile, ios::binary); // Open in binary mode for efficiency
	if (!inf) {
		MessageBox::Show("Error opening file: " + file, "Error");
		return;
	}

	// Determine the file size
	inf.seekg(0, ios::end);
	size_t fileSize = inf.tellg();
	inf.seekg(0, ios::beg);

	// Read the entire file into a std::string
	string fileContents(fileSize, '\0');
	inf.read(&fileContents[0], fileSize);
	inf.close();

	// Display the data in the text box (assuming you have a TextBox named 'textBox1')
	textBox1->Text = gcnew String(fileContents.c_str()); // Convert to managed String

	// Display a success message
	MessageBox::Show("Data read from file and displayed in the textbox", "Success");

}





		   //////////////////////////////////////////////////////////////////  Correlate  /////////////////////////////////////////////////////
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Create an instance of OpenFileDialog
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->InitialDirectory = "d:\\2023326_GUI_File(IO)_Assignment-6"; // Set initial directory
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*"; // Filter for text files
		openFileDialog1->FilterIndex = 2; // Set filter index
		openFileDialog1->RestoreDirectory = true; // Restore current directory as default

		// Show the dialog to select a file
		openFileDialog1->ShowDialog();

		// Get the selected file path
		String^ file = openFileDialog1->FileName;

		// Convert the file path to a normal string
		const wchar_t* wstr = (const wchar_t*)(System::Runtime::InteropServices::Marshal::StringToHGlobalUni(file)).ToPointer();
		wstring wideString(wstr);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr((void*)wstr));
		string normalFile(wideString.begin(), wideString.end());

		// Read data from the file
		ifstream inf(normalFile);
		int nRows, nColumns;
		inf >> nRows >> nColumns;

		// Create an array of arrays to hold the data
		double** data = new double* [nRows];
		for (int i = 0; i < nRows; ++i) {
			data[i] = new double[nColumns];
		}

		for (int i = 0; i < nRows; ++i) {
			for (int j = 0; j < nColumns; ++j) {
				inf >> data[i][j]; // Read data into the array
			}
		}
		inf.close();

		// Calculate correlation matrix
		String^ correlations = "";

		for (int i = 0; i < nRows; ++i) {
			for (int j = 0; j < nRows; ++j) {
				double correlation = calculateCorrelation(data[i], data[j], nColumns);
				correlations += correlation.ToString("F3") + "\t"; // Format correlation coefficient
			}
			correlations += Environment::NewLine; // Add newline after each row
		}

		// Display the correlations in the text box (assuming you have a TextBox named 'textBox1')
		textBox1->Text = correlations;

		// Free memory allocated for data arrays
		for (int i = 0; i < nRows; ++i) {
			delete[] data[i];
		}
		delete[] data;

		// Display a success message
		MessageBox::Show("Correlation matrix calculated and displayed in the text box.", "Success");
	}


		   //////////////////////////////////////////////  Descrerize  ///////////////////////////////////////////////

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Assuming you have already calculated the correlation matrix and stored it in 'correlateArr'

		// Descretize the matrix
		int MRows = 150, MColumns = 150; // Adjust these values based on your actual matrix size
		double** correlateArr = new double* [MRows];
		for (int i = 0; i < MRows; ++i) {
			correlateArr[i] = new double[MColumns];
		}

		// ... (Assume you have already populated 'correlateArr' with correlation coefficients)

		for (int k = 0; k < MColumns; ++k) {
			double rowSum = 0;
			double mean = 0;
			for (int l = 0; l < MRows; ++l) {
				rowSum += correlateArr[l][k];
			}
			mean = rowSum / MRows;
			for (int l = 0; l < MRows; ++l) {
				if (correlateArr[l][k] > mean) {
					correlateArr[l][k] = 1;
				}
				else {
					correlateArr[l][k] = 0;
				}
			}
		}

		// Display the discretized matrix in the text box (assuming you have a TextBox named 'textBox1')
		String^ discretizeString = "";
		for (int i = 0; i < MRows; ++i) {
			for (int j = 0; j < MColumns; ++j) {
				double discretizeElement = correlateArr[i][j];
				discretizeString += discretizeElement.ToString("F3") + "\t"; // Format discretized value
			}
			discretizeString += Environment::NewLine; // Add newline after each row
		}
		textBox1->Text = discretizeString;

		// Free memory allocated for the array
		for (int i = 0; i < MRows; ++i) {
			delete[] correlateArr[i];
		}
		delete[] correlateArr;

		// Display a success message
		MessageBox::Show("Correlation matrix discretized and displayed in the text box.", "Success");
	}



		   ////////////////////////////////////////////////////////   BitMAp   of Descretize  ////////////////////////////////////////////////////////
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {



		fstream fin("Dataset-3.TXT");

		int nRows, nColumns;
		fin >> nRows;
		fin >> nColumns;
		int MRows = nRows, MColumns = nRows;
		// Create an array of arrays to hold the data
		double** data = new double* [nRows];
		for (int i = 0; i < nRows; ++i) {
			data[i] = new double[nColumns];
		}

		double** correlateArr = new double* [MRows];
		for (int i = 0; i < MRows; ++i) {
			correlateArr[i] = new double[MColumns];
		}


		for (int i = 0; i < nRows; ++i) {
			for (int j = 0; j < nColumns; ++j) {
				fin >> data[i][j]; // Read data into the array
			}
		}

		fin.close();  // Close the input file
		String^ correlations = "";

		for (int i = 0; i < nRows; ++i) {
			for (int j = 0; j < nRows; ++j) {
				correlateArr[i][j] = calculateCorrelation(data[i], data[j], nColumns);
			}
			correlations += Environment::NewLine; // Add newline after each row
		}


		// Free memory allocated for data arrays
		for (int i = 0; i < nRows; ++i) {
			delete[] data[i];
		}
		delete[] data;



		// Descretize the matrix
		for (int k = 0; k < MColumns; ++k) {
			double rowSum = 0;
			double mean = 0;
			for (int l = 0; l < MRows; ++l) {
				rowSum += correlateArr[l][k];
			}
			mean = rowSum / MRows;
			for (int l = 0; l < MRows; ++l) {
				if (correlateArr[l][k] > mean) {
					correlateArr[l][k] = 1;
				}
				else {
					correlateArr[l][k] = 0;
				}
			}
		}









		// Iterate through correlateArr and set pixels in the bitmap based on the values
		textBox1->Visible = false;

		// Create a Bitmap object
		Bitmap^ bmp = gcnew Bitmap(MColumns, MRows); // Adjusted width and height parameters

		// Iterate through correlateArr and set pixels in the bitmap based on the values
		for (int y = 0; y < MRows; y++) {
			for (int x = 0; x < MColumns; x++) {

				//if (x < bmp->Width && y < bmp->Height) {
				if (correlateArr[y][x] == 0) {
					bmp->SetPixel(x, y, System::Drawing::Color::White); // Set white color for 1
				}
				else {
					bmp->SetPixel(x, y, System::Drawing::Color::Black); // Set black color for 0
				}

				//else {
					// Handle the case when the coordinates are outside the bounds of the bitmap
					// For example, you might want to log a warning or take other appropriate action.
				//}
			}
		}



		pictureBox1->Image = bmp;
		pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
		pictureBox1->Visible = true;


		for (int i = 0; i < MRows; ++i) {
			delete[] correlateArr[i];
		}
		delete[] correlateArr;



	}
	  
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->SizeMode = PictureBoxSizeMode::Normal;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {





		fstream fin("Dataset-3.TXT");

		int nRows, nColumns;
		fin >> nRows;
		fin >> nColumns;
		int MRows = nRows, MColumns = nRows;
		// Create an array of arrays to hold the data
		double** data = new double* [nRows];
		for (int i = 0; i < nRows; ++i) {
			data[i] = new double[nColumns];
		}

		double** SimilarityMatrix = new double* [MRows];
		for (int i = 0; i < MRows; ++i) {
			SimilarityMatrix[i] = new double[MColumns];
		}


		for (int i = 0; i < nRows; ++i) {
			for (int j = 0; j < nColumns; ++j) {
				fin >> data[i][j]; // Read data into the array
			}
		}

		fin.close();  // Close the input file
		String^ correlations = "";

		for (int i = 0; i < nRows; ++i) {
			for (int j = 0; j < nRows; ++j) {
				SimilarityMatrix[i][j] = calculateCorrelation(data[i], data[j], nColumns);
			}
			correlations += Environment::NewLine; // Add newline after each row
		}


		// Free memory allocated for data arrays
		for (int i = 0; i < nRows; ++i) {
			delete[] data[i];
		}
		delete[] data;



		// Iterate through correlateArr and set pixels in the bitmap based on the values
		textBox1->Visible = false;

		// Create a Bitmap object

		// Assuming you have already calculated the similarity matrix named 'similarityMatrix'

	// Create a Bitmap object for the color-coded image
		Bitmap^ bmpSimilarity = gcnew Bitmap(MColumns, MRows);

		// Iterate through each column in the similarity matrix
		for (int column = 0; column < MColumns; column++) {
			// Find the max value in the column
			double maxValue = 0.0;
			for (int row = 0; row < MRows; row++) {
				if (SimilarityMatrix[row][column] > maxValue) {
					maxValue = SimilarityMatrix[row][column];
				}
			}
			// Scale and set the color of each pixel in the column
			for (int row = 0; row < MRows; row++) {
				// Scale the value to the range 0-255
				int intensity = abs((int)((SimilarityMatrix[row][column] / maxValue) * 255));
				// Apply green shade to the pixel
				Color color = Color::FromArgb(255, 0, intensity, 0);
				// Set the color in the bitmap
				bmpSimilarity->SetPixel(column, row, color);
			}
		}

		// Display the color-coded bitmap in a PictureBox

		pictureBox1->Image = bmpSimilarity;
		pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
		pictureBox1->Visible = true;


		for (int i = 0; i < MRows; ++i) {
			delete[]  SimilarityMatrix[i];
		}
		delete[]  SimilarityMatrix;



	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		String^ file;//^ means * in new c++
		openFileDialog1->ShowDialog();//to open files directories

		file = openFileDialog1->FileName;//file ka path is stored in file

		const wchar_t* wstr = (const wchar_t*)(System::Runtime::InteropServices::Marshal::StringToHGlobalUni(file)).ToPointer();
		wstring wideString(wstr);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr((void*)wstr));
		string normalFile(wideString.begin(), wideString.end());//converting path  to just filename:((((((


		ifstream inf(normalFile);


		int rows, cols;


		inf >> rows;
		inf >> cols;


		double** data = new double* [rows];

		for (int i = 0; i < rows; ++i) {
			data[i] = new double[cols];
		}



		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				inf >> data[i][j];
			}
		}
		inf.close();

		srand(time(0));


		double* temp = new double[cols];
		//shuffling 

		for (int i = 0; i < rows / 2; i++)
		{
			int a = rand() % rows;
			int b = rand() % rows;

			for (int j = 0; j < cols; j++)
			{
				temp[j] = data[a][j];
				data[a][j] = data[b][j];
				data[b][j] = temp[j];
			}


		}


		//dma
		double** matrix1 = new double* [rows];
		for (int i = 0; i < rows; i++)
		{
			matrix1[i] = new double[rows];
		}


		//calculating perasons coefficient

		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < rows; j++) {
				double sumx = 0, sumy = 0, sumxy = 0, sumxsqaure = 0, sumysqaure = 0;
				for (int k = 0; k < cols; k++) {
					sumx += data[i][k];//for row 1 as saving row one in x
					sumy += data[j][k];//for row 2 as saving row two in y
					sumxy += data[i][k] * data[j][k];
					sumxsqaure += data[i][k] * data[i][k];
					sumysqaure += data[j][k] * data[j][k];
				}
				double numerator = (cols * sumxy) - (sumx * sumy);
				double denominator = sqrt(((cols * sumxsqaure) - (sumx * sumx)) * ((cols * sumysqaure) - (sumy * sumy)));
				if (denominator == 0) {
					matrix1[i][j] = 0;
				}
				else {
					matrix1[i][j] = numerator / denominator;
				}
			}
		}


		double** graymatrix1 = new double* [rows];


		for (int i = 0; i < rows; i++)
		{
			graymatrix1[i] = new double[rows];
		}


		//calculating mean and setting values above mean to 1 and rest to 0 to gray matrix;
		for (int i = 0; i < rows; i++) {
			double mean = 0;
			for (int j = 0; j < rows; j++) {
				mean += matrix1[j][i];
			}
			mean /= rows;
			for (int j = 0; j < rows; j++) {
				if (matrix1[j][i] > mean) {
					graymatrix1[j][i] = 1;
				}
				else {
					graymatrix1[j][i] = 0;
				}
			}
		}





		//using bitmap code from udemy
		//using bitmap code from udemy

		Bitmap^ bmp2 = gcnew Bitmap(rows, rows);//pasing rows to bitmap as height and width of bitmap

		for (int i = 0; i < rows; i++)
		{

			for (int j = 0; j < rows; j++)
			{


				if (graymatrix1[i][j] == 1)
				{
					bmp2->SetPixel(i, j, Color::Black);
					pictureBox1->Image = bmp2;  //edit 1 pictureBox2
				}
				else
				{
					bmp2->SetPixel(i, j, Color::Beige);
					pictureBox1->Image = bmp2; // edit 1 pictureBox2
				}

			}
		}




		double* sign = new double[rows];
		//array to calc signature values

		for (int i = 0; i < rows; i++)
		{
			double sum = 0;
			for (int j = 0; j < cols; j++)

			{
				sum += data[i][j];
			}
			sign[i] = sum * sum / cols;


		}


		//sorting data according to siGnature values

		for (int i = 0; i < rows; i++)
		{
			for (int j = i; j < rows - 1; j++)
			{
				if (sign[i] > sign[j + 1])
				{
					int temp = sign[i];
					sign[i] = sign[j + 1];
					sign[j + 1] = temp;

					double* temp1 = new double[cols];

					for (int k = 0; k < cols; k++)
					{    
						temp1[k] = data[i][k];
						data[i][k] = data[j + 1][k];
						data[j + 1][k] = temp1[k];

					}
					delete[] temp1;


				}

			}




		}


		//applying task1




		//dma
		double** matrix = new double* [rows];
		for (int i = 0; i < rows; i++)
		{
			matrix[i] = new double[rows];
		}


		//calculating perasons coefficient

		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < rows; j++) {
				double sumx = 0, sumy = 0, sumxy = 0, sumxsqaure = 0, sumysqaure = 0;
				for (int k = 0; k < cols; k++) {
					sumx += data[i][k];  //for row 1 as saving row one in x
					sumy += data[j][k];  //for row 2 as saving row two in y
					sumxy += data[i][k] * data[j][k];
					sumxsqaure += data[i][k] * data[i][k];
					sumysqaure += data[j][k] * data[j][k];
				}
				double numerator = (cols * sumxy) - (sumx * sumy);
				double denominator = sqrt(((cols * sumxsqaure) - (sumx * sumx)) * ((cols * sumysqaure) - (sumy * sumy)));
				if (denominator == 0) {
					matrix[i][j] = 0;
				}
				else {
					matrix[i][j] = numerator / denominator;
				}
			}
		}

		//matrix ij values hould now lie between -1 to 1



		//bitmap for colour coded
		Bitmap^ bmp = gcnew Bitmap(rows, rows);    //pasing rows to bitmap as height and width of bitmap




		for (int i = 0; i < rows; i++)
		{
			double max = -100;
			for (int j = 0; j < rows; j++)
			{
				if (matrix[j][i] > max)
				{
					max = matrix[j][i];
				}

			}

			for (int j = 0; j < rows; j++)
			{
				if (matrix[j][i] >= 0)
				{
					int pixel = (int)(matrix[j][i] / max * 255);
					bmp->SetPixel(i, j, Color::FromArgb(0, pixel, 0));
				}
				else
				{
					int pixel = (int)(matrix[j][i] / max * 255 * -1);
					bmp->SetPixel(i, j, Color::FromArgb(0, pixel, 0));
				}
			}
			pictureBox1->Image = bmp;

		}
	}
	};
}



