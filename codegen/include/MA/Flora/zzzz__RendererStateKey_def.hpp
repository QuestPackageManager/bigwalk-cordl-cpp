#pragma once
// IWYU pragma private; include "MA/Flora/RendererStateKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RendererStateKey)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MA::Flora {
struct RendererStateKey;
}
// Write type traits
MARK_VAL_T(::MA::Flora::RendererStateKey);
DEFINE_IL2CPP_CLASS(::MA::Flora::RendererStateKey, "MA.Flora", "RendererStateKey");
// Dependencies UnityEngine.EntityId
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.RendererStateKey
struct CORDL_TYPE RendererStateKey {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::RendererStateKey>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::RendererStateKey>*() ;

/// @brief Method Equals, addr 0x1814a7ac0, size 0xe0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1814a7ba0, size 0xa0, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::RendererStateKey  other) ;

/// @brief Method GetHashCode, addr 0x1814a7c40, size 0x80, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::RendererStateKey>"
constexpr ::System::IEquatable_1<::MA::Flora::RendererStateKey>* i___System__IEquatable_1___MA__Flora__RendererStateKey_() ;

// Ctor Parameters []
// @brief default ctor
constexpr RendererStateKey() ;

// Ctor Parameters [CppParam { name: "OverrideMaterialId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "DescriptorSignature", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "MetadataFlags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "DescriptorCount", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "LodIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr RendererStateKey(::UnityEngine::EntityId  OverrideMaterialId, uint64_t  DescriptorSignature, uint32_t  MetadataFlags, uint16_t  DescriptorCount, uint8_t  LodIndex, uint8_t  Type) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13071};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field OverrideMaterialId, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::EntityId  OverrideMaterialId;

/// @brief Field DescriptorSignature, offset: 0x8, size: 0x8, def value: None
 uint64_t  DescriptorSignature;

/// @brief Field MetadataFlags, offset: 0x10, size: 0x4, def value: None
 uint32_t  MetadataFlags;

/// @brief Field DescriptorCount, offset: 0x14, size: 0x2, def value: None
 uint16_t  DescriptorCount;

/// @brief Field LodIndex, offset: 0x16, size: 0x1, def value: None
 uint8_t  LodIndex;

/// @brief Field Type, offset: 0x17, size: 0x1, def value: None
 uint8_t  Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::RendererStateKey, OverrideMaterialId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::RendererStateKey, DescriptorSignature) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::RendererStateKey, MetadataFlags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::RendererStateKey, DescriptorCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::RendererStateKey, LodIndex) == 0x16, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::RendererStateKey, Type) == 0x17, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::RendererStateKey) == 0x18, "Size mismatch!");

} // namespace end def MA::Flora
