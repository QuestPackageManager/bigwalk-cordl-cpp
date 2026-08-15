#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/QueryBaseSimple.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__QueryBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryBaseSimple)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace WaveHarmonic::Crest {
class IQueryProvider;
}
namespace WaveHarmonic::Crest {
template<typename T>
class IQueryableLod_1;
}
namespace WaveHarmonic::Crest {
class IQueryableSimple;
}
namespace WaveHarmonic::Crest {
class IQueryable;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class QueryBaseSimple;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::QueryBaseSimple*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::QueryBaseSimple*, "WaveHarmonic.Crest", "QueryBaseSimple");
// Dependencies WaveHarmonic.Crest.QueryBase
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.QueryBaseSimple
class CORDL_TYPE QueryBaseSimple : public ::WaveHarmonic::Crest::QueryBase {
public:
// Declarations
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryable"
constexpr operator  ::WaveHarmonic::Crest::IQueryable*() noexcept;

/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryableSimple"
constexpr operator  ::WaveHarmonic::Crest::IQueryableSimple*() noexcept;

static inline ::WaveHarmonic::Crest::QueryBaseSimple* New_ctor(::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*  lod) ;

/// @brief Method Query, addr 0x182579bb0, size 0x70, virtual true, abstract: false, final false
inline int32_t Query(int32_t  ownerHash, float_t  minSpatialLength, ::ArrayW<::UnityEngine::Vector3>  queryPoints, ::ArrayW<::UnityEngine::Vector3>  results, ::System::Nullable_1<::UnityEngine::Vector3>  center) ;

/// @brief Method .ctor, addr 0x182579c20, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*  lod) ;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryable"
constexpr ::WaveHarmonic::Crest::IQueryable* i___WaveHarmonic__Crest__IQueryable() noexcept;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryableSimple"
constexpr ::WaveHarmonic::Crest::IQueryableSimple* i___WaveHarmonic__Crest__IQueryableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QueryBaseSimple() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QueryBaseSimple", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QueryBaseSimple(QueryBaseSimple && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QueryBaseSimple", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QueryBaseSimple(QueryBaseSimple const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16616};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::QueryBaseSimple) == 0xb0, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
