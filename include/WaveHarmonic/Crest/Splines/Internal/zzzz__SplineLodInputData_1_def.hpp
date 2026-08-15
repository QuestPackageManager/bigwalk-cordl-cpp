#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/Internal/SplineLodInputData_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Splines/zzzz__SplineLodInputData_def.hpp"
CORDL_MODULE_EXPORT(SplineLodInputData_1)
// Forward declare root types
namespace WaveHarmonic::Crest::Splines::Internal {
template<typename T>
class SplineLodInputData_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::WaveHarmonic::Crest::Splines::Internal::SplineLodInputData_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::WaveHarmonic::Crest::Splines::Internal::SplineLodInputData_1, "WaveHarmonic.Crest.Splines.Internal", "SplineLodInputData`1");
// Dependencies WaveHarmonic.Crest.Splines.SplineLodInputData
namespace WaveHarmonic::Crest::Splines::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.Internal.SplineLodInputData`1<T>
class CORDL_TYPE SplineLodInputData_1 : public ::WaveHarmonic::Crest::Splines::SplineLodInputData {
public:
// Declarations
/// @brief Method CreateOrUpdateSplineMesh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CreateOrUpdateSplineMesh() ;

static inline ::WaveHarmonic::Crest::Splines::Internal::SplineLodInputData_1<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineLodInputData_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineLodInputData_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineLodInputData_1(SplineLodInputData_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineLodInputData_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineLodInputData_1(SplineLodInputData_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21099};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest::Splines::Internal
