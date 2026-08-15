#pragma once
// IWYU pragma private; include "MA/Flora/TemplateLayoutKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__TemplateCapabilityProfile_def.hpp"
#include "MA/Flora/zzzz__TemplateData_def.hpp"
#include "MA/Flora/zzzz__TemplateRenderType_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__LODFadeMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TemplateLayoutKey)
namespace MA::Flora {
struct TemplateData;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MA::Flora {
struct TemplateLayoutKey;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TemplateLayoutKey);
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateLayoutKey, "MA.Flora", "TemplateLayoutKey");
// Dependencies MA.Flora.TemplateCapabilityProfile, MA.Flora.TemplateData, MA.Flora.TemplateRenderType, Unity.Mathematics.float4, UnityEngine.EntityId, UnityEngine.LODFadeMode, UnityEngine.Vector3
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateLayoutKey
struct CORDL_TYPE TemplateLayoutKey {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::TemplateLayoutKey>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::TemplateLayoutKey>*() ;

/// @brief Method Equals, addr 0x1814a9350, size 0x110, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1814a9460, size 0x7d0, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::TemplateLayoutKey  other) ;

/// @brief Method GetHashCode, addr 0x1814a9c30, size 0x2b0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetTemplateDataHash, addr 0x1814a9ee0, size 0x940, virtual false, abstract: false, final false
static inline int32_t GetTemplateDataHash(::by_ref<::MA::Flora::TemplateData>  data) ;

/// @brief Method TemplateDataEquals, addr 0x181496c10, size 0xf0, virtual false, abstract: false, final false
static inline bool TemplateDataEquals(::by_ref<::MA::Flora::TemplateData>  a, ::by_ref<::MA::Flora::TemplateData>  b) ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::TemplateLayoutKey>"
constexpr ::System::IEquatable_1<::MA::Flora::TemplateLayoutKey>* i___System__IEquatable_1___MA__Flora__TemplateLayoutKey_() ;

// Ctor Parameters []
// @brief default ctor
constexpr TemplateLayoutKey() ;

// Ctor Parameters [CppParam { name: "GrassMaterialId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "CapabilityProfile", ty: "::MA::Flora::TemplateCapabilityProfile", modifiers: "", def_value: None }, CppParam { name: "GroupSignature", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "GroupCount", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "::MA::Flora::TemplateRenderType", modifiers: "", def_value: None }, CppParam { name: "InitialVariationColor", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "LodFadeMode", ty: "::UnityEngine::LODFadeMode", modifiers: "", def_value: None }, CppParam { name: "HasAnimatedCrossFade", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "SupportsFadeKeyword", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "LocalAnchorPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "TemplateData", ty: "::MA::Flora::TemplateData", modifiers: "", def_value: None }]
constexpr TemplateLayoutKey(::UnityEngine::EntityId  GrassMaterialId, ::MA::Flora::TemplateCapabilityProfile  CapabilityProfile, uint64_t  GroupSignature, uint16_t  GroupCount, ::MA::Flora::TemplateRenderType  Type, ::Unity::Mathematics::float4  InitialVariationColor, ::UnityEngine::LODFadeMode  LodFadeMode, bool  HasAnimatedCrossFade, bool  SupportsFadeKeyword, ::UnityEngine::Vector3  LocalAnchorPoint, ::MA::Flora::TemplateData  TemplateData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13077};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xf0};

/// @brief Field GrassMaterialId, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::EntityId  GrassMaterialId;

/// @brief Field CapabilityProfile, offset: 0x4, size: 0x10, def value: None
 ::MA::Flora::TemplateCapabilityProfile  CapabilityProfile;

/// @brief Field GroupSignature, offset: 0x18, size: 0x8, def value: None
 uint64_t  GroupSignature;

/// @brief Field GroupCount, offset: 0x20, size: 0x2, def value: None
 uint16_t  GroupCount;

/// @brief Field Type, offset: 0x24, size: 0x4, def value: None
 ::MA::Flora::TemplateRenderType  Type;

/// @brief Field InitialVariationColor, offset: 0x28, size: 0x10, def value: None
 ::Unity::Mathematics::float4  InitialVariationColor;

/// @brief Field LodFadeMode, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::LODFadeMode  LodFadeMode;

/// @brief Field HasAnimatedCrossFade, offset: 0x3c, size: 0x1, def value: None
 bool  HasAnimatedCrossFade;

/// @brief Field SupportsFadeKeyword, offset: 0x3d, size: 0x1, def value: None
 bool  SupportsFadeKeyword;

/// @brief Field LocalAnchorPoint, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  LocalAnchorPoint;

/// @brief Field TemplateData, offset: 0x4c, size: 0xa0, def value: None
 ::MA::Flora::TemplateData  TemplateData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateLayoutKey, GrassMaterialId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutKey, CapabilityProfile) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutKey, GroupSignature) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutKey, GroupCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutKey, Type) == 0x24, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutKey, InitialVariationColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutKey, LodFadeMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutKey, HasAnimatedCrossFade) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutKey, SupportsFadeKeyword) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutKey, LocalAnchorPoint) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutKey, TemplateData) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateLayoutKey) == 0xf0, "Size mismatch!");

} // namespace end def MA::Flora
