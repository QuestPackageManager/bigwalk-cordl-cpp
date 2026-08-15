#pragma once
// IWYU pragma private; include "MA/Flora/FloraRuntimeShaders.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FloraRuntimeShaders)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
// Forward declare root types
namespace MA::Flora {
class FloraRuntimeShaders;
}
// Write type traits
MARK_REF_T(::MA::Flora::FloraRuntimeShaders*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraRuntimeShaders*, "MA.Flora", "FloraRuntimeShaders");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraRuntimeShaders
class CORDL_TYPE FloraRuntimeShaders : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_isAvailableInPlayerBuild)) bool  isAvailableInPlayerBuild;

 __declspec(property(get=get_version)) int32_t  version;

/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr operator  ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr operator  ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

static inline ::MA::Flora::FloraRuntimeShaders* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isAvailableInPlayerBuild, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool get_isAvailableInPlayerBuild() ;

/// @brief Method get_version, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline int32_t get_version() ;

/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraRuntimeShaders() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraRuntimeShaders", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraRuntimeShaders(FloraRuntimeShaders && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraRuntimeShaders", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraRuntimeShaders(FloraRuntimeShaders const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13363};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraRuntimeShaders) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
