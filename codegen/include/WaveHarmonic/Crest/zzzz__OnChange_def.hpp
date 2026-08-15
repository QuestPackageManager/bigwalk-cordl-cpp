#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/OnChange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
CORDL_MODULE_EXPORT(OnChange)
namespace System {
class Type;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class OnChange;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::OnChange*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::OnChange*, "WaveHarmonic.Crest", "OnChange");
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.OnChange
class CORDL_TYPE OnChange : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
static inline ::WaveHarmonic::Crest::OnChange* New_ctor(bool  skipIfInactive) ;

static inline ::WaveHarmonic::Crest::OnChange* New_ctor(::System::Type*  type, bool  skipIfInactive) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(bool  skipIfInactive) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type, bool  skipIfInactive) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnChange() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnChange", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnChange(OnChange && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnChange", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnChange(OnChange const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20117};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::OnChange) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
