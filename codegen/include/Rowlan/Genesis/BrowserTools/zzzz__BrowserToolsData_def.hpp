#pragma once
// IWYU pragma private; include "Rowlan/Genesis/BrowserTools/BrowserToolsData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BrowserToolsData)
namespace Rowlan::Genesis::BrowserTools {
struct BrowserToolsData_Module;
}
namespace Rowlan::Genesis::BrowserTools {
class BrowserToolsData_PresetsSettings;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Rowlan::Genesis::BrowserTools {
struct BrowserToolsData_Module;
}
namespace Rowlan::Genesis::BrowserTools {
class BrowserToolsData;
}
namespace Rowlan::Genesis::BrowserTools {
class BrowserToolsData_PresetsSettings;
}
// Write type traits
MARK_VAL_T(::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module);
MARK_REF_T(::Rowlan::Genesis::BrowserTools::BrowserToolsData*);
MARK_REF_T(::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module, "Rowlan.Genesis.BrowserTools", "BrowserToolsData/Module");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::BrowserTools::BrowserToolsData*, "Rowlan.Genesis.BrowserTools", "BrowserToolsData");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings*, "Rowlan.Genesis.BrowserTools", "BrowserToolsData/PresetsSettings");
// Dependencies 
namespace Rowlan::Genesis::BrowserTools {
// Is value type: true
// CS Name: Rowlan.Genesis.BrowserTools.BrowserToolsData/Module
struct CORDL_TYPE BrowserToolsData_Module {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BrowserToolsData_Module_Unwrapped
enum struct __BrowserToolsData_Module_Unwrapped : int32_t {
__E_Screenshot = static_cast<int32_t>(0x0),
__E_Presets = static_cast<int32_t>(0x1),
__E_Placement = static_cast<int32_t>(0x2),
__E_Validation = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BrowserToolsData_Module_Unwrapped () const noexcept {
return static_cast<__BrowserToolsData_Module_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BrowserToolsData_Module() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BrowserToolsData_Module(int32_t  value__) noexcept;

/// @brief Field Placement value: I32(2)
static ::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module const Placement;

/// @brief Field Presets value: I32(1)
static ::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module const Presets;

/// @brief Field Screenshot value: I32(0)
static ::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module const Screenshot;

/// @brief Field Validation value: I32(3)
static ::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module const Validation;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20431};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::Genesis::BrowserTools
// Dependencies System.Object
namespace Rowlan::Genesis::BrowserTools {
// Is value type: false
// CS Name: Rowlan.Genesis.BrowserTools.BrowserToolsData/PresetsSettings
class CORDL_TYPE BrowserToolsData_PresetsSettings : public ::System::Object {
public:
// Declarations
/// @brief Field author, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_author, put=__cordl_internal_set_author)) ::StringW  author;

/// @brief Field basePath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_basePath, put=__cordl_internal_set_basePath)) ::StringW  basePath;

/// @brief Field downloadPath, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_downloadPath, put=__cordl_internal_set_downloadPath)) ::StringW  downloadPath;

/// @brief Field id, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) ::StringW  id;

/// @brief Field image, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_image, put=__cordl_internal_set_image)) ::UnityW<::UnityEngine::Texture2D>  image;

/// @brief Field installedObject, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_installedObject, put=__cordl_internal_set_installedObject)) ::UnityW<::UnityEngine::Object>  installedObject;

/// @brief Field packName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_packName, put=__cordl_internal_set_packName)) ::StringW  packName;

/// @brief Field requireInstalledObject, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_requireInstalledObject, put=__cordl_internal_set_requireInstalledObject)) bool  requireInstalledObject;

static inline ::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_author() const;

constexpr ::StringW& __cordl_internal_get_author() ;

constexpr ::StringW const& __cordl_internal_get_basePath() const;

constexpr ::StringW& __cordl_internal_get_basePath() ;

constexpr ::StringW const& __cordl_internal_get_downloadPath() const;

constexpr ::StringW& __cordl_internal_get_downloadPath() ;

constexpr ::StringW const& __cordl_internal_get_id() const;

constexpr ::StringW& __cordl_internal_get_id() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_image() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_image() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_installedObject() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_installedObject() ;

constexpr ::StringW const& __cordl_internal_get_packName() const;

constexpr ::StringW& __cordl_internal_get_packName() ;

constexpr bool const& __cordl_internal_get_requireInstalledObject() const;

constexpr bool& __cordl_internal_get_requireInstalledObject() ;

constexpr void __cordl_internal_set_author(::StringW  value) ;

constexpr void __cordl_internal_set_basePath(::StringW  value) ;

constexpr void __cordl_internal_set_downloadPath(::StringW  value) ;

constexpr void __cordl_internal_set_id(::StringW  value) ;

constexpr void __cordl_internal_set_image(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_installedObject(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_packName(::StringW  value) ;

constexpr void __cordl_internal_set_requireInstalledObject(bool  value) ;

/// @brief Method .ctor, addr 0x181abf7b0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BrowserToolsData_PresetsSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BrowserToolsData_PresetsSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BrowserToolsData_PresetsSettings(BrowserToolsData_PresetsSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BrowserToolsData_PresetsSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BrowserToolsData_PresetsSettings(BrowserToolsData_PresetsSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20432};

/// @brief Field basePath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___basePath;

/// @brief Field author, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___author;

/// @brief Field packName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___packName;

/// @brief Field id, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___id;

/// @brief Field image, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___image;

/// @brief Field downloadPath, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___downloadPath;

/// @brief Field requireInstalledObject, offset: 0x40, size: 0x1, def value: None
 bool  ___requireInstalledObject;

/// @brief Field installedObject, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___installedObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings, ___basePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings, ___author) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings, ___packName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings, ___id) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings, ___image) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings, ___downloadPath) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings, ___requireInstalledObject) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings, ___installedObject) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings) == 0x50, "Size mismatch!");

} // namespace end def Rowlan::Genesis::BrowserTools
// Dependencies Rowlan.Genesis.BrowserTools.BrowserToolsData::Module, UnityEngine.ScriptableObject
namespace Rowlan::Genesis::BrowserTools {
// Is value type: false
// CS Name: Rowlan.Genesis.BrowserTools.BrowserToolsData
class CORDL_TYPE BrowserToolsData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Module = ::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module;

using PresetsSettings = ::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings;

/// @brief Field module, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__cordl_module, put=__cordl_internal_set__cordl_module)) ::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module  _cordl_module;

/// @brief Field helpBoxVisible, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_helpBoxVisible, put=__cordl_internal_set_helpBoxVisible)) bool  helpBoxVisible;

/// @brief Field presetsSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_presetsSettings, put=__cordl_internal_set_presetsSettings)) ::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings*  presetsSettings;

static inline ::Rowlan::Genesis::BrowserTools::BrowserToolsData* New_ctor() ;

/// @brief Method Reset, addr 0x181abd260, size 0x40, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module const& __cordl_internal_get__cordl_module() const;

constexpr ::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module& __cordl_internal_get__cordl_module() ;

constexpr bool const& __cordl_internal_get_helpBoxVisible() const;

constexpr bool& __cordl_internal_get_helpBoxVisible() ;

constexpr ::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings* const& __cordl_internal_get_presetsSettings() const;

constexpr ::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings*& __cordl_internal_get_presetsSettings() ;

constexpr void __cordl_internal_set__cordl_module(::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module  value) ;

constexpr void __cordl_internal_set_helpBoxVisible(bool  value) ;

constexpr void __cordl_internal_set_presetsSettings(::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings*  value) ;

/// @brief Method .ctor, addr 0x181abd2a0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BrowserToolsData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BrowserToolsData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BrowserToolsData(BrowserToolsData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BrowserToolsData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BrowserToolsData(BrowserToolsData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20433};

/// @brief Field helpBoxVisible, offset: 0x18, size: 0x1, def value: None
 bool  ___helpBoxVisible;

/// @brief Field module, offset: 0x1c, size: 0x4, def value: None
 ::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module  ____cordl_module;

/// @brief Field presetsSettings, offset: 0x20, size: 0x8, def value: None
 ::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings*  ___presetsSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::BrowserTools::BrowserToolsData, ___helpBoxVisible) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::BrowserTools::BrowserToolsData, ____cordl_module) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::BrowserTools::BrowserToolsData, ___presetsSettings) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::BrowserTools::BrowserToolsData) == 0x28, "Size mismatch!");

} // namespace end def Rowlan::Genesis::BrowserTools
