#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/CollisionQueryPerCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__QueryPerCamera_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CollisionQueryPerCamera)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace WaveHarmonic::Crest {
struct CollisionLayer;
}
namespace WaveHarmonic::Crest {
struct CollisionLayers;
}
namespace WaveHarmonic::Crest {
class CollisionQueryWithPasses;
}
namespace WaveHarmonic::Crest {
class ICollisionProvider;
}
namespace WaveHarmonic::Crest {
class IQueryProvider;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class CollisionQueryPerCamera;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::CollisionQueryPerCamera*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::CollisionQueryPerCamera*, "WaveHarmonic.Crest", "CollisionQueryPerCamera");
// Dependencies WaveHarmonic.Crest.QueryPerCamera`1<T>
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.CollisionQueryPerCamera
class CORDL_TYPE CollisionQueryPerCamera : public ::WaveHarmonic::Crest::QueryPerCamera_1<::WaveHarmonic::Crest::CollisionQueryWithPasses*> {
public:
// Declarations
/// @brief Convert operator to "::WaveHarmonic::Crest::ICollisionProvider"
constexpr operator  ::WaveHarmonic::Crest::ICollisionProvider*() noexcept;

/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr operator  ::WaveHarmonic::Crest::IQueryProvider*() noexcept;

static inline ::WaveHarmonic::Crest::CollisionQueryPerCamera* New_ctor() ;

static inline ::WaveHarmonic::Crest::CollisionQueryPerCamera* New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method Query, addr 0x182571a40, size 0x3f0, virtual true, abstract: false, final true
inline int32_t Query(int32_t  hash, float_t  minimumLength, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  displacements, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector3>  velocities, ::WaveHarmonic::Crest::CollisionLayer  layer, ::System::Nullable_1<::UnityEngine::Vector3>  center) ;

/// @brief Method Query, addr 0x182571e30, size 0x3f0, virtual true, abstract: false, final true
inline int32_t Query(int32_t  hash, float_t  minimumLength, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<float_t>  heights, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector3>  velocities, ::WaveHarmonic::Crest::CollisionLayer  layer, ::System::Nullable_1<::UnityEngine::Vector3>  center) ;

/// @brief Method SendReadBack, addr 0x182572220, size 0x90, virtual false, abstract: false, final false
inline void SendReadBack(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::CollisionLayers  layers) ;

/// @brief Method UpdateQueries, addr 0x1825722b0, size 0x80, virtual false, abstract: false, final false
inline void UpdateQueries(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::CollisionLayer  layer) ;

/// @brief Method .ctor, addr 0x182572340, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x182572330, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Convert to "::WaveHarmonic::Crest::ICollisionProvider"
constexpr ::WaveHarmonic::Crest::ICollisionProvider* i___WaveHarmonic__Crest__ICollisionProvider() noexcept;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* i___WaveHarmonic__Crest__IQueryProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollisionQueryPerCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollisionQueryPerCamera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollisionQueryPerCamera(CollisionQueryPerCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollisionQueryPerCamera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollisionQueryPerCamera(CollisionQueryPerCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16594};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::CollisionQueryPerCamera) == 0x20, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
