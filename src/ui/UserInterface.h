/*****************************************************
* TP IFT3100H25 - Adventure Party Maker
 * by Team 12
 *****************************************************
 *
 * UserInterface class definition
 *
 *****************************************************/
#pragma once
#include <AddNodeDialog.h>
#include <BaseNode.h>
#include <ofxImGui.h>
#include "Vector3Dialog.h"
#include "ColorDialog.h"
#include "DeleteNodeDialog.h"
#include "HistogramDialog.h"


class UserInterface {

public:
    void setup();
    void draw();
    

    // Some useful definitions
    static const int        TOOLBAR_HEIGHT          = 60;
    static const int        STATUSBAR_HEIGHT        = 30;
    static const int        LEFTPANEL_WIDTH         = 300;
    static const int        TREEVIEW_HEIGHT         = 240;
    static const int        TREEVIEW_ACTIONS_HEIGHT = 32;
    static constexpr float  CAMERA_ASPECT_RATIO     = 16.0f / 9.0f;

    std::string m_hoveredWindow;
    int m_previousNodeSelection = -1;

	const std::string& getHoveredWindow() const;
	bool onlyOneCamera() const;



private:
    ofxImGui::Gui m_gui;
    ofTexture m_textureToolbarNewLevel;
    ofTexture m_textureToolbarLoadLevel;
    ofTexture m_textureToolbarSaveLevel;
    ofTexture m_textureToolbarGenerateBigTexture;
    ofTexture m_textureToolbarToggleCameras;
    ofTexture m_textureToolbarToggleCamerasPressed;
    ofTexture m_textureToolbarHistogram;
    ofTexture m_textureNotVisible;
    std::vector<std::string> m_availableSkyboxes;

    bool m_initialDraw = true;
    bool m_onlyOneCamera = false;
    Vector3Dialog m_vec3Dialog;
	ColorDialog m_colorDialog;
	AddNodeDialog m_addNodeDialog;
	DeleteNodeDialog m_deleteNodeDialog;
    HistogramDialog m_histogramDialog;
    bool m_showSuccessMessage = false;
	std::string m_successMessage;


    // Draw functions

    void drawMenu();
    void drawToolbar();
    void drawTree();
    void drawTreeElement(BaseNode* node);
    void drawTreeActions();
    void drawStatus();
    void drawProperties();
    void drawViewports();
    void drawViewport(const std::string& name, int index, const ImVec2& position, const ImVec2& size);
	void drawViewportOverlay(int index, const ImVec2& position, int availableWidth, int verticalOffset);
    void captureFramebuffer(int index, ofPixels& pixels);

    void drawSuccessMessage();

    void showSuccessMessage(const std::string& message);
    
    // Callback functions

    void onAboutProgram();
    void onNewLevel();
    void onLoadLevel();
    void onSaveLevel();
    void onGenerateTriptych();
    void onHistoryUndo();
    void onHistoryRedo();
    void onToggleCameras();
	void onShowKeyBindings();

};



