#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/RoadConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__Road_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RoadConfig)
namespace JBooth::MicroVerseCore {
class RoadConfig_Entry;
}
namespace JBooth::MicroVerseCore {
class RoadConfig_Overlay;
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
class RoadConfig;
}
namespace JBooth::MicroVerseCore {
class RoadConfig_Entry;
}
namespace JBooth::MicroVerseCore {
class RoadConfig_Overlay;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::RoadConfig*);
MARK_REF_T(::JBooth::MicroVerseCore::RoadConfig_Entry*);
MARK_REF_T(::JBooth::MicroVerseCore::RoadConfig_Overlay*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::RoadConfig*, "JBooth.MicroVerseCore", "RoadConfig");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::RoadConfig_Entry*, "JBooth.MicroVerseCore", "RoadConfig/Entry");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::RoadConfig_Overlay*, "JBooth.MicroVerseCore", "RoadConfig/Overlay");
// Dependencies System.Object, UnityEngine.GameObject
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.RoadConfig/Overlay
class CORDL_TYPE RoadConfig_Overlay : public ::System::Object {
public:
// Declarations
/// @brief Field alternate, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_alternate, put=__cordl_internal_set_alternate)) bool  alternate;

/// @brief Field label, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_label, put=__cordl_internal_set_label)) ::StringW  label;

/// @brief Field overlayChance, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_overlayChance, put=__cordl_internal_set_overlayChance)) float_t  overlayChance;

/// @brief Field prefabs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefabs, put=__cordl_internal_set_prefabs)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  prefabs;

/// @brief Field spawnFirstAsDefault, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_spawnFirstAsDefault, put=__cordl_internal_set_spawnFirstAsDefault)) bool  spawnFirstAsDefault;

static inline ::JBooth::MicroVerseCore::RoadConfig_Overlay* New_ctor() ;

constexpr bool const& __cordl_internal_get_alternate() const;

constexpr bool& __cordl_internal_get_alternate() ;

constexpr ::StringW const& __cordl_internal_get_label() const;

constexpr ::StringW& __cordl_internal_get_label() ;

constexpr float_t const& __cordl_internal_get_overlayChance() const;

constexpr float_t& __cordl_internal_get_overlayChance() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_prefabs() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_prefabs() ;

constexpr bool const& __cordl_internal_get_spawnFirstAsDefault() const;

constexpr bool& __cordl_internal_get_spawnFirstAsDefault() ;

constexpr void __cordl_internal_set_alternate(bool  value) ;

constexpr void __cordl_internal_set_label(::StringW  value) ;

constexpr void __cordl_internal_set_overlayChance(float_t  value) ;

constexpr void __cordl_internal_set_prefabs(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_spawnFirstAsDefault(bool  value) ;

/// @brief Method .ctor, addr 0x18140ddc0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoadConfig_Overlay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoadConfig_Overlay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoadConfig_Overlay(RoadConfig_Overlay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoadConfig_Overlay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoadConfig_Overlay(RoadConfig_Overlay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17944};

/// @brief Field label, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___label;

/// @brief Field prefabs, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___prefabs;

/// @brief Field spawnFirstAsDefault, offset: 0x20, size: 0x1, def value: None
 bool  ___spawnFirstAsDefault;

/// @brief Field overlayChance, offset: 0x24, size: 0x4, def value: None
 float_t  ___overlayChance;

/// @brief Field alternate, offset: 0x28, size: 0x1, def value: None
 bool  ___alternate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::RoadConfig_Overlay, ___label) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadConfig_Overlay, ___prefabs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadConfig_Overlay, ___spawnFirstAsDefault) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadConfig_Overlay, ___overlayChance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadConfig_Overlay, ___alternate) == 0x28, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::RoadConfig_Overlay) == 0x30, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.RoadConfig::Overlay, System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.RoadConfig/Entry
