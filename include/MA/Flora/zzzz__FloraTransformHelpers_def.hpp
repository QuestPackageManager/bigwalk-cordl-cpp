#pragma once
// IWYU pragma private; include "MA/Flora/FloraTransformHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FloraTransformHelpers)
namespace MA::Flora {
struct FloraInstanceTransform;
}
namespace UnityEngine {
struct Space;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace MA::Flora {
class FloraTransformHelpers;
}
// Write type traits
MARK_REF_T(::MA::Flora::FloraTransformHelpers*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraTransformHelpers*, "MA.Flora", "FloraTransformHelpers");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraTransformHelpers
class CORDL_TYPE FloraTransformHelpers : public ::System::Object {
public:
// Declarations
/// @brief Method AsInstanceTransform, addr 0x1814f3810, size 0x20, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceTransform AsInstanceTransform(::UnityEngine::Transform*  t, ::UnityEngine::Space  space) ;

/// @brief Method CopyFrom, addr 0x1814f3830, size 0x1a0, virtual false, abstract: false, final false
static inline void CopyFrom(::by_ref<::MA::Flora::FloraInstanceTransform>  instanceTransform, ::UnityEngine::Transform*  transform, ::UnityEngine::Space  space) ;

/// @brief Method CopyFrom, addr 0x1814f39d0, size 0x1e0, virtual false, abstract: false, final false
static inline void CopyFrom(::UnityEngine::Transform*  unityTransform, ::MA::Flora::FloraInstanceTransform  instanceTransform, ::UnityEngine::Space  space) ;

/// @brief Method InverseTransform, addr 0x1814f3bb0, size 0x240, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceTransform InverseTransform(::UnityEngine::Transform*  t, ::MA::Flora::FloraInstanceTransform  worldInstanceTransform) ;

/// @brief Method Transform, addr 0x1814f3df0, size 0x240, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceTransform Transform(::UnityEngine::Transform*  t, ::MA::Flora::FloraInstanceTransform  localInstanceTransform) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraTransformHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraTransformHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraTransformHelpers(FloraTransformHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraTransformHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraTransformHelpers(FloraTransformHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13287};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraTransformHelpers) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
