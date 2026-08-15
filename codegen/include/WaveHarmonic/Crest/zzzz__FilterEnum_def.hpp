#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/FilterEnum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FilterEnum)
namespace WaveHarmonic::Crest {
struct Filtered_Mode;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class FilterEnum;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::FilterEnum*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::FilterEnum*, "WaveHarmonic.Crest", "FilterEnum");
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.FilterEnum
class CORDL_TYPE FilterEnum : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
static inline ::WaveHarmonic::Crest::FilterEnum* New_ctor(::StringW  property, ::WaveHarmonic::Crest::Filtered_Mode  mode, ::ArrayW<int32_t>  values) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::StringW  property, ::WaveHarmonic::Crest::Filtered_Mode  mode, ::ArrayW<int32_t>  values) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FilterEnum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FilterEnum", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FilterEnum(FilterEnum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FilterEnum", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FilterEnum(FilterEnum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20108};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::FilterEnum) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