class CORDL_TYPE RoadConfig_Entry : public ::System::Object {
public:
// Declarations
/// @brief Field overlays, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlays, put=__cordl_internal_set_overlays)) ::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Overlay*>  overlays;

/// @brief Field prefab, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefab, put=__cordl_internal_set_prefab)) ::UnityW<::UnityEngine::GameObject>  prefab;

/// @brief Field size, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) float_t  size;

/// @brief Method FindOverlay, addr 0x1814063e0, size 0x80, virtual false, abstract: false, final false
inline ::JBooth::MicroVerseCore::RoadConfig_Overlay* FindOverlay(::StringW  name) ;

/// @brief Method FindOverlay, addr 0x181406460, size 0xd0, virtual false, abstract: false, final false
inline ::JBooth::MicroVerseCore::RoadConfig_Overlay* FindOverlay(::StringW  name, ::UnityEngine::GameObject*  prefab) ;

static inline ::JBooth::MicroVerseCore::RoadConfig_Entry* New_ctor() ;

constexpr ::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Overlay*> const& __cordl_internal_get_overlays() const;

constexpr ::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Overlay*>& __cordl_internal_get_overlays() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_prefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_prefab() ;

constexpr float_t const& __cordl_internal_get_size() const;

constexpr float_t& __cordl_internal_get_size() ;

constexpr void __cordl_internal_set_overlays(::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Overlay*>  value) ;

constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_size(float_t  value) ;

/// @brief Method .ctor, addr 0x181406530, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoadConfig_Entry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoadConfig_Entry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoadConfig_Entry(RoadConfig_Entry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoadConfig_Entry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoadConfig_Entry(RoadConfig_Entry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17945};

/// @brief Field size, offset: 0x10, size: 0x4, def value: None
 float_t  ___size;

/// @brief Field prefab, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___prefab;

/// @brief Field overlays, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Overlay*>  ___overlays;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::RoadConfig_Entry, ___size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadConfig_Entry, ___prefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadConfig_Entry, ___overlays) == 0x20, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::RoadConfig_Entry) == 0x28, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.Road::Orientation, JBooth.MicroVerseCore.RoadConfig::Entry, JBooth.MicroVerseCore.RoadConfig::Overlay, UnityEngine.ScriptableObject
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.RoadConfig
class CORDL_TYPE RoadConfig : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Entry = ::JBooth::MicroVerseCore::RoadConfig_Entry;

using Overlay = ::JBooth::MicroVerseCore::RoadConfig_Overlay;

/// @brief Field entries, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_entries, put=__cordl_internal_set_entries)) ::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Entry*>  entries;

/// @brief Field modelWidth, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_modelWidth, put=__cordl_internal_set_modelWidth)) float_t  modelWidth;

/// @brief Field orientation, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_orientation, put=__cordl_internal_set_orientation)) ::JBooth::MicroVerseCore::Road_Orientation  orientation;

/// @brief Field sharedOverlays, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedOverlays, put=__cordl_internal_set_sharedOverlays)) ::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Overlay*>  sharedOverlays;

/// @brief Field stretchToFit, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_stretchToFit, put=__cordl_internal_set_stretchToFit)) bool  stretchToFit;

/// @brief Field stretchToFitBoost, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_stretchToFitBoost, put=__cordl_internal_set_stretchToFitBoost)) float_t  stretchToFitBoost;

/// @brief Method FindOverlay, addr 0x18140e0b0, size 0xc0, virtual false, abstract: false, final false
inline ::JBooth::MicroVerseCore::RoadConfig_Overlay* FindOverlay(::JBooth::MicroVerseCore::RoadConfig_Entry*  e, ::StringW  name) ;

/// @brief Method FindOverlay, addr 0x18140df50, size 0x160, virtual false, abstract: false, final false
inline ::JBooth::MicroVerseCore::RoadConfig_Overlay* FindOverlay(::JBooth::MicroVerseCore::RoadConfig_Entry*  e, ::StringW  name, ::UnityEngine::GameObject*  prefab) ;

/// @brief Method GetAllOverlays, addr 0x18140e170, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::RoadConfig_Overlay*>* GetAllOverlays(::JBooth::MicroVerseCore::RoadConfig_Entry*  e) ;

static inline ::JBooth::MicroVerseCore::RoadConfig* New_ctor() ;

constexpr ::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Entry*> const& __cordl_internal_get_entries() const;

constexpr ::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Entry*>& __cordl_internal_get_entries() ;

constexpr float_t const& __cordl_internal_get_modelWidth() const;

constexpr float_t& __cordl_internal_get_modelWidth() ;

constexpr ::JBooth::MicroVerseCore::Road_Orientation const& __cordl_internal_get_orientation() const;

constexpr ::JBooth::MicroVerseCore::Road_Orientation& __cordl_internal_get_orientation() ;

constexpr ::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Overlay*> const& __cordl_internal_get_sharedOverlays() const;

constexpr ::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Overlay*>& __cordl_internal_get_sharedOverlays() ;

constexpr bool const& __cordl_internal_get_stretchToFit() const;

constexpr bool& __cordl_internal_get_stretchToFit() ;

constexpr float_t const& __cordl_internal_get_stretchToFitBoost() const;

constexpr float_t& __cordl_internal_get_stretchToFitBoost() ;

constexpr void __cordl_internal_set_entries(::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Entry*>  value) ;

constexpr void __cordl_internal_set_modelWidth(float_t  value) ;

constexpr void __cordl_internal_set_orientation(::JBooth::MicroVerseCore::Road_Orientation  value) ;

constexpr void __cordl_internal_set_sharedOverlays(::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Overlay*>  value) ;

constexpr void __cordl_internal_set_stretchToFit(bool  value) ;

constexpr void __cordl_internal_set_stretchToFitBoost(float_t  value) ;

/// @brief Method .ctor, addr 0x18140e210, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoadConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoadConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoadConfig(RoadConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoadConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoadConfig(RoadConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17946};

/// @brief Field entries, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Entry*>  ___entries;

/// @brief Field sharedOverlays, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::JBooth::MicroVerseCore::RoadConfig_Overlay*>  ___sharedOverlays;

/// @brief Field orientation, offset: 0x28, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::Road_Orientation  ___orientation;

/// @brief Field modelWidth, offset: 0x2c, size: 0x4, def value: None
 float_t  ___modelWidth;

/// @brief Field stretchToFit, offset: 0x30, size: 0x1, def value: None
 bool  ___stretchToFit;

/// @brief Field stretchToFitBoost, offset: 0x34, size: 0x4, def value: None
 float_t  ___stretchToFitBoost;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::RoadConfig, ___entries) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadConfig, ___sharedOverlays) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadConfig, ___orientation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadConfig, ___modelWidth) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadConfig, ___stretchToFit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadConfig, ___stretchToFitBoost) == 0x34, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::RoadConfig) == 0x38, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
