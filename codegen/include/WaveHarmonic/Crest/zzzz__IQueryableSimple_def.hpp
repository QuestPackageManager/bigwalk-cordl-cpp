#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/IQueryableSimple.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IQueryableSimple)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace WaveHarmonic::Crest {
class IQueryable;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class IQueryableSimple;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::IQueryableSimple*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::IQueryableSimple*, "WaveHarmonic.Crest", "IQueryableSimple");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.IQueryableSimple
class CORDL_TYPE IQueryableSimple {
public:
// Declarations
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryable"
constexpr operator  ::WaveHarmonic::Crest::IQueryable*() noexcept;

/// @brief Method Query, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t Query(int32_t  hash, float_t  minimumLength, ::ArrayW<::UnityEngine::Vector3>  queries, ::ArrayW<::UnityEngine::Vector3>  results, ::System::Nullable_1<::UnityEngine::Vector3>  center) ;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryable"
constexpr ::WaveHarmonic::Crest::IQueryable* i___WaveHarmonic__Crest__IQueryable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IQueryableSimple", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IQueryableSimple(IQueryableSimple const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16609};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest
