#pragma once
// IWYU pragma private; include "MA/Flora/FloraInstanceContainerHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FloraInstanceContainerHelpers)
namespace MA::Flora {
class FloraInstanceContainer;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Space;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace MA::Flora {
class FloraInstanceContainerHelpers;
}
// Write type traits
MARK_REF_T(::MA::Flora::FloraInstanceContainerHelpers*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraInstanceContainerHelpers*, "MA.Flora", "FloraInstanceContainerHelpers");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraInstanceContainerHelpers
class CORDL_TYPE FloraInstanceContainerHelpers : public ::System::Object {
public:
// Declarations
/// @brief Method AddInstance, addr 0x1814e3ca0, size 0x110, virtual false, abstract: false, final false
static inline int32_t AddInstance(::MA::Flora::FloraInstanceContainer*  container, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, ::UnityEngine::Space  space) ;

/// @brief Method AddInstance, addr 0x1814e3ae0, size 0xf0, virtual false, abstract: false, final false
static inline int32_t AddInstance(::MA::Flora::FloraInstanceContainer*  container, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Space  space) ;

/// @brief Method AddInstance, addr 0x1814e3bd0, size 0xd0, virtual false, abstract: false, final false
static inline int32_t AddInstance(::MA::Flora::FloraInstanceContainer*  container, ::UnityEngine::Vector3  position, ::UnityEngine::Space  space) ;

/// @brief Method UpdateInstanceTransform, addr 0x1814e3eb0, size 0x120, virtual false, abstract: false, final false
static inline void UpdateInstanceTransform(::MA::Flora::FloraInstanceContainer*  container, int32_t  instanceIndex, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, ::UnityEngine::Space  space) ;

/// @brief Method UpdateInstanceTransform, addr 0x1814e3db0, size 0x100, virtual false, abstract: false, final false
static inline void UpdateInstanceTransform(::MA::Flora::FloraInstanceContainer*  container, int32_t  instanceIndex, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Space  space) ;

/// @brief Method UpdateInstanceTransform, addr 0x1814e3fd0, size 0xf0, virtual false, abstract: false, final false
static inline void UpdateInstanceTransform(::MA::Flora::FloraInstanceContainer*  container, int32_t  instanceIndex, ::UnityEngine::Vector3  position, ::UnityEngine::Space  space) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraInstanceContainerHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainerHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraInstanceContainerHelpers(FloraInstanceContainerHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainerHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraInstanceContainerHelpers(FloraInstanceContainerHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13284};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraInstanceContainerHelpers) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
