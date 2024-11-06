#pragma once
#include <wx/notebook.h>
#include "Source.h"	
#include <wx\wx.h>
#include <dlib/opencv.h>
#include <dlib/image_processing.h>
#include <dlib/image_processing/frontal_face_detector.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <string>
#include <opencv2/opencv.hpp>
#include <vector>
#include <wx/grid.h>
class MainFrame : public wxFrame
{
public:
    MainFrame(const wxString& title); 
private:
    void OnButtonClicked2(wxCommandEvent& evt);
    void OnButtonClicked3(wxCommandEvent& evt);
    void OnButtonClicked(wxCommandEvent& evt);
    void UpdatePanel2();
    void UpdatePanel3();
    void UpdatePanel4();
    void UpdatePanel3_Text();
    double points(int x, int y, int c1, int c2, int c3);
    void UpdatePanel4_Text1(long double b, int g); 
    void UpdatePanel4_Text2(long double b, int g);
    void UpdatePanel4_Text3(int g);
    void UpdatePanel4_CheckBox(int g);
    void points11(int x, int y, int c1, int c2, int c3, int g);
    wxStaticBitmap* staticBitmap;
    wxStaticBitmap* staticBitmap1;
    wxStaticBitmap* staticBitmap2;
    wxTextCtrl* textCtrl1;
    wxTextCtrl* textCtrl2;
    wxTextCtrl* textCtrl3;
    wxTextCtrl* textCtrl4;
    wxTextCtrl* textCtrl5;
    wxTextCtrl* textCtrl6;
    wxTextCtrl* textCtrl7;
    wxTextCtrl* textCtrl8;
    wxTextCtrl* textCtrl9;
    wxTextCtrl* textCtrl10;
    wxTextCtrl* textCtrl11;
    wxTextCtrl* textCtrl12;
    wxTextCtrl* textCtrl13;
    wxTextCtrl* textCtrl14;
    wxCheckBox* checkBox1;
    wxCheckBox* checkBox2;
    wxCheckBox* checkBox3;
    wxCheckBox* checkBox4;
    wxCheckBox* checkBox5;
    wxStaticText* Text7;
    wxImage image;
    wxPanel* panel1;
    wxPanel* panel2;
    wxPanel* panel3;
    wxPanel* panel4;
    wxGrid* grid;
    wxGrid* grid2;
    cv::Mat image1;
    cv::Mat image2;
    cv::Mat image4;
    cv::Mat imageun;
    wxGridCellAttr* attrred;
    wxGridCellAttr* attrgreen;
    cv::Mat image5;
    cv::Mat image6;
};

