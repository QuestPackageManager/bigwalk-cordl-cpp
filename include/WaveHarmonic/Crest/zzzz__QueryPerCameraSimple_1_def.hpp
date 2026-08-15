#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/QueryPerCameraSimple_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__QueryPerCamera_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryPerCameraSimple_1)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace WaveHarmonic::Crest {
class IQueryableSimple;
}
namespace WaveHarmonic::Crest {
class IQueryable;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
template<typename T>
class QueryPerCameraSimple_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::WaveHarmonic::Crest::QueryPerCameraSimple_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::WaveHarmonic::Crest::QueryPerCameraSimple_1, "WaveHarmonic.Crest", "QueryPerCameraSimple`1");
// Dependencies WaveHarmonic.Crest.QueryPerCamera`1<T>
namespace WaveHarmonic::Crest {
// cpp template
template<typename T>
// Is value type: false
// CS Name: WaveHarmonic.Crest.QueryPerCameraSimple`1<T>
class CORDL_TYPE QueryPerCameraSimple_1 : public ::WaveHarmonic::Crest::QueryPerCamera_1<T> {
public:
// Declarations
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryable"
constexpr operator  ::WaveHarmonic::Crest::IQueryable*() noexcept;

/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryableSimple"
constexpr operator  ::WaveHarmonic::Crest::IQueryableSimple*() noexcept;

static inline ::WaveHarmonic::Crest::QueryPerCameraSimple_1<T>* New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method Query, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t Query(int32_t  id, float_t  length, ::ArrayW<::UnityEngine::Vector3>  queries, ::ArrayW<::UnityEngine::Vector3>  results, ::System::Nullable_1<::UnityEngine::Vector3>  center) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryable"
constexpr ::WaveHarmonic::Crest::IQueryable* i___WaveHarmonic__Crest__IQueryable() noexcept;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryableSimple"
constexpr ::WaveHarmonic::Crest::IQueryableSimple* i___WaveHarmonic__Crest__IQueryableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QueryPerCameraSimple_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QueryPerCameraSimple_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QueryPerCameraSimple_1(QueryPerCameraSimple_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QueryPerCameraSimple_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QueryPerCameraSimple_1(QueryPerCameraSimple_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16618};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest
