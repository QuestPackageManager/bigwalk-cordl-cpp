#pragma once
// IWYU pragma private; include "MA/Flora/ArchetypeKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__InstanceTag_def.hpp"
#include "MA/Flora/zzzz__TemplateIndex_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArchetypeKey)
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace MA::Flora {
struct ArchetypeKey;
}
// Write type traits
MARK_VAL_T(::MA::Flora::ArchetypeKey);
DEFINE_IL2CPP_CLASS(::MA::Flora::ArchetypeKey, "MA.Flora", "ArchetypeKey");
// Dependencies MA.Flora.InstanceTag, MA.Flora.TemplateIndex, UnityEngine.EntityId, UnityEngine.SceneManagement.Scene
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.ArchetypeKey
struct CORDL_TYPE ArchetypeKey {
public:
// Declarations
 __declspec(property(get=get_IsContainerOwned)) bool  IsContainerOwned;

 __declspec(property(get=get_IsEnabled)) bool  IsEnabled;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::ArchetypeKey>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::ArchetypeKey>*() ;

/// @brief Method Equals, addr 0x181455af0, size 0xb0, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::ArchetypeKey  other) ;

/// @brief Method GetHashCode, addr 0x181455ba0, size 0xd0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method get_IsContainerOwned, addr 0x181455c70, size 0x20, virtual false, abstract: false, final false
inline bool get_IsContainerOwned() ;

/// @brief Method get_IsEnabled, addr 0x181455c90, size 0x20, virtual false, abstract: false, final false
inline bool get_IsEnabled() ;

/// @brief Method get_None, addr 0x180974130, size 0xeb0, virtual false, abstract: false, final false
static inline ::MA::Flora::ArchetypeKey get_None() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::ArchetypeKey>"
constexpr ::System::IEquatable_1<::MA::Flora::ArchetypeKey>* i___System__IEquatable_1___MA__Flora__ArchetypeKey_() ;

// Ctor Parameters []
// @brief default ctor
constexpr ArchetypeKey() ;

// Ctor Parameters [CppParam { name: "Tags", ty: "::MA::Flora::InstanceTag", modifiers: "", def_value: None }, CppParam { name: "Scene", ty: "::UnityEngine::SceneManagement::Scene", modifiers: "", def_value: None }, CppParam { name: "Layer", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "MaxRenderDistance", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "LightmapIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Template", ty: "::MA::Flora::TemplateIndex", modifiers: "", def_value: None }, CppParam { name: "ContainerEntity", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }]
constexpr ArchetypeKey(::MA::Flora::InstanceTag  Tags, ::UnityEngine::SceneManagement::Scene  Scene, uint8_t  Layer, uint16_t  MaxRenderDistance, int32_t  LightmapIndex, ::MA::Flora::TemplateIndex  Template, ::UnityEngine::EntityId  ContainerEntity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12905};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Tags, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::InstanceTag  Tags;

/// @brief Field Scene, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::SceneManagement::Scene  Scene;

/// @brief Field Layer, offset: 0x8, size: 0x1, def value: None
 uint8_t  Layer;

/// @brief Field MaxRenderDistance, offset: 0xa, size: 0x2, def value: None
 uint16_t  MaxRenderDistance;

/// @brief Field LightmapIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  LightmapIndex;

/// @brief Field Template, offset: 0x10, size: 0x4, def value: None
 ::MA::Flora::TemplateIndex  Template;

/// @brief Field ContainerEntity, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::EntityId  ContainerEntity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::ArchetypeKey, Tags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ArchetypeKey, Scene) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ArchetypeKey, Layer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ArchetypeKey, MaxRenderDistance) == 0xa, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ArchetypeKey, LightmapIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ArchetypeKey, Template) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ArchetypeKey, ContainerEntity) == 0x14, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::ArchetypeKey) == 0x18, "Size mismatch!");

} // namespace end def MA::Flora
