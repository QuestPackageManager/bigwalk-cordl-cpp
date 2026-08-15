#pragma once
// IWYU pragma private; include "Rowlan/Genesis/ReGenesis/ReGenesisData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReGenesisData)
namespace Rowlan::Genesis::ReGenesis {
struct HeightStampSettings_ReGenesisData_HeightMapSource;
}
namespace Rowlan::Genesis::ReGenesis {
struct ReGenesisData_BiomesMode;
}
namespace Rowlan::Genesis::ReGenesis {
class ReGenesisData_BiomesSettings;
}
namespace Rowlan::Genesis::ReGenesis {
struct ReGenesisData_HeightStampMode;
}
namespace Rowlan::Genesis::ReGenesis {
class ReGenesisData_HeightStampSettings;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Rowlan::Genesis::ReGenesis {
struct HeightStampSettings_ReGenesisData_HeightMapSource;
}
namespace Rowlan::Genesis::ReGenesis {
struct ReGenesisData_BiomesMode;
}
namespace Rowlan::Genesis::ReGenesis {
struct ReGenesisData_HeightStampMode;
}
namespace Rowlan::Genesis::ReGenesis {
class ReGenesisData;
}
namespace Rowlan::Genesis::ReGenesis {
class ReGenesisData_BiomesSettings;
}
namespace Rowlan::Genesis::ReGenesis {
class ReGenesisData_HeightStampSettings;
}
// Write type traits
MARK_VAL_T(::Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource);
MARK_VAL_T(::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesMode);
MARK_VAL_T(::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode);
MARK_REF_T(::Rowlan::Genesis::ReGenesis::ReGenesisData*);
MARK_REF_T(::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings*);
MARK_REF_T(::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource, "Rowlan.Genesis.ReGenesis", "ReGenesisData/HeightStampSettings/HeightMapSource");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesMode, "Rowlan.Genesis.ReGenesis", "ReGenesisData/BiomesMode");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode, "Rowlan.Genesis.ReGenesis", "ReGenesisData/HeightStampMode");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::ReGenesis::ReGenesisData*, "Rowlan.Genesis.ReGenesis", "ReGenesisData");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings*, "Rowlan.Genesis.ReGenesis", "ReGenesisData/BiomesSettings");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings*, "Rowlan.Genesis.ReGenesis", "ReGenesisData/HeightStampSettings");
// Dependencies 
namespace Rowlan::Genesis::ReGenesis {
// Is value type: true
// CS Name: Rowlan.Genesis.ReGenesis.ReGenesisData/HeightStampMode
struct CORDL_TYPE ReGenesisData_HeightStampMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ReGenesisData_HeightStampMode_Unwrapped
enum struct __ReGenesisData_HeightStampMode_Unwrapped : int32_t {
__E_Transform = static_cast<int32_t>(0x0),
__E_Heightmap = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReGenesisData_HeightStampMode_Unwrapped () const noexcept {
return static_cast<__ReGenesisData_HeightStampMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ReGenesisData_HeightStampMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReGenesisData_HeightStampMode(int32_t  value__) noexcept;

/// @brief Field Heightmap value: I32(1)
static ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode const Heightmap;

/// @brief Field Transform value: I32(0)
static ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode const Transform;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20413};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::Genesis::ReGenesis
// Dependencies 
namespace Rowlan::Genesis::ReGenesis {
// Is value type: true
// CS Name: Rowlan.Genesis.ReGenesis.ReGenesisData/BiomesMode
struct CORDL_TYPE ReGenesisData_BiomesMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ReGenesisData_BiomesMode_Unwrapped
enum struct __ReGenesisData_BiomesMode_Unwrapped : int32_t {
__E_Settings = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReGenesisData_BiomesMode_Unwrapped () const noexcept {
return static_cast<__ReGenesisData_BiomesMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ReGenesisData_BiomesMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReGenesisData_BiomesMode(int32_t  value__) noexcept;

/// @brief Field Settings value: I32(0)
static ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesMode const Settings;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20414};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesMode) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::Genesis::ReGenesis
// Dependencies 
namespace Rowlan::Genesis::ReGenesis {
// Is value type: true
// CS Name: Rowlan.Genesis.ReGenesis.ReGenesisData/HeightStampSettings/HeightMapSource
struct CORDL_TYPE HeightStampSettings_ReGenesisData_HeightMapSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HeightStampSettings_ReGenesisData_HeightMapSource_Unwrapped
enum struct __HeightStampSettings_ReGenesisData_HeightMapSource_Unwrapped : int32_t {
__E_ContentBrowser = static_cast<int32_t>(0x0),
__E_Path = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HeightStampSettings_ReGenesisData_HeightMapSource_Unwrapped () const noexcept {
return static_cast<__HeightStampSettings_ReGenesisData_HeightMapSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HeightStampSettings_ReGenesisData_HeightMapSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HeightStampSettings_ReGenesisData_HeightMapSource(int32_t  value__) noexcept;

/// @brief Field ContentBrowser value: I32(0)
static ::Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource const ContentBrowser;

/// @brief Field Path value: I32(1)
static ::Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource const Path;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20415};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::Genesis::ReGenesis
// Dependencies Rowlan.Genesis.ReGenesis.ReGenesisData::HeightStampSettings::HeightMapSource, System.Object, UnityEngine.Vector2
namespace Rowlan::Genesis::ReGenesis {
// Is value type: false
// CS Name: Rowlan.Genesis.ReGenesis.ReGenesisData/HeightStampSettings
class CORDL_TYPE ReGenesisData_HeightStampSettings : public ::System::Object {
public:
// Declarations
using HeightMapSource = ::Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource;

/// @brief Field heightMapSource, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_heightMapSource, put=__cordl_internal_set_heightMapSource)) ::Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource  heightMapSource;

/// @brief Field path, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::StringW  path;

/// @brief Field scaleRangeHeight, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_scaleRangeHeight, put=__cordl_internal_set_scaleRangeHeight)) ::UnityEngine::Vector2  scaleRangeHeight;

/// @brief Field scaleRangeWidth, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_scaleRangeWidth, put=__cordl_internal_set_scaleRangeWidth)) ::UnityEngine::Vector2  scaleRangeWidth;

static inline ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings* New_ctor() ;

/// @brief Method Reset, addr 0x181abe9c0, size 0x20, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource const& __cordl_internal_get_heightMapSource() const;

constexpr ::Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource& __cordl_internal_get_heightMapSource() ;

constexpr ::StringW const& __cordl_internal_get_path() const;

constexpr ::StringW& __cordl_internal_get_path() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_scaleRangeHeight() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_scaleRangeHeight() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_scaleRangeWidth() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_scaleRangeWidth() ;

constexpr void __cordl_internal_set_heightMapSource(::Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource  value) ;

constexpr void __cordl_internal_set_path(::StringW  value) ;

constexpr void __cordl_internal_set_scaleRangeHeight(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_scaleRangeWidth(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x181abea60, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReGenesisData_HeightStampSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReGenesisData_HeightStampSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReGenesisData_HeightStampSettings(ReGenesisData_HeightStampSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReGenesisData_HeightStampSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReGenesisData_HeightStampSettings(ReGenesisData_HeightStampSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20416};

/// @brief Field path, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___path;

/// @brief Field scaleRangeWidth, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___scaleRangeWidth;

/// @brief Field scaleRangeHeight, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___scaleRangeHeight;

/// @brief Field heightMapSource, offset: 0x28, size: 0x4, def value: None
 ::Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource  ___heightMapSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings, ___path) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings, ___scaleRangeWidth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings, ___scaleRangeHeight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings, ___heightMapSource) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings) == 0x30, "Size mismatch!");

} // namespace end def Rowlan::Genesis::ReGenesis
// Dependencies System.Object
namespace Rowlan::Genesis::ReGenesis {
// Is value type: false
// CS Name: Rowlan.Genesis.ReGenesis.ReGenesisData/BiomesSettings
class CORDL_TYPE ReGenesisData_BiomesSettings : public ::System::Object {
public:
// Declarations
/// @brief Field includeChildren, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_includeChildren, put=__cordl_internal_set_includeChildren)) bool  includeChildren;

static inline ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings* New_ctor() ;

/// @brief Method Reset, addr 0x1803b3b50, size 0x10, virtual false, abstract: false, final false
inline void Reset() ;

constexpr bool const& __cordl_internal_get_includeChildren() const;

constexpr bool& __cordl_internal_get_includeChildren() ;

constexpr void __cordl_internal_set_includeChildren(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReGenesisData_BiomesSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReGenesisData_BiomesSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReGenesisData_BiomesSettings(ReGenesisData_BiomesSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReGenesisData_BiomesSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReGenesisData_BiomesSettings(ReGenesisData_BiomesSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20417};

/// @brief Field includeChildren, offset: 0x10, size: 0x1, def value: None
 bool  ___includeChildren;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings, ___includeChildren) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings) == 0x18, "Size mismatch!");

} // namespace end def Rowlan::Genesis::ReGenesis
// Dependencies Rowlan.Genesis.ReGenesis.ReGenesisData::BiomesMode, Rowlan.Genesis.ReGenesis.ReGenesisData::HeightStampMode, UnityEngine.ScriptableObject
namespace Rowlan::Genesis::ReGenesis {
// Is value type: false
// CS Name: Rowlan.Genesis.ReGenesis.ReGenesisData
class CORDL_TYPE ReGenesisData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using BiomesMode = ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesMode;

using BiomesSettings = ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings;

using HeightStampMode = ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode;

using HeightStampSettings = ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings;

/// @brief Field autoAssignment, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoAssignment, put=__cordl_internal_set_autoAssignment)) bool  autoAssignment;

/// @brief Field biomesMode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_biomesMode, put=__cordl_internal_set_biomesMode)) ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesMode  biomesMode;

/// @brief Field biomesSettings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_biomesSettings, put=__cordl_internal_set_biomesSettings)) ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings*  biomesSettings;

/// @brief Field gameObject, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObject, put=__cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Field heightStampMode, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_heightStampMode, put=__cordl_internal_set_heightStampMode)) ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode  heightStampMode;

/// @brief Field heightStampSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightStampSettings, put=__cordl_internal_set_heightStampSettings)) ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings*  heightStampSettings;

/// @brief Field helpBoxVisible, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_helpBoxVisible, put=__cordl_internal_set_helpBoxVisible)) bool  helpBoxVisible;

static inline ::Rowlan::Genesis::ReGenesis::ReGenesisData* New_ctor() ;

/// @brief Method Reset, addr 0x181abf850, size 0xb0, virtual false, abstract: false, final false
inline void Reset() ;

constexpr bool const& __cordl_internal_get_autoAssignment() const;

constexpr bool& __cordl_internal_get_autoAssignment() ;

constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesMode const& __cordl_internal_get_biomesMode() const;

constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesMode& __cordl_internal_get_biomesMode() ;

constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings* const& __cordl_internal_get_biomesSettings() const;

constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings*& __cordl_internal_get_biomesSettings() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject() ;

constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode const& __cordl_internal_get_heightStampMode() const;

constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode& __cordl_internal_get_heightStampMode() ;

constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings* const& __cordl_internal_get_heightStampSettings() const;

constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings*& __cordl_internal_get_heightStampSettings() ;

constexpr bool const& __cordl_internal_get_helpBoxVisible() const;

constexpr bool& __cordl_internal_get_helpBoxVisible() ;

constexpr void __cordl_internal_set_autoAssignment(bool  value) ;

constexpr void __cordl_internal_set_biomesMode(::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesMode  value) ;

constexpr void __cordl_internal_set_biomesSettings(::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings*  value) ;

constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_heightStampMode(::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode  value) ;

constexpr void __cordl_internal_set_heightStampSettings(::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings*  value) ;

constexpr void __cordl_internal_set_helpBoxVisible(bool  value) ;

/// @brief Method .ctor, addr 0x181abf900, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReGenesisData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReGenesisData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReGenesisData(ReGenesisData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReGenesisData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReGenesisData(ReGenesisData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20418};

/// @brief Field gameObject, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gameObject;

/// @brief Field autoAssignment, offset: 0x20, size: 0x1, def value: None
 bool  ___autoAssignment;

/// @brief Field helpBoxVisible, offset: 0x21, size: 0x1, def value: None
 bool  ___helpBoxVisible;

/// @brief Field heightStampMode, offset: 0x24, size: 0x4, def value: None
 ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode  ___heightStampMode;

/// @brief Field heightStampSettings, offset: 0x28, size: 0x8, def value: None
 ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings*  ___heightStampSettings;

/// @brief Field biomesMode, offset: 0x30, size: 0x4, def value: None
 ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesMode  ___biomesMode;

/// @brief Field biomesSettings, offset: 0x38, size: 0x8, def value: None
 ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings*  ___biomesSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::ReGenesis::ReGenesisData, ___gameObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::ReGenesis::ReGenesisData, ___autoAssignment) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::ReGenesis::ReGenesisData, ___helpBoxVisible) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::ReGenesis::ReGenesisData, ___heightStampMode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::ReGenesis::ReGenesisData, ___heightStampSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::ReGenesis::ReGenesisData, ___biomesMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::ReGenesis::ReGenesisData, ___biomesSettings) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::ReGenesis::ReGenesisData) == 0x40, "Size mismatch!");

} // namespace end def Rowlan::Genesis::ReGenesis
