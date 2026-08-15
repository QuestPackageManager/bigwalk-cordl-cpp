#pragma once
// IWYU pragma private; include "GlobalNamespace/RoadMaterialConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RoadMaterialConfig)
namespace GlobalNamespace {
class RoadMaterialConfig_Entry;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class RoadMaterialConfig;
}
namespace GlobalNamespace {
class RoadMaterialConfig_Entry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RoadMaterialConfig*);
MARK_REF_T(::GlobalNamespace::RoadMaterialConfig_Entry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoadMaterialConfig*, "", "RoadMaterialConfig");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoadMaterialConfig_Entry*, "", "RoadMaterialConfig/Entry");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoadMaterialConfig/Entry
class CORDL_TYPE RoadMaterialConfig_Entry : public ::System::Object {
public:
// Declarations
/// @brief Field material, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field preview, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_preview, put=__cordl_internal_set_preview)) ::UnityW<::UnityEngine::Texture2D>  preview;

static inline ::GlobalNamespace::RoadMaterialConfig_Entry* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_preview() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_preview() ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_preview(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoadMaterialConfig_Entry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoadMaterialConfig_Entry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoadMaterialConfig_Entry(RoadMaterialConfig_Entry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoadMaterialConfig_Entry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoadMaterialConfig_Entry(RoadMaterialConfig_Entry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17898};

/// @brief Field material, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Field preview, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___preview;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoadMaterialConfig_Entry, ___material) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoadMaterialConfig_Entry, ___preview) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoadMaterialConfig_Entry) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoadMaterialConfig
class CORDL_TYPE RoadMaterialConfig : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Entry = ::GlobalNamespace::RoadMaterialConfig_Entry;

/// @brief Field contentID, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_contentID, put=__cordl_internal_set_contentID)) ::StringW  contentID;

/// @brief Field templateMaterials, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_templateMaterials, put=__cordl_internal_set_templateMaterials)) ::System::Collections::Generic::List_1<::GlobalNamespace::RoadMaterialConfig_Entry*>*  templateMaterials;

static inline ::GlobalNamespace::RoadMaterialConfig* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_contentID() const;

constexpr ::StringW& __cordl_internal_get_contentID() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RoadMaterialConfig_Entry*>* const& __cordl_internal_get_templateMaterials() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RoadMaterialConfig_Entry*>*& __cordl_internal_get_templateMaterials() ;

constexpr void __cordl_internal_set_contentID(::StringW  value) ;

constexpr void __cordl_internal_set_templateMaterials(::System::Collections::Generic::List_1<::GlobalNamespace::RoadMaterialConfig_Entry*>*  value) ;

/// @brief Method .ctor, addr 0x18140e230, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoadMaterialConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoadMaterialConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoadMaterialConfig(RoadMaterialConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoadMaterialConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoadMaterialConfig(RoadMaterialConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17899};

/// @brief Field contentID, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___contentID;

/// @brief Field templateMaterials, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::RoadMaterialConfig_Entry*>*  ___templateMaterials;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoadMaterialConfig, ___contentID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoadMaterialConfig, ___templateMaterials) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoadMaterialConfig) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
