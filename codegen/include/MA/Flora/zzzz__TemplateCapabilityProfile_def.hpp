#pragma once
// IWYU pragma private; include "MA/Flora/TemplateCapabilityProfile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__BatchBuiltinPropertyFlags_def.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_def.hpp"
#include "MA/Flora/zzzz__TemplateOptions_def.hpp"
#include "MA/Flora/zzzz__TemplateRenderFlags_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TemplateCapabilityProfile)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MA::Flora {
struct TemplateCapabilityProfile;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TemplateCapabilityProfile);
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateCapabilityProfile, "MA.Flora", "TemplateCapabilityProfile");
// Dependencies MA.Flora.BatchBuiltinPropertyFlags, MA.Flora.BatchDomainIndex, MA.Flora.TemplateOptions, MA.Flora.TemplateRenderFlags
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateCapabilityProfile
struct CORDL_TYPE TemplateCapabilityProfile {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::TemplateCapabilityProfile>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::TemplateCapabilityProfile>*() ;

/// @brief Method Equals, addr 0x1814a7dc0, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1814a7e50, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::TemplateCapabilityProfile  other) ;

/// @brief Method GetHashCode, addr 0x1814a7ea0, size 0x40, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::TemplateCapabilityProfile>"
constexpr ::System::IEquatable_1<::MA::Flora::TemplateCapabilityProfile>* i___System__IEquatable_1___MA__Flora__TemplateCapabilityProfile_() ;

// Ctor Parameters []
// @brief default ctor
constexpr TemplateCapabilityProfile() ;

// Ctor Parameters [CppParam { name: "MetadataFlags", ty: "::MA::Flora::BatchBuiltinPropertyFlags", modifiers: "", def_value: None }, CppParam { name: "BatchDomainIndex", ty: "::MA::Flora::BatchDomainIndex", modifiers: "", def_value: None }, CppParam { name: "EffectiveFlags", ty: "::MA::Flora::TemplateRenderFlags", modifiers: "", def_value: None }, CppParam { name: "Options", ty: "::MA::Flora::TemplateOptions", modifiers: "", def_value: None }]
constexpr TemplateCapabilityProfile(::MA::Flora::BatchBuiltinPropertyFlags  MetadataFlags, ::MA::Flora::BatchDomainIndex  BatchDomainIndex, ::MA::Flora::TemplateRenderFlags  EffectiveFlags, ::MA::Flora::TemplateOptions  Options) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13069};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field MetadataFlags, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::BatchBuiltinPropertyFlags  MetadataFlags;

/// @brief Field BatchDomainIndex, offset: 0x4, size: 0x4, def value: None
 ::MA::Flora::BatchDomainIndex  BatchDomainIndex;

/// @brief Field EffectiveFlags, offset: 0x8, size: 0x1, def value: None
 ::MA::Flora::TemplateRenderFlags  EffectiveFlags;

/// @brief Field Options, offset: 0xc, size: 0x4, def value: None
 ::MA::Flora::TemplateOptions  Options;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateCapabilityProfile, MetadataFlags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateCapabilityProfile, BatchDomainIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateCapabilityProfile, EffectiveFlags) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateCapabilityProfile, Options) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateCapabilityProfile) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
