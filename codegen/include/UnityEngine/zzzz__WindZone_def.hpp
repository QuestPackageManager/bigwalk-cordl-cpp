#pragma once
// IWYU pragma private; include "UnityEngine/WindZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WindZone)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class WindZone;
}
// Write type traits
MARK_REF_T(::UnityEngine::WindZone*);
DEFINE_IL2CPP_CLASS(::UnityEngine::WindZone*, "UnityEngine", "WindZone");
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.WindZone
class CORDL_TYPE WindZone : public ::UnityEngine::Component {
public:
// Declarations
 __declspec(property(get=get_radius)) float_t  radius;

 __declspec(property(get=get_windMain, put=set_windMain)) float_t  windMain;

 __declspec(property(get=get_windTurbulence, put=set_windTurbulence)) float_t  windTurbulence;

static inline ::UnityEngine::WindZone* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_radius, addr 0x18254dd00, size 0x30, virtual false, abstract: false, final false
inline float_t get_radius() ;

/// @brief Method get_radius_Injected, addr 0x18254dcf0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_radius_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_windMain, addr 0x18254dd40, size 0x30, virtual false, abstract: false, final false
inline float_t get_windMain() ;

/// @brief Method get_windMain_Injected, addr 0x18254dd30, size 0x10, virtual false, abstract: false, final false
static inline float_t get_windMain_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_windTurbulence, addr 0x18254dd80, size 0x30, virtual false, abstract: false, final false
inline float_t get_windTurbulence() ;

/// @brief Method get_windTurbulence_Injected, addr 0x18254dd70, size 0x10, virtual false, abstract: false, final false
static inline float_t get_windTurbulence_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_windMain, addr 0x18254ddc0, size 0x40, virtual false, abstract: false, final false
inline void set_windMain(float_t  value) ;

/// @brief Method set_windMain_Injected, addr 0x18254ddb0, size 0x10, virtual false, abstract: false, final false
static inline void set_windMain_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_windTurbulence, addr 0x18254de10, size 0x40, virtual false, abstract: false, final false
inline void set_windTurbulence(float_t  value) ;

/// @brief Method set_windTurbulence_Injected, addr 0x18254de00, size 0x10, virtual false, abstract: false, final false
static inline void set_windTurbulence_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WindZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WindZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WindZone(WindZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindZone(WindZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21483};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::WindZone) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
