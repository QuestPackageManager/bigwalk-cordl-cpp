#pragma once
// IWYU pragma private; include "GlobalNamespace/SpawnEmCheat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SpawnEmCheat)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SpawnEmCheat;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpawnEmCheat*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpawnEmCheat*, "", "SpawnEmCheat");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpawnEmCheat
class CORDL_TYPE SpawnEmCheat : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _go, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__go, put=setStaticF__go)) ::UnityW<::UnityEngine::GameObject>  _go;

/// @brief Method Awake, addr 0x1803dec90, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SpawnEmCheat* New_ctor() ;

/// @brief Method Spawn, addr 0x1803decf0, size 0x50, virtual false, abstract: false, final false
static inline void Spawn() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::UnityEngine::GameObject> getStaticF__go() ;

static inline void setStaticF__go(::UnityW<::UnityEngine::GameObject>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpawnEmCheat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpawnEmCheat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpawnEmCheat(SpawnEmCheat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpawnEmCheat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpawnEmCheat(SpawnEmCheat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4871};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SpawnEmCheat) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
