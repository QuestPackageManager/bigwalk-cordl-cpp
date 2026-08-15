#pragma once
// IWYU pragma private; include "GlobalNamespace/ControllerData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerData)
namespace GlobalNamespace {
struct GlyphButtonType;
}
namespace Rewired {
struct AxisRange;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class ControllerData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ControllerData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ControllerData*, "", "ControllerData");
// Dependencies System.Guid, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ControllerData
class CORDL_TYPE ControllerData : public ::System::Object {
public:
// Declarations
/// @brief Field DS4_CONTROLLER_GUID, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_DS4_CONTROLLER_GUID, put=setStaticF_DS4_CONTROLLER_GUID)) ::System::Guid  DS4_CONTROLLER_GUID;

/// @brief Field DS5_CONTROLLER_GUID, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_DS5_CONTROLLER_GUID, put=setStaticF_DS5_CONTROLLER_GUID)) ::System::Guid  DS5_CONTROLLER_GUID;

/// @brief Field STEAM_CONTROLLER_GUID, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_STEAM_CONTROLLER_GUID, put=setStaticF_STEAM_CONTROLLER_GUID)) ::System::Guid  STEAM_CONTROLLER_GUID;

/// @brief Field SWITCH2_DUAL_GUID, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_SWITCH2_DUAL_GUID, put=setStaticF_SWITCH2_DUAL_GUID)) ::System::Guid  SWITCH2_DUAL_GUID;

/// @brief Field SWITCH2_HANDHELD_GUID, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_SWITCH2_HANDHELD_GUID, put=setStaticF_SWITCH2_HANDHELD_GUID)) ::System::Guid  SWITCH2_HANDHELD_GUID;

/// @brief Field SWITCH2_JOYCON_L_GUID, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_SWITCH2_JOYCON_L_GUID, put=setStaticF_SWITCH2_JOYCON_L_GUID)) ::System::Guid  SWITCH2_JOYCON_L_GUID;

/// @brief Field SWITCH2_JOYCON_R_GUID, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_SWITCH2_JOYCON_R_GUID, put=setStaticF_SWITCH2_JOYCON_R_GUID)) ::System::Guid  SWITCH2_JOYCON_R_GUID;

/// @brief Field SWITCH2_PRO_GUID, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_SWITCH2_PRO_GUID, put=setStaticF_SWITCH2_PRO_GUID)) ::System::Guid  SWITCH2_PRO_GUID;

/// @brief Field SWITCH_JOYCON_CONSOLE_GUID, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_SWITCH_JOYCON_CONSOLE_GUID, put=setStaticF_SWITCH_JOYCON_CONSOLE_GUID)) ::System::Guid  SWITCH_JOYCON_CONSOLE_GUID;

/// @brief Field SWITCH_JOYCON_DUAL_GUID, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_SWITCH_JOYCON_DUAL_GUID, put=setStaticF_SWITCH_JOYCON_DUAL_GUID)) ::System::Guid  SWITCH_JOYCON_DUAL_GUID;

/// @brief Field SWITCH_JOYCON_L_GUID, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_SWITCH_JOYCON_L_GUID, put=setStaticF_SWITCH_JOYCON_L_GUID)) ::System::Guid  SWITCH_JOYCON_L_GUID;

/// @brief Field SWITCH_JOYCON_R_GUID, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_SWITCH_JOYCON_R_GUID, put=setStaticF_SWITCH_JOYCON_R_GUID)) ::System::Guid  SWITCH_JOYCON_R_GUID;

/// @brief Field SWITCH_PRO_CONTROLLER_GUID, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_SWITCH_PRO_CONTROLLER_GUID, put=setStaticF_SWITCH_PRO_CONTROLLER_GUID)) ::System::Guid  SWITCH_PRO_CONTROLLER_GUID;

/// @brief Field XBOX_360_CONTROLLER_GUID, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_XBOX_360_CONTROLLER_GUID, put=setStaticF_XBOX_360_CONTROLLER_GUID)) ::System::Guid  XBOX_360_CONTROLLER_GUID;

/// @brief Field XBOX_ONE_CONTROLLER_GUID, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_XBOX_ONE_CONTROLLER_GUID, put=setStaticF_XBOX_ONE_CONTROLLER_GUID)) ::System::Guid  XBOX_ONE_CONTROLLER_GUID;

/// @brief Field actionLocStringTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_actionLocStringTable, put=setStaticF_actionLocStringTable)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,::Rewired::AxisRange>,::StringW>*  actionLocStringTable;

/// @brief Field actionTagTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_actionTagTable, put=setStaticF_actionTagTable)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  actionTagTable;

/// @brief Field buttonTypeTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_buttonTypeTable, put=setStaticF_buttonTypeTable)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GlyphButtonType>*  buttonTypeTable;

/// @brief Field categoryStringTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_categoryStringTable, put=setStaticF_categoryStringTable)) ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  categoryStringTable;

/// @brief Method GetLayoutName, addr 0x1803e4db0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetLayoutName(int32_t  layoutId) ;

/// @brief Method GetLocStringForAction, addr 0x1803e4df0, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW GetLocStringForAction(int32_t  actionId, ::Rewired::AxisRange  axisRange) ;

static inline ::System::Guid getStaticF_DS4_CONTROLLER_GUID() ;

static inline ::System::Guid getStaticF_DS5_CONTROLLER_GUID() ;

static inline ::System::Guid getStaticF_STEAM_CONTROLLER_GUID() ;

static inline ::System::Guid getStaticF_SWITCH2_DUAL_GUID() ;

static inline ::System::Guid getStaticF_SWITCH2_HANDHELD_GUID() ;

static inline ::System::Guid getStaticF_SWITCH2_JOYCON_L_GUID() ;

static inline ::System::Guid getStaticF_SWITCH2_JOYCON_R_GUID() ;

static inline ::System::Guid getStaticF_SWITCH2_PRO_GUID() ;

static inline ::System::Guid getStaticF_SWITCH_JOYCON_CONSOLE_GUID() ;

static inline ::System::Guid getStaticF_SWITCH_JOYCON_DUAL_GUID() ;

static inline ::System::Guid getStaticF_SWITCH_JOYCON_L_GUID() ;

static inline ::System::Guid getStaticF_SWITCH_JOYCON_R_GUID() ;

static inline ::System::Guid getStaticF_SWITCH_PRO_CONTROLLER_GUID() ;

static inline ::System::Guid getStaticF_XBOX_360_CONTROLLER_GUID() ;

static inline ::System::Guid getStaticF_XBOX_ONE_CONTROLLER_GUID() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,::Rewired::AxisRange>,::StringW>* getStaticF_actionLocStringTable() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* getStaticF_actionTagTable() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GlyphButtonType>* getStaticF_buttonTypeTable() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* getStaticF_categoryStringTable() ;

static inline void setStaticF_DS4_CONTROLLER_GUID(::System::Guid  value) ;

static inline void setStaticF_DS5_CONTROLLER_GUID(::System::Guid  value) ;

static inline void setStaticF_STEAM_CONTROLLER_GUID(::System::Guid  value) ;

static inline void setStaticF_SWITCH2_DUAL_GUID(::System::Guid  value) ;

static inline void setStaticF_SWITCH2_HANDHELD_GUID(::System::Guid  value) ;

static inline void setStaticF_SWITCH2_JOYCON_L_GUID(::System::Guid  value) ;

static inline void setStaticF_SWITCH2_JOYCON_R_GUID(::System::Guid  value) ;

static inline void setStaticF_SWITCH2_PRO_GUID(::System::Guid  value) ;

static inline void setStaticF_SWITCH_JOYCON_CONSOLE_GUID(::System::Guid  value) ;

static inline void setStaticF_SWITCH_JOYCON_DUAL_GUID(::System::Guid  value) ;

static inline void setStaticF_SWITCH_JOYCON_L_GUID(::System::Guid  value) ;

static inline void setStaticF_SWITCH_JOYCON_R_GUID(::System::Guid  value) ;

static inline void setStaticF_SWITCH_PRO_CONTROLLER_GUID(::System::Guid  value) ;

static inline void setStaticF_XBOX_360_CONTROLLER_GUID(::System::Guid  value) ;

static inline void setStaticF_XBOX_ONE_CONTROLLER_GUID(::System::Guid  value) ;

static inline void setStaticF_actionLocStringTable(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,::Rewired::AxisRange>,::StringW>*  value) ;

static inline void setStaticF_actionTagTable(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

static inline void setStaticF_buttonTypeTable(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GlyphButtonType>*  value) ;

static inline void setStaticF_categoryStringTable(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerData(ControllerData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerData(ControllerData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4996};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ControllerData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
