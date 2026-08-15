#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DepthQuery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__QueryBaseSimple_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DepthQuery)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace WaveHarmonic::Crest {
class IDepthProvider;
}
namespace WaveHarmonic::Crest {
class IQueryProvider;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class DepthQuery;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::DepthQuery*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::DepthQuery*, "WaveHarmonic.Crest", "DepthQuery");
// Dependencies WaveHarmonic.Crest.QueryBaseSimple
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.DepthQuery
class CORDL_TYPE DepthQuery : public ::WaveHarmonic::Crest::QueryBaseSimple {
public:
// Declarations
 __declspec(property(get=get_Kernel)) int32_t  Kernel;

/// @brief Convert operator to "::WaveHarmonic::Crest::IDepthProvider"
constexpr operator  ::WaveHarmonic::Crest::IDepthProvider*() noexcept;

/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr operator  ::WaveHarmonic::Crest::IQueryProvider*() noexcept;

static inline ::WaveHarmonic::Crest::DepthQuery* New_ctor() ;

static inline ::WaveHarmonic::Crest::DepthQuery* New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method Query, addr 0x182574ef0, size 0xf0, virtual true, abstract: false, final false
inline int32_t Query(int32_t  hash, float_t  minimumSpatialLength, ::ArrayW<::UnityEngine::Vector3>  queries, ::ArrayW<::UnityEngine::Vector3>  results, ::System::Nullable_1<::UnityEngine::Vector3>  center) ;

/// @brief Method .ctor, addr 0x182574fe0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x182575070, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method get_Kernel, addr 0x1802edfe0, size 0x10, virtual true, abstract: false, final false
inline int32_t get_Kernel() ;

/// @brief Convert to "::WaveHarmonic::Crest::IDepthProvider"
constexpr ::WaveHarmonic::Crest::IDepthProvider* i___WaveHarmonic__Crest__IDepthProvider() noexcept;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* i___WaveHarmonic__Crest__IQueryProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DepthQuery() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DepthQuery", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DepthQuery(DepthQuery && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DepthQuery", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DepthQuery(DepthQuery const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16601};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::DepthQuery) == 0xb0, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
