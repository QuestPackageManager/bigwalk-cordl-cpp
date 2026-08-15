#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/CollisionQuery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__QueryBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CollisionQuery)
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
class CollisionQuery;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::CollisionQuery*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::CollisionQuery*, "WaveHarmonic.Crest", "CollisionQuery");
// Dependencies WaveHarmonic.Crest.QueryBase
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.CollisionQuery
class CORDL_TYPE CollisionQuery : public ::WaveHarmonic::Crest::QueryBase {
public:
// Declarations
 __declspec(property(get=get_Kernel)) int32_t  Kernel;

/// @brief Convert operator to "::WaveHarmonic::Crest::ICollisionProvider"
constexpr operator  ::WaveHarmonic::Crest::ICollisionProvider*() noexcept;

/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr operator  ::WaveHarmonic::Crest::IQueryProvider*() noexcept;

static inline ::WaveHarmonic::Crest::CollisionQuery* New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method Query, addr 0x182572b50, size 0xb0, virtual true, abstract: false, final true
inline int32_t Query(int32_t  ownerHash, float_t  minSpatialLength, ::ArrayW<::UnityEngine::Vector3>  queryPoints, ::ArrayW<::UnityEngine::Vector3>  resultDisplacements, ::ArrayW<::UnityEngine::Vector3>  resultNormals, ::ArrayW<::UnityEngine::Vector3>  resultVelocities, ::WaveHarmonic::Crest::CollisionLayer  layer, ::System::Nullable_1<::UnityEngine::Vector3>  center) ;

/// @brief Method Query, addr 0x182572c00, size 0xb0, virtual true, abstract: false, final true
inline int32_t Query(int32_t  ownerHash, float_t  minimumSpatialLength, ::ArrayW<::UnityEngine::Vector3>  queryPoints, ::ArrayW<float_t>  resultHeights, ::ArrayW<::UnityEngine::Vector3>  resultNormals, ::ArrayW<::UnityEngine::Vector3>  resultVelocities, ::WaveHarmonic::Crest::CollisionLayer  layer, ::System::Nullable_1<::UnityEngine::Vector3>  center) ;

/// @brief Method .ctor, addr 0x182572cb0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method get_Kernel, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline int32_t get_Kernel() ;

/// @brief Convert to "::WaveHarmonic::Crest::ICollisionProvider"
constexpr ::WaveHarmonic::Crest::ICollisionProvider* i___WaveHarmonic__Crest__ICollisionProvider() noexcept;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* i___WaveHarmonic__Crest__IQueryProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollisionQuery() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollisionQuery", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollisionQuery(CollisionQuery && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollisionQuery", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollisionQuery(CollisionQuery const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16593};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::CollisionQuery) == 0xb0, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
