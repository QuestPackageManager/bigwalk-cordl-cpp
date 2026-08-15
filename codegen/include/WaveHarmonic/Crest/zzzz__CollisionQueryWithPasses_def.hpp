#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/CollisionQueryWithPasses.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CollisionQueryWithPasses)
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
class CollisionQuery;
}
namespace WaveHarmonic::Crest {
class ICollisionProvider;
}
namespace WaveHarmonic::Crest {
class IQueryProvider;
}
namespace WaveHarmonic::Crest {
class IQueryable;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class CollisionQueryWithPasses;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::CollisionQueryWithPasses*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::CollisionQueryWithPasses*, "WaveHarmonic.Crest", "CollisionQueryWithPasses");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.CollisionQueryWithPasses
class CORDL_TYPE CollisionQueryWithPasses : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_QueryCount)) int32_t  QueryCount;

 __declspec(property(get=get_RequestCount)) int32_t  RequestCount;

 __declspec(property(get=get_ResultGuidCount)) int32_t  ResultGuidCount;

/// @brief Field _AnimatedWaves, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__AnimatedWaves, put=__cordl_internal_set__AnimatedWaves)) ::WaveHarmonic::Crest::CollisionQuery*  _AnimatedWaves;

/// @brief Field _Displacement, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Displacement, put=__cordl_internal_set__Displacement)) ::WaveHarmonic::Crest::CollisionQuery*  _Displacement;

/// @brief Field _DynamicWaves, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__DynamicWaves, put=__cordl_internal_set__DynamicWaves)) ::WaveHarmonic::Crest::CollisionQuery*  _DynamicWaves;

/// @brief Field _Water, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Water, put=__cordl_internal_set__Water)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  _Water;

/// @brief Convert operator to "::WaveHarmonic::Crest::ICollisionProvider"
constexpr operator  ::WaveHarmonic::Crest::ICollisionProvider*() noexcept;

/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr operator  ::WaveHarmonic::Crest::IQueryProvider*() noexcept;

/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryable"
constexpr operator  ::WaveHarmonic::Crest::IQueryable*() noexcept;

/// @brief Method CleanUp, addr 0x1825723c0, size 0x50, virtual true, abstract: false, final true
inline void CleanUp() ;

/// @brief Method GetProvider, addr 0x182572410, size 0x80, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::CollisionQuery* GetProvider(::WaveHarmonic::Crest::CollisionLayer  layer) ;

/// @brief Method Initialize, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Initialize(::WaveHarmonic::Crest::WaterRenderer*  water) ;

static inline ::WaveHarmonic::Crest::CollisionQueryWithPasses* New_ctor() ;

static inline ::WaveHarmonic::Crest::CollisionQueryWithPasses* New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method Query, addr 0x182572570, size 0xe0, virtual true, abstract: false, final true
inline int32_t Query(int32_t  hash, float_t  minimumLength, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  displacements, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector3>  velocities, ::WaveHarmonic::Crest::CollisionLayer  layer, ::System::Nullable_1<::UnityEngine::Vector3>  center) ;

/// @brief Method Query, addr 0x182572490, size 0xe0, virtual true, abstract: false, final true
inline int32_t Query(int32_t  hash, float_t  minimumLength, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<float_t>  heights, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector3>  velocities, ::WaveHarmonic::Crest::CollisionLayer  layer, ::System::Nullable_1<::UnityEngine::Vector3>  center) ;

/// @brief Method SendReadBack, addr 0x182572650, size 0x20, virtual true, abstract: false, final true
inline void SendReadBack(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method SendReadBack, addr 0x182572670, size 0x60, virtual false, abstract: false, final false
inline void SendReadBack(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::CollisionLayers  layers) ;

/// @brief Method UpdateQueries, addr 0x1825726d0, size 0x20, virtual true, abstract: false, final true
inline void UpdateQueries(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method UpdateQueries, addr 0x1825726f0, size 0x50, virtual false, abstract: false, final false
inline void UpdateQueries(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::CollisionLayer  layer) ;

constexpr ::WaveHarmonic::Crest::CollisionQuery* const& __cordl_internal_get__AnimatedWaves() const;

constexpr ::WaveHarmonic::Crest::CollisionQuery*& __cordl_internal_get__AnimatedWaves() ;

constexpr ::WaveHarmonic::Crest::CollisionQuery* const& __cordl_internal_get__Displacement() const;

constexpr ::WaveHarmonic::Crest::CollisionQuery*& __cordl_internal_get__Displacement() ;

constexpr ::WaveHarmonic::Crest::CollisionQuery* const& __cordl_internal_get__DynamicWaves() const;

constexpr ::WaveHarmonic::Crest::CollisionQuery*& __cordl_internal_get__DynamicWaves() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& __cordl_internal_get__Water() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& __cordl_internal_get__Water() ;

constexpr void __cordl_internal_set__AnimatedWaves(::WaveHarmonic::Crest::CollisionQuery*  value) ;

constexpr void __cordl_internal_set__Displacement(::WaveHarmonic::Crest::CollisionQuery*  value) ;

constexpr void __cordl_internal_set__DynamicWaves(::WaveHarmonic::Crest::CollisionQuery*  value) ;

constexpr void __cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value) ;

/// @brief Method .ctor, addr 0x182572740, size 0x140, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x182572880, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method get_QueryCount, addr 0x182572960, size 0xc0, virtual true, abstract: false, final true
inline int32_t get_QueryCount() ;

/// @brief Method get_RequestCount, addr 0x182572a20, size 0x80, virtual true, abstract: false, final true
inline int32_t get_RequestCount() ;

/// @brief Method get_ResultGuidCount, addr 0x182572aa0, size 0xb0, virtual true, abstract: false, final true
inline int32_t get_ResultGuidCount() ;

/// @brief Convert to "::WaveHarmonic::Crest::ICollisionProvider"
constexpr ::WaveHarmonic::Crest::ICollisionProvider* i___WaveHarmonic__Crest__ICollisionProvider() noexcept;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* i___WaveHarmonic__Crest__IQueryProvider() noexcept;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryable"
constexpr ::WaveHarmonic::Crest::IQueryable* i___WaveHarmonic__Crest__IQueryable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollisionQueryWithPasses() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollisionQueryWithPasses", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollisionQueryWithPasses(CollisionQueryWithPasses && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollisionQueryWithPasses", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollisionQueryWithPasses(CollisionQueryWithPasses const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16595};

/// @brief Field _AnimatedWaves, offset: 0x10, size: 0x8, def value: None
 ::WaveHarmonic::Crest::CollisionQuery*  ____AnimatedWaves;

/// @brief Field _DynamicWaves, offset: 0x18, size: 0x8, def value: None
 ::WaveHarmonic::Crest::CollisionQuery*  ____DynamicWaves;

/// @brief Field _Displacement, offset: 0x20, size: 0x8, def value: None
 ::WaveHarmonic::Crest::CollisionQuery*  ____Displacement;

/// @brief Field _Water, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  ____Water;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::CollisionQueryWithPasses, ____AnimatedWaves) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CollisionQueryWithPasses, ____DynamicWaves) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CollisionQueryWithPasses, ____Displacement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CollisionQueryWithPasses, ____Water) == 0x28, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::CollisionQueryWithPasses) == 0x30, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
