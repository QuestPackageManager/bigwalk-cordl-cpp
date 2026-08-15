#pragma once
// IWYU pragma private; include "UnityEngine/Skybox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(Skybox)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine {
class Skybox;
}
// Write type traits
MARK_REF_T(::UnityEngine::Skybox*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Skybox*, "UnityEngine", "Skybox");
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Skybox
class CORDL_TYPE Skybox : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_material, put=set_material)) ::UnityW<::UnityEngine::Material>  material;

static inline ::UnityEngine::Skybox* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_material, addr 0x18225d5a0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_material() ;

/// @brief Method get_material_Injected, addr 0x18225d590, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_material_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_material, addr 0x18225d5f0, size 0x50, virtual false, abstract: false, final false
inline void set_material(::UnityEngine::Material*  value) ;

/// @brief Method set_material_Injected, addr 0x18225d5e0, size 0x10, virtual false, abstract: false, final false
static inline void set_material_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Skybox() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Skybox", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Skybox(Skybox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Skybox", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Skybox(Skybox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10528};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Skybox) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
