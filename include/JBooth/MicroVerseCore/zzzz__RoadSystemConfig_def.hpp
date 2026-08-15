#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/RoadSystemConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RoadSystemConfig)
namespace JBooth::MicroVerseCore {
class RoadConfig;
}
namespace JBooth::MicroVerseCore {
class RoadSystemConfig_SplinePaint;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class RoadSystemConfig;
}
namespace JBooth::MicroVerseCore {
class RoadSystemConfig_SplinePaint;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::RoadSystemConfig*);
MARK_REF_T(::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::RoadSystemConfig*, "JBooth.MicroVerseCore", "RoadSystemConfig");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint*, "JBooth.MicroVerseCore", "RoadSystemConfig/SplinePaint");
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.RoadSystemConfig/SplinePaint
class CORDL_TYPE RoadSystemConfig_SplinePaint : public ::System::Object {
public:
// Declarations
/// @brief Field config, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_config, put=__cordl_internal_set_config)) ::UnityW<::JBooth::MicroVerseCore::RoadConfig>  config;

/// @brief Field intersection, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_intersection, put=__cordl_internal_set_intersection)) ::UnityW<::UnityEngine::GameObject>  intersection;

static inline ::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint* New_ctor() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig> const& __cordl_internal_get_config() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig>& __cordl_internal_get_config() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_intersection() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_intersection() ;

constexpr void __cordl_internal_set_config(::UnityW<::JBooth::MicroVerseCore::RoadConfig>  value) ;

constexpr void __cordl_internal_set_intersection(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoadSystemConfig_SplinePaint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoadSystemConfig_SplinePaint", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoadSystemConfig_SplinePaint(RoadSystemConfig_SplinePaint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoadSystemConfig_SplinePaint", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoadSystemConfig_SplinePaint(RoadSystemConfig_SplinePaint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17961};

/// @brief Field intersection, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___intersection;

/// @brief Field config, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::RoadConfig>  ___config;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint, ___intersection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint, ___config) == 0x18, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint) == 0x20, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies UnityEngine.ScriptableObject
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.RoadSystemConfig
class CORDL_TYPE RoadSystemConfig : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using SplinePaint = ::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint;

/// @brief Field allowShaping, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowShaping, put=__cordl_internal_set_allowShaping)) bool  allowShaping;

/// @brief Field modifyTerrainByDefault, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_modifyTerrainByDefault, put=__cordl_internal_set_modifyTerrainByDefault)) bool  modifyTerrainByDefault;

/// @brief Field namePrefix, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_namePrefix, put=__cordl_internal_set_namePrefix)) ::StringW  namePrefix;

/// @brief Field shapingSizeHandleStart, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_shapingSizeHandleStart, put=__cordl_internal_set_shapingSizeHandleStart)) float_t  shapingSizeHandleStart;

/// @brief Field splinePaintDefault, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_splinePaintDefault, put=__cordl_internal_set_splinePaintDefault)) ::UnityW<::JBooth::MicroVerseCore::RoadConfig>  splinePaintDefault;

/// @brief Field splinePaintList, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_splinePaintList, put=__cordl_internal_set_splinePaintList)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint*>*  splinePaintList;

static inline ::JBooth::MicroVerseCore::RoadSystemConfig* New_ctor() ;

constexpr bool const& __cordl_internal_get_allowShaping() const;

constexpr bool& __cordl_internal_get_allowShaping() ;

constexpr bool const& __cordl_internal_get_modifyTerrainByDefault() const;

constexpr bool& __cordl_internal_get_modifyTerrainByDefault() ;

constexpr ::StringW const& __cordl_internal_get_namePrefix() const;

constexpr ::StringW& __cordl_internal_get_namePrefix() ;

constexpr float_t const& __cordl_internal_get_shapingSizeHandleStart() const;

constexpr float_t& __cordl_internal_get_shapingSizeHandleStart() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig> const& __cordl_internal_get_splinePaintDefault() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig>& __cordl_internal_get_splinePaintDefault() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint*>* const& __cordl_internal_get_splinePaintList() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint*>*& __cordl_internal_get_splinePaintList() ;

constexpr void __cordl_internal_set_allowShaping(bool  value) ;

constexpr void __cordl_internal_set_modifyTerrainByDefault(bool  value) ;

constexpr void __cordl_internal_set_namePrefix(::StringW  value) ;

constexpr void __cordl_internal_set_shapingSizeHandleStart(float_t  value) ;

constexpr void __cordl_internal_set_splinePaintDefault(::UnityW<::JBooth::MicroVerseCore::RoadConfig>  value) ;

constexpr void __cordl_internal_set_splinePaintList(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint*>*  value) ;

/// @brief Method .ctor, addr 0x18141eb70, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoadSystemConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoadSystemConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoadSystemConfig(RoadSystemConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoadSystemConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoadSystemConfig(RoadSystemConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17962};

/// @brief Field namePrefix, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___namePrefix;

/// @brief Field allowShaping, offset: 0x20, size: 0x1, def value: None
 bool  ___allowShaping;

/// @brief Field shapingSizeHandleStart, offset: 0x24, size: 0x4, def value: None
 float_t  ___shapingSizeHandleStart;

/// @brief Field splinePaintDefault, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::RoadConfig>  ___splinePaintDefault;

/// @brief Field modifyTerrainByDefault, offset: 0x30, size: 0x1, def value: None
 bool  ___modifyTerrainByDefault;

/// @brief Field splinePaintList, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::RoadSystemConfig_SplinePaint*>*  ___splinePaintList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::RoadSystemConfig, ___namePrefix) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadSystemConfig, ___allowShaping) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadSystemConfig, ___shapingSizeHandleStart) == 0x24, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadSystemConfig, ___splinePaintDefault) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadSystemConfig, ___modifyTerrainByDefault) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadSystemConfig, ___splinePaintList) == 0x38, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::RoadSystemConfig) == 0x40, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
