#pragma once
// IWYU pragma private; include "GlobalNamespace/RebindDataManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RebindDataManager)
namespace Rewired {
class ControllerMapSaveData;
}
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
class Controller;
}
namespace Rewired {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class RebindDataManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RebindDataManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RebindDataManager*, "", "RebindDataManager");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RebindDataManager
class CORDL_TYPE RebindDataManager : public ::System::Object {
public:
// Declarations
/// @brief Field PLAYER_FILE_STRINGS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PLAYER_FILE_STRINGS, put=setStaticF_PLAYER_FILE_STRINGS)) ::ArrayW<::StringW>  PLAYER_FILE_STRINGS;

/// @brief Field ps4Gamepad1Name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ps4Gamepad1Name, put=setStaticF_ps4Gamepad1Name)) ::StringW  ps4Gamepad1Name;

/// @brief Method AddHeader, addr 0x18043a8f0, size 0x90, virtual false, abstract: false, final false
static inline ::StringW AddHeader(::StringW  xml, bool  includeKeyCodeDetails) ;

/// @brief Method AddHelperTagsToActionIds, addr 0x18043a980, size 0x110, virtual false, abstract: false, final false
static inline ::StringW AddHelperTagsToActionIds(::StringW  xml) ;

/// @brief Method ApplyControllerRebindData, addr 0x18043aa90, size 0xf0, virtual false, abstract: false, final false
static inline bool ApplyControllerRebindData(::StringW  xml, ::Rewired::Controller*  controller, ::Rewired::Player*  player) ;

/// @brief Method GenerateFileName, addr 0x18043ab80, size 0x2a0, virtual false, abstract: false, final false
static inline ::StringW GenerateFileName(::Rewired::ControllerMapSaveData*  data, ::Rewired::Player*  player) ;

/// @brief Method GenerateHeader, addr 0x18043ae20, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GenerateHeader(bool  includeKeyCodeDetails) ;

/// @brief Method GetControllerPlayerSaveName, addr 0x18043ae60, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetControllerPlayerSaveName(::Rewired::Controller*  controller, ::Rewired::Player*  player) ;

/// @brief Method GetControllerRebindSaveData, addr 0x18043aed0, size 0x150, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Rewired::ControllerMapSaveData*>* GetControllerRebindSaveData(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method GetControllerSaveName, addr 0x18043b020, size 0x130, virtual false, abstract: false, final false
static inline ::StringW GetControllerSaveName(::Rewired::Controller*  controller) ;

/// @brief Method GetProcessedRebindSaveXml, addr 0x18043b150, size 0x250, virtual false, abstract: false, final false
static inline ::StringW GetProcessedRebindSaveXml(::Rewired::ControllerMapSaveData*  data) ;

/// @brief Method IsJoyconController, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline bool IsJoyconController(::Rewired::Controller*  controller) ;

/// @brief Method IsSingleJoyconController, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline bool IsSingleJoyconController(::Rewired::Controller*  controller) ;

/// @brief Method LoadAll, addr 0x18043b580, size 0x1e0, virtual false, abstract: false, final false
static inline void LoadAll() ;

/// @brief Method LoadAll, addr 0x18043b3a0, size 0x1e0, virtual false, abstract: false, final false
static inline void LoadAll(::Rewired::ControllerType  type) ;

/// @brief Method LoadController, addr 0x18043b760, size 0x110, virtual false, abstract: false, final false
static inline void LoadController(::Rewired::Controller*  controller, ::Rewired::Player*  player) ;

static inline ::GlobalNamespace::RebindDataManager* New_ctor() ;

/// @brief Method PrettifyXml, addr 0x18043b870, size 0x50, virtual false, abstract: false, final false
static inline ::StringW PrettifyXml(::StringW  xml) ;

/// @brief Method RemoveElementIdTags, addr 0x18043b8c0, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW RemoveElementIdTags(::StringW  xml) ;

/// @brief Method RemoveXMLHeader, addr 0x18043b970, size 0x70, virtual false, abstract: false, final false
static inline ::StringW RemoveXMLHeader(::StringW  xml) ;

/// @brief Method Save, addr 0x18043b9e0, size 0x250, virtual false, abstract: false, final false
static inline void Save(::Rewired::Controller*  controller, ::Rewired::Player*  player) ;

/// @brief Method Save, addr 0x18043bc30, size 0x210, virtual false, abstract: false, final false
static inline void Save(::Rewired::ControllerType  controllerType, ::Rewired::Player*  player) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::StringW> getStaticF_PLAYER_FILE_STRINGS() ;

static inline ::StringW getStaticF_ps4Gamepad1Name() ;

static inline void setStaticF_PLAYER_FILE_STRINGS(::ArrayW<::StringW>  value) ;

static inline void setStaticF_ps4Gamepad1Name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RebindDataManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RebindDataManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RebindDataManager(RebindDataManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RebindDataManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RebindDataManager(RebindDataManager const& ) = delete;

/// @brief Field ACTION_ID_START_TAG offset 0xffffffff size 0x8
static constexpr ::ConstString  ACTION_ID_START_TAG{u"<actionId>"};

/// @brief Field ELEMENT_ID_END_TAG offset 0xffffffff size 0x8
static constexpr ::ConstString  ELEMENT_ID_END_TAG{u"</elementIdentifierId>"};

/// @brief Field ELEMENT_ID_START_TAG offset 0xffffffff size 0x8
static constexpr ::ConstString  ELEMENT_ID_START_TAG{u"<elementIdentifierId>"};

/// @brief Field JOYCON_CONTROLLER_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  JOYCON_CONTROLLER_NAME{u"Joycon"};

/// @brief Field POST_HEADER_TAG offset 0xffffffff size 0x8
static constexpr ::ConstString  POST_HEADER_TAG{u"<sourceMapId>"};

/// @brief Field REBIND_FILE_PREFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  REBIND_FILE_PREFIX{u"ControlBinding"};

/// @brief Field REBIND_FILE_SUFFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  REBIND_FILE_SUFFIX{u".xml"};

/// @brief Field SINGLE_JOYCON_CONTROLLER_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  SINGLE_JOYCON_CONTROLLER_NAME{u"SingleJoycon"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5316};

/// @brief Field VERSION offset 0xffffffff size 0x4
static constexpr int32_t  _cordl_VERSION{static_cast<int32_t>(0x2)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RebindDataManager) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
