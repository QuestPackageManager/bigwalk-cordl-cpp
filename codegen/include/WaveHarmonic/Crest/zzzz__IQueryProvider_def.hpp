#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/IQueryProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IQueryProvider)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class IQueryProvider;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::IQueryProvider*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::IQueryProvider*, "WaveHarmonic.Crest", "IQueryProvider");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.IQueryProvider
class CORDL_TYPE IQueryProvider {
public:
// Declarations
/// @brief Method Query, addr 0x1825759e0, size 0x20, virtual false, abstract: false, final false
static inline int32_t Query(int32_t  hash, float_t  minimumLength, ::ArrayW<::UnityEngine::Vector3>  points, int32_t  layer, ::System::Nullable_1<::UnityEngine::Vector3>  center) ;

/// @brief Method RetrieveSucceeded, addr 0x182575a00, size 0x10, virtual true, abstract: false, final false
inline bool RetrieveSucceeded(int32_t  status) ;

// Ctor Parameters [CppParam { name: "", ty: "IQueryProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IQueryProvider(IQueryProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16607};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest
