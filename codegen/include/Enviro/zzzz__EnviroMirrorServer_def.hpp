#pragma once
// IWYU pragma private; include "Enviro/EnviroMirrorServer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EnviroMirrorServer)
// Forward declare root types
namespace Enviro {
class EnviroMirrorServer;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroMirrorServer*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroMirrorServer*, "Enviro", "EnviroMirrorServer");
// Dependencies UnityEngine.MonoBehaviour
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroMirrorServer
class CORDL_TYPE EnviroMirrorServer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Enviro::EnviroMirrorServer* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroMirrorServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroMirrorServer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroMirrorServer(EnviroMirrorServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroMirrorServer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroMirrorServer(EnviroMirrorServer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5815};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Enviro::EnviroMirrorServer) == 0x20, "Size mismatch!");

} // namespace end def Enviro
