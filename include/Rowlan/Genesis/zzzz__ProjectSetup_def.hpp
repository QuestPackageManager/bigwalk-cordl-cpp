#pragma once
// IWYU pragma private; include "Rowlan/Genesis/ProjectSetup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProjectSetup)
// Forward declare root types
namespace Rowlan::Genesis {
class ProjectSetup;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::ProjectSetup*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::ProjectSetup*, "Rowlan.Genesis", "ProjectSetup");
// Dependencies System.Object
namespace Rowlan::Genesis {
// Is value type: false
// CS Name: Rowlan.Genesis.ProjectSetup
class CORDL_TYPE ProjectSetup : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProjectSetup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProjectSetup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProjectSetup(ProjectSetup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProjectSetup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProjectSetup(ProjectSetup const& ) = delete;

/// @brief Field GENESIS_DATA_DIRECTORY offset 0xffffffff size 0x8
static constexpr ::ConstString  GENESIS_DATA_DIRECTORY{u"Assets/Rowlan/Genesis Data"};

/// @brief Field GENESIS_DATA_SETTINGS_DIRECTORY offset 0xffffffff size 0x8
static constexpr ::ConstString  GENESIS_DATA_SETTINGS_DIRECTORY{u"Assets/Rowlan/Genesis Data/Settings"};

/// @brief Field GenesisSettings_FileName offset 0xffffffff size 0x8
static constexpr ::ConstString  GenesisSettings_FileName{u"Genesis Settings"};

/// @brief Field GenesisSettings_MenuName offset 0xffffffff size 0x8
static constexpr ::ConstString  GenesisSettings_MenuName{u"Genesis for MicroVerse/Settings"};

/// @brief Field Layer_SettingsTemplate_FileName offset 0xffffffff size 0x8
static constexpr ::ConstString  Layer_SettingsTemplate_FileName{u"Layer Settings"};

/// @brief Field Layer_SettingsTemplate_MenuName offset 0xffffffff size 0x8
static constexpr ::ConstString  Layer_SettingsTemplate_MenuName{u"Genesis for MicroVerse/Templates/Layer/Settings"};

/// @brief Field Layer_TemplateCollection_FileName offset 0xffffffff size 0x8
static constexpr ::ConstString  Layer_TemplateCollection_FileName{u"Layer Template Collection"};

/// @brief Field Layer_TemplateCollection_MenuName offset 0xffffffff size 0x8
static constexpr ::ConstString  Layer_TemplateCollection_MenuName{u"Genesis for MicroVerse/Templates/Layer/Collection"};

/// @brief Field MENU offset 0xffffffff size 0x8
static constexpr ::ConstString  MENU{u"Window/Genesis for MicroVerse/Genesis"};

/// @brief Field MENU_ORDER offset 0xffffffff size 0x4
static constexpr int32_t  MENU_ORDER{static_cast<int32_t>(0x1)};

/// @brief Field Path_SettingsTemplate_FileName offset 0xffffffff size 0x8
static constexpr ::ConstString  Path_SettingsTemplate_FileName{u"Path Settings"};

/// @brief Field Path_SettingsTemplate_MenuName offset 0xffffffff size 0x8
static constexpr ::ConstString  Path_SettingsTemplate_MenuName{u"Genesis for MicroVerse/Templates/Path/Settings"};

/// @brief Field Path_TemplateCollection_FileName offset 0xffffffff size 0x8
static constexpr ::ConstString  Path_TemplateCollection_FileName{u"Path Template Collection"};

/// @brief Field Path_TemplateCollection_MenuName offset 0xffffffff size 0x8
static constexpr ::ConstString  Path_TemplateCollection_MenuName{u"Genesis for MicroVerse/Templates/Path/Collection"};

/// @brief Field SETTINGS_DATA_FILENAME offset 0xffffffff size 0x8
static constexpr ::ConstString  SETTINGS_DATA_FILENAME{u"Genesis Settings.asset"};

/// @brief Field Stamp_SettingsTemplate_FileName offset 0xffffffff size 0x8
static constexpr ::ConstString  Stamp_SettingsTemplate_FileName{u"Stamp Settings"};

/// @brief Field Stamp_SettingsTemplate_MenuName offset 0xffffffff size 0x8
static constexpr ::ConstString  Stamp_SettingsTemplate_MenuName{u"Genesis for MicroVerse/Templates/Stamp/Settings"};

/// @brief Field Stamp_TemplateCollection_FileName offset 0xffffffff size 0x8
static constexpr ::ConstString  Stamp_TemplateCollection_FileName{u"Stamp Template Collection"};

/// @brief Field Stamp_TemplateCollection_MenuName offset 0xffffffff size 0x8
static constexpr ::ConstString  Stamp_TemplateCollection_MenuName{u"Genesis for MicroVerse/Templates/Stamp/Collection"};

/// @brief Field TERRAIN_DATA_DIRECTORY offset 0xffffffff size 0x8
static constexpr ::ConstString  TERRAIN_DATA_DIRECTORY{u"Assets/Rowlan/Genesis Data/Terrain"};

/// @brief Field Tree_SettingsTemplate_FileName offset 0xffffffff size 0x8
static constexpr ::ConstString  Tree_SettingsTemplate_FileName{u"Tree Settings"};

/// @brief Field Tree_SettingsTemplate_MenuName offset 0xffffffff size 0x8
static constexpr ::ConstString  Tree_SettingsTemplate_MenuName{u"Genesis for MicroVerse/Templates/Tree/Settings"};

/// @brief Field Tree_TemplateCollection_FileName offset 0xffffffff size 0x8
static constexpr ::ConstString  Tree_TemplateCollection_FileName{u"Tree Template Collection"};

/// @brief Field Tree_TemplateCollection_MenuName offset 0xffffffff size 0x8
static constexpr ::ConstString  Tree_TemplateCollection_MenuName{u"Genesis for MicroVerse/Templates/Tree/Collection"};

/// @brief Field WINDOW_TITLE offset 0xffffffff size 0x8
static constexpr ::ConstString  WINDOW_TITLE{u"Genesis"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20384};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rowlan::Genesis::ProjectSetup) == 0x10, "Size mismatch!");

} // namespace end def Rowlan::Genesis
