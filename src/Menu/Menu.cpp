

#include "menu.h"
#include "../includes.h"
#include <string>
#include "../Vendors/ImGuiNotify/imgui_notify.h"
#include "Sections.h"
#include "GuiDefinitions.h"


namespace Menu
{

   

	void Render()
	{


		static bool bInited = false;

		if (!bInited)
		{
            

            ImGui::SetNextWindowPos({ 100, 100 }, ImGuiCond_FirstUseEver);
            ImGui::SetNextWindowSize({ 700, 450 }, ImGuiCond_FirstUseEver);


			bInited = true;
		}

        ImGui::PushFont(ImGui::GetIO().Fonts->Fonts[fontindex_menu]);
        ImGui::Begin("WuwaEchoer");
        ImGui::BeginGroup();

        static int SelectedSection = 0;

        if (ImGui::BeginListBox("##CategorySelect", ImVec2(175, -FLT_MIN))) {
            for (int i = 0; i < ModuleOrder.size(); i++) {
                std::string moduleName = ModuleOrder[i];

                bool is_selected = (i == SelectedSection);

                ImGui::PushStyleColor(ImGuiCol_Button,
                    is_selected
                    ? ImGui::GetStyle().Colors[ImGuiCol_ButtonHovered]
                    : ImGui::GetStyle().Colors[ImGuiCol_Button]);
                ImGui::PushStyleColor(ImGuiCol_ButtonHovered,
                    is_selected
                    ? ImGui::GetStyle().Colors[ImGuiCol_ButtonHovered]
                    : ImGui::GetStyle().Colors[ImGuiCol_ButtonHovered]);
                ImGui::PushStyleColor(ImGuiCol_ButtonActive,
                    is_selected
                    ? ImGui::GetStyle().Colors[ImGuiCol_ButtonActive]
                    : ImGui::GetStyle().Colors[ImGuiCol_ButtonActive]);

                if (ImGui::Button(moduleName.c_str(), ImVec2(-1, 48)))
                    SelectedSection = i;

                if (is_selected)
                    ImGui::SetItemDefaultFocus();
                ImGui::PopStyleColor(3);
            }
            ImGui::EndListBox();
        }

        ImGui::EndGroup();
        ImGui::SameLine();
        ImGui::BeginGroup();
        ImGui::BeginChild("ChildR", ImVec2(0, 0), ImGuiChildFlags_Border, ImGuiWindowFlags_None);
        DrawSection(ModuleOrder[SelectedSection]);
        ImGui::EndChild();
        ImGui::RenderNotifications();
        ImGui::EndGroup();
        ImGui::End();
        ImGui::PopFont();
    }
}

