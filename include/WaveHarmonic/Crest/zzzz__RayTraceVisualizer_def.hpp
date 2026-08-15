#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/RayTraceVisualizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_def.hpp"
CORDL_MODULE_EXPORT(RayTraceVisualizer)
namespace System {
template<typename T>
class Action_1;
}
namespace WaveHarmonic::Crest {
class RayCastHelper;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class RayTraceVisualizer;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::RayTraceVisualizer*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::RayTraceVisualizer*, "WaveHarmonic.Crest", "RayTraceVisualizer");
// Dependencies WaveHarmonic.Crest.Internal.ManagedBehaviour`1<T>
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.RayTraceVisualizer
class CORDL_TYPE RayTraceVisualizer : public ::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>> {
public:
// Declarations
 __declspec(property(get=get_OnUpdateMethod)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*  OnUpdateMethod;

/// @brief Field _RayCast, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__RayCast, put=__cordl_internal_set__RayCast)) ::WaveHarmonic::Crest::RayCastHelper*  _RayCast;

static inline ::WaveHarmonic::Crest::RayTraceVisualizer* New_ctor() ;

/// @brief Method OnUpdate, addr 0x18257c640, size 0x360, virtual false, abstract: false, final false
inline void OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

constexpr ::WaveHarmonic::Crest::RayCastHelper* const& __cordl_internal_get__RayCast() const;

constexpr ::WaveHarmonic::Crest::RayCastHelper*& __cordl_internal_get__RayCast() ;

constexpr void __cordl_internal_set__RayCast(::WaveHarmonic::Crest::RayCastHelper*  value) ;

/// @brief Method .ctor, addr 0x18257c9a0, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnUpdateMethod, addr 0x18257caa0, size 0x70, virtual true, abstract: false, final false
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* get_OnUpdateMethod() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RayTraceVisualizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RayTraceVisualizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RayTraceVisualizer(RayTraceVisualizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RayTraceVisualizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RayTraceVisualizer(RayTraceVisualizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16598};

/// @brief Field _RayCast, offset: 0x50, size: 0x8, def value: None
 ::WaveHarmonic::Crest::RayCastHelper*  ____RayCast;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::RayTraceVisualizer, ____RayCast) == 0x50, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::RayTraceVisualizer) == 0x58, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
