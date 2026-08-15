#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/CollisionAreaVisualizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CollisionAreaVisualizer)
namespace System {
template<typename T>
class Action_1;
}
namespace WaveHarmonic::Crest::Utility {
class DebugUtility_DrawLine;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class CollisionAreaVisualizer;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::CollisionAreaVisualizer*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::CollisionAreaVisualizer*, "WaveHarmonic.Crest", "CollisionAreaVisualizer");
// Dependencies UnityEngine.Vector3, WaveHarmonic.Crest.CollisionLayer, WaveHarmonic.Crest.Internal.ManagedBehaviour`1<T>
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.CollisionAreaVisualizer
class CORDL_TYPE CollisionAreaVisualizer : public ::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>> {
public:
// Declarations
 __declspec(property(get=get_OnUpdateMethod)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*  OnUpdateMethod;

/// @brief Field _Layer, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__Layer, put=__cordl_internal_set__Layer)) ::WaveHarmonic::Crest::CollisionLayer  _Layer;

/// @brief Field _ObjectWidth, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__ObjectWidth, put=__cordl_internal_set__ObjectWidth)) float_t  _ObjectWidth;

/// @brief Field _ResultDisplacements, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__ResultDisplacements, put=__cordl_internal_set__ResultDisplacements)) ::ArrayW<::UnityEngine::Vector3>  _ResultDisplacements;

/// @brief Field _ResultHeights, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__ResultHeights, put=__cordl_internal_set__ResultHeights)) ::ArrayW<float_t>  _ResultHeights;

/// @brief Field _ResultNormals, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__ResultNormals, put=__cordl_internal_set__ResultNormals)) ::ArrayW<::UnityEngine::Vector3>  _ResultNormals;

/// @brief Field _SamplePositions, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__SamplePositions, put=__cordl_internal_set__SamplePositions)) ::ArrayW<::UnityEngine::Vector3>  _SamplePositions;

/// @brief Field _StepSize, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__StepSize, put=__cordl_internal_set__StepSize)) float_t  _StepSize;

/// @brief Field _Steps, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Steps, put=__cordl_internal_set__Steps)) int32_t  _Steps;

/// @brief Field _UseDisplacements, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseDisplacements, put=__cordl_internal_set__UseDisplacements)) bool  _UseDisplacements;

/// @brief Field _UseNormals, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseNormals, put=__cordl_internal_set__UseNormals)) bool  _UseNormals;

static inline ::WaveHarmonic::Crest::CollisionAreaVisualizer* New_ctor() ;

/// @brief Method OnUpdate, addr 0x1825712a0, size 0x510, virtual false, abstract: false, final false
inline void OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method Render, addr 0x1825717b0, size 0x230, virtual false, abstract: false, final false
inline void Render(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*  draw) ;

constexpr ::WaveHarmonic::Crest::CollisionLayer const& __cordl_internal_get__Layer() const;

constexpr ::WaveHarmonic::Crest::CollisionLayer& __cordl_internal_get__Layer() ;

constexpr float_t const& __cordl_internal_get__ObjectWidth() const;

constexpr float_t& __cordl_internal_get__ObjectWidth() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__ResultDisplacements() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__ResultDisplacements() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__ResultHeights() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__ResultHeights() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__ResultNormals() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__ResultNormals() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__SamplePositions() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__SamplePositions() ;

constexpr float_t const& __cordl_internal_get__StepSize() const;

constexpr float_t& __cordl_internal_get__StepSize() ;

constexpr int32_t const& __cordl_internal_get__Steps() const;

constexpr int32_t& __cordl_internal_get__Steps() ;

constexpr bool const& __cordl_internal_get__UseDisplacements() const;

constexpr bool& __cordl_internal_get__UseDisplacements() ;

constexpr bool const& __cordl_internal_get__UseNormals() const;

constexpr bool& __cordl_internal_get__UseNormals() ;

constexpr void __cordl_internal_set__Layer(::WaveHarmonic::Crest::CollisionLayer  value) ;

constexpr void __cordl_internal_set__ObjectWidth(float_t  value) ;

constexpr void __cordl_internal_set__ResultDisplacements(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__ResultHeights(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__ResultNormals(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__SamplePositions(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__StepSize(float_t  value) ;

constexpr void __cordl_internal_set__Steps(int32_t  value) ;

constexpr void __cordl_internal_set__UseDisplacements(bool  value) ;

constexpr void __cordl_internal_set__UseNormals(bool  value) ;

/// @brief Method .ctor, addr 0x1825719e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnUpdateMethod, addr 0x182571a00, size 0x40, virtual true, abstract: false, final false
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* get_OnUpdateMethod() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollisionAreaVisualizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollisionAreaVisualizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollisionAreaVisualizer(CollisionAreaVisualizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollisionAreaVisualizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollisionAreaVisualizer(CollisionAreaVisualizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16589};

/// @brief Field _Layer, offset: 0x50, size: 0x4, def value: None
 ::WaveHarmonic::Crest::CollisionLayer  ____Layer;

/// @brief Field _ObjectWidth, offset: 0x54, size: 0x4, def value: None
 float_t  ____ObjectWidth;

/// @brief Field _StepSize, offset: 0x58, size: 0x4, def value: None
 float_t  ____StepSize;

/// @brief Field _Steps, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____Steps;

/// @brief Field _UseDisplacements, offset: 0x60, size: 0x1, def value: None
 bool  ____UseDisplacements;

/// @brief Field _UseNormals, offset: 0x61, size: 0x1, def value: None
 bool  ____UseNormals;

/// @brief Field _ResultHeights, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<float_t>  ____ResultHeights;

/// @brief Field _ResultDisplacements, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____ResultDisplacements;

/// @brief Field _ResultNormals, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____ResultNormals;

/// @brief Field _SamplePositions, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____SamplePositions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::CollisionAreaVisualizer, ____Layer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CollisionAreaVisualizer, ____ObjectWidth) == 0x54, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CollisionAreaVisualizer, ____StepSize) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CollisionAreaVisualizer, ____Steps) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CollisionAreaVisualizer, ____UseDisplacements) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CollisionAreaVisualizer, ____UseNormals) == 0x61, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CollisionAreaVisualizer, ____ResultHeights) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CollisionAreaVisualizer, ____ResultDisplacements) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CollisionAreaVisualizer, ____ResultNormals) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CollisionAreaVisualizer, ____SamplePositions) == 0x80, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::CollisionAreaVisualizer) == 0x88, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
